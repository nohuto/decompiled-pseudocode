/*
 * XREFs of UserGetHwndProcess @ 0x1C0109AA4
 * Callers:
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C007C97C (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C0110A0C (GreTransferSpriteStateToDwmState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UserGetHwndProcess(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax

  v1 = ValidateHwnd(a1);
  if ( v1 && (v2 = *(_QWORD *)(v1 + 16)) != 0 )
    return **(_QWORD **)(v2 + 416);
  else
    return 0LL;
}
