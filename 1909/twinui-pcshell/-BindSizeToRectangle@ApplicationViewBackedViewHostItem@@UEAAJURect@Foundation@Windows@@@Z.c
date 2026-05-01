/*
 * XREFs of ?BindSizeToRectangle@ApplicationViewBackedViewHostItem@@UEAAJURect@Foundation@Windows@@@Z @ 0x180239BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseSizePreferencesChanged@ApplicationViewBackedViewHostItem@@UEAAJUSize@Foundation@Windows@@@Z @ 0x18023A8E0 (-RaiseSizePreferencesChanged@ApplicationViewBackedViewHostItem@@UEAAJUSize@Foundation@Windows@@@.c)
 */

__int64 __fastcall ApplicationViewBackedViewHostItem::BindSizeToRectangle(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = ApplicationViewBackedViewHostItem::RaiseSizePreferencesChanged(
         a1,
         _mm_unpacklo_ps((__m128)*(unsigned int *)(a2 + 8), (__m128)*(unsigned int *)(a2 + 12)).m128_u64[0]);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x243,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
