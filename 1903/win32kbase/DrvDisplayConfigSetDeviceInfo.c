/*
 * XREFs of DrvDisplayConfigSetDeviceInfo @ 0x1C012D200
 * Callers:
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C0116F40 (NtUserDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     DrvIsWddmDriverPresent @ 0x1C00502CC (DrvIsWddmDriverPresent.c)
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0051134 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     GetPathsModality @ 0x1C0051164 (GetPathsModality.c)
 *     xxxUserSetDisplayConfig @ 0x1C0062520 (xxxUserSetDisplayConfig.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     DrvDisplayConfigSetScaleFactorOverride @ 0x1C012D6E0 (DrvDisplayConfigSetScaleFactorOverride.c)
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
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned int v18; // r9d
  unsigned int v19; // r8d
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  int v25; // eax
  _QWORD *v26; // rax
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  int v31; // eax
  struct D3DKMT_GETPATHSMODALITY *v32; // rsi
  int PathsModality; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rbx
  _QWORD *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // r8
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  _QWORD *v48; // rax
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rbp
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rax
  int v58; // eax
  int v59; // eax
  bool v60; // zf
  int v61; // eax
  struct D3DKMT_GETPATHSMODALITY *v62; // [rsp+90h] [rbp+18h] BYREF

  if ( !(unsigned int)DrvIsWddmDriverPresent() )
    return 3221225659LL;
  v5 = (unsigned int *)(a1 + 4);
  v6 = (unsigned int *)(a1 + 2);
  result = ((__int64 (__fastcall *)(int *, _QWORD, int *, int *))qword_1C0215238)(
             a1 + 2,
             (unsigned int)a1[4],
             a1 + 2,
             a1 + 4);
  if ( (int)result >= 0 )
  {
    v10 = *a1;
    if ( *a1 == -23 )
    {
      if ( a1[1] != 48 )
        return -1073741811LL;
    }
    else
    {
      switch ( v10 )
      {
        case -19:
          v60 = a1[1] == 24;
          break;
        case -18:
          v60 = a1[1] == 28;
          break;
        case -16:
          if ( a1[1] != 68 )
            return -1073741811LL;
          v59 = ((__int64 (__fastcall *)(_QWORD, int *))qword_1C0215108)(0LL, a1);
          v11 = v59;
          if ( v59 < 0 )
            goto LABEL_58;
          if ( v59 != 259 )
          {
            if ( v59 == 255 && gpGdiSharedMemory )
              _InterlockedIncrement((volatile signed __int32 *)gpGdiSharedMemory + 393252);
            return (unsigned int)v11;
          }
          goto LABEL_18;
        case -6:
          if ( a1[1] == 28 )
          {
            v58 = ((__int64 (__fastcall *)(_QWORD, int *))qword_1C0215108)(0LL, a1);
            v11 = v58;
            if ( v58 >= 0 )
            {
              if ( !a1[6] )
                return (unsigned int)v11;
              v18 = 4;
              v19 = 2191;
              goto LABEL_19;
            }
            goto LABEL_58;
          }
          return -1073741811LL;
        case -4:
          if ( a1[1] == 24 )
          {
            LODWORD(v11) = DrvDisplayConfigSetScaleFactorOverride(a1, 0LL);
            return (unsigned int)v11;
          }
          return -1073741811LL;
        case 5:
          if ( a1[1] != 24 )
            return -1073741811LL;
          v26 = (_QWORD *)WdLogNewEntry5_WdEvent(v8, v7, v9);
          v26[3] = *a1;
          v26[4] = a1[3];
          v26[5] = *v6;
          v26[6] = *v5;
          v26[7] = a1[5] & 1;
          WdLogEvent5_WdEvent(v26);
          v27 = ((__int64 (*)(void))qword_1C0215120)();
          v11 = v27;
          if ( v27 < 0 )
          {
            v12 = (_QWORD *)WdLogNewEntry5_WdError(v29, v28, v30);
            v12[3] = v11;
            v12[4] = a1[3];
            v12[5] = *v6;
            v12[6] = *v5;
            v13 = a1[5] & 1;
            goto LABEL_14;
          }
          v31 = a1[5];
          v32 = 0LL;
          v62 = 0LL;
          if ( (v31 & 1) != 0 )
          {
            PathsModality = GetPathsModality(v29, &v62, 64LL, 0);
            v37 = PathsModality;
            if ( PathsModality < 0 )
            {
              v38 = (_QWORD *)WdLogNewEntry5_WdError(v35, v34, v36);
              v38[3] = v37;
              v38[4] = a1[3];
              v38[5] = *v6;
              v38[6] = *v5;
              v38[7] = a1[5] & 1;
              WdLogEvent5_WdError(v38);
              if ( (_DWORD)v37 == -1073741801 )
              {
                if ( (int)((__int64 (*)(void))qword_1C0215128)() < 0 )
                {
                  v42 = WdLogNewEntry5_WdAssertion(v40, v39, v41);
                  WdLogEvent5_WdAssertion(v42);
                }
                return 3221225495LL;
              }
            }
            v32 = v62;
          }
          v43 = (a1[5] & 1) == 0;
          LODWORD(v43) = v43 | 0x80000000;
          v44 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))qword_1C02150F0)(*(_QWORD *)v6, *v5, v43, 0LL);
          v11 = v44;
          if ( v44 >= 0 )
          {
            if ( !v32 )
              goto LABEL_40;
            v49 = ((__int64 (__fastcall *)(__int64, struct D3DKMT_GETPATHSMODALITY *))qword_1C02150C0)(
                    0x40000000LL,
                    v32);
            v53 = v49;
            if ( v49 >= 0 )
              goto LABEL_40;
            v48 = (_QWORD *)WdLogNewEntry5_WdError(v51, v50, v52);
            v48[3] = v53;
          }
          else
          {
            v48 = (_QWORD *)WdLogNewEntry5_WdError(v46, v45, v47);
            v48[3] = v11;
          }
          v48[4] = a1[3];
          v48[5] = *v6;
          v48[6] = *v5;
          v48[7] = a1[5] & 1;
          WdLogEvent5_WdError(v48);
LABEL_40:
          if ( (int)((__int64 (*)(void))qword_1C0215128)() < 0 )
          {
            v57 = WdLogNewEntry5_WdAssertion(v55, v54, v56);
            WdLogEvent5_WdAssertion(v57);
          }
          FreePathsModality(v32);
          return (unsigned int)v11;
        case 8:
          if ( a1[1] != 24 )
            return -1073741811LL;
          v25 = ((__int64 (__fastcall *)(_QWORD, int *))qword_1C0215108)(0LL, a1);
          v11 = v25;
          if ( v25 < 0 )
            goto LABEL_58;
LABEL_18:
          v18 = 0;
          v19 = 2447;
LABEL_19:
          v20 = xxxUserSetDisplayConfig(0, 0LL, v19, v18, 0LL, 1, 0LL, 0LL, 0LL, a2);
          v11 = v20;
          if ( v20 >= 0 )
            return (unsigned int)v11;
          v24 = WdLogNewEntry5_WdWarning(v22, v21, v23);
          *(_QWORD *)(v24 + 24) = v11;
LABEL_59:
          WdLogEvent5_WdWarning(v24);
          return (unsigned int)v11;
        case 10:
          if ( a1[1] == 24 )
          {
            v14 = ((__int64 (__fastcall *)(_QWORD, int *))qword_1C0215108)(0LL, a1);
            v11 = v14;
            if ( v14 >= 0 )
            {
              if ( v14 == 255 )
                return (unsigned int)v11;
              goto LABEL_18;
            }
LABEL_58:
            v24 = WdLogNewEntry5_WdWarning(v16, v15, v17);
            *(_QWORD *)(v24 + 24) = a1;
            *(_QWORD *)(v24 + 32) = v11;
            goto LABEL_59;
          }
          return -1073741811LL;
        default:
          LODWORD(v11) = -1073741811;
          v12 = (_QWORD *)WdLogNewEntry5_WdError(v8, v7, v9);
          v12[3] = -1073741811LL;
          v12[4] = *a1;
          v12[5] = a1[3];
          v12[6] = *v6;
          v13 = *v5;
LABEL_14:
          v12[7] = v13;
          WdLogEvent5_WdError(v12);
          return (unsigned int)v11;
      }
      if ( !v60 )
        return -1073741811LL;
    }
    v61 = ((__int64 (__fastcall *)(_QWORD, int *))qword_1C0215108)(0LL, a1);
    v11 = v61;
    if ( v61 >= 0 )
      return (unsigned int)v11;
    goto LABEL_58;
  }
  return result;
}
