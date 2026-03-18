/*
 * XREFs of ?GetCOPPCompatibleInformation@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS@@PEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x1C00FA1C0
 * Callers:
 *     ?GetCOPPCompatibleInformation@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS@@PEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x1C00FA12C (-GetCOPPCompatibleInformation@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETER.c)
 * Callees:
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x1C00728E0 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     CallMonitor @ 0x1C00A2020 (CallMonitor.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COPMProtectedOutput::GetCOPPCompatibleInformation(
        COPMProtectedOutput *this,
        struct _DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS *const a2,
        struct _DXGKMDT_OPM_REQUESTED_INFORMATION *a3)
{
  void **v3; // rbx
  unsigned int v7; // edi
  struct _DEVICE_OBJECT *v8; // rcx
  _QWORD InputBuffer[3]; // [rsp+30h] [rbp-18h] BYREF

  v3 = (void **)*((_QWORD *)this + 1);
  OPM::CMutex::Lock(v3);
  if ( (*(unsigned __int8 (__fastcall **)(COPMProtectedOutput *))(*(_QWORD *)this + 16LL))(this) )
  {
    v7 = -1071774438;
  }
  else
  {
    v8 = (struct _DEVICE_OBJECT *)*((_QWORD *)this + 2);
    InputBuffer[0] = *((_QWORD *)this + 9);
    InputBuffer[1] = a2;
    v7 = CallMonitor(v8, 0x23249Bu, InputBuffer, 0x10u, a3, 0x1000u);
  }
  if ( *v3 )
    KeReleaseMutex((PRKMUTEX)*v3, 0);
  return v7;
}
