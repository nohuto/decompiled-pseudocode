/*
 * XREFs of MiOpenHotPatchFile @ 0x140890210
 * Callers:
 *     MiLoadHotPatch @ 0x14088EEB0 (MiLoadHotPatch.c)
 *     MiLoadHotPatchForUserSid @ 0x14088F1E8 (MiLoadHotPatchForUserSid.c)
 *     MiPerformImageHotPatch @ 0x1408905D8 (MiPerformImageHotPatch.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     RtlImageNtHeaderEx @ 0x14005F320 (RtlImageNtHeaderEx.c)
 *     MiSectionControlArea @ 0x1400717E0 (MiSectionControlArea.c)
 *     MiCreateSystemSection @ 0x140154C34 (MiCreateSystemSection.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwOpenFile @ 0x1401C0730 (ZwOpenFile.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ObCloseHandle @ 0x14060F280 (ObCloseHandle.c)
 *     MiUnmapImageInSystemSpace @ 0x14066FFB0 (MiUnmapImageInSystemSpace.c)
 *     MiMapImageInSystemSpace @ 0x140670000 (MiMapImageInSystemSpace.c)
 *     RtlFindHotPatchBase @ 0x1408D87E0 (RtlFindHotPatchBase.c)
 *     RtlFindHotPatchInformation @ 0x1408D880C (RtlFindHotPatchInformation.c)
 */

__int64 __fastcall MiOpenHotPatchFile(
        UNICODE_STRING *a1,
        int a2,
        __int64 a3,
        HANDLE *a4,
        PVOID *a5,
        _OWORD *a6,
        _DWORD *a7,
        unsigned int *a8)
{
  __int64 v10; // rdx
  int SystemSection; // ebx
  __int64 *v12; // rax
  ULONGLONG v13; // r14
  PIMAGE_NT_HEADERS v14; // rbx
  unsigned int *p_TimeDateStamp; // r15
  __int64 HotPatchInformation; // rax
  __int64 HotPatchBase; // rax
  PVOID Object; // [rsp+78h] [rbp-F0h] BYREF
  HANDLE FileHandle; // [rsp+80h] [rbp-E8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-E0h] BYREF
  PIMAGE_NT_HEADERS NtHeader; // [rsp+B8h] [rbp-B0h] BYREF
  HANDLE *v23; // [rsp+C0h] [rbp-A8h]
  PVOID *v24; // [rsp+C8h] [rbp-A0h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+D0h] [rbp-98h] BYREF
  PVOID BaseAddress[10]; // [rsp+E0h] [rbp-88h] BYREF

  v23 = a4;
  v24 = a5;
  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(BaseAddress, 0, sizeof(BaseAddress));
  Object = 0LL;
  FileHandle = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = a1;
  SystemSection = ZwOpenFile(&FileHandle, 0x20u, &ObjectAttributes, &IoStatusBlock, 5u, 0);
  if ( SystemSection >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( !a2 )
      MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
    SystemSection = MiCreateSystemSection((__int64 *)&Object, v10, (int)&ObjectAttributes);
    if ( SystemSection >= 0 )
    {
      v12 = (__int64 *)MiSectionControlArea((__int64)Object);
      SystemSection = MiMapImageInSystemSpace(v12, 1, (__int64)BaseAddress);
      if ( SystemSection >= 0 )
      {
        v13 = (unsigned __int64)LODWORD(BaseAddress[2]) << 12;
        SystemSection = RtlImageNtHeaderEx(0, BaseAddress[0], v13, &NtHeader);
        if ( SystemSection >= 0 )
        {
          v14 = NtHeader;
          p_TimeDateStamp = &NtHeader->FileHeader.TimeDateStamp;
          if ( &NtHeader->FileHeader.TimeDateStamp < (unsigned int *)NtHeader
            || p_TimeDateStamp > (unsigned int *)((char *)BaseAddress[0] + v13) )
          {
            SystemSection = -1073741701;
          }
          else
          {
            if ( NtHeader->FileHeader.Machine != 0x8664 )
            {
              SystemSection = -1073741701;
              goto LABEL_23;
            }
            HotPatchInformation = RtlFindHotPatchInformation(BaseAddress[0]);
            if ( !HotPatchInformation )
            {
              SystemSection = -1073741701;
              goto LABEL_23;
            }
            if ( a7 )
            {
              HotPatchBase = RtlFindHotPatchBase(HotPatchInformation);
              if ( !HotPatchBase )
              {
                SystemSection = -1073741701;
                goto LABEL_23;
              }
              *a7 = *(_DWORD *)(HotPatchBase + 12);
              a7[1] = *(_DWORD *)(HotPatchBase + 8);
            }
            if ( a8 )
            {
              *a8 = v14->OptionalHeader.CheckSum;
              a8[1] = *p_TimeDateStamp;
            }
            *v23 = FileHandle;
            FileHandle = 0LL;
            *v24 = Object;
            Object = 0LL;
            if ( a6 )
            {
              *a6 = *(_OWORD *)BaseAddress;
              a6[1] = *(_OWORD *)&BaseAddress[2];
              a6[2] = *(_OWORD *)&BaseAddress[4];
              a6[3] = *(_OWORD *)&BaseAddress[6];
              a6[4] = *(_OWORD *)&BaseAddress[8];
              BaseAddress[0] = 0LL;
            }
            SystemSection = 0;
          }
        }
      }
    }
  }
LABEL_23:
  if ( BaseAddress[0] )
    MiUnmapImageInSystemSpace((__int64)BaseAddress);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( FileHandle )
    ObCloseHandle(FileHandle, 0);
  return (unsigned int)SystemSection;
}
