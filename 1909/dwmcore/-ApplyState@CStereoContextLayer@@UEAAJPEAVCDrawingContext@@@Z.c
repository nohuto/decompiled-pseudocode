/*
 * XREFs of ?ApplyState@CStereoContextLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18017B3D0
 * Callers:
 *     ?PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z @ 0x18016F56C (-PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z.c)
 * Callees:
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x180059680 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CStereoContextLayer::ApplyState(CStereoContextLayer *this, struct CDrawingContext *a2)
{
  char v2; // al
  unsigned int v3; // ebx
  struct IRenderTarget *v6; // r14
  signed int v7; // eax
  __int64 v8; // rcx
  signed int v9; // eax
  __int64 v10; // rcx
  signed int v11; // eax
  __int64 v12; // rcx
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_BYTE *)this + 12);
  v3 = 0;
  v14 = 0LL;
  *((_BYTE *)a2 + 6349) = v2;
  *((_DWORD *)a2 + 1579) = 0;
  *((_DWORD *)a2 + 1578) = 0;
  *((_DWORD *)a2 + 1577) = 0;
  *((_DWORD *)a2 + 1576) = 0;
  if ( *((_DWORD *)this + 2) != *((_DWORD *)a2 + 101) )
  {
    v6 = (struct IRenderTarget *)*((_QWORD *)a2 + 44);
    v7 = (**(__int64 (__fastcall ***)(struct IRenderTarget *, GUID *, __int64 *))v6)(
           v6,
           &GUID_ce9b2f4f_bd49_4551_83ee_78f4d7b06d31,
           &v14);
    v3 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x2Au, 0LL);
    }
    else
    {
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 32LL))(v14, *((unsigned int *)this + 2));
      v3 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x2Cu, 0LL);
      }
      else
      {
        (*(void (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)v6 + 160LL))(v6);
        v11 = CDrawingContext::PushRenderTarget(a2, v6);
        v3 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x36u, 0LL);
        else
          *((_BYTE *)this + 13) = 1;
      }
    }
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return v3;
}
