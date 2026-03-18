/*
 * XREFs of UsbhBusIf_SetClearRootPortResumeTime @ 0x1C0056B94
 * Callers:
 *     UsbhUnlinkPdoDeviceHandle @ 0x1C0009148 (UsbhUnlinkPdoDeviceHandle.c)
 *     UsbhSetupDevice @ 0x1C0021740 (UsbhSetupDevice.c)
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall UsbhBusIf_SetClearRootPortResumeTime(
        __int64 a1,
        __int64 a2,
        char a3,
        char a4))(_QWORD, __int64, __int64, __int64)
{
  _DWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 (__fastcall *result)(_QWORD, __int64, __int64, __int64); // rax

  v8 = FdoExt(a1);
  Log(a1, 4, 1968390994, (__int64)(v8 + 1056), 0LL);
  result = *(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(v11 + 4544);
  if ( result )
  {
    LOBYTE(v10) = a4;
    LOBYTE(v9) = a3;
    return (__int64 (__fastcall *)(_QWORD, __int64, __int64, __int64))result(*(_QWORD *)(v11 + 4232), a2, v9, v10);
  }
  return result;
}
