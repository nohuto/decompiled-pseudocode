/*
 * XREFs of PiDmCacheDataDecode @ 0x140599F2C
 * Callers:
 *     PiDmObjectGetCachedObjectPropertyData @ 0x140599D6C (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectProcessPropertyChange @ 0x1406F34BC (PiDmObjectProcessPropertyChange.c)
 *     PiDmListUpdateAggregationCountWorker @ 0x140703CD8 (PiDmListUpdateAggregationCountWorker.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     RtlGUIDFromString @ 0x14059B5A0 (RtlGUIDFromString.c)
 */

__int64 __fastcall PiDmCacheDataDecode(__int64 a1, _DWORD *a2, GUID *a3, unsigned int a4, unsigned int *a5)
{
  unsigned int v5; // ebx
  int v7; // eax
  __int64 v9; // rax
  unsigned int v10; // edx
  size_t v11; // r8
  const void *v12; // rdx
  unsigned int v13; // edx
  unsigned int v14; // edx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0;
  switch ( *(_DWORD *)a1 )
  {
    case 2:
      return (unsigned int)-1073741275;
    case 3:
      *a2 = *(_DWORD *)(a1 + 8);
      v13 = *(_DWORD *)(a1 + 12);
      *a5 = v13;
      if ( a4 < v13 )
        return (unsigned int)-1073741789;
      v11 = v13;
      v12 = (const void *)(a1 + 16);
LABEL_16:
      memmove(a3, v12, v11);
      return v5;
    case 4:
      *a2 = 13;
      *a5 = 16;
      if ( a4 >= 0x10 )
      {
        *a3 = *(GUID *)(a1 + 8);
        return v5;
      }
      return (unsigned int)-1073741789;
    case 5:
      *a2 = *(_DWORD *)(a1 + 8);
      v14 = *(_DWORD *)(a1 + 12);
      *a5 = v14;
      if ( a4 < v14 )
        return (unsigned int)-1073741789;
      v11 = v14;
      v12 = *(const void **)(a1 + 16);
      goto LABEL_16;
  }
  if ( *(_DWORD *)a1 != 6 )
    return (unsigned int)-1073741595;
  v7 = *(_DWORD *)(a1 + 8);
  if ( v7 != 13 )
  {
    if ( v7 == 18 )
    {
      *a2 = 18;
      v9 = -1LL;
      do
        ++v9;
      while ( *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) + 2 * v9) );
      v10 = 2 * v9 + 2;
      *a5 = v10;
      if ( a4 < v10 )
        return (unsigned int)-1073741789;
      v11 = v10;
      v12 = *(const void **)(*(_QWORD *)(a1 + 16) + 16LL);
      goto LABEL_16;
    }
    return (unsigned int)-1073741595;
  }
  *a2 = 13;
  *a5 = 16;
  if ( a4 < 0x10 )
    return (unsigned int)-1073741789;
  RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(*(_QWORD *)(a1 + 16) + 16LL));
  return (unsigned int)RtlGUIDFromString(&DestinationString, a3);
}
