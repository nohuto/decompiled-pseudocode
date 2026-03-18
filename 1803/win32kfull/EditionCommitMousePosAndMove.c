/*
 * XREFs of EditionCommitMousePosAndMove @ 0x1C0069D20
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@Z @ 0x1C0069DB0 (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@.c)
 */

__int64 __fastcall EditionCommitMousePosAndMove(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v8; // rbx
  __int64 v9; // rax

  if ( *(_DWORD *)a4 == 2 )
    v8 = *(_QWORD *)(a4 + 8);
  else
    v8 = 0LL;
  v9 = UpconvertTime(a5, a2);
  return xxxMoveEventAbsolute(*a1, a1[1], a2, v8, a3, v9);
}
