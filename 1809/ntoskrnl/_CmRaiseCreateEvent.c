/*
 * XREFs of _CmRaiseCreateEvent @ 0x1406FD5A0
 * Callers:
 *     _CmCreateDeviceContainerWorker @ 0x1406E9FB8 (_CmCreateDeviceContainerWorker.c)
 *     _CmCreateDeviceWorker @ 0x1406FD4F8 (_CmCreateDeviceWorker.c)
 *     _CmCreateDeviceInterfaceWorker @ 0x14070479C (_CmCreateDeviceInterfaceWorker.c)
 *     _CmCreateInterfaceClassWorker @ 0x140704A28 (_CmCreateInterfaceClassWorker.c)
 *     _CmCreateInstallerClassWorker @ 0x1408F6200 (_CmCreateInstallerClassWorker.c)
 *     _CmCreateDevicePanelWorker @ 0x1408FB538 (_CmCreateDevicePanelWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x14059989C (_CmMapCmObjectTypeToPnpObjectType.c)
 */

__int64 (__fastcall *__fastcall CmRaiseCreateEvent(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4))(__int64, __int64, _QWORD, __int64, __int64 *)
{
  unsigned int v8; // eax
  __int64 v9; // rdx
  void (__fastcall *v10)(__int64, __int64, _QWORD, __int64, _QWORD *); // r10
  __int64 (__fastcall *result)(__int64, __int64, _QWORD, __int64, __int64 *); // rax
  __int64 v12; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v13[4]; // [rsp+40h] [rbp-28h] BYREF

  if ( *(_QWORD *)(a1 + 496) )
  {
    v13[0] = a4;
    v8 = CmMapCmObjectTypeToPnpObjectType(a3);
    v10(a1, v9, v8, 2LL, v13);
  }
  result = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64 *))(a1 + 512);
  if ( result )
  {
    v12 = a4;
    return (__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, __int64 *))result(a1, a2, a3, 2LL, &v12);
  }
  return result;
}
