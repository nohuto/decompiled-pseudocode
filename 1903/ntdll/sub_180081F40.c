/*
 * XREFs of sub_180081F40 @ 0x180081F40
 * Callers:
 *     sub_18000AA3C @ 0x18000AA3C (sub_18000AA3C.c)
 * Callees:
 *     sub_180081F8C @ 0x180081F8C (sub_180081F8C.c)
 */

__int64 __fastcall sub_180081F40(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 result; // rax

  v1 = 0LL;
  if ( *(_QWORD *)(a1 + 248) )
  {
    v2 = 4LL;
    do
    {
      v3 = *(_QWORD *)(a1 + 248);
      v1 += 24LL;
      *(_OWORD *)(a1 + v1 + 104) = *(_OWORD *)(v1 + v3 + 32);
      *(_QWORD *)(a1 + v1 + 120) = *(_QWORD *)(v1 + v3 + 48);
      --v2;
    }
    while ( v2 );
    return sub_180081F8C(a1, v1);
  }
  return result;
}
