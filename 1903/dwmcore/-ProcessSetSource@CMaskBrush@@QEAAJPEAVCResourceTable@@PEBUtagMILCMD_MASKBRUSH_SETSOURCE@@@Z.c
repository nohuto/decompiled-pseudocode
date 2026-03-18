/*
 * XREFs of ?ProcessSetSource@CMaskBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MASKBRUSH_SETSOURCE@@@Z @ 0x18007F1C0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?IsValidSourceResource@CMaskBrush@@CA_NPEBVCResource@@@Z @ 0x18007F134 (-IsValidSourceResource@CMaskBrush@@CA_NPEBVCResource@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180080220 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x180083C40 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800B9DD4 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMaskBrush::ProcessSetSource(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_MASKBRUSH_SETSOURCE *a3)
{
  const struct CResource *ResourceWithoutType; // rax
  struct CResource *v5; // rdi
  unsigned int v6; // ecx
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  struct CResource *v10; // rax

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  v5 = ResourceWithoutType;
  if ( ResourceWithoutType != this[11] )
  {
    if ( ResourceWithoutType )
    {
      if ( !CMaskBrush::IsValidSourceResource(ResourceWithoutType) )
      {
        v9 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2003303421, 0xC1u, 0LL);
        return v9;
      }
      v7 = CResource::RegisterNotifier((CResource *)this, v5);
      v9 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xC4u, 0LL);
        return v9;
      }
    }
    CResource::UnRegisterNotifierInternal((CResource *)this, this[11]);
    v10 = *this;
    this[11] = v5;
    (*((void (__fastcall **)(struct CResource **, __int64))v10 + 8))(this, 14LL);
  }
  return 0;
}
