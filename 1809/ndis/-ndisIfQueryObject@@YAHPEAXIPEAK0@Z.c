/*
 * XREFs of ?ndisIfQueryObject@@YAHPEAXIPEAK0@Z @ 0x1C00B61D0
 * Callers:
 *     <none>
 * Callees:
 *     ndisIfDereferenceMiniport @ 0x1C000A8E0 (ndisIfDereferenceMiniport.c)
 *     ndisIfReferenceMiniport @ 0x1C000E020 (ndisIfReferenceMiniport.c)
 *     WPP_SF_LqL @ 0x1C0041868 (WPP_SF_LqL.c)
 *     WPP_SF_DqLL @ 0x1C00418BC (WPP_SF_DqLL.c)
 *     ?ndisIfQueryMiniportObjectNotPresent@@YAHPEAU_NDIS_IF_BLOCK@@IPEAKPEAX@Z @ 0x1C00B5FB0 (-ndisIfQueryMiniportObjectNotPresent@@YAHPEAU_NDIS_IF_BLOCK@@IPEAKPEAX@Z.c)
 *     ?ndisIfQueryFilterObject@@YAHPEAU_NDIS_FILTER_BLOCK@@IPEAKPEAX@Z @ 0x1C00B62A0 (-ndisIfQueryFilterObject@@YAHPEAU_NDIS_FILTER_BLOCK@@IPEAKPEAX@Z.c)
 *     ?ndisIfQueryMiniportObject@@YAHPEAU_NDIS_MINIPORT_BLOCK@@IPEAKPEAX@Z @ 0x1C00CCF04 (-ndisIfQueryMiniportObject@@YAHPEAU_NDIS_MINIPORT_BLOCK@@IPEAKPEAX@Z.c)
 */

__int64 __fastcall ndisIfQueryObject(struct _NDIS_IF_BLOCK *a1, __int64 a2, unsigned int *a3, _DWORD *a4)
{
  unsigned int v6; // ebp
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int FilterObject; // edi
  struct _NDIS_MINIPORT_BLOCK *v12; // rax
  __int64 v13; // rdx

  v6 = a2;
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_LqL(0x38u, a2, a2, (__int64)a4);
  if ( !a1 )
    return 3221225485LL;
  if ( a1->IsNdisFilter )
  {
    FilterObject = ndisIfQueryFilterObject(a1->Filter, v6, a3, a4);
  }
  else
  {
    v12 = (struct _NDIS_MINIPORT_BLOCK *)ndisIfReferenceMiniport((__int64)a1, 2u);
    if ( v12 )
    {
      FilterObject = ndisIfQueryMiniportObject(v12, v6, a3, a4);
      ndisIfDereferenceMiniport((__int64)a1, v13, 2u);
    }
    else
    {
      FilterObject = ndisIfQueryMiniportObjectNotPresent(a1, v6, a3, a4);
    }
  }
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_DqLL(v9, v8, v6, (__int64)a4);
  return FilterObject;
}
