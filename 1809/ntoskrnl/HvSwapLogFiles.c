/*
 * XREFs of HvSwapLogFiles @ 0x1406CA8DC
 * Callers:
 *     CmpFlushHive @ 0x1405B3F54 (CmpFlushHive.c)
 * Callees:
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     HvGetEffectiveLogSizeCapForHive @ 0x1405A70DC (HvGetEffectiveLogSizeCapForHive.c)
 *     HvpLogTypeToLogArrayIndex @ 0x1405A72AC (HvpLogTypeToLogArrayIndex.c)
 */

__int64 __fastcall HvSwapLogFiles(__int64 a1)
{
  unsigned int v2; // eax
  char v3; // r10
  int v4; // r11d
  int v5; // edx
  __int64 v6; // rbx
  int v7; // r9d
  int v8; // eax
  __int64 v9; // rax
  __int64 result; // rax
  int v11; // [rsp+38h] [rbp-D0h] BYREF
  int v12; // [rsp+3Ch] [rbp-CCh] BYREF
  int v13; // [rsp+40h] [rbp-C8h] BYREF
  int v14; // [rsp+44h] [rbp-C4h] BYREF
  int v15; // [rsp+48h] [rbp-C0h] BYREF
  int v16; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v17; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  int *v20; // [rsp+88h] [rbp-80h]
  int v21; // [rsp+90h] [rbp-78h]
  int v22; // [rsp+94h] [rbp-74h]
  int *v23; // [rsp+98h] [rbp-70h]
  int v24; // [rsp+A0h] [rbp-68h]
  int v25; // [rsp+A4h] [rbp-64h]
  int *v26; // [rsp+A8h] [rbp-60h]
  int v27; // [rsp+B0h] [rbp-58h]
  int v28; // [rsp+B4h] [rbp-54h]
  int *v29; // [rsp+B8h] [rbp-50h]
  int v30; // [rsp+C0h] [rbp-48h]
  int v31; // [rsp+C4h] [rbp-44h]
  int *v32; // [rsp+C8h] [rbp-40h]
  int v33; // [rsp+D0h] [rbp-38h]
  int v34; // [rsp+D4h] [rbp-34h]
  int *v35; // [rsp+D8h] [rbp-30h]
  int v36; // [rsp+E0h] [rbp-28h]
  int v37; // [rsp+E4h] [rbp-24h]
  __int64 *v38; // [rsp+E8h] [rbp-20h]
  int v39; // [rsp+F0h] [rbp-18h]
  int v40; // [rsp+F4h] [rbp-14h]
  __int64 *v41; // [rsp+F8h] [rbp-10h]
  int v42; // [rsp+100h] [rbp-8h]
  int v43; // [rsp+104h] [rbp-4h]

  HvGetEffectiveLogSizeCapForHive((unsigned int *)a1);
  v2 = HvpLogTypeToLogArrayIndex(*(_DWORD *)(a1 + 164));
  v5 = *(_DWORD *)(a1 + 168) - *(_DWORD *)(a1 + 172);
  v6 = MEMORY[0xFFFFF78000000014];
  v7 = *(_DWORD *)(a1 + 8LL * v2 + 1800);
  if ( stru_140400AA0.LevelPlus1 > 5 )
  {
    v12 = *(_DWORD *)(a1 + 272);
    v8 = *(_DWORD *)(a1 + 184);
    LOBYTE(v11) = v3 == 0;
    v22 = 0;
    v25 = 0;
    v28 = 0;
    v31 = 0;
    v34 = 0;
    v37 = 0;
    v40 = 0;
    v13 = v8;
    v15 = *(_DWORD *)(a1 + 176);
    v9 = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(a1 + 192);
    v43 = 0;
    v18 = v9;
    v20 = &v11;
    v23 = &v12;
    v26 = &v13;
    v29 = &v14;
    v32 = &v15;
    v35 = &v16;
    v38 = &v17;
    v41 = &v18;
    v14 = v4;
    v16 = v7;
    LODWORD(v17) = v5;
    v21 = 1;
    v24 = 4;
    v27 = 4;
    v30 = 4;
    v33 = 4;
    v36 = 4;
    v39 = 4;
    v42 = 8;
    TlgWrite(&stru_140400AA0, &unk_14036D5D3, 0LL, 0LL, 0xAu, &pData);
  }
  *(_DWORD *)(a1 + 164) = 5 - (*(_DWORD *)(a1 + 164) != 4);
  result = *(unsigned int *)(a1 + 168);
  *(_QWORD *)(a1 + 172) = (unsigned int)result;
  *(_QWORD *)(a1 + 192) = v6;
  return result;
}
