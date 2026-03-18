/*
 * XREFs of ?CreateLegacyCommandList@CD2DContext@@MEAAJPEAUID2D1PrivateCompositorBuffer@@0PEAPEAUID2D1Bitmap@@_K12PEAPEAUID2D1PrivateCompositorPrimitiveProperties@@2PEAPEAVCD2DCommandList@@@Z @ 0x180160230
 * Callers:
 *     <none>
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180059A50 (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?Create@CD2DCommandList@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorCommandList@@PEAPEAV1@@Z @ 0x18016B00C (-Create@CD2DCommandList@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorCommandList@@PEAP.c)
 */

__int64 __fastcall CD2DContext::CreateLegacyCommandList(
        CD2DContext *this,
        struct ID2D1PrivateCompositorBuffer *a2,
        struct ID2D1PrivateCompositorBuffer *a3,
        struct ID2D1Bitmap **a4,
        unsigned __int64 a5,
        struct ID2D1Bitmap **a6,
        unsigned __int64 a7,
        struct ID2D1PrivateCompositorPrimitiveProperties **a8,
        unsigned __int64 a9,
        struct CD2DCommandList **a10)
{
  struct CD2DCommandList **v10; // r14
  struct CD2DCommandList *v11; // rdi
  int v13; // ebx
  signed int v14; // eax
  __int64 v15; // rcx
  signed int v16; // eax
  __int64 v17; // rcx
  struct CD2DCommandList *v19; // [rsp+80h] [rbp+8h] BYREF

  v10 = a10;
  v11 = 0LL;
  v19 = 0LL;
  *a10 = 0LL;
  v13 = *((_DWORD *)this + 220);
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v13, 0x7C5u, 0LL);
  }
  else
  {
    v14 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1PrivateCompositorBuffer *, struct ID2D1PrivateCompositorBuffer *, struct ID2D1Bitmap **, _DWORD))(**((_QWORD **)this + 30) + 24LL))(
            *((_QWORD *)this + 30),
            a2,
            a3,
            a4,
            a5);
    v13 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x7CFu, 0LL);
    }
    else
    {
      v16 = CD2DCommandList::Create(*((struct CD2DResourceManager **)this + 25), 0LL, &v19);
      v13 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x7D3u, 0LL);
        v11 = v19;
      }
      else
      {
        *v10 = v19;
      }
    }
  }
  if ( v11 )
    (*(void (__fastcall **)(struct CD2DCommandList *))(*(_QWORD *)v11 + 16LL))(v11);
  return CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext((__int64)this, v13, 0);
}
