/*
 * XREFs of PopFxRegisterDevice @ 0x140771EE0
 * Callers:
 *     PoFxRegisterDevice @ 0x140771C60 (PoFxRegisterDevice.c)
 *     PoFxEnableDStateReporting @ 0x1408A4EC0 (PoFxEnableDStateReporting.c)
 *     PoFxRegisterPrimaryDevice @ 0x1408A5070 (PoFxRegisterPrimaryDevice.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x1400889DC (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x1400ED890 (IoGetAttachedDeviceReferenceWithTag.c)
 *     PopFxInsertDevice @ 0x140191B10 (PopFxInsertDevice.c)
 *     PopFxAssignDeviceToDevNode @ 0x140191D54 (PopFxAssignDeviceToDevNode.c)
 *     PopFxBugCheck @ 0x1402F1DB0 (PopFxBugCheck.c)
 *     PopFxTraceDeviceRegistration @ 0x14071C29C (PopFxTraceDeviceRegistration.c)
 *     PopFxGenerateFriendlyName @ 0x14077204C (PopFxGenerateFriendlyName.c)
 *     PopFxRegisterDeviceWorker @ 0x1407722C0 (PopFxRegisterDeviceWorker.c)
 */

__int64 __fastcall PopFxRegisterDevice(
        PDEVICE_OBJECT DeviceObject,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  _QWORD *v8; // rdi
  _QWORD *DeviceAttachmentBaseRefWithTag; // r14
  PDEVICE_OBJECT AttachedDeviceReferenceWithTag; // rbp
  __int64 v14; // rsi
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v19; // [rsp+50h] [rbp-38h] BYREF

  v8 = 0LL;
  v19 = 0LL;
  DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag((__int64)DeviceObject, 0x78466F50u);
  if ( DeviceAttachmentBaseRefWithTag )
  {
    AttachedDeviceReferenceWithTag = IoGetAttachedDeviceReferenceWithTag(DeviceObject, 0x78466F50u);
    if ( AttachedDeviceReferenceWithTag )
    {
      v14 = *(_QWORD *)(DeviceAttachmentBaseRefWithTag[39] + 40LL);
      if ( v14 )
      {
        if ( (*(_DWORD *)(v14 + 296) & 1) != 0 )
        {
          v15 = PopFxRegisterDeviceWorker(
                  *(_QWORD *)(v14 + 128),
                  (int)v14 + 280,
                  a2,
                  a3,
                  a4,
                  a5,
                  AttachedDeviceReferenceWithTag->StackSize + 1,
                  a6,
                  (__int64)&v19);
          if ( v15 >= 0 )
          {
            v8 = v19;
            v19[6] = v14;
            if ( *(_QWORD *)(v14 + 80) )
              PopFxBugCheck(0x600uLL, *(_QWORD *)(v14 + 32), 0LL, 0LL);
            PopFxGenerateFriendlyName(v8, v14);
            PopFxAssignDeviceToDevNode(v14, (__int64)v8);
            ObfReferenceObjectWithTag(DeviceObject, 0x78466F50u);
            v8[12] = DeviceObject;
            v8[13] = AttachedDeviceReferenceWithTag;
            PopFxTraceDeviceRegistration((__int64)v8, 0);
            PopFxInsertDevice(v17, v16, v8);
            AttachedDeviceReferenceWithTag = 0LL;
            DeviceAttachmentBaseRefWithTag = 0LL;
            v15 = 0;
          }
        }
        else
        {
          v15 = -1073741661;
        }
      }
      else
      {
        v15 = -1073741811;
      }
      if ( AttachedDeviceReferenceWithTag )
        ObfDereferenceObjectWithTag(AttachedDeviceReferenceWithTag, 0x78466F50u);
    }
    else
    {
      v15 = -1073741811;
    }
    if ( DeviceAttachmentBaseRefWithTag )
      ObfDereferenceObjectWithTag(DeviceAttachmentBaseRefWithTag, 0x78466F50u);
  }
  else
  {
    v15 = -1073741811;
  }
  *a7 = v8;
  return (unsigned int)v15;
}
