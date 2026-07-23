/*
 * XREFs of FsRtlQueryOpen @ 0x1408160BC
 * Callers:
 *     IopQueryInformation @ 0x1406990D0 (IopQueryInformation.c)
 * Callees:
 *     FsFilterCtrlFree @ 0x14001C628 (FsFilterCtrlFree.c)
 *     FsFilterPerformCompletionCallbacks @ 0x14001C650 (FsFilterPerformCompletionCallbacks.c)
 *     FsFilterPerformCallbacks @ 0x14001C6E0 (FsFilterPerformCallbacks.c)
 *     FsFilterCtrlInit @ 0x14001C9B0 (FsFilterCtrlInit.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     IoGetAttachedDevice @ 0x1400B9190 (IoGetAttachedDevice.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 __fastcall FsRtlQueryOpen(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  PDEVICE_OBJECT AttachedDevice; // rax
  __int64 v9; // r9
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v12; // eax
  int v13; // ebx
  int v14; // [rsp+30h] [rbp-278h] BYREF
  _BYTE v15[24]; // [rsp+38h] [rbp-270h] BYREF
  __int64 v16; // [rsp+50h] [rbp-258h]
  __int64 v17; // [rsp+58h] [rbp-250h]
  __int64 v18; // [rsp+60h] [rbp-248h]
  int v19; // [rsp+68h] [rbp-240h]
  __int16 v20; // [rsp+82h] [rbp-226h]

  AttachedDevice = IoGetAttachedDevice(a1);
  result = FsFilterCtrlInit(
             (__int64)v15,
             249,
             (__int64)AttachedDevice,
             v9,
             *(_QWORD *)(*(_QWORD *)(a2 + 184) - 24LL),
             1u);
  if ( (int)result >= 0 )
  {
    v19 = a5;
    v16 = a2;
    v17 = a3;
    v18 = a4;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v12 = FsFilterPerformCallbacks((__int64)v15, 1, 1, &v14);
    v13 = v12;
    if ( v20 )
      v13 = FsFilterPerformCompletionCallbacks((__int64)v15, v12);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    FsFilterCtrlFree((__int64)v15);
    if ( v13 >= 0 && (v14 & 2) == 0 )
      return (unsigned int)-1073741822;
    return (unsigned int)v13;
  }
  return result;
}
