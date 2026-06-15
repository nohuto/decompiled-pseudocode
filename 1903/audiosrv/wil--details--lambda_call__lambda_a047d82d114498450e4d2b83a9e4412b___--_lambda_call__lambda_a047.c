/*
 * XREFs of wil::details::lambda_call__lambda_a047d82d114498450e4d2b83a9e4412b___::_lambda_call__lambda_a047d82d114498450e4d2b83a9e4412b___ @ 0x1801029C4
 * Callers:
 *     _AudioJournal::FindStreamInfo_::_1_::dtor$1 @ 0x180070540 (_AudioJournal--FindStreamInfo_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::lambda_call__lambda_a047d82d114498450e4d2b83a9e4412b___::_lambda_call__lambda_a047d82d114498450e4d2b83a9e4412b___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 32) )
  {
    *(_BYTE *)(a1 + 32) = 0;
    ***(_QWORD ***)a1 = **(_QWORD **)(a1 + 8);
    result = **(unsigned int **)(a1 + 24);
    ***(_DWORD ***)(a1 + 16) = result;
  }
  return result;
}
