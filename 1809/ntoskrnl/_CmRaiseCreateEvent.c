/*
 * XREFs of _CmRaiseCreateEvent @ 0x1406FE840
 * Callers:
 *     _CmCreateDeviceContainerWorker @ 0x1406EB258 (_CmCreateDeviceContainerWorker.c)
 *     _CmCreateDeviceWorker @ 0x1406FE798 (_CmCreateDeviceWorker.c)
 *     _CmCreateDeviceInterfaceWorker @ 0x140705A3C (_CmCreateDeviceInterfaceWorker.c)
 *     _CmCreateInterfaceClassWorker @ 0x140705CC8 (_CmCreateInterfaceClassWorker.c)
 *     _CmCreateInstallerClassWorker @ 0x1408F74C0 (_CmCreateInstallerClassWorker.c)
 *     _CmCreateDevicePanelWorker @ 0x1408FC7F8 (_CmCreateDevicePanelWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x14059A89C (_CmMapCmObjectTypeToPnpObjectType.c)
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
