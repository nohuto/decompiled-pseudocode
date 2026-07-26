/*
 * XREFs of ndisWdfGetGuidToOidList @ 0x1C00A81E0
 * Callers:
 *     NdisWdfGetGuidToOidMap @ 0x1C009EBC0 (NdisWdfGetGuidToOidMap.c)
 * Callees:
 *     ?ndisWmiMapOids@@YAGPEAU_NDIS_GUID@@GPEBKG0K@Z @ 0x1C0033914 (-ndisWmiMapOids@@YAGPEAU_NDIS_GUID@@GPEBKG0K@Z.c)
 */

__int64 __fastcall ndisWdfGetGuidToOidList(unsigned int *a1, unsigned __int16 a2, struct _NDIS_GUID *a3, _WORD *a4)
{
  unsigned __int16 v8; // dx
  struct _NDIS_GUID *v9; // r10
  __int64 v10; // r8
  __int64 v11; // rcx
  unsigned __int16 v12; // ax
  unsigned __int16 v13; // r9
  __int64 result; // rax
  __int16 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  _GUID *v18; // rax
  struct _NDIS_GUID *v19; // rcx
  _GUID v20; // xmm1

  v8 = 0;
  v9 = &ndisSupportedGuids;
  v10 = 82LL;
  do
  {
    if ( (v9->Flags & 0x31000000) == 0x20000000 )
    {
      if ( a3 )
      {
        v11 = v8;
        a3[v11].Guid = v9->Guid;
        *(_QWORD *)&a3[v11].Oid = *(_QWORD *)&v9->Oid;
        a3[v11].Flags = v9->Flags;
      }
      ++v8;
    }
    ++v9;
    --v10;
  }
  while ( v10 );
  v12 = ndisWmiMapOids(a3, v8, a1, a2, &ndisSupportedGuids, 0x52u);
  result = ndisWmiMapOids(a3, v12, a1, v13, &ndisMediaSupportedGuids, 0x31u);
  v15 = result;
  if ( a3 )
  {
    v16 = 8LL;
    v17 = (unsigned __int16)result;
    v18 = (_GUID *)&ndisStatusSupportedGuids;
    v19 = &a3[v17];
    do
    {
      v19->Guid = *v18;
      *(_GUID *)&v19->Oid = v18[1];
      *(_GUID *)&v19[1].Guid.Data2 = v18[2];
      *(_GUID *)&v19[1].Size = v18[3];
      *(_GUID *)v19[2].Guid.Data4 = v18[4];
      *(_GUID *)&v19[2].Flags = v18[5];
      *(_GUID *)&v19[3].Guid.Data4[4] = v18[6];
      v19 = (struct _NDIS_GUID *)((char *)v19 + 128);
      v20 = v18[7];
      v18 += 8;
      *(_GUID *)&v19[-1].Guid.Data4[4] = v20;
      --v16;
    }
    while ( v16 );
    v19->Guid = *v18;
    *(_GUID *)&v19->Oid = v18[1];
    result = *(_QWORD *)&v18[2].Data1;
    *(_QWORD *)&v19[1].Guid.Data2 = result;
  }
  *a4 = v15 + 38;
  return result;
}
