/*
 * XREFs of ?ndisIovAddVPortToPFList@@YAXPEAU_NDIS_PF_BLOCK@@PEAU_NDIS_VPORT_BLOCK@@@Z @ 0x1C00AF958
 * Callers:
 *     ndisOidPostIovCreateVPort @ 0x1C00B23A0 (ndisOidPostIovCreateVPort.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisIovAddVPortToPFList(struct _NDIS_PF_BLOCK *a1, struct _NDIS_VPORT_BLOCK *a2)
{
  struct _NDIS_PF_BLOCK *i; // rax
  _LIST_ENTRY *p_FunctionLink; // rcx
  _LIST_ENTRY *Open; // rdx
  _LIST_ENTRY *Flink; // rax

  for ( i = (struct _NDIS_PF_BLOCK *)a1->AttachedVPortList.Flink;
        i != (struct _NDIS_PF_BLOCK *)&a1->AttachedVPortList;
        i = (struct _NDIS_PF_BLOCK *)i->Miniport )
  {
    if ( i[1].NumAttachedVPorts > a2->VPortParams.VPortId )
      break;
  }
  p_FunctionLink = &a2->FunctionLink;
  Open = (_LIST_ENTRY *)i->Open;
  Flink = Open->Flink;
  if ( Open->Flink->Blink != Open )
    __fastfail(3u);
  p_FunctionLink->Flink = Flink;
  p_FunctionLink->Blink = Open;
  Flink->Blink = p_FunctionLink;
  Open->Flink = p_FunctionLink;
  ++a1->NumAttachedVPorts;
}
