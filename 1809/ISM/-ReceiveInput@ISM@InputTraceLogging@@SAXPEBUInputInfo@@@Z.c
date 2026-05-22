/*
 * XREFs of ?ReceiveInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@@Z @ 0x18005290C
 * Callers:
 *     ?OnInputReport@InputStateManager@@UEAAJPEAUInputInfo@@@Z @ 0x180053870 (-OnInputReport@InputStateManager@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Provider@InputTraceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800527F0 (-Provider@InputTraceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z @ 0x180052A10 (-InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::ISM::ReceiveInput(const struct InputInfo *a1)
{
  const struct _TlgProvider_t *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  const GUID *v6; // r8
  const struct _TlgProvider_t *v7; // r10
  const unsigned __int16 *v8; // rdx
  __int64 v9; // rcx
  int v10; // [rsp+30h] [rbp-19h] BYREF
  __int64 v11; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  __int64 *v13; // [rsp+60h] [rbp+17h]
  __int64 v14; // [rsp+68h] [rbp+1Fh]
  const unsigned __int16 *v15; // [rsp+70h] [rbp+27h]
  int v16; // [rsp+78h] [rbp+2Fh]
  int v17; // [rsp+7Ch] [rbp+33h]
  int *v18; // [rsp+80h] [rbp+37h]
  __int64 v19; // [rsp+88h] [rbp+3Fh]

  v2 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v2 > 4u )
  {
    v3 = *((unsigned int *)v2 + 4);
    if ( (v3 & 0x200) != 0 && (*((_QWORD *)v2 + 3) & 0x200LL) == *((_QWORD *)v2 + 3) )
    {
      v4 = *(unsigned int *)a1;
      v11 = *((_QWORD *)a1 + 2);
      v13 = &v11;
      v14 = 8LL;
      v5 = InputTraceLogging::InputTypeToString(v4, v3, 0LL);
      v8 = &word_18014A10A;
      LODWORD(v9) = (_DWORD)v6;
      if ( v5 )
      {
        v8 = (const unsigned __int16 *)v5;
        v9 = -1LL;
        do
          ++v9;
        while ( *(_BYTE *)(v5 + v9) != (_BYTE)v6 );
      }
      v15 = v8;
      v16 = v9 + 1;
      v10 = *((_DWORD *)a1 + 1);
      v18 = &v10;
      v17 = (int)v6;
      v19 = 4LL;
      TlgWrite(v7, &unk_1801678EF, v6, 0LL, 5u, &pData);
    }
  }
}
