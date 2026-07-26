/*
 * XREFs of ?ndisIfFindAvailableCompartmentId@@YAIPEBU_GUID@@@Z @ 0x1C00639FC
 * Callers:
 *     ?ndisIfCreateCompartmentBlock@@YAJIPEAU_GUID@@PEAU_NDIS_NSI_COMPARTMENT_RW@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C0036BD0 (-ndisIfCreateCompartmentBlock@@YAJIPEAU_GUID@@PEAU_NDIS_NSI_COMPARTMENT_RW@@PEAPEAU_NDIS_IF_COMP.c)
 * Callees:
 *     ?ndisCompareGuid@@YAJPEBU_GUID@@0@Z @ 0x1C0011F54 (-ndisCompareGuid@@YAJPEBU_GUID@@0@Z.c)
 */

__int64 __fastcall ndisIfFindAvailableCompartmentId(const struct _GUID *a1)
{
  struct _NDIS_IF_COMPARTMENT_BLOCK *Flink; // rdi
  unsigned int v2; // ebx
  int v4; // ebp
  unsigned int v5; // esi
  unsigned int CompartmentId; // ecx
  unsigned int v7; // eax

  Flink = ndisIfCompartmentList;
  v2 = 1;
  v4 = 1;
  v5 = 0;
  while ( Flink != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&ndisIfCompartmentList )
  {
    if ( v4 == 1 )
    {
      CompartmentId = Flink->CompartmentId;
      v7 = v2 + 1;
      if ( v2 != CompartmentId )
        v7 = v2;
      v2 = v7;
      if ( v7 < CompartmentId )
        v4 = v7;
    }
    if ( !(unsigned int)ndisCompareGuid(&Flink->LoopbackInfo.CompartmentGuid, a1) )
    {
      v4 = 0;
      break;
    }
    Flink = (struct _NDIS_IF_COMPARTMENT_BLOCK *)Flink->Link.Flink;
  }
  if ( Flink != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&ndisIfCompartmentList )
    v2 = v4;
  if ( v2 != -1 )
    return v2;
  return v5;
}
