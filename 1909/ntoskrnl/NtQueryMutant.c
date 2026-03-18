/*
 * XREFs of NtQueryMutant @ 0x1409186B0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     KeQueryOwnerMutant @ 0x1402AB834 (KeQueryOwnerMutant.c)
 *     ProbeForWrite @ 0x1405F10D0 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtQueryMutant(
        HANDLE MutantHandle,
        MUTANT_INFORMATION_CLASS MutantInformationClass,
        PVOID MutantInformation,
        ULONG Length,
        PULONG ResultLength)
{
  bool v8; // zf
  KPROCESSOR_MODE PreviousMode; // r14
  PULONG v11; // rbx
  __int64 v12; // rcx
  int v13; // esi
  int v14; // r8d
  char v15; // al
  bool v16; // cl
  PVOID Object; // [rsp+30h] [rbp-38h] BYREF
  CLIENT_ID ClientId; // [rsp+38h] [rbp-30h] BYREF

  ClientId.UniqueProcess = 0LL;
  ClientId.UniqueThread = 0LL;
  if ( MutantInformationClass )
  {
    if ( MutantInformationClass != MutantOwnerInformation )
      return -1073741821;
    v8 = Length == 16;
  }
  else
  {
    v8 = Length == 8;
  }
  if ( !v8 )
    return -1073741820;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(MutantInformation, Length, 4u);
    v11 = ResultLength;
    if ( ResultLength )
    {
      v12 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)ResultLength < 0x7FFFFFFF0000LL )
        v12 = (__int64)ResultLength;
      *(_DWORD *)v12 = *(_DWORD *)v12;
    }
  }
  else
  {
    v11 = ResultLength;
  }
  v13 = ObReferenceObjectByHandle(MutantHandle, 1u, ExMutantObjectType, PreviousMode, &Object, 0LL);
  if ( v13 >= 0 )
  {
    if ( MutantInformationClass )
    {
      KeQueryOwnerMutant((PKMUTANT)Object, &ClientId);
      if ( PreviousMode )
      {
        *(CLIENT_ID *)MutantInformation = ClientId;
        if ( v11 )
          *v11 = 16;
      }
      else
      {
        *(CLIENT_ID *)MutantInformation = ClientId;
        if ( v11 )
          *v11 = 16;
      }
    }
    else
    {
      v14 = *((_DWORD *)Object + 1);
      v15 = *((_BYTE *)Object + 48) & 1;
      v16 = *((_QWORD *)Object + 5) == (_QWORD)KeGetCurrentThread();
      if ( PreviousMode )
      {
        *(_DWORD *)MutantInformation = v14;
        *((_BYTE *)MutantInformation + 4) = v16;
        *((_BYTE *)MutantInformation + 5) = v15;
        if ( v11 )
          *v11 = 8;
      }
      else
      {
        *(_DWORD *)MutantInformation = v14;
        *((_BYTE *)MutantInformation + 4) = v16;
        *((_BYTE *)MutantInformation + 5) = v15;
        if ( v11 )
          *v11 = 8;
      }
    }
    ObfDereferenceObject(Object);
  }
  return v13;
}
