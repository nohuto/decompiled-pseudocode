/*
 * XREFs of ?ndisIovAddVPortToVFList@@YAXPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_VPORT_BLOCK@@@Z @ 0x1C00AF9A8
 * Callers:
 *     ndisOidPostIovCreateVPort @ 0x1C00B23A0 (ndisOidPostIovCreateVPort.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisIovAddVPortToVFList(struct _NDIS_VF_BLOCK *a1, struct _NDIS_VPORT_BLOCK *a2)
{
  struct _NDIS_VF_BLOCK *i; // rax
  _LIST_ENTRY *p_FunctionLink; // rcx
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *Flink; // rax

  for ( i = (struct _NDIS_VF_BLOCK *)a1->AttachedVPortList.Flink;
        i != (struct _NDIS_VF_BLOCK *)&a1->AttachedVPortList;
        i = (struct _NDIS_VF_BLOCK *)i->AdapterLink.Flink )
  {
    if ( i->NumAttachedVPorts > a2->VPortParams.VPortId )
      break;
  }
  p_FunctionLink = &a2->FunctionLink;
  Blink = i->AdapterLink.Blink;
  Flink = Blink->Flink;
  if ( Blink->Flink->Blink != Blink )
    __fastfail(3u);
  p_FunctionLink->Flink = Flink;
  p_FunctionLink->Blink = Blink;
  Flink->Blink = p_FunctionLink;
  Blink->Flink = p_FunctionLink;
  ++a1->NumAttachedVPorts;
}
