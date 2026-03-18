/*
 * XREFs of ?ProcessSetPropertyIdSet@CPropertyChangeResource@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYCHANGERESOURCE_SETPROPERTYIDSET@@@Z @ 0x18007706C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPropertyChangeResource::ProcessSetPropertyIdSet(
        CPropertyChangeResource *this,
        struct CResourceTable *a2,
        const struct MILCMD_PROPERTYCHANGERESOURCE_SETPROPERTYIDSET *a3)
{
  __int64 v3; // rax

  v3 = *(_QWORD *)this;
  *((_DWORD *)this + 16) = *((_DWORD *)a3 + 2);
  return (*(__int64 (**)(void))(v3 + 160))();
}
