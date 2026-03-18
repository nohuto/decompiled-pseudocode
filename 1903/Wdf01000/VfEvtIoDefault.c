/*
 * XREFs of VfEvtIoDefault @ 0x1C00C5060
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BDA0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C001A3B0 (__security_check_cookie.c)
 *     McTemplateK0upp @ 0x1C0044E3C (McTemplateK0upp.c)
 *     VerifyCriticalRegionEntry @ 0x1C0045308 (VerifyCriticalRegionEntry.c)
 *     VerifyCriticalRegionExit @ 0x1C0045334 (VerifyCriticalRegionExit.c)
 *     VerifyIrqlExit @ 0x1C0045390 (VerifyIrqlExit.c)
 *     VfWdfObjectGetTypedContext @ 0x1C00C4308 (VfWdfObjectGetTypedContext.c)
 */

void __fastcall VfEvtIoDefault(WDFQUEUE__ *Queue, unsigned __int64 Request)
{
  char *TypedContext; // r15
  void (__fastcall *v5)(WDFQUEUE__ *, unsigned __int64); // rsi
  unsigned __int16 *v6; // rcx
  _FX_DRIVER_GLOBALS *v7; // rcx
  int (__fastcall *_Arg2)(WDFDRIVER__ *, WDFDEVICE_INIT *); // rbx
  __int64 v9; // r9
  __int64 v10; // r9
  __int16 v11; // ax
  const void *Context; // r9
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 critRegion[8]; // [rsp+30h] [rbp-30h] BYREF
  void *PPObject; // [rsp+38h] [rbp-28h] BYREF
  _GUID ActivityId; // [rsp+40h] [rbp-20h] BYREF

  TypedContext = VfWdfObjectGetTypedContext((unsigned __int64)Queue, &WDF_VF_WDFIOQUEUECREATE_CONTEXT_TYPE_INFO);
  v5 = (void (__fastcall *)(WDFQUEUE__ *, unsigned __int64))*((_QWORD *)TypedContext + 3);
  if ( v5 )
  {
    *(_QWORD *)&ActivityId.Data1 = 0LL;
    v6 = (unsigned __int16 *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)ActivityId.Data4 = 0LL;
    if ( (Request & 1) != 0 )
      v6 = (unsigned __int16 *)((char *)v6 - *v6);
    v7 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)v6 + 2);
    if ( (v7->FxEnhancedVerifierOptions & 0xF00000) != 0 )
    {
      _Arg2 = v7->Driver->m_DriverDeviceAdd.Method;
      FxObjectHandleGetPtr(v7, Request, 0x1008u, &PPObject);
      if ( (unsigned int)IoGetActivityIdIrp(*((_QWORD *)PPObject + 19), &ActivityId) == -1073741275 )
      {
        EtwActivityIdControl(3u, &ActivityId);
        IoSetActivityIdIrp(*((_QWORD *)PPObject + 19), &ActivityId);
      }
      if ( (Microsoft_Windows_DriverFrameworks_KernelMode_PerformanceEnableBits[0] & 1) != 0 )
      {
        v9 = 0LL;
        if ( !*((_BYTE *)PPObject + 214) )
          v9 = *((_QWORD *)PPObject + 31);
        v10 = *(_QWORD *)(v9 + 96);
        v11 = *(_WORD *)(v10 + 10);
        Context = (const void *)(v10 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v11 )
          Context = 0LL;
        McTemplateK0upp(
          (_MCGEN_TRACE_CONTEXT *)PPObject,
          &FX_REQUEST_START,
          &ActivityId,
          **(_BYTE **)(*((_QWORD *)PPObject + 19) + 184LL),
          _Arg2,
          Context);
      }
      v5(Queue, Request);
    }
    else
    {
      critRegion[0] = 0;
      CurrentIrql = KeGetCurrentIrql();
      VerifyCriticalRegionEntry(critRegion);
      v5(Queue, Request);
      VerifyIrqlExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, CurrentIrql);
      VerifyCriticalRegionExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, critRegion[0], (unsigned __int64)v5);
    }
  }
}
