/*
 * XREFs of PpmPerfRecordUtility @ 0x140102530
 * Callers:
 *     PpmCheckRecordAllUtility @ 0x140102480 (PpmCheckRecordAllUtility.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x14005B930 (EtwpLevelKeywordEnabled.c)
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     PpmPerfResetHistory @ 0x14018A4A8 (PpmPerfResetHistory.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 __fastcall PpmPerfRecordUtility(__int64 a1)
{
  __int64 *v1; // rbx
  unsigned __int8 *v3; // rdx
  __int64 result; // rax
  __int64 v5; // r15
  __int64 v6; // rsi
  unsigned __int64 v7; // r9
  __int64 v8; // r12
  unsigned __int64 v9; // r10
  __int64 v10; // r13
  unsigned __int64 v11; // r11
  int v12; // r14d
  int v13; // esi
  unsigned __int64 v14; // r12
  __int64 v15; // rdx
  unsigned __int64 v16; // r13
  int v17; // eax
  unsigned int v18; // r15d
  REGHANDLE v19; // r10
  __int64 v20; // rcx
  unsigned int *v21; // r11
  char v22; // r9
  unsigned __int64 v23; // rax
  unsigned int v24; // r10d
  __int64 v25; // r9
  unsigned int *v26; // r8
  int v27; // eax
  int v28; // eax
  unsigned int v29; // eax
  unsigned __int8 v30; // cl
  unsigned int v31; // r8d
  char v32; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v33; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v34; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v35; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int8 *v36; // [rsp+60h] [rbp-A0h] BYREF
  int v37; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v38; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v39; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v40; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 *v42; // [rsp+A0h] [rbp-60h]
  __int64 v43; // [rsp+A8h] [rbp-58h]
  unsigned __int64 *v44; // [rsp+B0h] [rbp-50h]
  __int64 v45; // [rsp+B8h] [rbp-48h]
  int *v46; // [rsp+C0h] [rbp-40h]
  __int64 v47; // [rsp+C8h] [rbp-38h]
  __int16 *v48; // [rsp+D0h] [rbp-30h]
  __int64 v49; // [rsp+D8h] [rbp-28h]
  __int64 v50; // [rsp+E0h] [rbp-20h]
  __int64 v51; // [rsp+E8h] [rbp-18h]
  unsigned __int8 **v52; // [rsp+F0h] [rbp-10h]
  __int64 v53; // [rsp+F8h] [rbp-8h]
  __int16 *v54; // [rsp+100h] [rbp+0h]
  __int64 v55; // [rsp+108h] [rbp+8h]
  __int16 *v56; // [rsp+110h] [rbp+10h]
  __int64 v57; // [rsp+118h] [rbp+18h]
  char *v58; // [rsp+120h] [rbp+20h]
  __int64 v59; // [rsp+128h] [rbp+28h]
  __int64 v60; // [rsp+130h] [rbp+30h]
  __int64 v61; // [rsp+138h] [rbp+38h]
  unsigned __int64 *v62; // [rsp+140h] [rbp+40h]
  __int64 v63; // [rsp+148h] [rbp+48h]

  v1 = *(__int64 **)(a1 + 24168);
  v3 = *(unsigned __int8 **)(a1 + 24208);
  result = (unsigned int)PpmCheckMakeupCount;
  v5 = *(_QWORD *)(a1 + 24184);
  v36 = v3;
  if ( !v1 )
    return result;
  v6 = v1[1];
  v7 = v1[4] - v6;
  v8 = *v1;
  v9 = v1[5] - *v1;
  v10 = v1[2];
  v11 = v1[6] - v10;
  v12 = *((_DWORD *)v1 + 28) - *((_DWORD *)v1 + 6);
  if ( PpmCheckMakeupCount )
  {
    v23 = v7 / (unsigned int)(PpmCheckMakeupCount + 1);
    v3 = v36;
    v7 = v23;
    if ( v9 < v23 )
      v23 = v1[5] - *v1;
    v9 = v23;
    if ( v11 >= v7 )
      v11 = v7;
  }
  v1[1] = v6 + v7;
  *v1 = v8 + v9;
  v1[2] = v11 + v10;
  *((_DWORD *)v1 + 6) = *((_DWORD *)v1 + 28);
  if ( v9 > v7 )
    v9 = v7;
  if ( v11 > v7 )
    v11 = v7;
  if ( v7 <= 1 )
    v7 = 1LL;
  if ( v3 )
  {
    result = *v3;
    *(_DWORD *)(a1 + 24244) = *v3 * v3[1];
    return result;
  }
  v13 = *(_DWORD *)(a1 + 24232);
  v14 = v9 * (unsigned int)(100 * v13) / v7;
  v15 = 100LL;
  v16 = v9 * v13 * (unsigned int)*(unsigned __int16 *)(a1 + 24230) / v7;
  if ( v5 )
    v17 = *(_DWORD *)(v5 + 116);
  else
    v17 = 100;
  v32 = 100;
  v18 = 0;
  v35 = v16;
  v34 = v9 * (unsigned int)(100 * v13) / v7;
  LODWORD(v36) = v13;
  v37 = v17;
  v40 = v11;
  v39 = v9;
  v38 = v7 - v9;
  if ( PpmEtwRegistered )
  {
    v19 = PpmEtwHandle;
    if ( PpmEtwHandle )
    {
      v20 = *(_QWORD *)(PpmEtwHandle + 32);
      if ( *(_DWORD *)(v20 + 96)
        && (unsigned __int8)(*(_BYTE *)(v20 + 100) - 1) > 3u
        && (*(_BYTE *)(v20 + 112) & 2) != 0
        && (*(_QWORD *)(v20 + 120) & 2LL) == *(_QWORD *)(v20 + 120) )
      {
        goto LABEL_31;
      }
      if ( !*(_BYTE *)(PpmEtwHandle + 101) )
        goto LABEL_18;
      if ( EtwpLevelKeywordEnabled(*(_QWORD *)(PpmEtwHandle + 40) + 96LL, 5u, 2LL) )
      {
LABEL_31:
        *(_QWORD *)&UserData.Size = 8LL;
        UserData.Ptr = (ULONGLONG)&PpmCheckTime;
        v43 = 8LL;
        v42 = &v38;
        v45 = 8LL;
        v44 = &v39;
        v47 = 4LL;
        v46 = &v37;
        v33 = *(unsigned __int8 *)(a1 + 208);
        v48 = &v33;
        v50 = a1 + 209;
        v52 = &v36;
        v54 = &v34;
        v56 = &v35;
        v58 = &v32;
        v60 = (__int64)v1 + 305;
        v62 = &v40;
        v49 = 2LL;
        v51 = 1LL;
        v53 = 4LL;
        v55 = 2LL;
        v57 = 2LL;
        v59 = 1LL;
        v61 = 1LL;
        v63 = 8LL;
        EtwWriteEx(v19, &PPM_ETW_RECORDED_UTILITY, 0LL, 0, 0LL, 0LL, 0xCu, &UserData);
      }
      v15 = 100LL;
    }
  }
LABEL_18:
  v21 = *(unsigned int **)(a1 + 24216);
  if ( v21 )
  {
    v24 = *v21;
    v25 = v21[1];
    v26 = &v21[2 * v25];
    v21[2] += (unsigned __int16)v14 - *((unsigned __int16 *)v26 + 14);
    v27 = *((unsigned __int16 *)v26 + 15);
    *((_WORD *)v26 + 14) = v14;
    v21[3] += (unsigned __int16)v16 - v27;
    v28 = *((unsigned __int8 *)v26 + 32);
    *((_WORD *)v26 + 15) = v16;
    v21[4] += (unsigned __int8)v13 - v28;
    *((_BYTE *)v26 + 32) = v13;
    v21[5] -= *((unsigned __int8 *)v26 + 33);
    v21[5] += *((unsigned __int8 *)v1 + 304);
    *((_BYTE *)v26 + 33) = *((_BYTE *)v1 + 304);
    v21[6] -= *((unsigned __int8 *)v26 + 34);
    v21[6] += *((unsigned __int8 *)v1 + 305);
    *((_BYTE *)v26 + 34) = *((_BYTE *)v1 + 305);
    if ( (_DWORD)v25 + 1 != v24 )
      v18 = v25 + 1;
    v29 = v21[2];
    v21[1] = v18;
    LODWORD(v14) = v29 / v24;
    LODWORD(v16) = v21[3] / v24;
    v13 = v21[4] / v24;
    result = v21[6] / v24;
    v15 = 100LL;
  }
  else
  {
    result = *((unsigned __int8 *)v1 + 305);
  }
  if ( PpmCheckCurrentPipelineId == 5 )
  {
    v30 = result;
    v22 = 1;
    if ( (unsigned __int8)result >= 0x64u )
      v30 = 100;
    v31 = v16 * v30;
    LODWORD(v14) = v14 - (unsigned int)v14 * v30 / 0x64;
    result = 1374389535 * v31;
    v15 = v31 / 0x64;
    LODWORD(v16) = v16 - v15;
  }
  else
  {
    v22 = 0;
  }
  *(_DWORD *)(a1 + 24244) = v14;
  *(_DWORD *)(a1 + 24248) = v16;
  *(_DWORD *)(a1 + 24236) = v13;
  *((_DWORD *)v1 + 77) = v12;
  if ( v22 )
    return PpmPerfResetHistory(a1, v15);
  return result;
}
