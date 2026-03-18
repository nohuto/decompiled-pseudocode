/*
 * XREFs of ?ProcessRestoreContent@CGlobalCompositionSurfaceInfo@@UEAAJPEAVIRenderTargetDisplay@@@Z @ 0x18002EA90
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::ProcessRestoreContent(
        CGlobalCompositionSurfaceInfo *this,
        struct IRenderTargetDisplay *a2)
{
  int (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rcx
  unsigned int v3; // ebx
  int v6; // eax
  unsigned int v7; // ecx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 20);
  v3 = 0;
  v8 = 0LL;
  if ( v2 )
  {
    if ( (**v2)(v2, &GUID_302508ed_c63d_40f8_af07_af5881d2df95, &v8) >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, struct IRenderTargetDisplay *))(*(_QWORD *)v8 + 56LL))(v8, a2);
      v3 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x9Cu, 0LL);
    }
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return v3;
}
