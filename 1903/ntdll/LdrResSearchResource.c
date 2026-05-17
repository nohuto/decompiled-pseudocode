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

__int64 __fastcall LdrResSearchResource(
        wchar_t *String2,
        void *a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        _QWORD *a6,
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
  unsigned int v18; // ebx
  __int64 result; // rax
  _QWORD *v20; // r12
  int v21; // r14d
  __int64 v22; // rcx
  int v23; // eax
  wchar_t *v24; // rdx
  unsigned int v25; // eax
  int MappingSize; // eax
  int v27; // [rsp+50h] [rbp-128h]
  __int64 v28; // [rsp+58h] [rbp-120h] BYREF
  wchar_t *v29; // [rsp+60h] [rbp-118h]
  int v30; // [rsp+68h] [rbp-110h]
  int v31; // [rsp+6Ch] [rbp-10Ch] BYREF
  __int64 v32; // [rsp+70h] [rbp-108h]
  __int64 v33; // [rsp+78h] [rbp-100h]
  int v34; // [rsp+80h] [rbp-F8h]
  _QWORD *v35; // [rsp+88h] [rbp-F0h]
  __int64 v36; // [rsp+90h] [rbp-E8h]
  __int64 v37; // [rsp+98h] [rbp-E0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+A0h] [rbp-D8h] BYREF
  void *Src; // [rsp+B0h] [rbp-C8h]
  int v40; // [rsp+B8h] [rbp-C0h] BYREF
  const wchar_t *v41; // [rsp+C0h] [rbp-B8h]
  int v42; // [rsp+C8h] [rbp-B0h] BYREF
  const wchar_t *v43; // [rsp+D0h] [rbp-A8h]
  UNICODE_STRING DestinationString; // [rsp+D8h] [rbp-A0h] BYREF
  _BYTE v45[48]; // [rsp+E8h] [rbp-90h] BYREF
  _QWORD v46[2]; // [rsp+118h] [rbp-60h] BYREF
  PCWSTR SourceString; // [rsp+128h] [rbp-50h]

  v9 = a3;
  v30 = a3;
  Src = a2;
  v36 = a5;
  v35 = a6;
  v33 = a7;
  v32 = a8;
  v29 = 0LL;
  v40 = 3538996;
  v41 = L"LdrResSearchResource Enter";
  v42 = 3407922;
  v43 = L"LdrResSearchResource Exit";
  v12 = 2147353477LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v13 = (__int64)NtCurrentPeb()->HotpatchInformation + 555;
  else
    v13 = 2147353477LL;
  if ( (*(_BYTE *)v13 & 1) != 0 )
  {
    v14 = 2147353476LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v22 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
    else
      v22 = 2147353476LL;
    sub_1800E0820(&v40, *(unsigned __int8 *)v22);
  }
  else
  {
    v14 = 2147353476LL;
  }
  if ( !String2 || !a2 || v33 && !v32 )
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
      return 3221225713LL;
  }
  else if ( (_DWORD)v9 != 4 )
  {
    goto LABEL_18;
  }
  if ( (v16 & 0x41) == 0 )
    return 3221225714LL;
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
    v27 = v18;
    goto LABEL_25;
  }
  if ( (v16 & 0xC00) == 0xC00 )
    goto LABEL_23;
LABEL_21:
  v34 = v16 & 0x8000;
  if ( (v16 & 0x8000) != 0 && (~(_WORD)v16 & 0x810) != 0 || (v16 & 0x3000) == 0x3000 || (v16 & 0x18) == 0x18 )
    goto LABEL_23;
  v28 = 0LL;
  if ( (v16 & 0x20000) != 0 )
  {
    if ( (v16 & 0x400) == 0 || !v35 || !*v35 )
    {
      v18 = -1073741811;
      v27 = -1073741811;
      goto LABEL_25;
    }
    v28 = *v35;
  }
  memmove(v46, Src, 8 * v9);
  if ( (_DWORD)v9 != 3 )
  {
    if ( (unsigned int)v9 <= 3 )
      goto LABEL_34;
    v30 = 3;
  }
  if ( (unsigned __int64)SourceString >= 0x10000 )
  {
    if ( *SourceString )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      if ( !RtlCultureNameToLCID(&DestinationString.Length, &v31) )
        return 3221225485LL;
    }
    else
    {
      v31 = 0;
    }
    SourceString = (PCWSTR)(unsigned __int16)v31;
  }
  else if ( SourceString )
  {
    if ( ((unsigned __int16)SourceString & 0x3FF) == 0
      || SourceString == (PCWSTR)127
      || (*(_QWORD *)&UnicodeString.Length = 0LL,
          UnicodeString.Buffer = 0LL,
          (int)RtlLcidToLocaleName((unsigned int)SourceString, (__int64)&UnicodeString, 2, 1) < 0) )
    {
LABEL_55:
      v18 = -1073741811;
      goto LABEL_24;
    }
    if ( UnicodeString.Buffer )
      RtlFreeUnicodeString(&UnicodeString);
  }
LABEL_34:
  if ( (v16 & 0x300) == 0 )
  {
    if ( (v16 & 0x400) == 0 && ((v16 & 0x800) == 0 || (~v16 & 0x8000) == 0) )
    {
LABEL_37:
      if ( v34 )
      {
        result = sub_1800E31E0(String2);
        if ( (int)result < 0 )
          return result;
        v25 = sub_1800E2A9C((_DWORD)String2, v16, (unsigned int)v46, v30, v36, (__int64)v35, v33, v32);
      }
      else
      {
        v20 = v35;
        v21 = v30;
        v18 = sub_180056AC0((_DWORD)v29, v28, v16, (unsigned int)v46, v30, v36, (__int64)v35, v33, v32);
        v27 = v18;
        if ( v18 != -1073741686 )
          goto LABEL_25;
        if ( ((v46[0] - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) == 0 )
          goto LABEL_25;
        if ( (int)LdrLoadAlternateResourceModuleEx((__int64)v29, 0xF2EEu, &v37, 0LL, 0x1000000) < 0 )
          goto LABEL_25;
        v28 = 0LL;
        MappingSize = LdrpResGetMappingSize(v37, &v28, v16, 0LL);
        if ( MappingSize < 0 )
          goto LABEL_25;
        v25 = sub_180056AC0(v37, v28, v16 | 0x1000000, (unsigned int)v46, v21, v36, (__int64)v20, v33, v32);
      }
      v18 = v25;
      v27 = v25;
LABEL_25:
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      {
        v12 = (__int64)NtCurrentPeb()->HotpatchInformation + 555;
        v18 = v27;
      }
      if ( (*(_BYTE *)v12 & 1) != 0 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        {
          v14 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
          v18 = v27;
        }
        sub_1800E0820(&v42, *(unsigned __int8 *)v14);
      }
      return v18;
    }
    if ( (v16 & 0x1400) == 0x1400 )
    {
      result = sub_1800E323C(String2);
    }
    else
    {
      if ( (v16 & 0x1000) == 0 )
        goto LABEL_95;
      result = sub_1800E31E0(String2);
    }
    if ( (int)result < 0 )
      return result;
LABEL_95:
    v23 = sub_1800E2674(String2);
    v18 = v23;
    v27 = v23;
    if ( v23 < 0 )
    {
      if ( v23 != -1073741302 )
        goto LABEL_25;
    }
    else
    {
      if ( (v16 & 0x400) != 0 )
        v24 = String2;
      else
        v24 = 0LL;
      result = LdrAddLoadAsDataTable(v29, v24, 0LL);
      if ( (int)result < 0 )
        return result;
    }
    goto LABEL_37;
  }
  v29 = String2;
  if ( (v16 & 0x200) == 0 )
    goto LABEL_84;
  if ( ((unsigned __int8)String2 & 1) == 0 )
    v29 = (wchar_t *)((unsigned __int64)String2 | 1);
  if ( (v16 & 0x1000) == 0
    || (result = ZwQueryVirtualMemory(-1LL, (unsigned __int64)String2 & 0xFFFFFFFFFFFFFFFCuLL, 0LL, v45, 48LL, 0LL),
        (int)result >= 0) )
  {
LABEL_84:
    result = LdrpResGetMappingSize(v29, &v28, v16, 0LL);
    if ( (int)result >= 0 || (v16 & 0x1000) == 0 )
      goto LABEL_37;
  }
  return result;
}
