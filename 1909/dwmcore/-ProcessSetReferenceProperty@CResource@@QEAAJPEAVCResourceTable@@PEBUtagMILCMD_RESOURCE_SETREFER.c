/*
 * XREFs of ?ProcessSetReferenceProperty@CResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RESOURCE_SETREFERENCEPROPERTY@@@Z @ 0x18016A5EC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18007CBC0 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CResource::ProcessSetReferenceProperty(
        CResource *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RESOURCE_SETREFERENCEPROPERTY *a3)
{
  struct CResource *ResourceWithoutType; // r8
  __int64 v4; // r9
  __int64 v5; // r10
  const void *retaddr; // [rsp+28h] [rbp+0h]

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 3));
  if ( !ResourceWithoutType && *(_DWORD *)(v4 + 12) )
    ModuleFailFastForHRESULT(-2003303421, retaddr);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, struct CResource *))(*(_QWORD *)v5 + 96LL))(
           v5,
           *(unsigned int *)(v4 + 8),
           ResourceWithoutType);
}
