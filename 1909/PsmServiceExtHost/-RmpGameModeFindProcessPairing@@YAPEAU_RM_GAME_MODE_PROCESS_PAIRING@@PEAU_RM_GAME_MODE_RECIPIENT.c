/*
 * XREFs of ?RmpGameModeFindProcessPairing@@YAPEAU_RM_GAME_MODE_PROCESS_PAIRING@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@KW4_RM_GAME_MODE_PAIRED_PROCESS@@@Z @ 0x18006B6FC
 * Callers:
 *     ?RmpGameModeRegisterPairedProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@1@Z @ 0x18006C038 (-RmpGameModeRegisterPairedProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_.c)
 * Callees:
 *     ?RmpGameModeComparePairingByAuxiliaryId@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x18006B44C (-RmpGameModeComparePairingByAuxiliaryId@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

unsigned __int64 __fastcall RmpGameModeFindProcessPairing(__int64 a1, unsigned int a2)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rbx
  int v4; // edi
  unsigned __int64 v5; // rsi
  int v6; // eax
  unsigned __int64 v7; // rax

  v2 = a1 + 72;
  v3 = *(_QWORD *)v2;
  if ( (*(_BYTE *)(v2 + 8) & 1) != 0 && v3 )
    v3 ^= v2;
  v4 = *(_BYTE *)(v2 + 8) & 1;
  if ( !v3 )
    return 0LL;
  v5 = a2;
  do
  {
    v6 = RmpGameModeComparePairingByAuxiliaryId((void *)v5, (struct _RTL_BALANCED_NODE *)v3);
    if ( v6 >= 0 )
    {
      if ( v6 <= 0 )
        break;
      v7 = *(_QWORD *)(v3 + 8);
    }
    else
    {
      v7 = *(_QWORD *)v3;
    }
    if ( v4 && v7 )
      v3 ^= v7;
    else
      v3 = v7;
  }
  while ( v3 );
  if ( v3 )
    return v3;
  else
    return 0LL;
}
