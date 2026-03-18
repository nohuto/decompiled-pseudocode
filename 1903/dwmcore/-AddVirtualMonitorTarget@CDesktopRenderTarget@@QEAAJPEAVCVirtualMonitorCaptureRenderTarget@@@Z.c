/*
 * XREFs of ?AddVirtualMonitorTarget@CDesktopRenderTarget@@QEAAJPEAVCVirtualMonitorCaptureRenderTarget@@@Z @ 0x1801A7A84
 * Callers:
 *     ?SetDesktopVisualTree@CVirtualMonitorCaptureRenderTarget@@UEAAJPEAVCResource@@@Z @ 0x1801A72D0 (-SetDesktopVisualTree@CVirtualMonitorCaptureRenderTarget@@UEAAJPEAVCResource@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopRenderTarget::AddVirtualMonitorTarget(
        CDesktopRenderTarget *this,
        struct CVirtualMonitorCaptureRenderTarget *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // edx
  unsigned int v4; // ebx
  __int64 v5; // rcx
  signed int v6; // eax
  struct CVirtualMonitorCaptureRenderTarget *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v2 = *((_DWORD *)this + 74);
  v3 = v2 + 1;
  if ( v2 + 1 >= v2 )
  {
    v4 = 0;
    if ( v3 <= *((_DWORD *)this + 73) )
    {
      *(_QWORD *)(*((_QWORD *)this + 34) + 8LL * *((unsigned int *)this + 74)) = v8;
      *((_DWORD *)this + 74) = v3;
      goto LABEL_8;
    }
    v6 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 272, 8, 1, &v8);
    v4 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v6, 0xC3u, 0LL);
  }
  else
  {
    v4 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x80070216, 0xB8u, 0LL);
  }
  if ( (v4 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x3E2u, 0LL);
    return v4;
  }
LABEL_8:
  (*(void (__fastcall **)(struct CVirtualMonitorCaptureRenderTarget *))(*(_QWORD *)v8 + 8LL))(v8);
  return v4;
}
