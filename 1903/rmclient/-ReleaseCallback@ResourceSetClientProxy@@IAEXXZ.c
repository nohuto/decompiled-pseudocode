/*
 * XREFs of ?ReleaseCallback@ResourceSetClientProxy@@IAEXXZ @ 0x10014A93
 * Callers:
 *     ?ReleaseResourcesImpl@ResourceSetClientProxy@@IAEJK@Z @ 0x10014B4D (-ReleaseResourcesImpl@ResourceSetClientProxy@@IAEJK@Z.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YGPAUIUnknown@@PAPAU2@PAU2@@Z @ 0x10014382 (-AtlComPtrAssign@ATL@@YGPAUIUnknown@@PAPAU2@PAU2@@Z.c)
 */

void __thiscall ResourceSetClientProxy::ReleaseCallback(ResourceSetClientProxy *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // esi

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 424);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 424));
  if ( *((_DWORD *)this + 104) )
    ATL::AtlComPtrAssign((_DWORD *)this + 104, 0);
  LeaveCriticalSection(v2);
}
