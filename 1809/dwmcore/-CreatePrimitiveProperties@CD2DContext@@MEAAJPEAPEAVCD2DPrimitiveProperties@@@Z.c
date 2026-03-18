/*
 * XREFs of ?CreatePrimitiveProperties@CD2DContext@@MEAAJPEAPEAVCD2DPrimitiveProperties@@@Z @ 0x1801FE110
 * Callers:
 *     <none>
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x1800376CC (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CD2DPrimitiveProperties@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorPrimitiveProperties@@PEAPEAV1@@Z @ 0x1802026D8 (-Create@CD2DPrimitiveProperties@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorPrimitive.c)
 */

__int64 __fastcall CD2DContext::CreatePrimitiveProperties(CD2DContext *this, struct CD2DPrimitiveProperties **a2)
{
  int v4; // ebx
  int v5; // eax
  int v6; // r9d
  unsigned int v8; // [rsp+20h] [rbp-18h]
  struct ID2D1PrivateCompositorPrimitiveProperties *v9; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  v9 = 0LL;
  v4 = *((_DWORD *)this + 212);
  if ( v4 < 0 )
  {
    v8 = 2026;
    v6 = *((_DWORD *)this + 212);
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1PrivateCompositorPrimitiveProperties **))(**((_QWORD **)this + 30)
                                                                                                + 40LL))(
           *((_QWORD *)this + 30),
           &v9);
    v4 = v5;
    if ( v5 < 0 )
    {
      v8 = 2028;
    }
    else
    {
      v5 = CD2DPrimitiveProperties::Create(*((struct CD2DResourceManager **)this + 25), v9, a2);
      v4 = v5;
      if ( v5 >= 0 )
        goto LABEL_9;
      v8 = 2032;
    }
    v6 = v5;
  }
  MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v6, v8);
LABEL_9:
  if ( v9 )
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorPrimitiveProperties *))(*(_QWORD *)v9 + 16LL))(v9);
  return CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext((__int64)this, v4, 0);
}
