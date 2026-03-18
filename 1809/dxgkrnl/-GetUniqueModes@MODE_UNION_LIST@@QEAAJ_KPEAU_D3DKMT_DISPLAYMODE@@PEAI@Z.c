/*
 * XREFs of ?GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C0120730
 * Callers:
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1C00E2DB0 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C020345C (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@XZ @ 0x1C001372C (--1COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@XZ.c)
 *     ??0COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@PEAT_LARGE_INTEGER@@@Z @ 0x1C0013778 (--0COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@PEAT_LARGE_INTEGER@@@Z.c)
 *     _UpgradeDispModeFlags @ 0x1C00B23E0 (_UpgradeDispModeFlags.c)
 */

__int64 __fastcall MODE_UNION_LIST::GetUniqueModes(
        MODE_UNION_LIST *this,
        unsigned __int64 a2,
        struct _D3DKMT_DISPLAYMODE *a3,
        unsigned int *a4)
{
  unsigned int *v4; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  unsigned int v14; // r15d
  unsigned int v15; // r14d
  unsigned int *v16; // rbp
  unsigned int v17; // ebx
  _DWORD *v18; // rdi
  struct _D3DKMT_DISPLAYMODE *v19; // rcx
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  _BYTE v32[56]; // [rsp+20h] [rbp-38h] BYREF

  v4 = a4;
  Global = DXGGLOBAL::GetGlobal((__int64)this);
  DXGGLOBAL::COUNT_TICKS_IN_SCOPE::COUNT_TICKS_IN_SCOPE(
    (DXGGLOBAL::COUNT_TICKS_IN_SCOPE *)v32,
    (union _LARGE_INTEGER *)Global + 11);
  DXGGLOBAL::COUNT_TICKS_IN_SCOPE::~COUNT_TICKS_IN_SCOPE((DXGGLOBAL::COUNT_TICKS_IN_SCOPE *)v32);
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal(v9) + 7);
  v13 = *((unsigned int *)this + 4);
  v14 = 0;
  v15 = 0;
  if ( !(_DWORD)v13 )
  {
LABEL_13:
    *v4 = v14;
    _InterlockedExchangeAdd64((volatile signed __int64 *)DXGGLOBAL::GetGlobal(v13) + 2, v14);
    return 0LL;
  }
  while ( 1 )
  {
    v16 = (unsigned int *)(*((_QWORD *)this + 1) + 44LL * v15);
    if ( *v16 )
      break;
LABEL_11:
    v13 = *((unsigned int *)this + 4);
    if ( ++v15 >= (unsigned int)v13 )
    {
      v4 = a4;
      goto LABEL_13;
    }
  }
  v17 = v15 + 1;
  if ( v15 + 1 < (unsigned int)v13 )
  {
    do
    {
      v18 = (_DWORD *)(*((_QWORD *)this + 1) + 44LL * v17);
      if ( *v18 )
      {
        if ( *v16 == *v18
          && v16[1] == v18[1]
          && v16[2] == v18[2]
          && v16[3] == v18[3]
          && v16[7] == v18[7]
          && v16[8] == v18[8]
          && v16[6] == v18[6] )
        {
          v13 = v16[10] ^ v18[10];
          if ( ((*((_BYTE *)v16 + 40) ^ *((_BYTE *)v18 + 40)) & 0x10) == 0 )
          {
            if ( v16[4] != v18[4] || v16[5] != v18[5] )
            {
              v21 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v13, v10, v11, v12);
              v21[3] = *v16;
              v21[4] = v16[1];
              v21[5] = (int)v16[2];
              v21[6] = v16[3];
              WdLogEvent5_WdDmmEvent(v21);
              v26 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v23, v22, v24, v25);
              v26[3] = v16[4];
              v26[4] = v16[5];
              v26[5] = (unsigned int)v18[4];
              v26[6] = (unsigned int)v18[5];
              WdLogEvent5_WdDmmEvent(v26);
            }
            UpgradeDispModeFlags((__int64)v16, (__int64)v18);
            if ( (v16[9] & 2) != 0 )
              goto LABEL_11;
            *v18 = 0;
          }
        }
      }
      ++v17;
    }
    while ( v17 < *((_DWORD *)this + 4) );
  }
  if ( !a3 )
  {
LABEL_10:
    ++v14;
    goto LABEL_11;
  }
  if ( v14 < a2 )
  {
    v19 = &a3[v14];
    *(_OWORD *)&v19->Width = *(_OWORD *)v16;
    *(_OWORD *)&v19->RefreshRate.Numerator = *((_OWORD *)v16 + 1);
    *(_QWORD *)&v19->DisplayFixedOutput = *((_QWORD *)v16 + 4);
    *((_DWORD *)&v19->Flags + 1) = v16[10];
    goto LABEL_10;
  }
  v27 = WdLogNewEntry5_WdError(v13);
  *(_QWORD *)(v27 + 24) = 1855LL;
  WdLogEvent5_WdError(v27);
  v31 = WdLogNewEntry5_WdWarning(v29, v28, v30);
  *(_QWORD *)(v31 + 24) = a2;
  WdLogEvent5_WdWarning(v31);
  return 3221225507LL;
}
