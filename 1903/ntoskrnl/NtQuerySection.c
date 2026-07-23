/*
 * XREFs of NtQuerySection @ 0x14068CF50
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ProbeForWrite @ 0x1405F07E0 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     MmGetSectionInformation @ 0x14068D080 (MmGetSectionInformation.c)
 */

NTSTATUS __stdcall NtQuerySection(
        HANDLE SectionHandle,
        SECTION_INFORMATION_CLASS SectionInformationClass,
        PVOID SectionInformation,
        SIZE_T Length,
        PSIZE_T ResultLength)
{
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v10; // rcx
  SIZE_T v11; // rbx
  int v12; // edi
  __int64 v13; // rdx
  PVOID v14; // rsi
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(SectionInformation, Length, 4u);
    if ( ResultLength )
    {
      v10 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)ResultLength < 0x7FFFFFFF0000LL )
        v10 = (__int64)ResultLength;
      *(_QWORD *)v10 = *(_QWORD *)v10;
    }
  }
  if ( SectionInformationClass )
  {
    if ( SectionInformationClass == SectionImageInformation )
    {
      v11 = 64LL;
    }
    else
    {
      if ( SectionInformationClass != SectionRelocationInformation
        && SectionInformationClass != SectionOriginalBaseInformation )
      {
        return -1073741821;
      }
      v11 = 8LL;
    }
  }
  else
  {
    v11 = 24LL;
  }
  if ( Length < v11 )
    return -1073741820;
  v12 = ObReferenceObjectByHandle(SectionHandle, 1u, MmSectionObjectType, PreviousMode, &Object, 0LL);
  if ( v12 >= 0 )
  {
    v13 = (unsigned int)SectionInformationClass;
    v14 = Object;
    v12 = MmGetSectionInformation(Object, v13, SectionInformation);
    if ( v12 >= 0 )
    {
      if ( ResultLength )
        *ResultLength = v11;
    }
    ObfDereferenceObject(v14);
  }
  return v12;
}
