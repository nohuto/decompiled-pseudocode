/*
 * XREFs of PiUEventGetDeviceInstanceIdFromUserHandle @ 0x140701988
 * Callers:
 *     PiUEventHandleRegistration @ 0x140656DA4 (PiUEventHandleRegistration.c)
 * Callees:
 *     PnpGetRelatedTargetDevice @ 0x14000E8D0 (PnpGetRelatedTargetDevice.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     PsIsProcessAppContainer @ 0x1406B9488 (PsIsProcessAppContainer.c)
 */

__int64 __fastcall PiUEventGetDeviceInstanceIdFromUserHandle(void *a1, _QWORD *a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS v7; // ebx
  int RelatedTargetDevice; // eax
  __int64 v9; // rcx
  bool IsProcessAppContainer; // al
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  *a3 = 0LL;
  PreviousMode = CurrentThread->PreviousMode;
  v12 = 0LL;
  v7 = ObReferenceObjectByHandle(a1, 0, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &Object, 0LL);
  if ( v7 >= 0 )
  {
    RelatedTargetDevice = PnpGetRelatedTargetDevice((PFILE_OBJECT)Object, &v12);
    v9 = v12;
    v7 = RelatedTargetDevice;
    if ( RelatedTargetDevice >= 0 )
    {
      *a2 = v12 + 40;
      IsProcessAppContainer = PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process);
      v9 = v12;
      if ( IsProcessAppContainer )
        *a3 = *(_QWORD *)(v12 + 32);
    }
    if ( v9 )
      ObfDereferenceObject(*(PVOID *)(v9 + 32));
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)v7;
}
