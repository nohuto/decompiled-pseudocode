/*
 * XREFs of ?ProcessSetTransform@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUSH_SETTRANSFORM@@@Z @ 0x18007ED14
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?SetTransform@CSurfaceBrush@@QEAAJPEAVCComponentTransform2D@@@Z @ 0x18007ED80 (-SetTransform@CSurfaceBrush@@QEAAJPEAVCComponentTransform2D@@@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x180083C40 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::ProcessSetTransform(
        CSurfaceBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SURFACEBRUSH_SETTRANSFORM *a3)
{
  struct CResource *ResourceWithoutType; // rax
  struct CComponentTransform2D *v5; // rdx
  struct CComponentTransform2D *v6; // rbx
  unsigned int v7; // ecx
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  v5 = 0LL;
  v6 = ResourceWithoutType;
  if ( ResourceWithoutType )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
            ResourceWithoutType,
            26LL) )
    {
      v10 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2003303421, 0xB1u, 0LL);
      return v10;
    }
    v5 = v6;
  }
  v8 = CSurfaceBrush::SetTransform(this, v5);
  v10 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xB7u, 0LL);
  return v10;
}
