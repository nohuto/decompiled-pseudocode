/*
 * XREFs of ?ndisIfQueryObject@@YAHPEAXIPEAK0@Z @ 0x1C00FAED0
 * Callers:
 *     <none>
 * Callees:
 *     ndisIfDereferenceMiniport @ 0x1C0002A30 (ndisIfDereferenceMiniport.c)
 *     ndisIfReferenceMiniport @ 0x1C0002E20 (ndisIfReferenceMiniport.c)
 *     WPP_RECORDER_SF_DqL @ 0x1C0006400 (WPP_RECORDER_SF_DqL.c)
 *     WPP_RECORDER_SF_DqLL @ 0x1C00064B0 (WPP_RECORDER_SF_DqLL.c)
 *     ?ndisIfQueryFilterObject@@YAHPEAU_NDIS_FILTER_BLOCK@@IPEAKPEAX@Z @ 0x1C00FAB00 (-ndisIfQueryFilterObject@@YAHPEAU_NDIS_FILTER_BLOCK@@IPEAKPEAX@Z.c)
 *     ?ndisIfQueryMiniportObjectNotPresent@@YAHPEAU_NDIS_IF_BLOCK@@IPEAKPEAX@Z @ 0x1C00FBCA0 (-ndisIfQueryMiniportObjectNotPresent@@YAHPEAU_NDIS_IF_BLOCK@@IPEAKPEAX@Z.c)
 *     ?ndisIfQueryMiniportObject@@YAHPEAU_NDIS_MINIPORT_BLOCK@@IPEAKPEAX@Z @ 0x1C00FF134 (-ndisIfQueryMiniportObject@@YAHPEAU_NDIS_MINIPORT_BLOCK@@IPEAKPEAX@Z.c)
 */

__int64 __fastcall ndisIfQueryObject(struct _NDIS_IF_BLOCK *a1, unsigned int a2, unsigned int *a3, unsigned __int8 *a4)
{
  __int64 v8; // rdx
  unsigned int FilterObject; // edi
  __int64 v10; // r8
  __int64 v11; // r9
  struct _NDIS_MINIPORT_BLOCK *v13; // rax
  __int64 v14; // rdx
  int v15; // [rsp+20h] [rbp-48h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DqL(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, (_DWORD)a3, 57);
  if ( !a1 )
    return 3221225485LL;
  if ( a1->IsNdisFilter )
  {
    FilterObject = ndisIfQueryFilterObject(a1->Filter, a2, a3, a4);
  }
  else
  {
    v13 = (struct _NDIS_MINIPORT_BLOCK *)ndisIfReferenceMiniport((__int64)a1);
    if ( v13 )
    {
      FilterObject = ndisIfQueryMiniportObject(v13, a2, a3, a4);
      ndisIfDereferenceMiniport((__int64)a1, v14, 2u);
    }
    else
    {
      FilterObject = ndisIfQueryMiniportObjectNotPresent(a1, a2, a3, a4);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DqLL(*((_QWORD *)WPP_GLOBAL_Control + 8), v8, v10, v11, v15);
  return FilterObject;
}
