/*
 * XREFs of ?DeferredInitialize@DXGARGONEMULATIONPROCESS@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C0228C04
 * Callers:
 *     ?GetArgonEmulationProcess@DXGSESSIONDATA@@QEAAPEAVDXGARGONEMULATIONPROCESS@@XZ @ 0x1C02418A4 (-GetArgonEmulationProcess@DXGSESSIONDATA@@QEAAPEAVDXGARGONEMULATIONPROCESS@@XZ.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000E5B4 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C00CD9C0 (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 */

__int64 __fastcall DXGARGONEMULATIONPROCESS::DeferredInitialize(DXGARGONEMULATIONPROCESS *this, struct DXGPROCESS *a2)
{
  DXGGLOBAL *Global; // rax
  unsigned int MaximumAdapterCount; // eax
  __int64 v5; // rcx
  unsigned __int64 v6; // rdi
  __int64 v7; // rax
  SIZE_T v8; // rax
  PVOID v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax

  if ( *((_QWORD *)this + 1) )
    return 0LL;
  *((_QWORD *)this + 1) = a2;
  Global = DXGGLOBAL::GetGlobal((__int64)this);
  MaximumAdapterCount = DXGGLOBAL::GetMaximumAdapterCount(Global);
  v6 = MaximumAdapterCount;
  if ( !MaximumAdapterCount )
  {
    v7 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v7 + 24) = 5604LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = 8 * v6;
  if ( !is_mul_ok(v6, 8uLL) )
    v8 = -1LL;
  v9 = operator new(v8, 0x4B677844u, 1, PagedPool);
  *(_QWORD *)this = v9;
  if ( v9 )
    return 0LL;
  v11 = WdLogNewEntry5_WdLowResource(v10);
  *(_QWORD *)(v11 + 24) = 5609LL;
  WdLogEvent5_WdLowResource(v11);
  return 3221225495LL;
}
