/*
 * XREFs of PopFxRegisterDevice @ 0x140726430
 * Callers:
 *     PoFxRegisterDevice @ 0x140726800 (PoFxRegisterDevice.c)
 *     PoFxEnableDStateReporting @ 0x14086A290 (PoFxEnableDStateReporting.c)
 *     PoFxRegisterInternalDevice @ 0x14086A420 (PoFxRegisterInternalDevice.c)
 *     PoFxRegisterPrimaryDevice @ 0x14086A5B0 (PoFxRegisterPrimaryDevice.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140002E2C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x14000EAE8 (IoGetAttachedDeviceReferenceWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     PopFxInsertDevice @ 0x140179D68 (PopFxInsertDevice.c)
 *     PopFxAssignDeviceToDevNode @ 0x140179DFC (PopFxAssignDeviceToDevNode.c)
 *     PopFxBugCheck @ 0x1402D76B0 (PopFxBugCheck.c)
 *     PopFxTraceDeviceRegistration @ 0x1406DB5F4 (PopFxTraceDeviceRegistration.c)
 *     PopFxRegisterDeviceWorker @ 0x140725C58 (PopFxRegisterDeviceWorker.c)
 *     PopFxGenerateFriendlyName @ 0x1407265A0 (PopFxGenerateFriendlyName.c)
 */

__int64 __fastcall PopFxRegisterDevice(
        PDEVICE_OBJECT DeviceObject,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
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
  ULONG_PTR v19[2]; // [rsp+50h] [rbp-38h] BYREF

  v8 = 0LL;
  v19[0] = 0LL;
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
                  (const UNICODE_STRING *)(v14 + 280),
                  a2,
                  a3,
                  a4,
                  a5,
                  AttachedDeviceReferenceWithTag->StackSize + 1,
                  a6,
                  v19);
          if ( v15 >= 0 )
          {
            v8 = (_QWORD *)v19[0];
            *(_QWORD *)(v19[0] + 48) = v14;
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
