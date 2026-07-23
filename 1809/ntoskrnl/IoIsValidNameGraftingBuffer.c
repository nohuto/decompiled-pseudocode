/*
 * XREFs of IoIsValidNameGraftingBuffer @ 0x14081E930
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenSymbolicLinkObject @ 0x1401BA7D0 (ZwOpenSymbolicLinkObject.c)
 *     ZwQuerySymbolicLinkObject @ 0x1401BADD0 (ZwQuerySymbolicLinkObject.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

BOOLEAN __stdcall IoIsValidNameGraftingBuffer(PIRP Irp, PREPARSE_DATA_BUFFER ReparseBuffer)
{
  ULONG Length; // edx
  USHORT SubstituteNameLength; // ax
  WCHAR v5; // cx
  wchar_t *PoolWithTag; // rax
  wchar_t *v7; // r14
  NTSTATUS v9; // ebx
  USHORT v10; // ax
  WCHAR v11; // cx
  __int16 v12; // ax
  HANDLE LinkHandle; // [rsp+28h] [rbp-39h] BYREF
  UNICODE_STRING LinkTarget; // [rsp+30h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-11h] BYREF
  WCHAR SourceString[16]; // [rsp+80h] [rbp+1Fh] BYREF

  Length = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  if ( Length
    && Length < ReparseBuffer->SymbolicLinkReparseBuffer.SubstituteNameLength
              + (unsigned int)ReparseBuffer->SymbolicLinkReparseBuffer.PrintNameLength
              + 20 )
  {
    return 0;
  }
  SubstituteNameLength = ReparseBuffer->SymbolicLinkReparseBuffer.SubstituteNameLength;
  if ( SubstituteNameLength > 6u
    && ReparseBuffer->MountPointReparseBuffer.PathBuffer[0] == 92
    && *((_WORD *)&ReparseBuffer->GenericReparseBuffer + 5) == 92 )
  {
    v5 = ReparseBuffer->SymbolicLinkReparseBuffer.PathBuffer[0];
    if ( v5 != 46 && v5 != 63 )
      return 0;
  }
  if ( SubstituteNameLength > 0x10u
    && ReparseBuffer->MountPointReparseBuffer.PathBuffer[0] == 92
    && *((_WORD *)&ReparseBuffer->GenericReparseBuffer + 5) == 63
    && ReparseBuffer->SymbolicLinkReparseBuffer.PathBuffer[0] == 63
    && *((_WORD *)&ReparseBuffer->GenericReparseBuffer + 7) == 92
    && LOWORD(ReparseBuffer[1].ReparseTag) == 85
    && HIWORD(ReparseBuffer[1].ReparseTag) == 78
    && ReparseBuffer[1].ReparseDataLength == 67
    && ReparseBuffer[1].Reserved == 92 )
  {
    return 0;
  }
  if ( SubstituteNameLength > 0xCu
    && ReparseBuffer->MountPointReparseBuffer.PathBuffer[0] == 92
    && *((_WORD *)&ReparseBuffer->GenericReparseBuffer + 5) == 63
    && ReparseBuffer->SymbolicLinkReparseBuffer.PathBuffer[0] == 63
    && *((_WORD *)&ReparseBuffer->GenericReparseBuffer + 7) == 92
    && HIWORD(ReparseBuffer[1].ReparseTag) == 58 )
  {
    *(_OWORD *)SourceString = *(_OWORD *)L"\\??\\C:";
    RtlInitUnicodeString(&DestinationString, SourceString);
    DestinationString.Buffer[4] = ReparseBuffer[1].ReparseTag;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes) >= 0 )
    {
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x208uLL, 0x20206F49u);
      v7 = PoolWithTag;
      if ( !PoolWithTag )
      {
        ZwClose(LinkHandle);
        return 0;
      }
      LinkTarget.Buffer = PoolWithTag;
      *(_DWORD *)&LinkTarget.Length = 34078720;
      v9 = ZwQuerySymbolicLinkObject(LinkHandle, &LinkTarget, 0LL);
      ZwClose(LinkHandle);
      if ( v9 >= 0
        && *LinkTarget.Buffer == 92
        && LinkTarget.Buffer[1] == 68
        && LinkTarget.Buffer[2] == 101
        && LinkTarget.Buffer[3] == 118
        && LinkTarget.Buffer[4] == 105
        && LinkTarget.Buffer[5] == 99
        && LinkTarget.Buffer[6] == 101
        && LinkTarget.Buffer[7] == 92
        && LinkTarget.Buffer[8] == 76
        && LinkTarget.Buffer[9] == 97
        && LinkTarget.Buffer[10] == 110
        && LinkTarget.Buffer[14] == 82
        && LinkTarget.Buffer[15] == 101
        && LinkTarget.Buffer[16] == 100
        && LinkTarget.Buffer[17] == 105
        && LinkTarget.Buffer[18] == 114
        && LinkTarget.Buffer[23] == 114
        && LinkTarget.Buffer[24] == 92 )
      {
        ExFreePoolWithTag(v7, 0);
        return 0;
      }
      ExFreePoolWithTag(v7, 0);
    }
  }
  v10 = ReparseBuffer->SymbolicLinkReparseBuffer.SubstituteNameLength;
  if ( v10 < 0xCu )
    return 0;
  v11 = ReparseBuffer->MountPointReparseBuffer.PathBuffer[0];
  if ( v11 != 92
    || *((_WORD *)&ReparseBuffer->GenericReparseBuffer + 5) != 63
    || ReparseBuffer->SymbolicLinkReparseBuffer.PathBuffer[0] != 63
    || *((_WORD *)&ReparseBuffer->GenericReparseBuffer + 7) != 92
    || HIWORD(ReparseBuffer[1].ReparseTag) != 58 )
  {
    if ( v10 != 96 && (v10 != 98 || ReparseBuffer[4].MountPointReparseBuffer.PathBuffer[0] != 92) )
      return 0;
    if ( v11 != 92 )
      return 0;
    v12 = *((_WORD *)&ReparseBuffer->GenericReparseBuffer + 5);
    if ( v12 != 63 && v12 != 92 )
      return 0;
    if ( ReparseBuffer->SymbolicLinkReparseBuffer.PathBuffer[0] != 63
      || *((_WORD *)&ReparseBuffer->GenericReparseBuffer + 7) != 92
      || LOWORD(ReparseBuffer[1].ReparseTag) != 86
      || HIWORD(ReparseBuffer[1].ReparseTag) != 111
      || ReparseBuffer[1].ReparseDataLength != 108
      || ReparseBuffer[1].Reserved != 117
      || ReparseBuffer[1].SymbolicLinkReparseBuffer.SubstituteNameOffset != 109
      || ReparseBuffer[1].SymbolicLinkReparseBuffer.SubstituteNameLength != 101
      || ReparseBuffer[1].SymbolicLinkReparseBuffer.PrintNameOffset != 123
      || ReparseBuffer[2].Reserved != 45
      || ReparseBuffer[2].MountPointReparseBuffer.PathBuffer[0] != 45
      || HIWORD(ReparseBuffer[3].ReparseTag) != 45
      || ReparseBuffer[3].SymbolicLinkReparseBuffer.PrintNameOffset != 45
      || ReparseBuffer[4].SymbolicLinkReparseBuffer.PrintNameLength != 125 )
    {
      return 0;
    }
  }
  return 1;
}
