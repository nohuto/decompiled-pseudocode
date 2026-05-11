/*
 * XREFs of USBDeviceStop @ 0x1C0029940
 * Callers:
 *     USBDeviceSurpriseRemove @ 0x1C0029A20 (USBDeviceSurpriseRemove.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00118E0 (_guard_dispatch_icall_nop.c)
 *     USBHwSubmitUrbToUsbdSynch @ 0x1C0029CE0 (USBHwSubmitUrbToUsbdSynch.c)
 *     USBHwStopAllMIDIPipes @ 0x1C002B648 (USBHwStopAllMIDIPipes.c)
 */

__int64 __fastcall USBDeviceStop(__int64 a1)
{
  __int64 v1; // rdi
  int v3; // ebx
  __int64 v4; // rbp
  struct _URB *PoolWithTag; // rax
  struct _URB *v6; // rdi
  __int64 v7; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  v4 = *(_QWORD *)(v1 + 72);
  if ( *(_QWORD *)(v4 + 192) == v4 + 192 || (v3 = USBHwStopAllMIDIPipes(), v3 >= 0) )
  {
    if ( !*(_BYTE *)(v1 + 67) )
    {
      v3 = -1073741670;
      PoolWithTag = (struct _URB *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x58uLL, 0x41627845u);
      v6 = PoolWithTag;
      if ( PoolWithTag )
      {
        *(_DWORD *)&PoolWithTag->UrbHeader.Length = 88;
        PoolWithTag->UrbSelectInterface.ConfigurationHandle = 0LL;
        v3 = USBHwSubmitUrbToUsbdSynch(*(PDEVICE_OBJECT *)(a1 + 40), PoolWithTag, 0LL);
        ExFreePool(v6);
      }
    }
  }
  v7 = *(_QWORD *)(v4 + 56);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD))(v7 + 24))(*(_QWORD *)(v7 + 8));
  return (unsigned int)v3;
}
