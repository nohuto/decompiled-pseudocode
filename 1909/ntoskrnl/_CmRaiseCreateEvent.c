/*
 * XREFs of _CmRaiseCreateEvent @ 0x14071B5D4
 * Callers:
 *     _CmCreateDeviceContainerWorker @ 0x14070CF60 (_CmCreateDeviceContainerWorker.c)
 *     _CmCreateDeviceWorker @ 0x14071B52C (_CmCreateDeviceWorker.c)
 *     _CmCreateDeviceInterfaceWorker @ 0x14072CE88 (_CmCreateDeviceInterfaceWorker.c)
 *     _CmCreateInterfaceClassWorker @ 0x14072D114 (_CmCreateInterfaceClassWorker.c)
 *     _CmCreateInstallerClassWorker @ 0x140933934 (_CmCreateInstallerClassWorker.c)
 *     _CmCreateDevicePanelWorker @ 0x140938C94 (_CmCreateDevicePanelWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x1405BE758 (_CmMapCmObjectTypeToPnpObjectType.c)
 *     _PnpObjectRaiseCreateEvent @ 0x14071B638 (_PnpObjectRaiseCreateEvent.c)
 */

__int64 (__fastcall *__fastcall CmRaiseCreateEvent(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4))(__int64, __int64, _QWORD, __int64, _QWORD *)
{
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 (__fastcall *result)(__int64, __int64, _QWORD, __int64, _QWORD *); // rax
  _QWORD v11[3]; // [rsp+30h] [rbp-18h] BYREF

  v11[1] = 0LL;
  v8 = CmMapCmObjectTypeToPnpObjectType(a3);
  PnpObjectRaiseCreateEvent(a1, v9, v8);
  result = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _QWORD *))(a1 + 512);
  if ( result )
  {
    v11[0] = a4;
    return (__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, _QWORD *))result(a1, a2, a3, 2LL, v11);
  }
  return result;
}
