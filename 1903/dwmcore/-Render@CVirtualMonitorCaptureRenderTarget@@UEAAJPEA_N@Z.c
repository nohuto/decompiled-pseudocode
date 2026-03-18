/*
 * XREFs of ?Render@CVirtualMonitorCaptureRenderTarget@@UEAAJPEA_N@Z @ 0x1801A7240
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?Render@CCaptureRenderTarget@@UEAAJPEA_N@Z @ 0x18024FA40 (-Render@CCaptureRenderTarget@@UEAAJPEA_N@Z.c)
 */

__int64 __fastcall CVirtualMonitorCaptureRenderTarget::Render(CVirtualMonitorCaptureRenderTarget *this, bool *a2)
{
  unsigned int v2; // ebx
  signed int v5; // eax
  __int64 v6; // rcx

  v2 = 0;
  *a2 = 0;
  if ( !*((_BYTE *)this + 600) )
    goto LABEL_6;
  v5 = CCaptureRenderTarget::Render(this, a2);
  v2 = v5;
  if ( v5 >= 0 )
  {
    if ( *a2 )
    {
      *((_BYTE *)this + 600) = 0;
      return v2;
    }
LABEL_6:
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this - 6) + 552LL) + 96LL))(
      *(_QWORD *)(*((_QWORD *)this - 6) + 552LL),
      0LL,
      0x8000LL);
    return v2;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x8Fu, 0LL);
  return v2;
}
