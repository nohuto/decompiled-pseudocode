/*
 * XREFs of ?ndisWmiMapOids@@YAGPEAU_NDIS_GUID@@GPEBKG0K@Z @ 0x1C0033904
 * Callers:
 *     ?ndisQuerySupportedGuidToOidList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003346C (-ndisQuerySupportedGuidToOidList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisWdfGetGuidToOidList @ 0x1C00A83B0 (ndisWdfGetGuidToOidList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisWmiMapOids(
        struct _NDIS_GUID *a1,
        unsigned __int16 a2,
        const unsigned int *a3,
        unsigned __int16 a4,
        struct _NDIS_GUID *a5,
        unsigned int a6)
{
  unsigned __int16 i; // r11
  unsigned __int16 v10; // cx
  __int64 v11; // r8
  unsigned int Oid; // edx
  __int64 v14; // rdx

  for ( i = 0; i < a6; ++i )
  {
    v10 = 0;
    if ( a4 )
    {
      v11 = i;
      Oid = a5[v11].Oid;
      while ( !Oid || Oid != a3[v10] )
      {
        if ( ++v10 >= a4 )
          goto LABEL_11;
      }
      if ( a1 )
      {
        v14 = a2;
        a1[v14].Guid = a5[v11].Guid;
        *(_QWORD *)&a1[v14].Oid = *(_QWORD *)&a5[v11].Oid;
        a1[v14].Flags = a5[v11].Flags;
      }
      ++a2;
    }
LABEL_11:
    ;
  }
  return a2;
}
