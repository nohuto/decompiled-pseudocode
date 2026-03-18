/*
 * XREFs of ?ProcessSetViewBox@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SHAPEVISUAL_SETVIEWBOX@@@Z @ 0x1801B2604
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800BDA68 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z @ 0x1801B2434 (-EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z.c)
 *     ?SetTransform@CVectorShape@@QEAAJPEAVCComponentTransform2D@@@Z @ 0x1801B58CC (-SetTransform@CVectorShape@@QEAAJPEAVCComponentTransform2D@@@Z.c)
 */

__int64 __fastcall CShapeVisual::ProcessSetViewBox(
        CShapeVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_SHAPEVISUAL_SETVIEWBOX *a3)
{
  struct CResource *ResourceWithoutType; // rax
  struct CComponentTransform2D *v5; // rdi
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v11; // [rsp+20h] [rbp-18h]
  CVectorShape *v12; // [rsp+50h] [rbp+18h] BYREF

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  v5 = ResourceWithoutType;
  if ( !ResourceWithoutType
    || (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
         ResourceWithoutType,
         156LL) )
  {
    v8 = CShapeVisual::EnsureShapeTree(this, &v12);
    v7 = v8;
    if ( v8 < 0 )
    {
      v11 = 25;
    }
    else
    {
      v8 = CVectorShape::SetTransform(v12, v5);
      v7 = v8;
      if ( v8 >= 0 )
        return v7;
      v11 = 26;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, v11);
    return v7;
  }
  v7 = -2003303421;
  MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2003303421, 0x15u);
  return v7;
}
