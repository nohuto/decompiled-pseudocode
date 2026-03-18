/*
 * XREFs of Usbh_HubRestoreDevice @ 0x1C0008AD4
 * Callers:
 *     UsbhSyncResetDeviceInternal @ 0x1C000873C (UsbhSyncResetDeviceInternal.c)
 * Callees:
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C002B480 (_guard_dispatch_icall_nop.c)
 *     Usbh_HubGetUsbDescriptors @ 0x1C004941C (Usbh_HubGetUsbDescriptors.c)
 */

__int64 __fastcall Usbh_HubRestoreDevice(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  _QWORD *PoolWithTag; // rax
  void *v10; // rbx
  int v11; // [rsp+30h] [rbp-18h] BYREF
  int v12; // [rsp+34h] [rbp-14h] BYREF

  if ( (*(_DWORD *)(PdoExt(a2) + 1432) & 0x4000) != 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x1BuLL, 0x42554855u);
    v10 = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = 0LL;
      PoolWithTag[1] = 0LL;
      PoolWithTag[2] = 0LL;
      *((_WORD *)PoolWithTag + 12) = 0;
      *((_BYTE *)PoolWithTag + 26) = 0;
      v12 = 18;
      v11 = 9;
      Usbh_HubGetUsbDescriptors(
        a1,
        a4,
        (_DWORD)PoolWithTag,
        (unsigned int)&v12,
        (__int64)PoolWithTag + 18,
        (__int64)&v11);
      ExFreePoolWithTag(v10, 0);
    }
  }
  v7 = FdoExt(a1);
  if ( *(_QWORD *)(v7 + 4288) )
    return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(v7 + 4288))(*(_QWORD *)(v7 + 4232), a3, a4);
  else
    return 3221225474LL;
}
