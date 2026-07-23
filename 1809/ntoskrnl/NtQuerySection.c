/*
 * XREFs of NtQuerySection @ 0x1406B7380
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 *     MmGetSectionInformation @ 0x14066EA10 (MmGetSectionInformation.c)
 */

NTSTATUS __stdcall NtQuerySection(
        HANDLE SectionHandle,
        SECTION_INFORMATION_CLASS SectionInformationClass,
        PVOID SectionInformation,
        SIZE_T Length,
        PSIZE_T ResultLength)
{
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v9; // rcx
  SIZE_T v10; // rbx
  NTSTATUS v11; // edi
  SECTION_INFORMATION_CLASS v12; // edx
  PVOID v13; // rsi
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(SectionInformation, Length, 4u);
    if ( ResultLength )
    {
      v9 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)ResultLength < 0x7FFFFFFF0000LL )
        v9 = (__int64)ResultLength;
      *(_QWORD *)v9 = *(_QWORD *)v9;
    }
  }
  if ( SectionInformationClass )
  {
    if ( SectionInformationClass == SectionImageInformation )
    {
      v10 = 64LL;
    }
    else
    {
      if ( SectionInformationClass != SectionRelocationInformation
        && SectionInformationClass != SectionOriginalBaseInformation )
      {
        return -1073741821;
      }
      v10 = 8LL;
    }
  }
  else
  {
    v10 = 24LL;
  }
  if ( Length < v10 )
    return -1073741820;
  v11 = ObReferenceObjectByHandle(SectionHandle, 1u, MmSectionObjectType, PreviousMode, &Object, 0LL);
  if ( v11 >= 0 )
  {
    v12 = SectionInformationClass;
    v13 = Object;
    v11 = MmGetSectionInformation((__int64)Object, v12);
    if ( v11 >= 0 )
    {
      if ( ResultLength )
        *ResultLength = v10;
    }
    ObfDereferenceObject(v13);
  }
  return v11;
}
