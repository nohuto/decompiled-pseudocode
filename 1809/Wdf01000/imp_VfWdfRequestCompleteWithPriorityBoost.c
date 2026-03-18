/*
 * XREFs of imp_VfWdfRequestCompleteWithPriorityBoost @ 0x1C00BE840
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C001A980 (__security_check_cookie.c)
 *     McTemplateK0upp @ 0x1C0045744 (McTemplateK0upp.c)
 */

void __fastcall imp_VfWdfRequestCompleteWithPriorityBoost(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        int Status,
        __int64 PriorityBoost)
{
  unsigned __int16 *v5; // rcx
  char v6; // r14
  _FX_DRIVER_GLOBALS *v9; // rcx
  int (__fastcall *_Arg2)(WDFDRIVER__ *, WDFDEVICE_INIT *); // rdi
  __int64 v11; // r10
  __int64 v12; // r10
  __int16 v13; // ax
  const void *Context; // r10
  void *PPObject; // [rsp+30h] [rbp-48h] BYREF
  _GUID ActivityId; // [rsp+38h] [rbp-40h] BYREF

  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  v5 = (unsigned __int16 *)(~(unsigned __int64)Request & 0xFFFFFFFFFFFFFFF8uLL);
  v6 = PriorityBoost;
  if ( ((unsigned __int8)Request & 1) != 0 )
    v5 = (unsigned __int16 *)((char *)v5 - *v5);
  v9 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)v5 + 2);
  if ( (v9->FxEnhancedVerifierOptions & 0xF00000) != 0 )
  {
    _Arg2 = v9->Driver->m_DriverDeviceAdd.Method;
    FxObjectHandleGetPtr(v9, (unsigned __int64)Request, 0x1008u, &PPObject);
    if ( (unsigned int)IoGetActivityIdIrp(*((_QWORD *)PPObject + 19), &ActivityId) == -1073741275 )
    {
      EtwActivityIdControl(3u, &ActivityId);
      IoSetActivityIdIrp(*((_QWORD *)PPObject + 19), &ActivityId);
    }
    if ( (Microsoft_Windows_DriverFrameworks_KernelMode_PerformanceEnableBits[0] & 1) != 0 )
    {
      v11 = 0LL;
      if ( !*((_BYTE *)PPObject + 214) )
        v11 = *((_QWORD *)PPObject + 31);
      v12 = *(_QWORD *)(v11 + 96);
      v13 = *(_WORD *)(v12 + 10);
      Context = (const void *)(v12 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v13 )
        Context = 0LL;
      McTemplateK0upp(
        (_MCGEN_TRACE_CONTEXT *)PPObject,
        &FX_REQUEST_COMPLETE,
        &ActivityId,
        **(_BYTE **)(*((_QWORD *)PPObject + 19) + 184LL),
        _Arg2,
        Context);
    }
  }
  LOBYTE(PriorityBoost) = v6;
  WdfVersion.Functions.pfnWdfRequestCompleteWithPriorityBoost(DriverGlobals, Request, Status, PriorityBoost);
}
