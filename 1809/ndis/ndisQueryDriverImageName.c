/*
 * XREFs of ndisQueryDriverImageName @ 0x1C00CDF48
 * Callers:
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C0021CD8 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     NdisFRegisterFilterDriver @ 0x1C00220A0 (NdisFRegisterFilterDriver.c)
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00224F0 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ndisRegisterMiniportDriver @ 0x1C01192C0 (ndisRegisterMiniportDriver.c)
 * Callees:
 *     memset @ 0x1C0027180 (memset.c)
 */

void __fastcall ndisQueryDriverImageName(__int64 a1, _UNICODE_STRING *a2)
{
  void *v2; // r8
  const WCHAR *v4; // rbx
  unsigned __int16 v5; // bx
  unsigned __int16 v6; // ax
  unsigned __int16 v7; // r9
  unsigned __int16 v8; // dx
  unsigned __int16 v9; // cx
  unsigned __int16 v11; // di
  wchar_t *PoolWithTag; // rax
  const WCHAR *v13; // rax
  __int64 v14; // [rsp+38h] [rbp-39h] BYREF
  void *v15; // [rsp+40h] [rbp-31h]
  _RTL_QUERY_REGISTRY_TABLE QueryTable[2]; // [rsp+48h] [rbp-29h] BYREF

  v2 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  if ( !*(_WORD *)a1 )
    goto LABEL_12;
  v4 = *(const WCHAR **)(a1 + 8);
  if ( !v4 )
    goto LABEL_12;
  memset(QueryTable, 0, sizeof(QueryTable));
  QueryTable[0].QueryRoutine = 0LL;
  QueryTable[0].Name = L"ImagePath";
  QueryTable[0].Flags = 304;
  QueryTable[0].EntryContext = &v14;
  QueryTable[0].DefaultType = 0x2000000;
  if ( RtlQueryRegistryValuesEx(1u, v4, QueryTable, 0LL, 0LL) )
    goto LABEL_11;
  v5 = 0;
  v2 = v15;
  v6 = 0;
  v7 = (unsigned __int16)v14 >> 1;
  if ( (unsigned __int16)v14 >> 1 )
  {
    do
    {
      v8 = v6 + 1;
      v9 = v6 + 1;
      if ( *((_WORD *)v15 + v6++) != 92 )
        v9 = v5;
      v5 = v9;
    }
    while ( v8 < v7 );
  }
  if ( v5 < v7 )
  {
    v11 = v14 + 2 * (1 - v5);
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x6E61444Eu);
    a2->Buffer = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v11);
      v13 = (const WCHAR *)v15;
      a2->Length = 0;
      a2->MaximumLength = v11;
      RtlAppendUnicodeToString(a2, &v13[v5]);
    }
LABEL_11:
    v2 = v15;
  }
LABEL_12:
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
