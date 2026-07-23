/*
 * XREFs of EtwTiLogSetContextThread @ 0x1406AA420
 * Callers:
 *     PspSetContextThreadInternal @ 0x140621A30 (PspSetContextThreadInternal.c)
 *     PspWow64SetContextThread @ 0x1406A9C5C (PspWow64SetContextThread.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwProviderEnabled @ 0x1400F1800 (EtwProviderEnabled.c)
 *     EtwpTiFillThreadIdentity @ 0x140132084 (EtwpTiFillThreadIdentity.c)
 *     EtwpTiFillProcessIdentity @ 0x1401320BC (EtwpTiFillProcessIdentity.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     EtwpTiVadQueryEventWrite @ 0x140313154 (EtwpTiVadQueryEventWrite.c)
 *     EtwpTiParseContextRecord @ 0x1408BE678 (EtwpTiParseContextRecord.c)
 */

void __fastcall EtwTiLogSetContextThread(char a1, __int64 a2, __int64 a3, unsigned int a4)
{
  char v7; // bl
  _KPROCESS *v8; // r15
  _KPROCESS *Process; // rdi
  const EVENT_DESCRIPTOR *v10; // r14
  int v11; // eax
  int v12; // eax
  int v13; // r9d
  int v14; // eax
  int v15; // r9d
  int v16; // eax
  int v17; // r9d
  __int64 v18; // rsi
  unsigned int v19; // edi
  __int64 v20; // rsi
  __int16 v21; // ax
  _BYTE *v22; // r8
  __int64 v23; // rcx
  char v24; // dl
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v30; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v31; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32[38]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v33[96]; // [rsp+2C0h] [rbp+1C0h] BYREF
  unsigned int v34; // [rsp+388h] [rbp+288h] BYREF

  v34 = a4;
  v7 = 0;
  if ( EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0xC000uLL) )
  {
    v8 = *(_KPROCESS **)(a2 + 544);
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process != v8 )
    {
      v10 = (const EVENT_DESCRIPTOR *)&THREATINT_SETTHREADCONTEXT_REMOTE_KERNEL_CALLER;
      if ( a1 )
        v10 = &THREATINT_SETTHREADCONTEXT_REMOTE;
      if ( EtwEventEnabled(EtwThreatIntProvRegHandle, v10) )
      {
        v11 = EtwpTiFillProcessIdentity(v32, (__int64)Process, &v30);
        v12 = EtwpTiFillThreadIdentity((__int64)&v32[v11], (__int64)KeGetCurrentThread());
        v14 = EtwpTiFillProcessIdentity(&v32[v12 + v13].Ptr, (__int64)v8, &v31);
        v16 = EtwpTiFillThreadIdentity((__int64)&v32[v14 + v15], a2);
        v18 = (unsigned int)(v16 + v17);
        v19 = v18 + 1;
        v20 = v18;
        if ( EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x4000000uLL) )
        {
          v21 = EtwpTiParseContextRecord(v33, v34, a3);
          v22 = v33;
          v23 = v19;
          LOWORD(v29) = v21;
          v24 = v21;
          *(_QWORD *)&v32[v20].Size = 4LL;
          ++v19;
          v32[v20].Ptr = (ULONGLONG)&v34;
          v32[v23].Ptr = (ULONGLONG)&v29;
          *(_QWORD *)&v32[v23].Size = 2LL;
          v25 = 12LL;
          do
          {
            v26 = v19++;
            v26 *= 2LL;
            *(&v32[0].Ptr + v26) = (ULONGLONG)v22;
            v22 += 8;
            *((_QWORD *)&v32[0].Size + v26) = 8LL;
            --v25;
          }
          while ( v25 );
        }
        else
        {
          LOWORD(v29) = 0;
          v32[v20].Ptr = (ULONGLONG)&unk_14037EF70;
          v24 = 0;
          *(_QWORD *)&v32[v20].Size = 2LL;
          v27 = 12LL;
          do
          {
            v28 = v19++;
            v28 *= 2LL;
            *(&v32[0].Ptr + v28) = (ULONGLONG)&unk_14037EF70;
            *((_QWORD *)&v32[0].Size + v28) = 8LL;
            --v27;
          }
          while ( v27 );
        }
        if ( (v24 & 1) != 0 )
        {
          if ( EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x8000000uLL) )
            v7 = 1;
        }
        EtwpTiVadQueryEventWrite(v32, 0x26u, v19, v8, v33, 1u, v10, v7, v29);
      }
    }
  }
}
