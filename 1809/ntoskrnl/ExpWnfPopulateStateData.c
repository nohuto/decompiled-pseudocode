/*
 * XREFs of ExpWnfPopulateStateData @ 0x1406D031C
 * Callers:
 *     ExpWnfCreateNameInstance @ 0x14060F058 (ExpWnfCreateNameInstance.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1401B85D0 (ZwQueryValueKey.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ExpWnfComposeValueName @ 0x1405ABC5C (ExpWnfComposeValueName.c)
 */

__int64 __fastcall ExpWnfPopulateStateData(__int64 a1)
{
  ULONG v2; // ebp
  SIZE_T v3; // rdx
  unsigned int *PoolWithTag; // rbx
  __int64 v5; // rcx
  NTSTATUS v6; // eax
  unsigned int v7; // edi
  unsigned int v8; // eax
  unsigned int v10; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-58h] BYREF
  UNICODE_STRING ValueName; // [rsp+38h] [rbp-50h] BYREF
  char v13; // [rsp+48h] [rbp-40h] BYREF

  if ( *(_QWORD *)(a1 + 88) || !*(_QWORD *)(a1 + 104) )
    return 0LL;
  v2 = *(_DWORD *)(a1 + 56);
  v3 = v2 + 16;
  while ( 1 )
  {
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v3, 0x20666E57u);
    if ( !PoolWithTag )
      return 3221225626LL;
    v5 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)&ValueName.Length = 2228224LL;
    ValueName.Buffer = (wchar_t *)&v13;
    ExpWnfComposeValueName(v5, &ValueName);
    ResultLength = v2 + 16;
    v6 = ZwQueryValueKey(
           *(HANDLE *)(a1 + 104),
           &ValueName,
           KeyValuePartialInformation,
           PoolWithTag,
           v2 + 16,
           &ResultLength);
    v7 = v6;
    if ( v6 == -1073741772 )
    {
      *(_QWORD *)PoolWithTag = 0LL;
      *((_QWORD *)PoolWithTag + 1) = 0LL;
LABEL_7:
      *PoolWithTag = 1050884;
      v8 = PoolWithTag[3];
      PoolWithTag[1] = v2;
      *(_DWORD *)(a1 + 96) = v8;
      *(_QWORD *)(a1 + 88) = PoolWithTag;
      return 0LL;
    }
    if ( v6 != -1073741789 )
      break;
    ExFreePoolWithTag(PoolWithTag, 0x20666E57u);
    v3 = ResultLength;
    v2 = ResultLength - 16;
  }
  if ( v6 >= 0 )
  {
    if ( PoolWithTag[1] == 3 )
    {
      v10 = PoolWithTag[2];
      if ( v10 >= 4 )
      {
        PoolWithTag[2] = v10 - 4;
        goto LABEL_7;
      }
    }
    v7 = -1073741823;
  }
  ExFreePoolWithTag(PoolWithTag, 0x20666E57u);
  return v7;
}
