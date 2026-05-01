/*
 * XREFs of ?_GetItemCountWithFlags@CAppLayout@@AEAAIW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x18043EA88
 * Callers:
 *     ?GetItemCountWithFlags@CAppLayout@@UEAAIW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x18043CCB0 (-GetItemCountWithFlags@CAppLayout@@UEAAIW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 *     ?VerifyLayout@CAppLayout@@UEAAJXZ @ 0x18043DC90 (-VerifyLayout@CAppLayout@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAppLayout::_GetItemCountWithFlags(__int64 a1, int a2)
{
  unsigned __int64 v2; // rsi
  unsigned int v3; // ebx
  unsigned __int64 i; // rbp
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ecx

  v2 = *(_QWORD *)(a1 + 112);
  v3 = 0;
  for ( i = 0LL; i < v2; v3 = v9 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 8 * i);
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
    v9 = v3 + 1;
    if ( (a2 & v8) != a2 )
      v9 = v3;
    ++i;
  }
  return v3;
}
