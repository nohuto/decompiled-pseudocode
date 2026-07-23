/*
 * XREFs of PspIoRateEntryActivate @ 0x1405B32E4
 * Callers:
 *     PspSetJobIoRateControl @ 0x1405B30A0 (PspSetJobIoRateControl.c)
 *     PspSetJobIoRateControlForVolume @ 0x1408C8164 (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     IoStartIoRateControl @ 0x140001470 (IoStartIoRateControl.c)
 *     IoStopIoRateControl @ 0x1400016DC (IoStopIoRateControl.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     IoStartDiskIoAttributionForContext @ 0x1400E6DE8 (IoStartDiskIoAttributionForContext.c)
 *     IoDiskIoAttributionDereference @ 0x1400E73A8 (IoDiskIoAttributionDereference.c)
 *     IoStopDiskIoAttributionForContext @ 0x1400E778C (IoStopDiskIoAttributionForContext.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwCreateFile @ 0x1401C0B70 (ZwCreateFile.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PspIoRateEntryDeactivate @ 0x1405B33F0 (PspIoRateEntryDeactivate.c)
 *     IoDiskIoAttributionAllocate @ 0x140697774 (IoDiskIoAttributionAllocate.c)
 */

__int64 __fastcall PspIoRateEntryActivate(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  int v8; // edx
  _RTL_BALANCED_NODE *v9; // rbx
  __int64 v10; // r8
  int started; // esi
  __int64 v12; // rdi
  _RTL_BALANCED_NODE *v14; // rax
  __int64 v15; // [rsp+60h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-1h] BYREF
  __int64 v19; // [rsp+100h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+108h] [rbp+7Fh] BYREF

  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v8 = 0;
  v19 = 0LL;
  v9 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  Handle = 0LL;
  if ( a4 )
    *a4 = 0;
  if ( *(_QWORD *)(a3 + 24) )
  {
    RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(a3 + 24));
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    started = ZwCreateFile(&Handle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 7u, 1u, 0x20u, 0LL, 0);
    if ( started < 0 )
      goto LABEL_13;
    v14 = (_RTL_BALANCED_NODE *)IoDiskIoAttributionAllocate(a2, *(_QWORD *)(a2 + 1336));
    v9 = v14;
    if ( !v14 )
    {
      started = -1073741670;
      goto LABEL_13;
    }
    IoStartDiskIoAttributionForContext(v14);
    v8 = (int)Handle;
    v10 = (__int64)v9;
  }
  else
  {
    v10 = *(_QWORD *)(a2 + 1336);
  }
  started = IoStartIoRateControl(a3, v8, v10, (__int64)&v19, (__int64)&v15);
  if ( started < 0 )
  {
    v12 = v19;
  }
  else
  {
    if ( *(_QWORD *)(a1 + 40) )
    {
      PspIoRateEntryDeactivate(a1);
      *a4 = 1;
    }
    *(_QWORD *)(a1 + 40) = v19;
    *(_QWORD *)(a1 + 24) = v15;
    *(_QWORD *)(a1 + 48) = v9;
    v9 = 0LL;
    _InterlockedExchange64((volatile __int64 *)(a1 + 32), 0LL);
    v12 = 0LL;
    started = 0;
  }
  if ( v9 )
  {
    IoStopDiskIoAttributionForContext(v9);
    IoDiskIoAttributionDereference((__int64)v9);
  }
  if ( v12 )
    IoStopIoRateControl(v12);
LABEL_13:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)started;
}
