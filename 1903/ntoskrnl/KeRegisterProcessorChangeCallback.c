/*
 * XREFs of KeRegisterProcessorChangeCallback @ 0x14077FB60
 * Callers:
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ExAcquireFastMutex @ 0x14003E460 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F810 (KeReleaseGuardedMutex.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     ExRegisterCallback @ 0x14017EA40 (ExRegisterCallback.c)
 *     ExUnregisterCallback @ 0x1401810E0 (ExUnregisterCallback.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     ExCreateCallback @ 0x1406E9C40 (ExCreateCallback.c)
 */

PVOID __stdcall KeRegisterProcessorChangeCallback(
        PPROCESSOR_CALLBACK_FUNCTION CallbackFunction,
        PVOID CallbackContext,
        ULONG Flags)
{
  char v5; // di
  unsigned int v6; // ebx
  PVOID v7; // rsi
  unsigned int v9; // r15d
  __int64 *v10; // r12
  unsigned int v11; // edi
  __int64 *v12; // r14
  __int64 v13; // rcx
  int v14; // eax
  PVOID v15; // rsi
  __int64 v16; // rcx
  NTSTATUS v17; // [rsp+20h] [rbp-59h] BYREF
  PCALLBACK_OBJECT CallbackObject; // [rsp+28h] [rbp-51h] BYREF
  PVOID v19; // [rsp+30h] [rbp-49h]
  PVOID v20; // [rsp+38h] [rbp-41h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-29h] BYREF
  __int64 v23; // [rsp+80h] [rbp+7h] BYREF
  __int64 v24; // [rsp+88h] [rbp+Fh]
  int v25; // [rsp+90h] [rbp+17h] BYREF

  v19 = CallbackContext;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0;
  v5 = Flags;
  v6 = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  RtlInitUnicodeString(&DestinationString, L"\\Callback\\ProcessorAdd");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v17 = ExCreateCallback(&CallbackObject, &ObjectAttributes, 0, 0);
  if ( v17 >= 0 )
  {
    ExAcquireFastMutex(&KiDynamicProcessorLock);
    v7 = ExRegisterCallback(CallbackObject, (PCALLBACK_FUNCTION)CallbackFunction, CallbackContext);
    v20 = v7;
    ObfDereferenceObject(CallbackObject);
    if ( !v7 || (v5 & 1) == 0 )
    {
LABEL_4:
      KeReleaseGuardedMutex(&KiDynamicProcessorLock);
      return v7;
    }
    v9 = KeNumberProcessors_0;
    v10 = KiProcessorBlock;
    v11 = 0;
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      v12 = KiProcessorBlock;
      while ( 1 )
      {
        v13 = *v12;
        HIDWORD(v23) = v11;
        WORD2(v24) = *(unsigned __int8 *)(v13 + 208);
        BYTE6(v24) = *(_BYTE *)(v13 + 209);
        LODWORD(v24) = 0;
        HalGetProcessorIdByNtNumber(v11, &v25);
        LODWORD(v23) = 0;
        v17 = 0;
        ((void (__fastcall *)(PVOID, __int64 *, NTSTATUS *))CallbackFunction)(v19, &v23, &v17);
        v14 = v17;
        if ( v17 < 0 )
          break;
        ++v11;
        ++v12;
        if ( v11 >= v9 )
          goto LABEL_9;
      }
    }
    else
    {
      v14 = v17;
LABEL_9:
      if ( v14 >= 0 )
      {
        LODWORD(v23) = 1;
        goto LABEL_11;
      }
    }
    LODWORD(v23) = 2;
    ExUnregisterCallback(v7);
    v14 = v17;
    v7 = 0LL;
    v20 = 0LL;
LABEL_11:
    LODWORD(v24) = v14;
    if ( v11 )
    {
      v15 = v19;
      do
      {
        v16 = *v10;
        HIDWORD(v23) = v6;
        WORD2(v24) = *(unsigned __int8 *)(v16 + 208);
        BYTE6(v24) = *(_BYTE *)(v16 + 209);
        HalGetProcessorIdByNtNumber(v6, &v25);
        ((void (__fastcall *)(PVOID, __int64 *, NTSTATUS *))CallbackFunction)(v15, &v23, &v17);
        ++v6;
        ++v10;
      }
      while ( v6 < v11 );
      v7 = v20;
    }
    goto LABEL_4;
  }
  return 0LL;
}
