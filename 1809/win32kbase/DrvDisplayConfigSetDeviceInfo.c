/*
 * XREFs of DrvDisplayConfigSetDeviceInfo @ 0x1C0003800
 * Callers:
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C0003570 (NtUserDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     DrvIsWddmDriverPresent @ 0x1C00144B4 (DrvIsWddmDriverPresent.c)
 *     xxxUserSetDisplayConfig @ 0x1C0049150 (xxxUserSetDisplayConfig.c)
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C004D354 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     GetPathsModality @ 0x1C004D384 (GetPathsModality.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     DrvDisplayConfigSetScaleFactorOverride @ 0x1C0104690 (DrvDisplayConfigSetScaleFactorOverride.c)
 */

__int64 __fastcall DrvDisplayConfigSetDeviceInfo(int *a1, __int64 a2)
{
  unsigned int *v4; // r14
  unsigned int *v5; // r15
  __int64 result; // rax
  int v7; // eax
  int v8; // eax
  __int64 v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // r9
  __int64 v14; // r8
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  _QWORD *v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  struct D3DKMT_GETPATHSMODALITY *v22; // rsi
  int PathsModality; // eax
  __int64 v24; // rbx
  _QWORD *v25; // rax
  __int64 v26; // rax
  __int64 v27; // r8
  int v28; // eax
  _QWORD *v29; // rax
  int v30; // eax
  __int64 v31; // rbp
  __int64 v32; // rax
  int v33; // eax
  int v34; // eax
  struct D3DKMT_GETPATHSMODALITY *v35; // [rsp+90h] [rbp+18h] BYREF

  if ( !(unsigned int)DrvIsWddmDriverPresent() )
    return 3221225659LL;
  v4 = (unsigned int *)(a1 + 4);
  v5 = (unsigned int *)(a1 + 2);
  result = ((__int64 (__fastcall *)(int *, _QWORD, int *, int *))qword_1C01CDCA0)(
             a1 + 2,
             (unsigned int)a1[4],
             a1 + 2,
             a1 + 4);
  if ( (int)result >= 0 )
  {
    v7 = *a1;
    if ( *a1 == -19 )
    {
      if ( a1[1] == 24 )
        goto LABEL_5;
      return -1073741811LL;
    }
    switch ( v7 )
    {
      case -18:
        if ( a1[1] == 28 )
        {
LABEL_5:
          v8 = ((__int64 (__fastcall *)(_QWORD, int *))qword_1C01CD928)(0LL, a1);
          v9 = v8;
          if ( v8 >= 0 )
            return (unsigned int)v9;
          goto LABEL_28;
        }
        return -1073741811LL;
      case -16:
        if ( a1[1] != 68 )
          return -1073741811LL;
        v34 = ((__int64 (__fastcall *)(_QWORD, int *))qword_1C01CD928)(0LL, a1);
        v9 = v34;
        if ( v34 >= 0 )
        {
          if ( v34 != 259 )
          {
            if ( v34 == 255 && gpGdiSharedMemory )
              _InterlockedIncrement((volatile signed __int32 *)gpGdiSharedMemory + 393252);
            return (unsigned int)v9;
          }
LABEL_23:
          v13 = 0LL;
          v14 = 2447LL;
LABEL_24:
          v15 = xxxUserSetDisplayConfig(0LL, 0LL, v14, v13, 0LL, 1, 0LL, 0LL, 0LL, a2);
          v9 = v15;
          if ( v15 >= 0 )
            return (unsigned int)v9;
          v16 = WdLogNewEntry5_WdWarning();
          *(_QWORD *)(v16 + 24) = v9;
LABEL_29:
          WdLogEvent5_WdWarning(v16);
          return (unsigned int)v9;
        }
LABEL_28:
        v16 = WdLogNewEntry5_WdWarning();
        *(_QWORD *)(v16 + 24) = a1;
        *(_QWORD *)(v16 + 32) = v9;
        goto LABEL_29;
      case -6:
        if ( a1[1] != 28 )
          return -1073741811LL;
        v33 = ((__int64 (__fastcall *)(_QWORD, int *))qword_1C01CD928)(0LL, a1);
        v9 = v33;
        if ( v33 >= 0 )
        {
          if ( !a1[6] )
            return (unsigned int)v9;
          v13 = 4LL;
          v14 = 2191LL;
          goto LABEL_24;
        }
        goto LABEL_28;
      case -4:
        if ( a1[1] == 24 )
        {
          LODWORD(v9) = DrvDisplayConfigSetScaleFactorOverride(a1, 0LL);
          return (unsigned int)v9;
        }
        return -1073741811LL;
    }
    if ( v7 != 5 )
    {
      if ( v7 == 8 )
      {
        if ( a1[1] != 24 )
          return -1073741811LL;
        v17 = ((__int64 (__fastcall *)(_QWORD, int *))qword_1C01CD928)(0LL, a1);
        v9 = v17;
        if ( v17 >= 0 )
          goto LABEL_23;
      }
      else
      {
        if ( v7 != 10 )
        {
          LODWORD(v9) = -1073741811;
          v10 = (_QWORD *)WdLogNewEntry5_WdError();
          v10[3] = -1073741811LL;
          v10[4] = *a1;
          v10[5] = a1[3];
          v10[6] = *v5;
          v11 = *v4;
LABEL_19:
          v10[7] = v11;
          WdLogEvent5_WdError(v10);
          return (unsigned int)v9;
        }
        if ( a1[1] != 24 )
          return -1073741811LL;
        v12 = ((__int64 (__fastcall *)(_QWORD, int *))qword_1C01CD928)(0LL, a1);
        v9 = v12;
        if ( v12 >= 0 )
        {
          if ( v12 == 255 )
            return (unsigned int)v9;
          goto LABEL_23;
        }
      }
      goto LABEL_28;
    }
    if ( a1[1] != 24 )
      return -1073741811LL;
    v18 = (_QWORD *)WdLogNewEntry5_WdEvent();
    v18[3] = *a1;
    v18[4] = a1[3];
    v18[5] = *v5;
    v18[6] = *v4;
    v18[7] = a1[5] & 1;
    WdLogEvent5_WdEvent(v18);
    v19 = ((__int64 (*)(void))qword_1C01CD940)();
    v9 = v19;
    if ( v19 < 0 )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdError();
      v10[3] = v9;
      v10[4] = a1[3];
      v10[5] = *v5;
      v10[6] = *v4;
      v11 = a1[5] & 1;
      goto LABEL_19;
    }
    v21 = a1[5];
    v22 = 0LL;
    v35 = 0LL;
    if ( (v21 & 1) != 0 )
    {
      PathsModality = GetPathsModality(v20, &v35, 64LL);
      v24 = PathsModality;
      if ( PathsModality < 0 )
      {
        v25 = (_QWORD *)WdLogNewEntry5_WdError();
        v25[3] = v24;
        v25[4] = a1[3];
        v25[5] = *v5;
        v25[6] = *v4;
        v25[7] = a1[5] & 1;
        WdLogEvent5_WdError(v25);
        if ( (_DWORD)v24 == -1073741801 )
        {
          if ( (int)((__int64 (*)(void))qword_1C01CD948)() < 0 )
          {
            v26 = WdLogNewEntry5_WdAssertion();
            WdLogEvent5_WdAssertion(v26);
          }
          return 3221225495LL;
        }
      }
      v22 = v35;
    }
    v27 = (a1[5] & 1) == 0;
    LODWORD(v27) = v27 | 0x80000000;
    v28 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))qword_1C01CD900)(*(_QWORD *)v5, *v4, v27, 0LL);
    v9 = v28;
    if ( v28 >= 0 )
    {
      if ( !v22 )
        goto LABEL_45;
      v30 = ((__int64 (__fastcall *)(__int64, struct D3DKMT_GETPATHSMODALITY *))qword_1C01CD8C8)(0x40000000LL, v22);
      v31 = v30;
      if ( v30 >= 0 )
        goto LABEL_45;
      v29 = (_QWORD *)WdLogNewEntry5_WdError();
      v29[3] = v31;
    }
    else
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdError();
      v29[3] = v9;
    }
    v29[4] = a1[3];
    v29[5] = *v5;
    v29[6] = *v4;
    v29[7] = a1[5] & 1;
    WdLogEvent5_WdError(v29);
LABEL_45:
    if ( (int)((__int64 (*)(void))qword_1C01CD948)() < 0 )
    {
      v32 = WdLogNewEntry5_WdAssertion();
      WdLogEvent5_WdAssertion(v32);
    }
    FreePathsModality(v22);
    return (unsigned int)v9;
  }
  return result;
}
