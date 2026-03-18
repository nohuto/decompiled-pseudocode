/*
 * XREFs of ?SetTemporaryConfiguration@CInteractionProcessor@@QEAAXW4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x180231788
 * Callers:
 *     ?OnInteractionUpdate@CGlobalManipulationManager@@AEAAXXZ @ 0x1800A8FC0 (-OnInteractionUpdate@CGlobalManipulationManager@@AEAAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x1800B3880 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800B539C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 */

char __fastcall CInteractionProcessor::SetTemporaryConfiguration(_BYTE *a1, int a2, int a3, unsigned __int8 a4, int a5)
{
  char result; // al
  __int64 v10; // rdi
  int v11; // edx
  int v12; // r10d
  __int64 v13; // r14
  int v14; // r9d
  char *v15; // r8
  char v16; // cl
  char v17; // al
  int v18; // r9d
  int v19; // r10d
  int v20; // r11d
  int v21; // eax
  int v22; // [rsp+38h] [rbp-D0h] BYREF
  int v23; // [rsp+3Ch] [rbp-CCh] BYREF
  int v24; // [rsp+40h] [rbp-C8h] BYREF
  int v25; // [rsp+44h] [rbp-C4h] BYREF
  int v26; // [rsp+48h] [rbp-C0h] BYREF
  int v27; // [rsp+4Ch] [rbp-BCh] BYREF
  int v28; // [rsp+50h] [rbp-B8h] BYREF
  int v29; // [rsp+54h] [rbp-B4h] BYREF
  int v30; // [rsp+58h] [rbp-B0h] BYREF
  int v31; // [rsp+5Ch] [rbp-ACh] BYREF
  _BYTE *v32; // [rsp+60h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD *v34; // [rsp+88h] [rbp-80h]
  __int64 v35; // [rsp+90h] [rbp-78h]
  int *v36; // [rsp+98h] [rbp-70h]
  __int64 v37; // [rsp+A0h] [rbp-68h]
  int *v38; // [rsp+A8h] [rbp-60h]
  __int64 v39; // [rsp+B0h] [rbp-58h]
  int *v40; // [rsp+B8h] [rbp-50h]
  __int64 v41; // [rsp+C0h] [rbp-48h]
  int *v42; // [rsp+C8h] [rbp-40h]
  __int64 v43; // [rsp+D0h] [rbp-38h]
  int *v44; // [rsp+D8h] [rbp-30h]
  __int64 v45; // [rsp+E0h] [rbp-28h]
  int *v46; // [rsp+E8h] [rbp-20h]
  __int64 v47; // [rsp+F0h] [rbp-18h]
  int *v48; // [rsp+F8h] [rbp-10h]
  __int64 v49; // [rsp+100h] [rbp-8h]
  int *v50; // [rsp+108h] [rbp+0h]
  __int64 v51; // [rsp+110h] [rbp+8h]
  int *v52; // [rsp+118h] [rbp+10h]
  __int64 v53; // [rsp+120h] [rbp+18h]
  int *v54; // [rsp+128h] [rbp+20h]
  __int64 v55; // [rsp+130h] [rbp+28h]

  result = -1;
  v10 = (__int64)&a1[(a3 != 0 ? 0x24 : 0) + 1272];
  v22 = -1;
  v11 = -1;
  v12 = 0;
  v13 = 3LL;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v22 = 1;
      v12 = 12;
      v11 = 1;
    }
    else if ( a2 == 2 )
    {
      v22 = 2;
      v11 = 2;
      v12 = 48;
    }
  }
  else
  {
    v22 = 0;
    v12 = 3;
    v11 = 0;
  }
  v14 = a5 | ~v12;
  if ( v11 != -1 )
  {
    result = v11;
    if ( *(_BYTE *)(v10 + 12LL * v11) != a4 || a4 && *(_DWORD *)(v10 + 12LL * v11 + 4) != v14 )
    {
      *(_BYTE *)(v10 + 12LL * v11) = a4;
      *(_DWORD *)(v10 + 12LL * v22 + 4) = v14;
      result = v22;
      *(_DWORD *)(v10 + 12LL * v22 + 8) = v12;
      if ( !a3 )
      {
        a1[148] |= 1u;
        a1[308] |= 1u;
        a1[468] |= 1u;
        a1[628] |= 1u;
      }
    }
  }
  if ( a3 == 1 )
  {
    a1[1264] &= ~2u;
    v15 = a1 + 1308;
    v16 = a1[1264];
    do
    {
      v17 = *v15;
      v15 += 12;
      result = (v16 ^ (v16 | (2 * v17))) & 2;
      v16 ^= result;
      a1[1264] = v16;
      --v13;
    }
    while ( v13 );
  }
  if ( dword_180337240 > 4u )
  {
    result = TlgKeywordOn((TraceLoggingHProvider)&dword_180337240, 2uLL);
    if ( result )
    {
      v32 = a1;
      v34 = &v32;
      v36 = &v23;
      v38 = &v24;
      v40 = &v22;
      v25 = a4;
      v42 = &v25;
      v35 = 8LL;
      v23 = a2;
      v37 = 4LL;
      v24 = a3;
      v39 = 4LL;
      v41 = 4LL;
      v43 = 4LL;
      v26 = *(unsigned __int8 *)(v10 + 12LL * v22);
      v44 = &v26;
      v46 = &v27;
      v48 = &v28;
      v50 = &v29;
      v45 = 4LL;
      v27 = v20;
      v47 = 4LL;
      v28 = v19;
      v49 = 4LL;
      v29 = v18;
      v51 = 4LL;
      v30 = *(_DWORD *)(v10 + 12LL * v22 + 4);
      v52 = &v30;
      v21 = ((unsigned __int8)a1[1264] >> 1) & 1;
      v53 = 4LL;
      v31 = v21;
      v54 = &v31;
      v55 = 4LL;
      return TlgWrite((TraceLoggingHProvider)&dword_180337240, &unk_1802DC5C4, 0LL, 0LL, 0xDu, &pData);
    }
  }
  return result;
}
