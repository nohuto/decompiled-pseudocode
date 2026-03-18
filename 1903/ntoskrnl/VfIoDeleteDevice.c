/*
 * XREFs of VfIoDeleteDevice @ 0x140973760
 * Callers:
 *     IovDeleteDevice @ 0x14096333C (IovDeleteDevice.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     IovUtilMarkDeviceObject @ 0x140328AE8 (IovUtilMarkDeviceObject.c)
 *     VF_FIND_DEVICE_INFORMATION_AND_REMOVE @ 0x140967F20 (VF_FIND_DEVICE_INFORMATION_AND_REMOVE.c)
 *     VF_MARK_FOR_DEFERRED_REMOVE @ 0x1409680C0 (VF_MARK_FOR_DEFERRED_REMOVE.c)
 *     ViReleaseDmaAdapter @ 0x14096CE08 (ViReleaseDmaAdapter.c)
 *     ViDevObjRemove @ 0x140973968 (ViDevObjRemove.c)
 *     IovUtilGetLowerDeviceObjectWithTag @ 0x140974B20 (IovUtilGetLowerDeviceObjectWithTag.c)
 *     IovUtilIsDeviceObjectMarked @ 0x140974BCC (IovUtilIsDeviceObjectMarked.c)
 *     VfErrorReport9 @ 0x140975718 (VfErrorReport9.c)
 *     VfIrpLogDeleteDeviceLogs @ 0x1409809E0 (VfIrpLogDeleteDeviceLogs.c)
 */

__int64 __fastcall VfIoDeleteDevice(struct _LIST_ENTRY *BugCheckParameter2, __int64 a2)
{
  struct _LIST_ENTRY *v3; // rbx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *v6; // rax
  __int64 result; // rax
  __int64 v8; // rcx
  void *LowerDeviceObjectWithTag; // rdi

  v3 = BugCheckParameter2;
  if ( ViVerifyDma )
  {
    Blink = BugCheckParameter2[19].Blink;
    if ( !Blink )
      goto LABEL_17;
    do
    {
      Flink = Blink[3].Flink;
      if ( !Flink )
        break;
      Blink = Flink[19].Blink;
      BugCheckParameter2 = Flink;
    }
    while ( Blink );
    if ( BugCheckParameter2 == v3 )
    {
LABEL_17:
      while ( 1 )
      {
        v6 = VF_FIND_DEVICE_INFORMATION_AND_REMOVE(v3);
        if ( !v6 )
          break;
        ViReleaseDmaAdapter((ULONG_PTR)v6);
      }
    }
    else
    {
      VF_MARK_FOR_DEFERRED_REMOVE(BugCheckParameter2);
    }
  }
  result = (unsigned int)VfIoDisabled;
  if ( !VfIoDisabled )
  {
    ViDevObjRemove((ULONG_PTR)v3);
    if ( (unsigned int)IovUtilIsDeviceObjectMarked(v3, 0LL) )
      VfErrorReport9(576LL, a2);
    IovUtilMarkDeviceObject((__int64)v3, 0LL);
    LowerDeviceObjectWithTag = (void *)IovUtilGetLowerDeviceObjectWithTag(v8);
    if ( LowerDeviceObjectWithTag )
    {
      VfErrorReport9(513LL, a2);
      ObfDereferenceObjectWithTag(LowerDeviceObjectWithTag, 0x49667256u);
    }
    return VfIrpLogDeleteDeviceLogs(v3);
  }
  return result;
}
