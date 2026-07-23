/*
 * XREFs of PoThermalCounterSetCallback @ 0x14086D4E0
 * Callers:
 *     <none>
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140002E2C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     wcspbrk @ 0x140198210 (wcspbrk.c)
 *     PcwAddInstance @ 0x140692680 (PcwAddInstance.c)
 *     PopThermalReadCounters @ 0x14086D790 (PopThermalReadCounters.c)
 */

__int64 __fastcall PoThermalCounterSetCallback(int a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS Counters; // ebp
  char v4; // r15
  struct _PCW_BUFFER *v7; // r13
  PVOID *i; // rbx
  _QWORD *DeviceAttachmentBaseRefWithTag; // rax
  void *v10; // rdi
  __int64 v11; // rsi
  unsigned __int16 *v12; // rcx
  __int64 v13; // r8
  int v14; // edx
  int v15; // eax
  ULONG v16; // r8d
  struct _PCW_DATA Data; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v19[2]; // [rsp+40h] [rbp-48h] BYREF

  CurrentThread = KeGetCurrentThread();
  Counters = 0;
  v4 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
  if ( a1 == 2 )
  {
    v7 = (struct _PCW_BUFFER *)a2[3];
LABEL_6:
    v4 = 1;
    goto LABEL_7;
  }
  if ( a1 != 3 )
    goto LABEL_27;
  v7 = (struct _PCW_BUFFER *)a2[3];
  if ( wcspbrk(*(const wchar_t **)(a2[1] + 8LL), L"*?") )
    goto LABEL_6;
LABEL_7:
  for ( i = (PVOID *)PopThermal; i != &PopThermal; i = (PVOID *)*i )
  {
    if ( (*((_BYTE *)i + 65) & 2) != 0 )
    {
      DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag((__int64)i[6], 0x6D546F50u);
      v10 = DeviceAttachmentBaseRefWithTag;
      if ( DeviceAttachmentBaseRefWithTag )
        v11 = *(_QWORD *)(DeviceAttachmentBaseRefWithTag[39] + 40LL);
      else
        v11 = 0LL;
      if ( v11 )
      {
        if ( v4 )
          goto LABEL_19;
        v12 = *(unsigned __int16 **)(a2[1] + 8LL);
        v13 = *(_QWORD *)(v11 + 288) - (_QWORD)v12;
        do
        {
          v14 = *(unsigned __int16 *)((char *)v12 + v13);
          v15 = *v12 - v14;
          if ( v15 )
            break;
          ++v12;
        }
        while ( v14 );
        if ( !v15 )
        {
LABEL_19:
          v19[0] = 0LL;
          v19[1] = 0LL;
          if ( a1 == 3 )
          {
            Counters = PopThermalReadCounters(i, *a2, v19);
            if ( Counters < 0 )
            {
              ObfDereferenceObjectWithTag(v10, 0x6D546F50u);
              break;
            }
          }
          v16 = *((_DWORD *)i + 124);
          Data.Data = v19;
          Data.Size = 16;
          Counters = PcwAddInstance(v7, (PCUNICODE_STRING)(v11 + 280), v16, 1u, &Data);
        }
        ObfDereferenceObjectWithTag(v10, 0x6D546F50u);
        if ( Counters < 0 )
          break;
      }
      else
      {
        ObfDereferenceObjectWithTag(DeviceAttachmentBaseRefWithTag, 0x6D546F50u);
      }
    }
  }
LABEL_27:
  PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
  return (unsigned int)Counters;
}
