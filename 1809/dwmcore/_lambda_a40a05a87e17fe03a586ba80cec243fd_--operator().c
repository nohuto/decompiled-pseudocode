/*
 * XREFs of _lambda_a40a05a87e17fe03a586ba80cec243fd_::operator() @ 0x18019DD4C
 * Callers:
 *     ?ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z @ 0x1801A2BA8 (-ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall lambda_a40a05a87e17fe03a586ba80cec243fd_::operator()(__int64 a1, int a2)
{
  int v2; // r9d

  v2 = *(_DWORD *)(**(_QWORD **)a1 + 8LL * **(int **)(a1 + 8) + 456);
  if ( v2 )
  {
    if ( v2 == 1 && a2 )
      return 1;
  }
  else if ( (a2 & 3) != 0 )
  {
    return 1;
  }
  return 0;
}
