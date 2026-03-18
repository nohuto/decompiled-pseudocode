/*
 * XREFs of ?GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C017211C
 * Callers:
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1C01711FC (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C023540C (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@XZ @ 0x1C001FD40 (--1COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@XZ.c)
 *     ??0COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@PEAT_LARGE_INTEGER@@@Z @ 0x1C001FD8C (--0COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@PEAT_LARGE_INTEGER@@@Z.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 */

__int64 __fastcall MODE_UNION_LIST::GetUniqueModes(
        const void **this,
        unsigned __int64 a2,
        struct _D3DKMT_DISPLAYMODE *a3,
        unsigned int *a4)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  _BYTE v22[24]; // [rsp+20h] [rbp-18h] BYREF

  Global = DXGGLOBAL::GetGlobal((__int64)this, a2);
  DXGGLOBAL::COUNT_TICKS_IN_SCOPE::COUNT_TICKS_IN_SCOPE(
    (DXGGLOBAL::COUNT_TICKS_IN_SCOPE *)v22,
    (union _LARGE_INTEGER *)Global + 11);
  DXGGLOBAL::COUNT_TICKS_IN_SCOPE::~COUNT_TICKS_IN_SCOPE((DXGGLOBAL::COUNT_TICKS_IN_SCOPE *)v22);
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal(v10, v9) + 7);
  v11 = *((unsigned int *)this + 4);
  if ( a2 < v11 )
    LODWORD(v11) = a2;
  v12 = v11;
  memmove(a3, this[1], 44LL * (unsigned int)v11);
  if ( a2 < *((unsigned int *)this + 4) )
  {
    v17 = WdLogNewEntry5_WdError(v14, v13, v15);
    *(_QWORD *)(v17 + 24) = 2237LL;
    WdLogEvent5_WdError(v17);
    v21 = WdLogNewEntry5_WdWarning(v19, v18, v20);
    *(_QWORD *)(v21 + 24) = a2;
    WdLogEvent5_WdWarning(v21);
    return 3221225507LL;
  }
  else
  {
    *a4 = v12;
    _InterlockedExchangeAdd64((volatile signed __int64 *)DXGGLOBAL::GetGlobal(v14, v13) + 2, v12);
    return 0LL;
  }
}
