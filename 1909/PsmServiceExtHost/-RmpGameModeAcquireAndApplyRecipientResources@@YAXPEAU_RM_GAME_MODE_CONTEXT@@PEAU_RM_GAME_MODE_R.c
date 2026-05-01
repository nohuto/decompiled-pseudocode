/*
 * XREFs of ?RmpGameModeAcquireAndApplyRecipientResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18006AB38
 * Callers:
 *     ?RmpGameModeApplyNewRecipientPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z @ 0x18006B0D0 (-RmpGameModeApplyNewRecipientPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RmpGameModeAcquireAndApplyRecipientResources(
        struct _RM_GAME_MODE_CONTEXT *a1,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS *a2)
{
  int v2; // ebx
  __int64 (__fastcall **v3)(struct _RM_GAME_MODE_CONTEXT *, struct _RM_GAME_MODE_RECIPIENT_PROCESS *); // r14
  unsigned int i; // ebp
  int v7; // edi
  int v8; // eax
  unsigned int v9; // ebp
  void (__fastcall **v10)(struct _RM_GAME_MODE_CONTEXT *, struct _RM_GAME_MODE_RECIPIENT_PROCESS *); // r14
  int v11; // edi
  int v12; // eax
  int v13; // r15d

  v2 = 0;
  v3 = off_18008BE70;
  for ( i = 0; i < 5; ++i )
  {
    v7 = 1 << i;
    if ( *((_BYTE *)v3 + 33) )
      goto LABEL_11;
    if ( !*v3 )
      goto LABEL_10;
    if ( *((_BYTE *)v3 + 32) )
    {
      if ( (v7 & *((_DWORD *)a1 + 32)) == 0 )
        goto LABEL_11;
      goto LABEL_10;
    }
    v8 = (*v3)(a1, a2);
    if ( v8 >= 0 && v8 != 255 )
    {
      *((_DWORD *)a2 + 40) |= v7;
LABEL_10:
      v2 |= v7;
    }
LABEL_11:
    v3 += 5;
  }
  v9 = 0;
  v10 = &off_18008BE88;
  do
  {
    v11 = 1 << v9;
    if ( ((1 << v9) & v2) != 0 )
    {
      v12 = ((__int64 (__fastcall *)(struct _RM_GAME_MODE_CONTEXT *, struct _RM_GAME_MODE_RECIPIENT_PROCESS *))*(v10 - 2))(
              a1,
              a2);
      if ( v12 == 255 )
      {
        v2 &= ~v11;
      }
      else if ( v12 < 0 )
      {
        v13 = ~v11;
        if ( (v11 & *((_DWORD *)a2 + 40)) != 0 )
        {
          (*v10)(a1, a2);
          *((_DWORD *)a2 + 40) &= v13;
        }
        v2 &= v13;
      }
    }
    ++v9;
    v10 += 5;
  }
  while ( v9 < 5 );
  *((_DWORD *)a2 + 41) = v2;
}
