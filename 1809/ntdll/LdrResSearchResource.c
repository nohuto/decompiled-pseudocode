/*
 * XREFs of LdrResSearchResource @ 0x180037450
 * Callers:
 *     LdrResFindResourceDirectory @ 0x1800373C0 (LdrResFindResourceDirectory.c)
 *     RtlLoadString @ 0x18003B5D0 (RtlLoadString.c)
 *     LdrResFindResource @ 0x1800E5200 (LdrResFindResource.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     RtlFreeAnsiString @ 0x18002A5F0 (RtlFreeAnsiString.c)
 *     LdrpResSearchResourceMappedFile @ 0x180037AB4 (LdrpResSearchResourceMappedFile.c)
 *     LdrpResGetMappingSize @ 0x180039780 (LdrpResGetMappingSize.c)
 *     RtlCultureNameToLCID @ 0x180040460 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180040650 (RtlInitUnicodeString.c)
 *     RtlLcidToLocaleName @ 0x180040700 (RtlLcidToLocaleName.c)
 *     LdrAddLoadAsDataTable @ 0x1800783E0 (LdrAddLoadAsDataTable.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x1800A0760 (ZwQueryVirtualMemory.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     LdrpTraceLoadMUIDll @ 0x1800E2D68 (LdrpTraceLoadMUIDll.c)
 *     LdrpResMapFile @ 0x1800E53F4 (LdrpResMapFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800E581C (LdrpResSearchResourceHandle.c)
 *     LdrpResValidateFileHandle @ 0x1800E5F64 (LdrpResValidateFileHandle.c)
 *     LdrpResValidateFilePath @ 0x1800E5FC0 (LdrpResValidateFilePath.c)
 */

NTSTATUS __fastcall LdrResSearchResource(
        WCHAR *DosFileName,
        void *a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // r14
  __int64 v12; // r12
  __int64 v13; // rcx
  __int64 v14; // r15
  __int64 v15; // rcx
  int v16; // ecx
  unsigned int v17; // esi
  int v18; // ebx
  NTSTATUS result; // eax
  bool v20; // zf
  int v21; // eax
  SIZE_T *v22; // rcx
  int v23; // eax
  WCHAR *v24; // r9
  WCHAR *v25; // rdx
  int v26; // eax
  int v27; // [rsp+50h] [rbp-128h]
  int v28; // [rsp+54h] [rbp-124h]
  SIZE_T Size; // [rsp+58h] [rbp-120h] BYREF
  PVOID Module; // [rsp+60h] [rbp-118h] BYREF
  DWORD Lcid; // [rsp+68h] [rbp-110h] BYREF
  __int64 v32; // [rsp+70h] [rbp-108h]
  int v33; // [rsp+78h] [rbp-100h]
  __int64 v34; // [rsp+80h] [rbp-F8h]
  __int64 v35; // [rsp+88h] [rbp-F0h]
  __int64 v36; // [rsp+90h] [rbp-E8h]
  _UNICODE_STRING LocaleName; // [rsp+98h] [rbp-E0h] BYREF
  void *Src; // [rsp+A8h] [rbp-D0h]
  int v39; // [rsp+B0h] [rbp-C8h] BYREF
  const wchar_t *v40; // [rsp+B8h] [rbp-C0h]
  int v41; // [rsp+C0h] [rbp-B8h] BYREF
  const wchar_t *v42; // [rsp+C8h] [rbp-B0h]
  _UNICODE_STRING DestinationString; // [rsp+D0h] [rbp-A8h] BYREF
  _BYTE MemoryInformation[48]; // [rsp+E0h] [rbp-98h] BYREF
  _BYTE v45[16]; // [rsp+110h] [rbp-68h] BYREF
  PCWSTR SourceString; // [rsp+120h] [rbp-58h]

  v9 = a3;
  v28 = a3;
  Src = a2;
  v36 = a5;
  v32 = a6;
  v35 = a7;
  v34 = a8;
  Module = 0LL;
  v39 = 3538996;
  v40 = L"LdrResSearchResource Enter";
  v41 = 3407922;
  v42 = L"LdrResSearchResource Exit";
  v12 = 2147353477LL;
  if ( RtlGetCurrentServiceSessionId() )
    v13 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v13 = 2147353477LL;
  if ( (*(_BYTE *)v13 & 1) != 0 )
  {
    v14 = 2147353476LL;
    if ( RtlGetCurrentServiceSessionId() )
      v15 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v15 = 2147353476LL;
    LdrpTraceLoadMUIDll(&v39, *(unsigned __int8 *)v15);
  }
  else
  {
    v14 = 2147353476LL;
  }
  if ( !DosFileName || !a2 || v35 && !v34 )
    goto LABEL_98;
  v16 = a4 | 0x100;
  if ( (a4 & 0xF00) != 0 )
    v16 = a4;
  v17 = v16 | 0x1000;
  if ( (v16 & 0x2000) != 0 )
    v17 = v16;
  if ( (v17 & 0xFFF00000) != 0 )
    goto LABEL_19;
  if ( (unsigned int)v9 < 3 && (v17 & 2) == 0 || (unsigned int)v9 > 4 )
  {
    v18 = -1073741583;
    goto LABEL_99;
  }
  if ( (v17 & 0x41) != 0 )
  {
    if ( (_DWORD)v9 != 4 )
      return -1073741583;
  }
  else if ( (_DWORD)v9 != 4 )
  {
    goto LABEL_30;
  }
  if ( (v17 & 0x41) == 0 )
    return -1073741582;
LABEL_30:
  if ( (v17 & 0x100) != 0 )
  {
    v20 = (v17 & 0xE00) == 0;
    goto LABEL_32;
  }
  v21 = v17 & 0xC00;
  if ( (v17 & 0x200) != 0 )
  {
    v20 = v21 == 0;
LABEL_32:
    if ( !v20 )
      goto LABEL_19;
    goto LABEL_37;
  }
  if ( v21 == 3072 )
  {
LABEL_19:
    v18 = -1073741582;
LABEL_99:
    v27 = v18;
    goto LABEL_100;
  }
LABEL_37:
  v33 = v17 & 0x8000;
  if ( (v17 & 0x8000) != 0 && (~(_WORD)v17 & 0x810) != 0 || (v17 & 0x3000) == 0x3000 || (v17 & 0x18) == 0x18 )
    goto LABEL_19;
  Size = 0LL;
  if ( (v17 & 0x20000) != 0 )
  {
    if ( (v17 & 0x400) == 0 || (v22 = (SIZE_T *)v32) == 0LL || !*(_QWORD *)v32 )
    {
      v18 = -1073741811;
      v27 = -1073741811;
      goto LABEL_100;
    }
    Size = *(_QWORD *)v32;
  }
  else
  {
    v22 = (SIZE_T *)v32;
  }
  if ( (v17 & 0x80000) != 0 )
  {
    if ( (v17 & 0x300) == 0 || !v22 || !*v22 )
    {
      v18 = -1073741811;
      v27 = -1073741811;
      goto LABEL_100;
    }
    Size = *v22;
  }
  memmove(v45, Src, 8 * v9);
  if ( (unsigned int)v9 <= 3 )
  {
    if ( (_DWORD)v9 != 3 )
      goto LABEL_69;
  }
  else
  {
    v28 = 3;
  }
  if ( (unsigned __int64)SourceString < 0x10000 )
  {
    if ( !SourceString )
      goto LABEL_69;
    if ( ((unsigned __int16)SourceString & 0x3FF) != 0 && SourceString != (PCWSTR)127 )
    {
      *(_QWORD *)&LocaleName.Length = 0LL;
      LocaleName.Buffer = 0LL;
      if ( RtlLcidToLocaleName((LCID)SourceString, &LocaleName, 2u, 1u) >= 0 )
      {
        if ( LocaleName.Buffer )
          RtlFreeAnsiString(&LocaleName);
        goto LABEL_69;
      }
    }
LABEL_98:
    v18 = -1073741811;
    goto LABEL_99;
  }
  if ( *SourceString )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( !RtlCultureNameToLCID(&DestinationString, &Lcid) )
      return -1073741811;
  }
  else
  {
    Lcid = 0;
  }
  SourceString = (PCWSTR)(unsigned __int16)Lcid;
LABEL_69:
  if ( (v17 & 0x300) == 0 )
  {
    if ( (v17 & 0x400) == 0 && ((v17 & 0x800) == 0 || (~v17 & 0x8000) == 0) )
      goto LABEL_93;
    if ( (v17 & 0x1400) == 0x1400 )
    {
      result = LdrpResValidateFilePath(DosFileName);
    }
    else
    {
      if ( (v17 & 0x1000) == 0 )
        goto LABEL_84;
      result = LdrpResValidateFileHandle(DosFileName);
    }
    if ( result < 0 )
      return result;
LABEL_84:
    v23 = LdrpResMapFile(DosFileName, &Module, &Size);
    v18 = v23;
    v27 = v23;
    if ( v23 >= 0 )
    {
      if ( (v17 & 0x400) != 0 )
      {
        v24 = 0LL;
        v25 = DosFileName;
      }
      else
      {
        v24 = DosFileName;
        v25 = 0LL;
      }
      result = LdrAddLoadAsDataTable(Module, v25, Size, v24, 0LL);
      if ( result < 0 )
        return result;
      goto LABEL_93;
    }
    if ( v23 == -1073741302 )
    {
LABEL_93:
      if ( v33 )
      {
        result = LdrpResValidateFileHandle(DosFileName);
        if ( result < 0 )
          return result;
        v26 = LdrpResSearchResourceHandle(DosFileName, v36, v32, v35, v34);
      }
      else
      {
        v26 = LdrpResSearchResourceMappedFile((_DWORD)Module, Size, v17, (unsigned int)v45, v28, v36, v32, v35, v34);
      }
      v18 = v26;
      v27 = v26;
    }
LABEL_100:
    if ( RtlGetCurrentServiceSessionId() )
    {
      v12 = (__int64)NtCurrentPeb()->SharedData + 555;
      v18 = v27;
    }
    if ( (*(_BYTE *)v12 & 1) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
      {
        v14 = (__int64)NtCurrentPeb()->SharedData + 554;
        v18 = v27;
      }
      LdrpTraceLoadMUIDll(&v41, *(unsigned __int8 *)v14);
    }
    return v18;
  }
  Module = DosFileName;
  if ( (v17 & 0x200) == 0 )
    goto LABEL_76;
  if ( ((unsigned __int8)DosFileName & 1) == 0 )
    Module = (PVOID)((unsigned __int64)DosFileName | 1);
  if ( (v17 & 0x1000) == 0
    || (result = ZwQueryVirtualMemory(
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   (PVOID)((unsigned __int64)DosFileName & 0xFFFFFFFFFFFFFFFCuLL),
                   MemoryBasicInformation,
                   MemoryInformation,
                   0x30uLL,
                   0LL),
        result >= 0) )
  {
LABEL_76:
    result = LdrpResGetMappingSize(Module, &Size, v17, 0LL);
    if ( result >= 0 || (v17 & 0x1000) == 0 )
      goto LABEL_93;
  }
  return result;
}
