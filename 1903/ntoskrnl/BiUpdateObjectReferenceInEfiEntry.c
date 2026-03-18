/*
 * XREFs of BiUpdateObjectReferenceInEfiEntry @ 0x140932A58
 * Callers:
 *     BiCreateEfiEntry @ 0x140930A5C (BiCreateEfiEntry.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _wcsupr @ 0x1401A0420 (_wcsupr.c)
 *     wcsstr @ 0x1401A21A0 (wcsstr.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x1406A11E8 (RtlStringFromGUIDEx.c)
 *     BcdQueryObject @ 0x14073CA40 (BcdQueryObject.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x140931AAC (BiGetObjectReferenceFromEfiEntry.c)
 */

__int64 __fastcall BiUpdateObjectReferenceInEfiEntry(__int64 a1, __int64 a2)
{
  int ObjectReferenceFromEfiEntry; // ebx
  __int64 v5; // rax
  SIZE_T v6; // rbx
  wchar_t *PoolWithTag; // rax
  wchar_t *v8; // rsi
  wchar_t *v9; // rdi
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  __int64 v12; // [rsp+30h] [rbp-30h] BYREF
  __int64 v13; // [rsp+38h] [rbp-28h]
  GUID v14; // [rsp+40h] [rbp-20h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  *(_QWORD *)&v14.Data1 = 0LL;
  *(_QWORD *)v14.Data4 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  ObjectReferenceFromEfiEntry = BiGetObjectReferenceFromEfiEntry(a1, &v14);
  if ( ObjectReferenceFromEfiEntry >= 0 )
  {
    ObjectReferenceFromEfiEntry = BcdQueryObject(a2, 0, 0LL, (__int64)&v12);
    if ( ObjectReferenceFromEfiEntry >= 0 )
    {
      v5 = *(_QWORD *)&v14.Data1 - v12;
      if ( *(_QWORD *)&v14.Data1 == v12 )
        v5 = *(_QWORD *)v14.Data4 - v13;
      if ( v5 )
      {
        v6 = (unsigned int)(*(_DWORD *)(a1 + 40) - 20);
        PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v6, 0x4B444342u);
        v8 = PoolWithTag;
        if ( PoolWithTag )
        {
          memmove(PoolWithTag, (const void *)(a1 + 48), v6);
          wcsupr(v8);
          v9 = wcsstr(v8, L"BCDOBJECT=");
          if ( v9 )
          {
            RtlInitUnicodeString(&DestinationString, 0LL);
            ObjectReferenceFromEfiEntry = RtlStringFromGUIDEx((unsigned int *)&v12, (__int64)&DestinationString, 1);
            if ( ObjectReferenceFromEfiEntry >= 0 )
            {
              memmove(
                (void *)(a1 + 68 + 2 * ((unsigned __int64)(v9 - v8) >> 1)),
                DestinationString.Buffer,
                DestinationString.Length);
              RtlFreeAnsiString(&DestinationString);
            }
          }
          else
          {
            ObjectReferenceFromEfiEntry = -1073741275;
          }
          ExFreePoolWithTag(v8, 0x4B444342u);
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
    }
  }
  return (unsigned int)ObjectReferenceFromEfiEntry;
}
