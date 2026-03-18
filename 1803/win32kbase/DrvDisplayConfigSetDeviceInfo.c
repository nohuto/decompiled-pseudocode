/*
 * XREFs of DrvDisplayConfigSetDeviceInfo @ 0x1C00D40C0
 * Callers:
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C00B5830 (NtUserDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     DrvIsWddmDriverPresent @ 0x1C0042CB4 (DrvIsWddmDriverPresent.c)
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C004B338 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     GetPathsModality @ 0x1C004B368 (GetPathsModality.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     xxxUserSetDisplayConfig @ 0x1C00A6D60 (xxxUserSetDisplayConfig.c)
 *     DrvDisplayConfigSetScaleFactorOverride @ 0x1C00D4520 (DrvDisplayConfigSetScaleFactorOverride.c)
 */

__int64 __fastcall DrvDisplayConfigSetDeviceInfo(int *a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int *v5; // r14
  unsigned int *v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // r9d
  unsigned int v17; // r8d
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // eax
  _QWORD *v22; // rax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // eax
  struct D3DKMT_GETPATHSMODALITY *v28; // rsi
  int PathsModality; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rbx
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  __int64 v40; // r8
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  _QWORD *v45; // rax
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rbp
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rax
  int v56; // eax
  int v57; // eax
  int v58; // eax
  struct D3DKMT_GETPATHSMODALITY *v59; // [rsp+90h] [rbp+18h] BYREF

  if ( !(unsigned int)DrvIsWddmDriverPresent() )
    return 3221225659LL;
  v5 = (unsigned int *)(a1 + 4);
  v6 = (unsigned int *)(a1 + 2);
  result = ((__int64 (__fastcall *)(int *, _QWORD, int *, int *))qword_1C01A1E00)(
             a1 + 2,
             (unsigned int)a1[4],
             a1 + 2,
             a1 + 4);
  if ( (int)result >= 0 )
  {
    v10 = *a1;
    if ( *a1 == -19 || v10 == -18 )
    {
      if ( a1[1] == 24 )
      {
        v58 = ((__int64 (__fastcall *)(_QWORD, int *))qword_1C01A1A88)(0LL, a1);
        v11 = v58;
        if ( v58 >= 0 )
          return (unsigned int)v11;
        goto LABEL_56;
      }
      return -1073741811LL;
    }
    switch ( v10 )
    {
      case -16:
        if ( a1[1] != 68 )
          return -1073741811LL;
        v57 = ((__int64 (__fastcall *)(_QWORD, int *))qword_1C01A1A88)(0LL, a1);
        v11 = v57;
        if ( v57 < 0 )
          goto LABEL_56;
        if ( v57 != 259 )
        {
          if ( v57 == 255 && gpGdiSharedMemory )
            _InterlockedIncrement((volatile signed __int32 *)gpGdiSharedMemory + 393252);
          return (unsigned int)v11;
        }
        goto LABEL_17;
      case -6:
        if ( a1[1] == 28 )
        {
          v56 = ((__int64 (__fastcall *)(_QWORD, int *))qword_1C01A1A88)(0LL, a1);
          v11 = v56;
          if ( v56 >= 0 )
          {
            if ( !a1[6] )
              return (unsigned int)v11;
            v16 = 4;
            v17 = 2191;
            goto LABEL_18;
          }
          goto LABEL_56;
        }
        return -1073741811LL;
      case -4:
        if ( a1[1] == 24 )
        {
          LODWORD(v11) = DrvDisplayConfigSetScaleFactorOverride(a1, 0LL);
          return (unsigned int)v11;
        }
        return -1073741811LL;
    }
    if ( v10 != 5 )
    {
      if ( v10 != 8 )
      {
        if ( v10 != 10 )
        {
          LODWORD(v11) = -1073741811;
          v12 = (_QWORD *)WdLogNewEntry5_WdError(v8, v7, v9);
          v12[3] = -1073741811LL;
          v12[4] = *a1;
          v12[5] = a1[3];
          v12[6] = *v6;
          v13 = *v5;
LABEL_13:
          v12[7] = v13;
          WdLogEvent5_WdError(v12);
          return (unsigned int)v11;
        }
        if ( a1[1] == 24 )
        {
          v14 = ((__int64 (__fastcall *)(_QWORD, int *))qword_1C01A1A88)(0LL, a1);
          v11 = v14;
          if ( v14 >= 0 )
          {
            if ( v14 == 255 )
              return (unsigned int)v11;
            goto LABEL_17;
          }
LABEL_56:
          v20 = WdLogNewEntry5_WdWarning(v15);
          *(_QWORD *)(v20 + 24) = a1;
          *(_QWORD *)(v20 + 32) = v11;
          goto LABEL_57;
        }
        return -1073741811LL;
      }
      if ( a1[1] != 24 )
        return -1073741811LL;
      v21 = ((__int64 (__fastcall *)(_QWORD, int *))qword_1C01A1A88)(0LL, a1);
      v11 = v21;
      if ( v21 < 0 )
        goto LABEL_56;
LABEL_17:
      v16 = 0;
      v17 = 2447;
LABEL_18:
      v18 = xxxUserSetDisplayConfig(0, 0LL, v17, v16, 0LL, 1, 0LL, 0LL, 0LL, a2);
      v11 = v18;
      if ( v18 >= 0 )
        return (unsigned int)v11;
      v20 = WdLogNewEntry5_WdWarning(v19);
      *(_QWORD *)(v20 + 24) = v11;
LABEL_57:
      WdLogEvent5_WdWarning(v20);
      return (unsigned int)v11;
    }
    v22 = (_QWORD *)WdLogNewEntry5_WdEvent(v8, v7, v9);
    v22[3] = *a1;
    v22[4] = a1[3];
    v22[5] = *v6;
    v22[6] = *v5;
    v22[7] = a1[5] & 1;
    WdLogEvent5_WdEvent(v22);
    v23 = ((__int64 (*)(void))qword_1C01A1AA0)();
    v11 = v23;
    if ( v23 < 0 )
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdError(v25, v24, v26);
      v12[3] = v11;
      v12[4] = a1[3];
      v12[5] = *v6;
      v12[6] = *v5;
      v13 = a1[5] & 1;
      goto LABEL_13;
    }
    v27 = a1[5];
    v28 = 0LL;
    v59 = 0LL;
    if ( (v27 & 1) != 0 )
    {
      PathsModality = GetPathsModality(v25, &v59, 64LL, 0LL);
      v33 = PathsModality;
      if ( PathsModality < 0 )
      {
        v34 = (_QWORD *)WdLogNewEntry5_WdError(v31, v30, v32);
        v34[3] = v33;
        v34[4] = a1[3];
        v34[5] = *v6;
        v34[6] = *v5;
        v34[7] = a1[5] & 1;
        WdLogEvent5_WdError(v34);
        if ( (_DWORD)v33 == -1073741801 )
        {
          if ( (int)((__int64 (*)(void))qword_1C01A1AA8)() < 0 )
          {
            v39 = WdLogNewEntry5_WdAssertion(v36, v35, v37, v38);
            WdLogEvent5_WdAssertion(v39);
          }
          return 3221225495LL;
        }
      }
      v28 = v59;
    }
    v40 = (a1[5] & 1) == 0;
    LODWORD(v40) = v40 | 0x80000000;
    v41 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))qword_1C01A1A60)(*(_QWORD *)v6, *v5, v40, 0LL);
    v11 = v41;
    if ( v41 >= 0 )
    {
      if ( !v28 )
        goto LABEL_38;
      v46 = ((__int64 (__fastcall *)(__int64, struct D3DKMT_GETPATHSMODALITY *))qword_1C01A1A28)(0x40000000LL, v28);
      v50 = v46;
      if ( v46 >= 0 )
        goto LABEL_38;
      v45 = (_QWORD *)WdLogNewEntry5_WdError(v48, v47, v49);
      v45[3] = v50;
    }
    else
    {
      v45 = (_QWORD *)WdLogNewEntry5_WdError(v43, v42, v44);
      v45[3] = v11;
    }
    v45[4] = a1[3];
    v45[5] = *v6;
    v45[6] = *v5;
    v45[7] = a1[5] & 1;
    WdLogEvent5_WdError(v45);
LABEL_38:
    if ( (int)((__int64 (*)(void))qword_1C01A1AA8)() < 0 )
    {
      v55 = WdLogNewEntry5_WdAssertion(v52, v51, v53, v54);
      WdLogEvent5_WdAssertion(v55);
    }
    FreePathsModality(v28);
    return (unsigned int)v11;
  }
  return result;
}
