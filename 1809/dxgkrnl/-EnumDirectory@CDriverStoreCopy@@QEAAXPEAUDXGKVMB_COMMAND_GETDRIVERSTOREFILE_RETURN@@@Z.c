/*
 * XREFs of ?EnumDirectory@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1C0208B5C
 * Callers:
 *     ?VmBusGetDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01EFBB0 (-VmBusGetDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?ProcessNextDirectory@CDriverStoreCopy@@QEAAEPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1C0209258 (-ProcessNextDirectory@CDriverStoreCopy@@QEAAEPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z.c)
 * Callees:
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?RtlStringCbCatW@@YAJPEAG_KPEBG@Z @ 0x1C002EC00 (-RtlStringCbCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C002EC68 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?ProcessNextFile@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1C0209310 (-ProcessNextFile@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z.c)
 */

void __fastcall CDriverStoreCopy::EnumDirectory(
        CDriverStoreCopy *this,
        struct DXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN *a2)
{
  void **v2; // rsi
  PVOID PoolWithTag; // rax
  int v6; // eax
  int v7; // eax
  __int64 v8; // rdx
  NTSTATUS v9; // eax
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-58h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-38h] BYREF

  v2 = (void **)((char *)this + 16);
  if ( *((_QWORD *)this + 2) != -1LL )
    goto LABEL_13;
  if ( !*(_QWORD *)this )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, *((unsigned int *)this + 2), 0x4B677844u);
    *(_QWORD *)this = PoolWithTag;
    if ( !PoolWithTag )
    {
      *((_DWORD *)a2 + 4) = -1073741801;
      return;
    }
    memset(PoolWithTag, 0, *((unsigned int *)this + 2));
  }
  v6 = RtlStringCbCopyW((unsigned __int16 *)this + 272, 0x208uLL, (size_t *)((char *)a2 + 60));
  *((_DWORD *)a2 + 4) = v6;
  if ( v6 >= 0 )
  {
    v7 = RtlStringCbCopyW((unsigned __int16 *)this + 532, 0x208uLL, (size_t *)this + 3);
    *((_DWORD *)a2 + 4) = v7;
    if ( v7 >= 0 )
    {
      v9 = RtlStringCbCatW((unsigned __int16 *)this + 532, v8, (size_t *)((char *)a2 + 60));
      *((_DWORD *)a2 + 4) = v9;
      if ( v9 >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, (PCWSTR)this + 532);
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 64;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v10 = ZwOpenFile(v2, 0x100001u, &ObjectAttributes, &IoStatusBlock, 1u, 0x21u);
        *((_DWORD *)a2 + 4) = v10;
        if ( v10 < 0 )
        {
          v14 = WdLogNewEntry5_WdWarning(v12, v11, v13);
          *(_QWORD *)(v14 + 24) = *((int *)a2 + 4);
          WdLogEvent5_WdWarning(v14);
          if ( *((int *)a2 + 4) >= 0 )
            return;
          goto LABEL_11;
        }
LABEL_13:
        CDriverStoreCopy::ProcessNextFile(this, a2);
        return;
      }
    }
  }
LABEL_11:
  if ( *v2 != (void *)-1LL )
  {
    ZwClose(*v2);
    *v2 = (void *)-1LL;
  }
}
