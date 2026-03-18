/*
 * XREFs of ?SetTransform@CVectorShape@@QEAAJPEAVCComponentTransform2D@@@Z @ 0x1801B58CC
 * Callers:
 *     ?ProcessSetViewBox@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SHAPEVISUAL_SETVIEWBOX@@@Z @ 0x1801B2604 (-ProcessSetViewBox@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SHAPEVISUAL_SETVIEWBOX@@@Z.c)
 *     ?ProcessSetTransform@CVectorShape@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VECTORSHAPE_SETTRANSFORM@@@Z @ 0x1801B5844 (-ProcessSetTransform@CVectorShape@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VECTORSHAPE_SETTRANSFORM@.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A5544 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVectorShape::SetTransform(CVectorShape *this, struct CComponentTransform2D *a2)
{
  unsigned int v3; // ebx
  struct CResource *v4; // rdx
  int v6; // eax
  __int64 v7; // rcx

  v3 = 0;
  v4 = (struct CResource *)*((_QWORD *)this + 7);
  if ( a2 != v4 )
  {
    if ( !a2 )
    {
LABEL_6:
      CResource::UnRegisterNotifierInternal(this, v4);
      *((_QWORD *)this + 7) = a2;
      (*(void (__fastcall **)(CVectorShape *, __int64))(*(_QWORD *)this + 64LL))(this, 2LL);
      return v3;
    }
    v6 = CResource::RegisterNotifier(this, a2);
    v3 = v6;
    if ( v6 >= 0 )
    {
      v4 = (struct CResource *)*((_QWORD *)this + 7);
      goto LABEL_6;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x4Du);
  }
  return v3;
}
