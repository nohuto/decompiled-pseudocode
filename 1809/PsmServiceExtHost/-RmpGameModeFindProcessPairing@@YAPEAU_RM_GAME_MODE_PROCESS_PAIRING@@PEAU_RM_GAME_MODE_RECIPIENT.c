/*
 * XREFs of ?RmpGameModeFindProcessPairing@@YAPEAU_RM_GAME_MODE_PROCESS_PAIRING@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@KW4_RM_GAME_MODE_PAIRED_PROCESS@@@Z @ 0x18005E750
 * Callers:
 *     ?RmpGameModeRegisterPairedProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@1@Z @ 0x18005F09C (-RmpGameModeRegisterPairedProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_.c)
 * Callees:
 *     ?RmpGameModeComparePairingByAuxiliaryId@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x18005E4A0 (-RmpGameModeComparePairingByAuxiliaryId@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

unsigned __int64 __fastcall RmpGameModeFindProcessPairing(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  struct _RTL_BALANCED_NODE **v3; // rcx
  unsigned __int64 v4; // rbx
  int v5; // edi
  unsigned __int64 v6; // rsi
  int v7; // eax
  unsigned __int64 v8; // rax

  v2 = *(_QWORD *)(a1 + 80);
  v3 = (struct _RTL_BALANCED_NODE **)(a1 + 72);
  v4 = (unsigned __int64)*v3;
  if ( (v2 & 1) != 0 && v4 )
    v4 ^= (unsigned __int64)v3;
  v5 = v2 & 1;
  if ( !v4 )
    return 0LL;
  v6 = a2;
  do
  {
    v7 = RmpGameModeComparePairingByAuxiliaryId((void *)v6, (struct _RTL_BALANCED_NODE *)v4);
    if ( v7 >= 0 )
    {
      if ( v7 <= 0 )
        break;
      v8 = *(_QWORD *)(v4 + 8);
    }
    else
    {
      v8 = *(_QWORD *)v4;
    }
    if ( v5 && v8 )
      v4 ^= v8;
    else
      v4 = v8;
  }
  while ( v4 );
  if ( v4 )
    return v4;
  else
    return 0LL;
}
