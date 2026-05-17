/*
 * XREFs of RtlpProbeAssemblyStorageRootForAssembly @ 0x180034010
 * Callers:
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180033AC8 (RtlpResolveAssemblyStorageMapEntry.c)
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x18000EB60 (NtdllpAllocateStringRoutine.c)
 *     NtdllpFreeStringRoutine @ 0x1800178B0 (NtdllpFreeStringRoutine.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlReleaseRelativeName @ 0x1800347B0 (RtlReleaseRelativeName.c)
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x180034930 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     DbgPrintEx @ 0x18004D290 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     NtOpenFile @ 0x1800A0940 (NtOpenFile.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 */

__int64 __fastcall RtlpProbeAssemblyStorageRootForAssembly(
        __int64 a1,
        const void **a2,
        unsigned __int16 *a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        HANDLE *a7)
{
  _BYTE *v7; // rbx
  unsigned int v11; // edx
  __int64 v12; // r8
  _WORD *v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r14
  _WORD *v16; // rsi
  const void **v17; // rcx
  unsigned __int16 v18; // si
  void *v19; // rax
  NTSTATUS v20; // edi
  HANDLE *v21; // rcx
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  void *v25; // rax
  unsigned __int8 v26; // [rsp+60h] [rbp-A0h]
  HANDLE FileHandle; // [rsp+68h] [rbp-98h] BYREF
  const void **v28; // [rsp+70h] [rbp-90h]
  unsigned __int64 v29; // [rsp+78h] [rbp-88h]
  __int128 v30; // [rsp+80h] [rbp-80h] BYREF
  _BYTE *StringRoutine; // [rsp+98h] [rbp-68h]
  HANDLE *v32; // [rsp+A0h] [rbp-60h]
  __int128 v33; // [rsp+A8h] [rbp-58h] BYREF
  void *v34; // [rsp+B8h] [rbp-48h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C8h] [rbp-38h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE Src[528]; // [rsp+110h] [rbp+10h] BYREF

  v7 = 0LL;
  v28 = (const void **)a3;
  v32 = a7;
  StringRoutine = 0LL;
  v26 = 0;
  v30 = 0uLL;
  v29 = 0LL;
  FileHandle = 0LL;
  if ( a6 )
    *a6 = 0LL;
  if ( a7 )
    *a7 = 0LL;
  if ( !a2 || !a3 || !a4 || !a5 || !a6 || !a7 )
  {
    DbgPrintEx(
      51LL,
      0LL,
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
      51LL,
      0LL,
      "SXS: Assembly storage resolution failing probe because combined path length does not fit in an UNICODE_STRING.\n");
    v20 = -1073741562;
  }
  else
  {
    if ( v15 > 0x208 )
    {
      StringRoutine = (_BYTE *)NtdllpAllocateStringRoutine((unsigned __int16)v15);
      v7 = StringRoutine;
      if ( !StringRoutine )
      {
        DbgPrintEx(
          51LL,
          0LL,
          "SXS: Assembly storage resolution failing probe because attempt to allocate %u bytes failed.\n",
          (unsigned __int16)v15);
        v20 = -1073741801;
        goto LABEL_30;
      }
      LOWORD(v11) = *(_WORD *)a2;
    }
    else
    {
      v7 = Src;
      StringRoutine = Src;
    }
    memmove(v7, a2[1], (unsigned __int16)v11);
    v16 = &v7[*(unsigned __int16 *)a2];
    if ( v26 )
      *v16++ = 92;
    memmove(v16, v28[1], *(unsigned __int16 *)v28);
    v17 = v28;
    *(_WORD *)((char *)v16 + *(unsigned __int16 *)v28) = 0;
    v18 = *(_WORD *)a2 + *(_WORD *)v17 + 2 * v26;
    if ( (unsigned __int8)RtlDosPathNameToRelativeNtPathName_U(v7, &v30, 0LL, &v33) )
    {
      v29 = *((_QWORD *)&v30 + 1);
      if ( (_WORD)v33 )
      {
        v19 = v34;
        v30 = v33;
      }
      else
      {
        v19 = 0LL;
        v34 = 0LL;
      }
      ObjectAttributes.RootDirectory = v19;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v30;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v20 = NtOpenFile(&FileHandle, 0x100020u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u);
      RtlReleaseRelativeName(&v33);
      if ( v20 < 0 )
      {
        v23 = (unsigned int)(v20 + 1073741809);
        if ( (unsigned int)v23 <= 0x2B && (v24 = 0x82000000001LL, _bittest64(&v24, v23)) )
          v20 = -1072365564;
        else
          DbgPrintEx(
            51LL,
            0LL,
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
        if ( v7 != Src )
        {
          *(_QWORD *)(a5 + 8) = v7;
          v7 = 0LL;
          StringRoutine = 0LL;
LABEL_50:
          *(_WORD *)(a5 + 2) = v15;
          a4 = a5;
          goto LABEL_24;
        }
        v25 = (void *)NtdllpAllocateStringRoutine(v15);
        *(_QWORD *)(a5 + 8) = v25;
        if ( v25 )
        {
          memmove(v25, v7, v18);
          goto LABEL_50;
        }
        v20 = -1073741801;
      }
LABEL_25:
      if ( v29 )
      {
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v29);
        v7 = StringRoutine;
      }
      goto LABEL_27;
    }
    DbgPrintEx(51LL, 0LL, "SXS: Attempt to translate DOS path name \"%S\" to NT format failed\n", (const wchar_t *)v7);
    v20 = -1073741766;
  }
LABEL_27:
  if ( v7 && v7 != Src )
    NtdllpFreeStringRoutine((__int64)v7);
LABEL_30:
  if ( FileHandle )
    NtClose(FileHandle);
  return (unsigned int)v20;
}
