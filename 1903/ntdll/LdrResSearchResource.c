/*
 * XREFs of LdrResSearchResource @ 0x180056760
 * Callers:
 *     RtlLoadString @ 0x180054EA0 (RtlLoadString.c)
 *     LdrResFindResourceDirectory @ 0x1800566D0 (LdrResFindResourceDirectory.c)
 *     LdrResFindResource @ 0x1800E2480 (LdrResFindResource.c)
 * Callees:
 *     RtlCultureNameToLCID @ 0x1800168B0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     RtlLcidToLocaleName @ 0x180016AF0 (RtlLcidToLocaleName.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180017900 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlFreeUnicodeString @ 0x180029BA0 (RtlFreeUnicodeString.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     sub_180056AC0 @ 0x180056AC0 (sub_180056AC0.c)
 *     LdrpResGetMappingSize @ 0x180058740 (LdrpResGetMappingSize.c)
 *     LdrAddLoadAsDataTable @ 0x180072080 (LdrAddLoadAsDataTable.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x18009CB40 (ZwQueryVirtualMemory.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 *     sub_1800E0820 @ 0x1800E0820 (sub_1800E0820.c)
 *     sub_1800E2674 @ 0x1800E2674 (sub_1800E2674.c)
 *     sub_1800E2A9C @ 0x1800E2A9C (sub_1800E2A9C.c)
 *     sub_1800E31E0 @ 0x1800E31E0 (sub_1800E31E0.c)
 *     sub_1800E323C @ 0x1800E323C (sub_1800E323C.c)
 */

NTSTATUS __fastcall LdrResSearchResource(
        unsigned __int64 DosFileName,
        void *a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // r14
  __int64 v12; // r13
  __int64 v13; // rcx
  __int64 v14; // r15
  int v15; // ecx
  unsigned int v16; // esi
  bool v17; // zf
  int v18; // ebx
  NTSTATUS result; // eax
  __int64 v20; // r12
  int v21; // r14d
  __int64 v22; // rcx
  int v23; // eax
  WCHAR *v24; // r9
  WCHAR *v25; // rdx
  int v26; // eax
  int MappingSize; // eax
  int v28; // [rsp+50h] [rbp-128h]
  SIZE_T Size; // [rsp+58h] [rbp-120h] BYREF
  PVOID DllHandle; // [rsp+60h] [rbp-118h] BYREF
  int v31; // [rsp+68h] [rbp-110h]
  DWORD Lcid; // [rsp+6Ch] [rbp-10Ch] BYREF
  __int64 v33; // [rsp+70h] [rbp-108h]
  __int64 v34; // [rsp+78h] [rbp-100h]
  int v35; // [rsp+80h] [rbp-F8h]
  __int64 v36; // [rsp+88h] [rbp-F0h]
  __int64 v37; // [rsp+90h] [rbp-E8h]
  PVOID ResourceDllBase; // [rsp+98h] [rbp-E0h] BYREF
  _UNICODE_STRING LocaleName; // [rsp+A0h] [rbp-D8h] BYREF
  void *Src; // [rsp+B0h] [rbp-C8h]
  int v41; // [rsp+B8h] [rbp-C0h] BYREF
  const wchar_t *v42; // [rsp+C0h] [rbp-B8h]
  int v43; // [rsp+C8h] [rbp-B0h] BYREF
  const wchar_t *v44; // [rsp+D0h] [rbp-A8h]
  _UNICODE_STRING DestinationString; // [rsp+D8h] [rbp-A0h] BYREF
  _BYTE MemoryInformation[48]; // [rsp+E8h] [rbp-90h] BYREF
  _QWORD v47[2]; // [rsp+118h] [rbp-60h] BYREF
  PCWSTR SourceString; // [rsp+128h] [rbp-50h]

  v9 = a3;
  v31 = a3;
  Src = a2;
  v37 = a5;
  v36 = a6;
  v34 = a7;
  v33 = a8;
  DllHandle = 0LL;
  v41 = 3538996;
  v42 = L"LdrResSearchResource Enter";
  v43 = 3407922;
  v44 = L"LdrResSearchResource Exit";
  v12 = 2147353477LL;
  if ( RtlGetCurrentServiceSessionId() )
    v13 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1;
  else
    v13 = 2147353477LL;
  if ( (*(_BYTE *)v13 & 1) != 0 )
  {
    v14 = 2147353476LL;
    if ( RtlGetCurrentServiceSessionId() )
      v22 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
    else
      v22 = 2147353476LL;
    sub_1800E0820(&v41, *(unsigned __int8 *)v22);
  }
  else
  {
    v14 = 2147353476LL;
  }
  if ( !DosFileName || !a2 || v34 && !v33 )
    goto LABEL_55;
  v15 = a4 | 0x100;
  if ( (a4 & 0xF00) != 0 )
    v15 = a4;
  v16 = v15 | 0x1000;
  if ( (v15 & 0x2000) != 0 )
    v16 = v15;
  if ( (v16 & 0xFFF80000) != 0 )
    goto LABEL_23;
  if ( (unsigned int)v9 < 3 && (v16 & 2) == 0 || (unsigned int)v9 > 4 )
  {
    v18 = -1073741583;
    goto LABEL_24;
  }
  if ( (v16 & 0x41) != 0 )
  {
    if ( (_DWORD)v9 != 4 )
      return -1073741583;
  }
  else if ( (_DWORD)v9 != 4 )
  {
    goto LABEL_18;
  }
  if ( (v16 & 0x41) == 0 )
    return -1073741582;
LABEL_18:
  if ( (v16 & 0x100) != 0 )
  {
    v17 = (v16 & 0xE00) == 0;
    goto LABEL_20;
  }
  if ( (v16 & 0x200) != 0 )
  {
    v17 = (v16 & 0xC00) == 0;
LABEL_20:
    if ( v17 )
      goto LABEL_21;
LABEL_23:
    v18 = -1073741582;
LABEL_24:
    v28 = v18;
    goto LABEL_25;
  }
  if ( (v16 & 0xC00) == 0xC00 )
    goto LABEL_23;
LABEL_21:
  v35 = v16 & 0x8000;
  if ( (v16 & 0x8000) != 0 && (~(_WORD)v16 & 0x810) != 0 || (v16 & 0x3000) == 0x3000 || (v16 & 0x18) == 0x18 )
    goto LABEL_23;
  Size = 0LL;
  if ( (v16 & 0x20000) != 0 )
  {
    if ( (v16 & 0x400) == 0 || !v36 || !*(_QWORD *)v36 )
    {
      v18 = -1073741811;
      v28 = -1073741811;
      goto LABEL_25;
    }
    Size = *(_QWORD *)v36;
  }
  memmove(v47, Src, 8 * v9);
  if ( (_DWORD)v9 != 3 )
  {
    if ( (unsigned int)v9 <= 3 )
      goto LABEL_34;
    v31 = 3;
  }
  if ( (unsigned __int64)SourceString >= 0x10000 )
  {
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
  }
  else if ( SourceString )
  {
    if ( ((unsigned __int16)SourceString & 0x3FF) == 0
      || SourceString == (PCWSTR)127
      || (*(_QWORD *)&LocaleName.Length = 0LL,
          LocaleName.Buffer = 0LL,
          RtlLcidToLocaleName((LCID)SourceString, &LocaleName, 2u, 1u) < 0) )
    {
LABEL_55:
      v18 = -1073741811;
      goto LABEL_24;
    }
    if ( LocaleName.Buffer )
      RtlFreeUnicodeString(&LocaleName);
  }
LABEL_34:
  if ( (v16 & 0x300) == 0 )
  {
    if ( (v16 & 0x400) == 0 && ((v16 & 0x800) == 0 || (~v16 & 0x8000) == 0) )
    {
LABEL_37:
      if ( v35 )
      {
        result = sub_1800E31E0(DosFileName);
        if ( result < 0 )
          return result;
        v26 = sub_1800E2A9C((HANDLE)DosFileName, v37, v36, v34, v33);
      }
      else
      {
        v20 = v36;
        v21 = v31;
        v18 = sub_180056AC0((_DWORD)DllHandle, Size, v16, (unsigned int)v47, v31, v37, v36, v34, v33);
        v28 = v18;
        if ( v18 != -1073741686 )
          goto LABEL_25;
        if ( ((v47[0] - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) == 0 )
          goto LABEL_25;
        if ( LdrLoadAlternateResourceModuleEx(DllHandle, 0xF2EEu, &ResourceDllBase, 0LL, 0x1000000u) < 0 )
          goto LABEL_25;
        Size = 0LL;
        MappingSize = LdrpResGetMappingSize(ResourceDllBase, &Size, v16, 0LL);
        if ( MappingSize < 0 )
          goto LABEL_25;
        v26 = sub_180056AC0((_DWORD)ResourceDllBase, Size, v16 | 0x1000000, (unsigned int)v47, v21, v37, v20, v34, v33);
      }
      v18 = v26;
      v28 = v26;
LABEL_25:
      if ( RtlGetCurrentServiceSessionId() )
      {
        v12 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1;
        v18 = v28;
      }
      if ( (*(_BYTE *)v12 & 1) != 0 )
      {
        if ( RtlGetCurrentServiceSessionId() )
        {
          v14 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
          v18 = v28;
        }
        sub_1800E0820(&v43, *(unsigned __int8 *)v14);
      }
      return v18;
    }
    if ( (v16 & 0x1400) == 0x1400 )
    {
      result = sub_1800E323C((PCWSTR)DosFileName);
    }
    else
    {
      if ( (v16 & 0x1000) == 0 )
        goto LABEL_95;
      result = sub_1800E31E0(DosFileName);
    }
    if ( result < 0 )
      return result;
LABEL_95:
    v23 = sub_1800E2674((PCWSTR)DosFileName, &DllHandle, &Size);
    v18 = v23;
    v28 = v23;
    if ( v23 < 0 )
    {
      if ( v23 != -1073741302 )
        goto LABEL_25;
    }
    else
    {
      if ( (v16 & 0x400) != 0 )
      {
        v24 = 0LL;
        v25 = (WCHAR *)DosFileName;
      }
      else
      {
        v24 = (WCHAR *)DosFileName;
        v25 = 0LL;
      }
      result = LdrAddLoadAsDataTable(DllHandle, v25, Size, v24, 0LL);
      if ( result < 0 )
        return result;
    }
    goto LABEL_37;
  }
  DllHandle = (PVOID)DosFileName;
  if ( (v16 & 0x200) == 0 )
    goto LABEL_84;
  if ( (DosFileName & 1) == 0 )
    DllHandle = (PVOID)(DosFileName | 1);
  if ( (v16 & 0x1000) == 0
    || (result = ZwQueryVirtualMemory(
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   (PVOID)(DosFileName & 0xFFFFFFFFFFFFFFFCuLL),
                   MemoryBasicInformation,
                   MemoryInformation,
                   0x30uLL,
                   0LL),
        result >= 0) )
  {
LABEL_84:
    result = LdrpResGetMappingSize(DllHandle, &Size, v16, 0LL);
    if ( result >= 0 || (v16 & 0x1000) == 0 )
      goto LABEL_37;
  }
  return result;
}
