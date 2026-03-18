/*
 * XREFs of ApiSetEditionCommitMousePosAndMove @ 0x1C006A0D8
 * Callers:
 *     ?CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@UtagPOINT@@@Z @ 0x1C0038F68 (-CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@UtagPOINT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetEditionCommitMousePosAndMove(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  if ( (int)IsEditionCommitMousePosAndMoveSupported() < 0 )
    return 0LL;
  else
    return EditionCommitMousePosAndMove(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}
