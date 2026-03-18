/*
 * XREFs of BiGetObjectReferenceFromEfiEntry @ 0x140931520
 * Callers:
 *     BiBuildIdentifierList @ 0x14092FB9C (BiBuildIdentifierList.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x1409324CC (BiUpdateObjectReferenceInEfiEntry.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     strncmp @ 0x14019FC70 (strncmp.c)
 *     _wcsupr @ 0x1401A0B40 (_wcsupr.c)
 *     wcsnlen @ 0x1401A2800 (wcsnlen.c)
 *     wcsstr @ 0x1401A28C0 (wcsstr.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlGUIDFromString @ 0x1405C1AC0 (RtlGUIDFromString.c)
 */

__int64 __fastcall BiGetObjectReferenceFromEfiEntry(__int64 a1, GUID *a2)
{
  bool v3; // cf
  unsigned int v5; // ebx
  SIZE_T v6; // rbx
  wchar_t *PoolWithTag; // rax
  wchar_t *v8; // rsi
  unsigned int v9; // ebx
  wchar_t *v10; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  WCHAR SourceString[8]; // [rsp+30h] [rbp-29h] BYREF
  __int128 v14; // [rsp+40h] [rbp-19h]
  __int128 v15; // [rsp+50h] [rbp-9h]
  __int128 v16; // [rsp+60h] [rbp+7h]
  __int64 v17; // [rsp+70h] [rbp+17h]
  int v18; // [rsp+78h] [rbp+1Fh]
  __int16 v19; // [rsp+7Ch] [rbp+23h]

  v3 = *(_DWORD *)(a1 + 4) < 0x1Cu;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( v3 )
    return (unsigned int)-1073741811;
  if ( *(_DWORD *)(a1 + 24) < 0x14u )
    return (unsigned int)-1073741811;
  if ( strncmp((const char *)(a1 + 28), "WINDOWS", 7uLL) )
    return (unsigned int)-1073741811;
  v5 = *(_DWORD *)(a1 + 40);
  if ( v5 < 0x14 || !*(_DWORD *)(a1 + 36) || (unsigned int)wcsnlen((const wchar_t *)(a1 + 48), v5 - 20) == v5 - 20 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v6 = (unsigned int)(*(_DWORD *)(a1 + 40) - 20);
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v6, 0x4B444342u);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, (const void *)(a1 + 48), v6);
      wcsupr(v8);
      v10 = wcsstr(v8, L"BCDOBJECT=");
      if ( v10 && (unsigned __int64)v8 + v6 - (_QWORD)(v10 + 10) >= 0x4E )
      {
        *(_OWORD *)SourceString = *(_OWORD *)(v10 + 10);
        v14 = *(_OWORD *)(v10 + 18);
        v15 = *(_OWORD *)(v10 + 26);
        v16 = *(_OWORD *)(v10 + 34);
        v17 = *(_QWORD *)(v10 + 42);
        v18 = *((_DWORD *)v10 + 23);
        v19 = 0;
        RtlInitUnicodeString(&DestinationString, SourceString);
        v9 = RtlGUIDFromString(&DestinationString, a2);
      }
      else
      {
        v9 = -1073741275;
      }
      ExFreePoolWithTag(v8, 0x4B444342u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v9;
}
