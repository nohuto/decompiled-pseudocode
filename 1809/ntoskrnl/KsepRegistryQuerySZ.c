/*
 * XREFs of KsepRegistryQuerySZ @ 0x14072946C
 * Callers:
 *     KsepRegistryQueryDriverShims @ 0x14067EE54 (KsepRegistryQueryDriverShims.c)
 *     KsepRegistryQueryMULTISZ @ 0x140729440 (KsepRegistryQueryMULTISZ.c)
 *     KsepMatchInitBiosInfo @ 0x1409B02B4 (KsepMatchInitBiosInfo.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     KsepPoolFreePaged @ 0x1400F4D34 (KsepPoolFreePaged.c)
 *     KsepPoolAllocatePaged @ 0x1400F4D5C (KsepPoolAllocatePaged.c)
 *     ZwQueryValueKey @ 0x1401B85D0 (ZwQueryValueKey.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     RtlAssert @ 0x1402EFA50 (RtlAssert.c)
 */

__int64 __fastcall KsepRegistryQuerySZ(
        HANDLE KeyHandle,
        PCWSTR SourceString,
        int a3,
        void *a4,
        unsigned __int64 a5,
        _QWORD *a6)
{
  _QWORD *v10; // rsi
  NTSTATUS v11; // ebx
  _DWORD *Paged; // rax
  _DWORD *v13; // rbx
  unsigned int v14; // edi
  size_t v15; // r8
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  char v20; // al
  __int64 v21; // rcx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF
  ULONG ResultLength; // [rsp+70h] [rbp+8h] BYREF

  ResultLength = 0;
  if ( !KeyHandle )
  {
    v17 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v17 + 1] = -1073740768;
    KsepHistoryErrors[2 * v17] = 262993;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("KeyHandle != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x351u, 0LL);
  }
  if ( !a4 )
  {
    v18 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v18 + 1] = -1073740768;
    KsepHistoryErrors[2 * v18] = 262994;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("ValueBuffer != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x352u, 0LL);
  }
  v10 = a6;
  if ( !a6 )
  {
    v19 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v19 + 1] = -1073740768;
    KsepHistoryErrors[2 * v19] = 262995;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("ActualLength != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x353u, 0LL);
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  v11 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &ResultLength);
  if ( v11 == -1073741789 )
  {
    Paged = KsepPoolAllocatePaged(ResultLength);
    v13 = Paged;
    if ( Paged )
    {
      v14 = ZwQueryValueKey(
              KeyHandle,
              &DestinationString,
              KeyValuePartialInformation,
              Paged,
              ResultLength,
              &ResultLength);
      if ( !v14 )
      {
        v15 = (unsigned int)v13[2];
        if ( v15 > a5 )
        {
          v14 = -1073741789;
        }
        else if ( v13[1] == a3 )
        {
          memmove(a4, v13 + 3, v15);
          *v10 = (unsigned int)v13[2];
        }
        else
        {
          v14 = -1073741788;
        }
      }
      KsepPoolFreePaged(v13);
      return v14;
    }
    else
    {
      return 3221225495LL;
    }
  }
  else
  {
    if ( v11 >= 0 )
    {
      v20 = KsepDebugFlag;
      v21 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
      KsepHistoryErrors[2 * v21 + 1] = -1073740768;
      KsepHistoryErrors[2 * v21] = 263013;
      if ( (v20 & 4) != 0 )
        RtlAssert("!NT_SUCCESS(Status)", "minkernel\\ntos\\kshim\\kseregistry.c", 0x365u, 0LL);
    }
    return (unsigned int)v11;
  }
}
