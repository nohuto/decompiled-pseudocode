/*
 * XREFs of ?CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z @ 0x1801FDCF0
 * Callers:
 *     <none>
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x1800376CC (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CD2DEffect@@SAJPEAVCD2DResourceManager@@PEAUID2D1Effect@@PEAPEAV1@@Z @ 0x1802064BC (-Create@CD2DEffect@@SAJPEAVCD2DResourceManager@@PEAUID2D1Effect@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CD2DContext::CreateD2DEffect(CD2DContext *this, const struct _GUID *a2, struct CD2DEffect **a3)
{
  int v5; // ebx
  int v6; // eax
  int v7; // r9d
  unsigned int v9; // [rsp+20h] [rbp-18h]
  struct ID2D1Effect *v10; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0LL;
  v10 = 0LL;
  v5 = *((_DWORD *)this + 212);
  if ( v5 < 0 )
  {
    v9 = 1953;
    v7 = *((_DWORD *)this + 212);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, struct ID2D1Effect **))(**((_QWORD **)this + 29)
                                                                                        + 504LL))(
           *((_QWORD *)this + 29),
           a2,
           &v10);
    v5 = v6;
    if ( v6 < 0 )
    {
      v9 = 1955;
    }
    else
    {
      v6 = CD2DEffect::Create(*((struct CD2DResourceManager **)this + 25), v10, a3);
      v5 = v6;
      if ( v6 >= 0 )
        goto LABEL_9;
      v9 = 1956;
    }
    v7 = v6;
  }
  MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v7, v9);
  *a3 = 0LL;
LABEL_9:
  if ( v10 )
    (*(void (__fastcall **)(struct ID2D1Effect *))(*(_QWORD *)v10 + 16LL))(v10);
  return CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext((__int64)this, v5, 0);
}
