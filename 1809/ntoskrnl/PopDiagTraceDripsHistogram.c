/*
 * XREFs of PopDiagTraceDripsHistogram @ 0x1402E0480
 * Callers:
 *     PpmSnapDripsAccountingSnapshot @ 0x1402D5DD0 (PpmSnapDripsAccountingSnapshot.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceDripsHistogram(unsigned __int8 a1, unsigned __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  unsigned __int128 v6; // rax
  char v8; // si
  _QWORD *v10; // rdx
  unsigned int v11; // r8d
  __int64 v12; // rbx
  char *v13; // rcx
  __int64 v14; // r11
  __int16 v15; // r10
  char v17; // [rsp+38h] [rbp-71h] BYREF
  char v18; // [rsp+39h] [rbp-70h] BYREF
  char v19; // [rsp+3Ah] [rbp-6Fh] BYREF
  char v20; // [rsp+3Bh] [rbp-6Eh] BYREF
  char v21; // [rsp+3Ch] [rbp-6Dh] BYREF
  __int16 v22; // [rsp+40h] [rbp-69h] BYREF
  __int16 v23; // [rsp+44h] [rbp-65h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-61h] BYREF
  char v25; // [rsp+58h] [rbp-51h] BYREF
  __int64 v26; // [rsp+60h] [rbp-49h]
  __int16 *v27; // [rsp+68h] [rbp-41h]
  __int64 v28; // [rsp+70h] [rbp-39h]
  __int64 v29; // [rsp+78h] [rbp-31h]
  __int64 v30; // [rsp+80h] [rbp-29h]
  char *v31; // [rsp+88h] [rbp-21h]
  __int64 v32; // [rsp+90h] [rbp-19h]
  char *v33; // [rsp+98h] [rbp-11h]
  __int64 v34; // [rsp+A0h] [rbp-9h]
  char *v35; // [rsp+A8h] [rbp-1h]
  __int64 v36; // [rsp+B0h] [rbp+7h]
  char *v37; // [rsp+B8h] [rbp+Fh]
  __int64 v38; // [rsp+C0h] [rbp+17h]
  char *v39; // [rsp+C8h] [rbp+1Fh]
  __int64 v40; // [rsp+D0h] [rbp+27h]

  v32 = -1LL;
  pData.Ptr = 20000000LL;
  *(_QWORD *)&pData.Size = 0LL;
  v6 = a2 * (unsigned __int128)0xE5109EC205D7BEA7uLL;
  v25 = 0;
  v26 = 160000000LL;
  v27 = 0LL;
  LOBYTE(v28) = 0;
  v29 = 600000000LL;
  v30 = 0LL;
  LOBYTE(v31) = 0;
  v33 = 0LL;
  LOBYTE(v34) = 0;
  if ( (unsigned __int16)(*((_QWORD *)&v6 + 1) >> 29) )
  {
    *(_QWORD *)&v6 = 100 * a3 / a2;
    v8 = v6;
    if ( (_BYTE)v6 )
    {
      v10 = &unk_140541518;
      v11 = 0;
      v12 = 26LL;
      do
      {
        for ( ; v11 < 3; ++v11 )
        {
          if ( *v10 <= *(&pData.Ptr + 3 * v11) )
            break;
        }
        v10 += 3;
        *((_QWORD *)&pData.Size + 3 * v11) += *a5++;
        --v12;
      }
      while ( v12 );
      v13 = &v25;
      v14 = 4LL;
      do
      {
        *(_QWORD *)&v6 = ((a2 >> 1) + 100LL * *((_QWORD *)v13 - 1)) / a2;
        *v13 = v6;
        v13 += 24;
        --v14;
      }
      while ( v14 );
      if ( pCallbackContext.LevelPlus1 > 5 )
      {
        LOBYTE(v6) = TlgKeywordOn(&pCallbackContext, 0x400000000000uLL);
        if ( (_BYTE)v6 )
        {
          v22 = a1;
          v18 = v25;
          v19 = v28;
          v20 = (char)v31;
          v21 = v34;
          v27 = &v22;
          v29 = (__int64)&v23;
          v31 = &v17;
          v33 = &v18;
          v35 = &v19;
          v37 = &v20;
          v39 = &v21;
          v23 = v15;
          v17 = v8;
          v28 = 2LL;
          v30 = 2LL;
          v32 = 1LL;
          v34 = 1LL;
          v36 = 1LL;
          v38 = 1LL;
          v40 = 1LL;
          LOBYTE(v6) = TlgWrite(&pCallbackContext, &unk_140371ACC, 0LL, 0LL, 9u, &pData);
        }
      }
    }
  }
  return v6;
}
