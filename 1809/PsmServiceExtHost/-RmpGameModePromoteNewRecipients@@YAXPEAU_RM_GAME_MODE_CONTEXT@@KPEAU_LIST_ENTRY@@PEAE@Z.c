/*
 * XREFs of ?RmpGameModePromoteNewRecipients@@YAXPEAU_RM_GAME_MODE_CONTEXT@@KPEAU_LIST_ENTRY@@PEAE@Z @ 0x1800359E8
 * Callers:
 *     ?RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800355F0 (-RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18005E4E0 (-RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeIsProcessPrimary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18005EBA0 (-RmpGameModeIsProcessPrimary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModePromoteAuxiliaryProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_LIST_ENTRY@@@Z @ 0x18005ED40 (-RmpGameModePromoteAuxiliaryProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?RmpGameModePromotePairedAuxiliaryNode@@YAJPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x18005ED90 (-RmpGameModePromotePairedAuxiliaryNode@@YAJPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 *     ?RmpGameModeShouldPromoteAuxiliary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18005F69C (-RmpGameModeShouldPromoteAuxiliary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 */

void __fastcall RmpGameModePromoteNewRecipients(
        struct _RM_GAME_MODE_CONTEXT *a1,
        unsigned int a2,
        struct _LIST_ENTRY *a3,
        bool *a4)
{
  struct _RM_GAME_MODE_CONTEXT *v7; // rdi
  char *v8; // rdi
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct _LIST_ENTRY *v15; // rax
  struct _LIST_ENTRY **v16; // rcx
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rax
  bool v19; // zf
  char v20; // dl
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  char *v23; // r11
  char *i; // r10
  __int64 v25; // r10

  *a4 = *((_DWORD *)a1 + 34) != 0;
  v7 = (struct _RM_GAME_MODE_CONTEXT *)*((_QWORD *)a1 + 11);
  if ( v7 != (struct _RM_GAME_MODE_CONTEXT *)((char *)a1 + 88) )
  {
    v8 = (char *)v7 - 88;
    goto LABEL_24;
  }
  v9 = *((_QWORD *)a1 + 2);
  v10 = (unsigned __int64)a1 + 8;
  v11 = *(_QWORD *)v10;
  if ( (v9 & 1) != 0 && v11 )
    v11 ^= v10;
  v12 = v9 & 1;
  while ( 1 )
  {
    if ( !v11 )
      return;
    if ( a2 >= *(_DWORD *)(v11 + 100) )
      break;
    v13 = *(_QWORD *)v11;
LABEL_12:
    if ( v12 && v13 )
      v11 ^= v13;
    else
      v11 = v13;
  }
  if ( a2 > *(_DWORD *)(v11 + 100) )
  {
    v13 = *(_QWORD *)(v11 + 8);
    goto LABEL_12;
  }
  v8 = (char *)(v11 - 8);
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v11 - 8)) <= 1 )
    __fastfail(0xEu);
  if ( v11 != 8 )
  {
    if ( (v8[170] & 5) == 1 && RmpGameModeIsProcessPrimary((struct _RM_GAME_MODE_RECIPIENT_PROCESS *)v8) )
    {
      *((_DWORD *)v8 + 26) = 0;
      v15 = (struct _LIST_ENTRY *)(v8 + 88);
      v8[171] |= 1u;
      v16 = *(struct _LIST_ENTRY ***)(v14 + 8);
      if ( *v16 != a3 )
        __fastfail(3u);
      v15->Flink = a3;
      *((_QWORD *)v8 + 12) = v16;
      *v16 = v15;
      *(_QWORD *)(v14 + 8) = v15;
LABEL_24:
      v17 = *((_QWORD *)v8 + 9);
      if ( v17 )
      {
        while ( 2 )
        {
          while ( 2 )
          {
            if ( (int)RmpGameModePromotePairedAuxiliaryNode((struct _RTL_BALANCED_NODE *)v17, a3) < 0 )
              goto LABEL_46;
            v18 = *(_QWORD *)v17;
            if ( *(_QWORD *)v17 )
            {
              v19 = (v8[80] & 1) == 0;
              goto LABEL_28;
            }
            v18 = *(_QWORD *)(v17 + 8);
            v20 = v8[80] & 1;
            if ( v18 )
            {
              v19 = v20 == 0;
LABEL_28:
              if ( v19 )
                v17 = v18;
              else
                v17 ^= v18;
              continue;
            }
            break;
          }
          v21 = v17;
LABEL_34:
          v21 = *(_QWORD *)(v21 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v20 )
          {
            if ( !v21 )
              goto LABEL_46;
            v21 ^= v17;
          }
          if ( !v21 )
            goto LABEL_46;
          v22 = *(_QWORD *)(v21 + 8);
          if ( v20 )
          {
            if ( v22 )
            {
              v22 ^= v21;
              goto LABEL_41;
            }
          }
          else
          {
LABEL_41:
            if ( v22 && v22 != v17 )
            {
              v17 = v22;
              continue;
            }
          }
          break;
        }
        v17 = v21;
        goto LABEL_34;
      }
LABEL_46:
      v23 = (char *)a1 + 24;
      for ( i = (char *)*((_QWORD *)a1 + 3); i != v23; i = *(char **)v25 )
      {
        if ( RmpGameModeShouldPromoteAuxiliary((struct _RM_GAME_MODE_RECIPIENT_PROCESS *)(i - 56)) )
        {
          if ( (*(_BYTE *)(v25 + 114) & 8) == 0 )
            RmpGameModePromoteAuxiliaryProcess((struct _RM_GAME_MODE_RECIPIENT_PROCESS *)(v25 - 56), a3);
        }
      }
    }
    else
    {
      RmpGameModeDereferenceRecipientProcess(v8);
    }
  }
}
