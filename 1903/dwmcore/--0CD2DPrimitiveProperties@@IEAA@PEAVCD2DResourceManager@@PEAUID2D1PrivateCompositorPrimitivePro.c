/*
 * XREFs of ??0CD2DPrimitiveProperties@@IEAA@PEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorPrimitiveProperties@@@Z @ 0x18016B4C4
 * Callers:
 *     ?Create@CD2DPrimitiveProperties@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorPrimitiveProperties@@PEAPEAV1@@Z @ 0x18016B5A8 (-Create@CD2DPrimitiveProperties@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorPrimitive.c)
 * Callees:
 *     ??0CD2DResource@@IEAA@PEAVCD2DResourceManager@@_N@Z @ 0x1800B3E54 (--0CD2DResource@@IEAA@PEAVCD2DResourceManager@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

CD2DPrimitiveProperties *__fastcall CD2DPrimitiveProperties::CD2DPrimitiveProperties(
        CD2DPrimitiveProperties *this,
        struct CD2DResourceManager *a2,
        struct ID2D1PrivateCompositorPrimitiveProperties *a3)
{
  __int64 v4; // r10

  CD2DResource::CD2DResource(this, a2, 0);
  *((_QWORD *)this + 13) = v4;
  *((_QWORD *)this + 2) = &CD2DEffect::`vftable'{for `IDeviceResource'};
  *(_QWORD *)this = &CD2DPrimitiveProperties::`vftable'{for `CMILCOMBase'};
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  return this;
}
