/*
 * XREFs of ?RmpGameModePromoteAuxiliaryProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_LIST_ENTRY@@@Z @ 0x18006BCC4
 * Callers:
 *     ?RmpGameModePromoteNewRecipients@@YAXPEAU_RM_GAME_MODE_CONTEXT@@KPEAU_LIST_ENTRY@@PEAE@Z @ 0x180036B50 (-RmpGameModePromoteNewRecipients@@YAXPEAU_RM_GAME_MODE_CONTEXT@@KPEAU_LIST_ENTRY@@PEAE@Z.c)
 *     ?RmpGameModePromotePairedAuxiliaryNode@@YAJPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x18006BD14 (-RmpGameModePromotePairedAuxiliaryNode@@YAJPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpGameModePromoteAuxiliaryProcess(struct _RM_GAME_MODE_RECIPIENT_PROCESS *a1, struct _LIST_ENTRY *a2)
{
  struct _LIST_ENTRY *v2; // rax
  struct _LIST_ENTRY *Blink; // r8

  v2 = (struct _LIST_ENTRY *)((char *)a1 + 88);
  *((_BYTE *)a1 + 171) |= 1u;
  *((_DWORD *)a1 + 26) = 1;
  Blink = a2->Blink;
  if ( Blink->Flink != a2 )
    __fastfail(3u);
  v2->Flink = a2;
  *((_QWORD *)a1 + 12) = Blink;
  Blink->Flink = v2;
  a2->Blink = v2;
  if ( _InterlockedIncrement64((volatile signed __int64 *)a1) <= 1 )
    __fastfail(0xEu);
}
