/*
 * XREFs of sub_180071730 @ 0x180071730
 * Callers:
 *     sub_1800711E8 @ 0x1800711E8 (sub_1800711E8.c)
 * Callees:
 *     RtlReleaseRelativeName @ 0x180025F30 (RtlReleaseRelativeName.c)
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x180029320 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     DbgPrintEx @ 0x180052780 (DbgPrintEx.c)
 *     sub_18006D6B8 @ 0x18006D6B8 (sub_18006D6B8.c)
 *     RtlDeleteBoundaryDescriptor @ 0x18006D6E0 (RtlDeleteBoundaryDescriptor.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenFile @ 0x18009CD40 (ZwOpenFile.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

__int64 __fastcall sub_180071730(
        __int64 a1,
        const void **a2,
        unsigned __int16 *a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        HANDLE *a7)
{
  _OBJECT_BOUNDARY_DESCRIPTOR *v7; // rbx
  unsigned int v11; // edx
  __int64 v12; // r8
  _WORD *v13; // rax
  unsigned __int64 v14; // rcx
  SIZE_T v15; // r14
  _WORD *v16; // rsi
  const void **v17; // rcx
  unsigned __int16 v18; // si
  HANDLE ContainingDirectory; // rax
  NTSTATUS v20; // edi
  HANDLE *v21; // rcx
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  PVOID v25; // rax
  unsigned __int8 v26; // [rsp+60h] [rbp-A0h]
  HANDLE FileHandle; // [rsp+68h] [rbp-98h] BYREF
  const void **v28; // [rsp+70h] [rbp-90h]
  PVOID BaseAddress; // [rsp+78h] [rbp-88h]
  _UNICODE_STRING NtFileName; // [rsp+80h] [rbp-80h] BYREF
  _OBJECT_BOUNDARY_DESCRIPTOR *v31; // [rsp+98h] [rbp-68h]
  HANDLE *v32; // [rsp+A0h] [rbp-60h]
  _RTL_RELATIVE_NAME_U RelativeName; // [rsp+A8h] [rbp-58h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C8h] [rbp-38h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+F8h] [rbp-8h] BYREF
  WCHAR DosFileName[264]; // [rsp+110h] [rbp+10h] BYREF

  v7 = 0LL;
  v28 = (const void **)a3;
  v32 = a7;
  v31 = 0LL;
  v26 = 0;
  *(_QWORD *)&NtFileName.Length = 0LL;
  NtFileName.Buffer = 0LL;
  BaseAddress = 0LL;
  FileHandle = 0LL;
  if ( a6 )
    *a6 = 0LL;
  if ( a7 )
    *a7 = 0LL;
  if ( !a2 || !a3 || !a4 || !a5 || !a6 || !a7 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() bad parameters\n"
      "SXS:  Flags:               0x%lx\n"
      "SXS:  Root:                %p\n"
      "SXS:  AssemblyDirectory:   %p\n"
      "SXS:  PreAllocatedString:  %p\n"
      "SXS:  DynamicString:       %p\n"
      "SXS:  StringUsed:          %p\n"
      "SXS:  OpenDirectoryHandle: %p\n",
      "RtlpProbeAssemblyStorageRootForAssembly",
      0,
      a2,
      a3,
      (const void *)a4,
      (const void *)a5,
      a6,
      a7);
    v20 = -1073741811;
    goto LABEL_25;
  }
  v11 = *(unsigned __int16 *)a2;
  v12 = v11;
  if ( (_WORD)v11 )
  {
    v13 = a2[1];
    v14 = (unsigned __int64)v11 >> 1;
    if ( v13[v14 - 1] != 92 && v13[v14 - 1] != 47 )
    {
      v26 = 1;
      v12 = v11 + 2LL;
    }
  }
  v15 = v12 + *a3 + 4LL;
  if ( v15 > 0xFFFE )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: Assembly storage resolution failing probe because combined path length does not fit in an UNICODE_STRING.\n");
    v20 = -1073741562;
  }
  else
  {
    if ( v15 > 0x208 )
    {
      v31 = (_OBJECT_BOUNDARY_DESCRIPTOR *)sub_18006D6B8((unsigned __int16)v15);
      v7 = v31;
      if ( !v31 )
      {
        DbgPrintEx(
          0x33u,
          0,
          "SXS: Assembly storage resolution failing probe because attempt to allocate %u bytes failed.\n",
          (unsigned __int16)v15);
        v20 = -1073741801;
        goto LABEL_30;
      }
      LOWORD(v11) = *(_WORD *)a2;
    }
    else
    {
      v7 = (_OBJECT_BOUNDARY_DESCRIPTOR *)DosFileName;
      v31 = (_OBJECT_BOUNDARY_DESCRIPTOR *)DosFileName;
    }
    memmove(v7, a2[1], (unsigned __int16)v11);
    v16 = (_WORD *)((char *)v7 + *(unsigned __int16 *)a2);
    if ( v26 )
      *v16++ = 92;
    memmove(v16, v28[1], *(unsigned __int16 *)v28);
    v17 = v28;
    *(_WORD *)((char *)v16 + *(unsigned __int16 *)v28) = 0;
    v18 = *(_WORD *)a2 + *(_WORD *)v17 + 2 * v26;
    if ( RtlDosPathNameToRelativeNtPathName_U((PCWSTR)v7, &NtFileName, 0LL, &RelativeName) )
    {
      BaseAddress = NtFileName.Buffer;
      if ( RelativeName.RelativeName.Length )
      {
        ContainingDirectory = RelativeName.ContainingDirectory;
        NtFileName = RelativeName.RelativeName;
      }
      else
      {
        ContainingDirectory = 0LL;
        RelativeName.ContainingDirectory = 0LL;
      }
      ObjectAttributes.RootDirectory = ContainingDirectory;
      ObjectAttributes.ObjectName = &NtFileName;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v20 = ZwOpenFile(&FileHandle, 0x100020u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u);
      RtlReleaseRelativeName(&RelativeName);
      if ( v20 < 0 )
      {
        v23 = (unsigned int)(v20 + 1073741809);
        if ( (unsigned int)v23 <= 0x2B && (v24 = 0x82000000001LL, _bittest64(&v24, v23)) )
          v20 = -1072365564;
        else
          DbgPrintEx(
            0x33u,
            0,
            "SXS: Unable to open assembly directory under storage root \"%S\"; Status = 0x%08lx\n",
            (const wchar_t *)v7,
            v20);
      }
      else
      {
        if ( v15 <= *(unsigned __int16 *)(a4 + 2) )
        {
          memmove(*(void **)(a4 + 8), v7, v18);
LABEL_24:
          v21 = v32;
          v20 = 0;
          *a6 = a4;
          *(_DWORD *)(*(_QWORD *)(a4 + 8) + v18) = 92;
          *(_WORD *)*a6 = v18 + 2;
          *v21 = FileHandle;
          FileHandle = 0LL;
          goto LABEL_25;
        }
        if ( v7 != (_OBJECT_BOUNDARY_DESCRIPTOR *)DosFileName )
        {
          *(_QWORD *)(a5 + 8) = v7;
          v7 = 0LL;
          v31 = 0LL;
LABEL_50:
          *(_WORD *)(a5 + 2) = v15;
          a4 = a5;
          goto LABEL_24;
        }
        v25 = sub_18006D6B8(v15);
        *(_QWORD *)(a5 + 8) = v25;
        if ( v25 )
        {
          memmove(v25, v7, v18);
          goto LABEL_50;
        }
        v20 = -1073741801;
      }
LABEL_25:
      if ( BaseAddress )
      {
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
        v7 = v31;
      }
      goto LABEL_27;
    }
    DbgPrintEx(0x33u, 0, "SXS: Attempt to translate DOS path name \"%S\" to NT format failed\n", (const wchar_t *)v7);
    v20 = -1073741766;
  }
LABEL_27:
  if ( v7 && v7 != (_OBJECT_BOUNDARY_DESCRIPTOR *)DosFileName )
    RtlDeleteBoundaryDescriptor(v7);
LABEL_30:
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v20;
}
