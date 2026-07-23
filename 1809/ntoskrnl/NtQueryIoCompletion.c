/*
 * XREFs of NtQueryIoCompletion @ 0x14081E400
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryIoCompletion(
        HANDLE IoCompletionHandle,
        IO_COMPLETION_INFORMATION_CLASS IoCompletionInformationClass,
        PVOID IoCompletionInformation,
        ULONG IoCompletionInformationLength,
        PULONG ResultLength)
{
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  PULONG v11; // rbx
  int v12; // esi
  int v13; // r14d
  PVOID Object; // [rsp+40h] [rbp-28h] BYREF

  if ( IoCompletionInformationClass )
    return -1073741821;
  if ( IoCompletionInformationLength != 4 )
    return -1073741820;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)IoCompletionInformation & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = 0x7FFFFFFF0000LL;
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoCompletionInformation < 0x7FFFFFFF0000LL )
      v10 = (__int64)IoCompletionInformation;
    *(_BYTE *)v10 = *(_BYTE *)v10;
    *(_BYTE *)(v10 + 3) = *(_BYTE *)(v10 + 3);
    v11 = ResultLength;
    if ( ResultLength )
    {
      if ( (unsigned __int64)ResultLength < 0x7FFFFFFF0000LL )
        v9 = (__int64)ResultLength;
      *(_DWORD *)v9 = *(_DWORD *)v9;
    }
  }
  else
  {
    v11 = ResultLength;
  }
  v12 = ObReferenceObjectByHandle(IoCompletionHandle, 1u, IoCompletionObjectType, PreviousMode, &Object, 0LL);
  if ( v12 >= 0 )
  {
    v13 = *((_DWORD *)Object + 1);
    ObfDereferenceObject(Object);
    if ( PreviousMode )
    {
      *(_DWORD *)IoCompletionInformation = v13;
      if ( v11 )
        *v11 = 4;
    }
    else
    {
      *(_DWORD *)IoCompletionInformation = v13;
      if ( v11 )
        *v11 = 4;
    }
  }
  return v12;
}
