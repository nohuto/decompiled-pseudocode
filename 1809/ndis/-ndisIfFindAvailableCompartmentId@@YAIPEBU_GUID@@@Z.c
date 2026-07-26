/*
 * XREFs of ?ndisIfFindAvailableCompartmentId@@YAIPEBU_GUID@@@Z @ 0x1C003EE88
 * Callers:
 *     ?ndisIfCreateCompartmentBlock@@YAJIPEAU_GUID@@PEAU_NDIS_NSI_COMPARTMENT_RW@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C00202F0 (-ndisIfCreateCompartmentBlock@@YAJIPEAU_GUID@@PEAU_NDIS_NSI_COMPARTMENT_RW@@PEAPEAU_NDIS_IF_COMP.c)
 * Callees:
 *     ?ndisCompareGuid@@YAJPEBU_GUID@@0@Z @ 0x1C000988C (-ndisCompareGuid@@YAJPEBU_GUID@@0@Z.c)
 */

__int64 __fastcall ndisIfFindAvailableCompartmentId(const struct _GUID *a1)
{
  _LIST_ENTRY *Flink; // rdi
  unsigned int v2; // ebx
  int v4; // ebp
  unsigned int v5; // esi
  unsigned int v6; // ecx
  unsigned int v7; // eax

  Flink = ndisIfCompartmentList.Flink;
  v2 = 1;
  v4 = 1;
  v5 = 0;
  while ( Flink != &ndisIfCompartmentList )
  {
    if ( v4 == 1 )
    {
      v6 = (unsigned int)Flink[1].Flink;
      v7 = v2 + 1;
      if ( v2 != v6 )
        v7 = v2;
      v2 = v7;
      if ( v7 < v6 )
        v4 = v7;
    }
    if ( !(unsigned int)ndisCompareGuid((const struct _GUID *)&Flink[71].Blink, a1) )
    {
      v4 = 0;
      break;
    }
    Flink = Flink->Flink;
  }
  if ( Flink != &ndisIfCompartmentList )
    v2 = v4;
  if ( v2 != -1 )
    return v2;
  return v5;
}
