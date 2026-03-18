/*
 * XREFs of PiDmCacheDataDecode @ 0x1405BF150
 * Callers:
 *     PiDmObjectGetCachedObjectPropertyData @ 0x1405BED80 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectProcessPropertyChange @ 0x1406FA2C8 (PiDmObjectProcessPropertyChange.c)
 *     PiDmListUpdateAggregationCountWorker @ 0x140723B34 (PiDmListUpdateAggregationCountWorker.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     RtlGUIDFromString @ 0x1405C15F0 (RtlGUIDFromString.c)
 */

__int64 __fastcall PiDmCacheDataDecode(int *a1, _DWORD *a2, GUID *a3, unsigned int a4, unsigned int *a5)
{
  int v5; // r10d
  unsigned int v6; // ebx
  int v8; // r10d
  int v9; // r10d
  int v10; // r10d
  int v11; // r10d
  int v12; // eax
  __int64 v14; // rax
  unsigned int v15; // edx
  size_t v16; // r8
  const void *v17; // rdx
  unsigned int v18; // edx
  unsigned int v19; // edx
  UNICODE_STRING GuidString; // [rsp+20h] [rbp-18h] BYREF

  v5 = *a1;
  v6 = 0;
  *(_QWORD *)&GuidString.Length = 0LL;
  GuidString.Buffer = 0LL;
  v8 = v5 - 2;
  if ( !v8 )
    return (unsigned int)-1073741275;
  v9 = v8 - 1;
  if ( !v9 )
  {
    *a2 = a1[2];
    v18 = a1[3];
    *a5 = v18;
    if ( a4 < v18 )
      return (unsigned int)-1073741789;
    v16 = v18;
    v17 = a1 + 4;
LABEL_16:
    memmove(a3, v17, v16);
    return v6;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    *a2 = 13;
    *a5 = 16;
    if ( a4 >= 0x10 )
    {
      *a3 = *(GUID *)(a1 + 2);
      return v6;
    }
    return (unsigned int)-1073741789;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    *a2 = a1[2];
    v19 = a1[3];
    *a5 = v19;
    if ( a4 < v19 )
      return (unsigned int)-1073741789;
    v16 = v19;
    v17 = (const void *)*((_QWORD *)a1 + 2);
    goto LABEL_16;
  }
  if ( v11 != 1 )
    return (unsigned int)-1073741595;
  v12 = a1[2];
  if ( v12 != 13 )
  {
    if ( v12 == 18 )
    {
      *a2 = 18;
      v14 = -1LL;
      do
        ++v14;
      while ( *(_WORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL) + 2 * v14) );
      v15 = 2 * v14 + 2;
      *a5 = v15;
      if ( a4 < v15 )
        return (unsigned int)-1073741789;
      v16 = v15;
      v17 = *(const void **)(*((_QWORD *)a1 + 2) + 16LL);
      goto LABEL_16;
    }
    return (unsigned int)-1073741595;
  }
  *a2 = 13;
  *a5 = 16;
  if ( a4 < 0x10 )
    return (unsigned int)-1073741789;
  RtlInitUnicodeString(&GuidString, *(PCWSTR *)(*((_QWORD *)a1 + 2) + 16LL));
  return (unsigned int)RtlGUIDFromString(&GuidString, a3);
}
