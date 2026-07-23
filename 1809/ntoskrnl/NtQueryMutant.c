/*
 * XREFs of NtQueryMutant @ 0x1408DC180
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KeQueryOwnerMutant @ 0x140295394 (KeQueryOwnerMutant.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 */

NTSTATUS __stdcall NtQueryMutant(
        HANDLE MutantHandle,
        MUTANT_INFORMATION_CLASS MutantInformationClass,
        PVOID MutantInformation,
        ULONG Length,
        PULONG ResultLength)
{
  KPROCESSOR_MODE PreviousMode; // r14
  PULONG v10; // rbx
  __int64 v11; // rcx
  int v12; // esi
  int v13; // eax
  char v14; // r8
  bool v15; // cl
  PVOID Object; // [rsp+30h] [rbp-38h] BYREF
  CLIENT_ID ClientId; // [rsp+38h] [rbp-30h] BYREF

  if ( MutantInformationClass == MutantBasicInformation )
  {
    if ( Length == 8 )
      goto LABEL_7;
    return -1073741820;
  }
  if ( MutantInformationClass != MutantOwnerInformation )
    return -1073741821;
  if ( Length != 16 )
    return -1073741820;
LABEL_7:
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(MutantInformation, Length, 4u);
    v10 = ResultLength;
    if ( ResultLength )
    {
      v11 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)ResultLength < 0x7FFFFFFF0000LL )
        v11 = (__int64)ResultLength;
      *(_DWORD *)v11 = *(_DWORD *)v11;
    }
  }
  else
  {
    v10 = ResultLength;
  }
  v12 = ObReferenceObjectByHandle(MutantHandle, 1u, ExMutantObjectType, PreviousMode, &Object, 0LL);
  if ( v12 >= 0 )
  {
    if ( MutantInformationClass )
    {
      KeQueryOwnerMutant((PKMUTANT)Object, &ClientId);
      if ( PreviousMode )
      {
        *(CLIENT_ID *)MutantInformation = ClientId;
        if ( v10 )
          *v10 = 16;
      }
      else
      {
        *(CLIENT_ID *)MutantInformation = ClientId;
        if ( v10 )
          *v10 = 16;
      }
    }
    else
    {
      v13 = *((_DWORD *)Object + 1);
      v14 = *((_BYTE *)Object + 48);
      v15 = *((_QWORD *)Object + 5) == (_QWORD)KeGetCurrentThread();
      if ( PreviousMode )
      {
        *(_DWORD *)MutantInformation = v13;
        *((_BYTE *)MutantInformation + 4) = v15;
        *((_BYTE *)MutantInformation + 5) = v14;
        if ( v10 )
          *v10 = 8;
      }
      else
      {
        *(_DWORD *)MutantInformation = v13;
        *((_BYTE *)MutantInformation + 4) = v15;
        *((_BYTE *)MutantInformation + 5) = v14;
        if ( v10 )
          *v10 = 8;
      }
    }
    ObfDereferenceObject(Object);
  }
  return v12;
}
