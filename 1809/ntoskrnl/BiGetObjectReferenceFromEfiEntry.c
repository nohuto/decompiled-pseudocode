/*
 * XREFs of BiGetObjectReferenceFromEfiEntry @ 0x1408F3E04
 * Callers:
 *     BiBuildIdentifierList @ 0x1408F2488 (BiBuildIdentifierList.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x1408F4D84 (BiUpdateObjectReferenceInEfiEntry.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B9A70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     strncmp @ 0x140194DE0 (strncmp.c)
 *     _wcsupr @ 0x140195C30 (_wcsupr.c)
 *     wcsnlen @ 0x140197870 (wcsnlen.c)
 *     wcsstr @ 0x140197930 (wcsstr.c)
 *     memmove @ 0x1401D1440 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     RtlGUIDFromString @ 0x14059A5A0 (RtlGUIDFromString.c)
 */

__int64 __fastcall BiGetObjectReferenceFromEfiEntry(__int64 a1, GUID *a2)
{
  unsigned int v4; // ebx
  SIZE_T v5; // rbx
  wchar_t *PoolWithTag; // rax
  wchar_t *v7; // rsi
  unsigned int v8; // ebx
  wchar_t *v9; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  WCHAR SourceString[8]; // [rsp+30h] [rbp-29h] BYREF
  __int128 v13; // [rsp+40h] [rbp-19h]
  __int128 v14; // [rsp+50h] [rbp-9h]
  __int128 v15; // [rsp+60h] [rbp+7h]
  __int64 v16; // [rsp+70h] [rbp+17h]
  int v17; // [rsp+78h] [rbp+1Fh]
  __int16 v18; // [rsp+7Ch] [rbp+23h]

  if ( *(_DWORD *)(a1 + 4) >= 0x1Cu
    && *(_DWORD *)(a1 + 24) >= 0x14u
    && !strncmp((const char *)(a1 + 28), "WINDOWS", 7uLL)
    && (v4 = *(_DWORD *)(a1 + 40), v4 >= 0x14)
    && *(_DWORD *)(a1 + 36)
    && (unsigned int)wcsnlen((const wchar_t *)(a1 + 48), v4 - 20) != v4 - 20 )
  {
    v5 = (unsigned int)(*(_DWORD *)(a1 + 40) - 20);
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v5, 0x4B444342u);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, (const void *)(a1 + 48), v5);
      wcsupr(v7);
      v9 = wcsstr(v7, L"BCDOBJECT=");
      if ( v9 && (unsigned __int64)v7 + v5 - (_QWORD)(v9 + 10) >= 0x4E )
      {
        *(_OWORD *)SourceString = *(_OWORD *)(v9 + 10);
        v13 = *(_OWORD *)(v9 + 18);
        v14 = *(_OWORD *)(v9 + 26);
        v15 = *(_OWORD *)(v9 + 34);
        v16 = *(_QWORD *)(v9 + 42);
        v17 = *((_DWORD *)v9 + 23);
        v18 = 0;
        RtlInitUnicodeString(&DestinationString, SourceString);
        v8 = RtlGUIDFromString(&DestinationString, a2);
      }
      else
      {
        v8 = -1073741275;
      }
      ExFreePoolWithTag(v7, 0x4B444342u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v8;
}
