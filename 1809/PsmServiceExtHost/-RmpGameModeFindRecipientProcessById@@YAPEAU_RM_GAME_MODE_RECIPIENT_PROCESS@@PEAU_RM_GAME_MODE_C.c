/*
 * XREFs of ?RmpGameModeFindRecipientProcessById@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MODE_CONTEXT@@K@Z @ 0x18005E7D8
 * Callers:
 *     ?RmpGameModeDisableForRegisteredProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z @ 0x18005E5B4 (-RmpGameModeDisableForRegisteredProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z.c)
 *     ?RmpGameModeFindProcessOrCompleteInsertion@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAPEAU2@@Z @ 0x18005E674 (-RmpGameModeFindProcessOrCompleteInsertion@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_.c)
 *     ?RmpGameModeReenableForRegisteredProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z @ 0x18005EFDC (-RmpGameModeReenableForRegisteredProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z.c)
 *     ?RmpGameModeRegisterPairedProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@1@Z @ 0x18005F09C (-RmpGameModeRegisterPairedProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_.c)
 *     ?RmpGameModeUnregisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z @ 0x18006042C (-RmpGameModeUnregisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

struct _RM_GAME_MODE_RECIPIENT_PROCESS *__fastcall RmpGameModeFindRecipientProcessById(
        struct _RM_GAME_MODE_CONTEXT *a1,
        unsigned int a2)
{
  __int64 v2; // r9
  unsigned __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rcx

  v2 = *((_QWORD *)a1 + 2);
  v3 = (unsigned __int64)a1 + 8;
  v4 = 0LL;
  v5 = *(_QWORD *)v3;
  if ( (v2 & 1) != 0 )
  {
    if ( v5 )
      v5 ^= v3;
    else
      v5 = 0LL;
  }
  while ( v5 )
  {
    if ( a2 < *(_DWORD *)(v5 + 100) )
    {
      v6 = *(_QWORD *)v5;
    }
    else
    {
      if ( a2 <= *(_DWORD *)(v5 + 100) )
      {
        v4 = v5 - 8;
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v5 - 8)) <= 1 )
          __fastfail(0xEu);
        return (struct _RM_GAME_MODE_RECIPIENT_PROCESS *)v4;
      }
      v6 = *(_QWORD *)(v5 + 8);
    }
    if ( (v2 & 1) != 0 && v6 )
      v5 ^= v6;
    else
      v5 = v6;
  }
  return (struct _RM_GAME_MODE_RECIPIENT_PROCESS *)v4;
}
