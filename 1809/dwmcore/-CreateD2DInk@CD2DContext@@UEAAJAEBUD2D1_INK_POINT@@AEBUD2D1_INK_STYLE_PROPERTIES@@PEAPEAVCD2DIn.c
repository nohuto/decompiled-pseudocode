/*
 * XREFs of ?CreateD2DInk@CD2DContext@@UEAAJAEBUD2D1_INK_POINT@@AEBUD2D1_INK_STYLE_PROPERTIES@@PEAPEAVCD2DInk@@@Z @ 0x1801FDDC0
 * Callers:
 *     <none>
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x1800376CC (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CD2DInk@@SAJPEAVCD2DResourceManager@@PEAUID2D1Ink@@PEAUID2D1InkStyle@@PEAPEAV1@@Z @ 0x18020604C (-Create@CD2DInk@@SAJPEAVCD2DResourceManager@@PEAUID2D1Ink@@PEAUID2D1InkStyle@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CD2DContext::CreateD2DInk(
        CD2DContext *this,
        const struct D2D1_INK_POINT *a2,
        const struct D2D1_INK_STYLE_PROPERTIES *a3,
        struct CD2DInk **a4)
{
  int v5; // ebx
  int v8; // eax
  int v9; // r9d
  unsigned int v11; // [rsp+20h] [rbp-28h]
  struct ID2D1InkStyle *v12; // [rsp+30h] [rbp-18h] BYREF
  struct ID2D1Ink *v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = 0LL;
  v12 = 0LL;
  v5 = *((_DWORD *)this + 212);
  if ( v5 < 0 )
  {
    v11 = 454;
    v9 = *((_DWORD *)this + 212);
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, const struct D2D1_INK_STYLE_PROPERTIES *, struct ID2D1InkStyle **))(**((_QWORD **)this + 29) + 768LL))(
           *((_QWORD *)this + 29),
           a3,
           &v12);
    v5 = v8;
    if ( v8 < 0 )
    {
      v11 = 456;
    }
    else
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, const struct D2D1_INK_POINT *, struct ID2D1Ink **))(**((_QWORD **)this + 29)
                                                                                                + 760LL))(
             *((_QWORD *)this + 29),
             a2,
             &v13);
      v5 = v8;
      if ( v8 < 0 )
      {
        v11 = 458;
      }
      else
      {
        v8 = CD2DInk::Create(*((struct CD2DResourceManager **)this + 25), v13, v12, a4);
        v5 = v8;
        if ( v8 >= 0 )
          goto LABEL_11;
        v11 = 460;
      }
    }
    v9 = v8;
  }
  MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v9, v11);
LABEL_11:
  if ( v13 )
    (*(void (__fastcall **)(struct ID2D1Ink *))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v12 )
    (*(void (__fastcall **)(struct ID2D1InkStyle *))(*(_QWORD *)v12 + 16LL))(v12);
  return CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext((__int64)this, v5, 0);
}
