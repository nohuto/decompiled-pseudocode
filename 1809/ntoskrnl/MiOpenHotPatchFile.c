/*
 * XREFs of MiOpenHotPatchFile @ 0x140857B4C
 * Callers:
 *     MiLoadHotPatch @ 0x140856C38 (MiLoadHotPatch.c)
 *     MiLoadHotPatchForUserSid @ 0x140856E98 (MiLoadHotPatchForUserSid.c)
 *     MiPerformImageHotPatch @ 0x140857EE0 (MiPerformImageHotPatch.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     MiSectionControlArea @ 0x140075E60 (MiSectionControlArea.c)
 *     RtlImageNtHeaderEx @ 0x14009D7A0 (RtlImageNtHeaderEx.c)
 *     MiCreateSystemSection @ 0x1400F599C (MiCreateSystemSection.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwOpenFile @ 0x1401B8950 (ZwOpenFile.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     MiUnmapImageInSystemSpace @ 0x140651A4C (MiUnmapImageInSystemSpace.c)
 *     MiMapImageInSystemSpace @ 0x140652000 (MiMapImageInSystemSpace.c)
 *     RtlFindHotPatchBase @ 0x14089AEF0 (RtlFindHotPatchBase.c)
 *     RtlFindHotPatchInformation @ 0x14089AF1C (RtlFindHotPatchInformation.c)
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
  __int64 v9; // rdx
  int SystemSection; // ebx
  __int64 *v11; // rax
  ULONGLONG v12; // r14
  PIMAGE_NT_HEADERS v13; // rbx
  unsigned int *p_TimeDateStamp; // r15
  __int64 HotPatchInformation; // rax
  __int64 HotPatchBase; // rax
  PVOID Object; // [rsp+78h] [rbp-F0h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-E8h] BYREF
  PIMAGE_NT_HEADERS NtHeader; // [rsp+88h] [rbp-E0h] BYREF
  HANDLE *v21; // [rsp+90h] [rbp-D8h]
  PVOID *v22; // [rsp+98h] [rbp-D0h]
  OBJECT_ATTRIBUTES v23; // [rsp+A0h] [rbp-C8h] BYREF
  struct _IO_STATUS_BLOCK v24; // [rsp+D0h] [rbp-98h] BYREF
  PVOID BaseAddress[2]; // [rsp+E0h] [rbp-88h] BYREF
  __int128 v26; // [rsp+F0h] [rbp-78h]
  __int128 v27; // [rsp+100h] [rbp-68h]
  __int128 v28; // [rsp+110h] [rbp-58h]
  __int128 v29; // [rsp+120h] [rbp-48h]

  v21 = a4;
  v22 = a5;
  Object = 0LL;
  Handle = 0LL;
  BaseAddress[0] = 0LL;
  v23.Length = 48;
  v23.RootDirectory = 0LL;
  v23.Attributes = 576;
  v23.ObjectName = a1;
  *(_OWORD *)&v23.SecurityDescriptor = 0LL;
  SystemSection = ZwOpenFile(&Handle, 0x20u, &v23, &v24, 5u, 0);
  if ( SystemSection >= 0 )
  {
    v23.Length = 48;
    v23.RootDirectory = 0LL;
    v23.Attributes = 576;
    v23.ObjectName = 0LL;
    *(_OWORD *)&v23.SecurityDescriptor = 0LL;
    if ( !a2 )
      MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
    SystemSection = MiCreateSystemSection((__int64 *)&Object, v9, (int)&v23);
    if ( SystemSection >= 0 )
    {
      v11 = (__int64 *)MiSectionControlArea((__int64)Object);
      SystemSection = MiMapImageInSystemSpace(v11, 1, (__int64)BaseAddress);
      if ( SystemSection >= 0 )
      {
        v12 = (unsigned __int64)(unsigned int)v26 << 12;
        SystemSection = RtlImageNtHeaderEx(0, BaseAddress[0], v12, &NtHeader);
        if ( SystemSection >= 0 )
        {
          v13 = NtHeader;
          p_TimeDateStamp = &NtHeader->FileHeader.TimeDateStamp;
          if ( &NtHeader->FileHeader.TimeDateStamp < (unsigned int *)NtHeader
            || p_TimeDateStamp > (unsigned int *)((char *)BaseAddress[0] + v12) )
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
              *a8 = v13->OptionalHeader.CheckSum;
              a8[1] = *p_TimeDateStamp;
            }
            *v21 = Handle;
            Handle = 0LL;
            *v22 = Object;
            Object = 0LL;
            if ( a6 )
            {
              *a6 = *(_OWORD *)BaseAddress;
              a6[1] = v26;
              a6[2] = v27;
              a6[3] = v28;
              a6[4] = v29;
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
    MiUnmapImageInSystemSpace((unsigned __int64 *)BaseAddress);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( Handle )
    ObCloseHandle(Handle, 0);
  return (unsigned int)SystemSection;
}
