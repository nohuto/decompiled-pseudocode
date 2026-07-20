/*
 * XREFs of SmpCheckFolderForRedirections @ 0x14000D9F4
 * Callers:
 *     SmpRenameTargetFile @ 0x140015B24 (SmpRenameTargetFile.c)
 *     SmpShuffleMove @ 0x140015F90 (SmpShuffleMove.c)
 *     SmpTryOverwriteReadonlyFile @ 0x140016238 (SmpTryOverwriteReadonlyFile.c)
 * Callees:
 *     SmpPathCanBeTrustedIsNotARedirection @ 0x14000DDC4 (SmpPathCanBeTrustedIsNotARedirection.c)
 *     GetFileAttributesW @ 0x14000EA04 (GetFileAttributesW.c)
 *     memcpy_0 @ 0x1400101D7 (memcpy_0.c)
 *     SmpOpenTargetFile @ 0x1400159DC (SmpOpenTargetFile.c)
 */

char __fastcall SmpCheckFolderForRedirections(unsigned __int16 *a1, HANDLE *a2)
{
  char IsNotARedirection; // si
  int FileAttributesW; // eax
  unsigned __int8 v6; // r14
  __int64 v7; // rbx
  PWSTR Buffer; // rcx
  __int64 v9; // r15
  PWSTR v10; // rdx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp+30h] BYREF

  Handle = (HANDLE)-1LL;
  IsNotARedirection = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( *a1 < 0xEu )
    goto LABEL_18;
  FileAttributesW = GetFileAttributesW(*((PCWSTR *)a1 + 1));
  if ( FileAttributesW == -1 )
  {
LABEL_5:
    v6 = 0;
    goto LABEL_6;
  }
  if ( (FileAttributesW & 0x400) != 0 )
  {
LABEL_18:
    Buffer = DestinationString.Buffer;
    goto LABEL_19;
  }
  v6 = 1;
  if ( (FileAttributesW & 0x10) == 0 )
    goto LABEL_5;
LABEL_6:
  v7 = (*a1 >> 1) - 1;
  if ( !v6 )
  {
    if ( *a1 >> 1 == 1 )
      goto LABEL_18;
    do
    {
      if ( *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * v7) == 92 )
        break;
      v7 = (unsigned int)(v7 - 1);
    }
    while ( (_DWORD)v7 );
    if ( !(_DWORD)v7 )
      goto LABEL_18;
  }
  DestinationString.Buffer = (PWSTR)RtlAllocateHeap(
                                      *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                                      SmBaseTag,
                                      2LL * (unsigned int)(v7 + 3));
  Buffer = DestinationString.Buffer;
  if ( DestinationString.Buffer )
  {
    v9 = (unsigned int)(v7 + 1);
    memcpy_0(DestinationString.Buffer, *((const void **)a1 + 1), 2 * v9);
    v10 = DestinationString.Buffer;
    DestinationString.Length = 2 * v7 + 2;
    DestinationString.MaximumLength = 2 * v7 + 4;
    if ( v6 && DestinationString.Buffer[v7] != 92 )
    {
      DestinationString.Buffer[v9] = 92;
      LODWORD(v7) = v7 + 1;
      ++DestinationString.Length;
      ++DestinationString.MaximumLength;
      v10 = DestinationString.Buffer;
    }
    v10[(unsigned int)(v7 + 1)] = 0;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( (int)SmpOpenTargetFile(&Handle, 0x100080u, &ObjectAttributes, (unsigned int)v6 + 2) >= 0 )
    {
      IsNotARedirection = SmpPathCanBeTrustedIsNotARedirection(Handle);
      if ( IsNotARedirection )
      {
        *a2 = Handle;
        goto LABEL_21;
      }
    }
    goto LABEL_18;
  }
LABEL_19:
  if ( Handle == (HANDLE)-1LL )
    goto LABEL_22;
  NtClose(Handle);
LABEL_21:
  Buffer = DestinationString.Buffer;
LABEL_22:
  if ( Buffer )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, DestinationString.Buffer);
  return IsNotARedirection;
}
