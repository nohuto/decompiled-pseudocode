/*
 * XREFs of sub_1800599C4 @ 0x1800599C4
 * Callers:
 *     sub_1800598B0 @ 0x1800598B0 (sub_1800598B0.c)
 * Callees:
 *     RtlImageNtHeader @ 0x18001B960 (RtlImageNtHeader.c)
 *     RtlReleaseRelativeName @ 0x180025F30 (RtlReleaseRelativeName.c)
 *     sub_180025F70 @ 0x180025F70 (sub_180025F70.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x18009CBE0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x18009CC20 (ZwUnmapViewOfSection.c)
 *     ZwOpenFile @ 0x18009CD40 (ZwOpenFile.c)
 *     ZwCreateSection @ 0x18009D020 (ZwCreateSection.c)
 */

__int64 __fastcall sub_1800599C4(__int64 a1, const WCHAR **a2, char a3, HANDLE *a4, PVOID *a5, ULONG_PTR *a6)
{
  PVOID *v9; // r15
  PIMAGE_NT_HEADERS v10; // rax
  ULONG Win32Protect; // esi
  NTSTATUS v12; // ebx
  PVOID v13; // rdi
  HANDLE ContainingDirectory; // rax
  PIMAGE_NT_HEADERS v15; // rax
  int v16; // ecx
  ULONG_PTR *v17; // rcx
  __int128 v19; // xmm0
  HANDLE SectionHandle; // [rsp+50h] [rbp-69h] BYREF
  PVOID BaseOfImage; // [rsp+58h] [rbp-61h] BYREF
  LARGE_INTEGER SectionOffset; // [rsp+60h] [rbp-59h] BYREF
  ULONG_PTR ViewSize; // [rsp+68h] [rbp-51h] BYREF
  PVOID BaseAddress[2]; // [rsp+70h] [rbp-49h] BYREF
  _RTL_RELATIVE_NAME_U RelativeName; // [rsp+80h] [rbp-39h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-19h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+D0h] [rbp+17h] BYREF
  HANDLE FileHandle; // [rsp+110h] [rbp+57h] BYREF

  FileHandle = 0LL;
  SectionHandle = 0LL;
  BaseOfImage = 0LL;
  ViewSize = 0LL;
  if ( a1 )
  {
    if ( a2 )
    {
      v9 = a5;
      if ( a5 )
      {
        v10 = RtlImageNtHeader((PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL));
        if ( !v10 )
        {
          v12 = -1073741701;
          goto LABEL_25;
        }
        Win32Protect = v10->OptionalHeader.MajorSubsystemVersion < 6u ? 8 : 2;
        if ( a3 )
        {
          v19 = *(_OWORD *)a2;
          v13 = 0LL;
          RelativeName.ContainingDirectory = 0LL;
          ObjectAttributes.Length = 48;
          *(_OWORD *)BaseAddress = v19;
        }
        else
        {
          v12 = sub_180025F70(2, a2[1], (int)BaseAddress, 0LL, (__int64)&RelativeName);
          if ( v12 < 0 )
            goto LABEL_25;
          v13 = BaseAddress[1];
          if ( RelativeName.RelativeName.Length )
          {
            ContainingDirectory = RelativeName.ContainingDirectory;
            *(UNICODE_STRING *)BaseAddress = RelativeName.RelativeName;
          }
          else
          {
            ContainingDirectory = 0LL;
            RelativeName.ContainingDirectory = 0LL;
          }
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = ContainingDirectory;
          if ( v13 )
          {
LABEL_10:
            ObjectAttributes.ObjectName = (PUNICODE_STRING)BaseAddress;
            ObjectAttributes.Attributes = 64;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v12 = ZwOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
            if ( v13 )
            {
              RtlReleaseRelativeName(&RelativeName);
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v13);
            }
            if ( v12 >= 0 )
            {
              v12 = ZwCreateSection(&SectionHandle, 0xF0005u, 0LL, 0LL, Win32Protect, 0x8000000u, FileHandle);
              if ( v12 >= 0 )
              {
                SectionOffset.QuadPart = 0LL;
                v12 = ZwMapViewOfSection(
                        SectionHandle,
                        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                        &BaseOfImage,
                        0LL,
                        0LL,
                        &SectionOffset,
                        &ViewSize,
                        ViewShare,
                        0,
                        Win32Protect);
                if ( SectionHandle )
                {
                  ZwClose(SectionHandle);
                  SectionHandle = 0LL;
                }
                if ( v12 >= 0 )
                {
                  v15 = RtlImageNtHeader(BaseOfImage);
                  v16 = v12;
                  if ( !v15 )
                    v16 = -1073741701;
                  v12 = v16;
                  if ( v16 >= 0 )
                  {
                    v17 = a6;
                    *v9 = BaseOfImage;
                    if ( v17 )
                      *v17 = ViewSize;
                    if ( a4 )
                    {
                      *a4 = FileHandle;
                    }
                    else if ( FileHandle )
                    {
                      ZwClose(FileHandle);
                    }
                    return (unsigned int)v12;
                  }
                }
              }
            }
LABEL_25:
            if ( FileHandle )
            {
              ZwClose(FileHandle);
              FileHandle = 0LL;
            }
            if ( BaseOfImage )
              ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseOfImage);
            return (unsigned int)v12;
          }
        }
        ObjectAttributes.RootDirectory = 0LL;
        goto LABEL_10;
      }
    }
  }
  return 3221225485LL;
}
