/*
 * XREFs of ?Initialize@SESSION_ADAPTER@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C0144580
 * Callers:
 *     ?AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAVDXGADAPTER@@PEAPEAVSESSION_ADAPTER@@@Z @ 0x1C0144340 (-AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAVDXGADAPTER@@PEAPEAVSESSION_ADAPTER@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FBA60 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall SESSION_ADAPTER::Initialize(SESSION_ADAPTER *this, struct DXGADAPTER *a2)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD *v9; // rax

  if ( a2 )
  {
    *((_QWORD *)this + 2) = a2;
    _InterlockedIncrement64((volatile signed __int64 *)a2 + 3);
    *((_QWORD *)this + 3) = -1LL;
    return 0LL;
  }
  Global = DXGGLOBAL::GetGlobal((__int64)this, 0LL);
  v4 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)((char *)this + 8), (unsigned __int64 *)this + 3);
  *((_QWORD *)this + 2) = v4;
  if ( v4 )
    return 0LL;
  v9 = (_QWORD *)WdLogNewEntry5_WdError(v6, v5, v7);
  v9[3] = *((int *)this + 3);
  v9[4] = *((unsigned int *)this + 2);
  v9[5] = -1073741811LL;
  WdLogEvent5_WdError(v9);
  return 3221225485LL;
}
