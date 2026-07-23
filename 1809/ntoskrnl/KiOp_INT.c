/*
 * XREFs of KiOp_INT @ 0x14029C970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KiOp_INT(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rax

  if ( (KiBugCheckActive & 3) != 0 && VslVsmEnabled && !*(_BYTE *)(a1 + 81) && *(_QWORD *)(a1 + 72) == 45LL )
  {
    v1 = *(_QWORD *)(a1 + 32);
    *(_BYTE *)(a1 + 97) = 1;
    v2 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(v2 + 248) += 2LL;
    *(_DWORD *)v1 = -2147483645;
    *(_DWORD *)(v1 + 24) = 1;
    *(_QWORD *)(v1 + 32) = *(_QWORD *)(v2 + 120);
    v3 = *(_QWORD *)(v2 + 248) + 1LL;
    ++KiOpInt2D;
    *(_QWORD *)(v1 + 16) = v3;
  }
  return 0LL;
}
