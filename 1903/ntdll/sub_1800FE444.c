/*
 * XREFs of sub_1800FE444 @ 0x1800FE444
 * Callers:
 *     sub_1800ECD5C @ 0x1800ECD5C (sub_1800ECD5C.c)
 *     sub_1800FE0F8 @ 0x1800FE0F8 (sub_1800FE0F8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800FE444(__int64 a1, __int16 a2, _WORD *a3, unsigned int a4)
{
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9

  if ( !a1 || !a3 || !a4 )
    return 3221225485LL;
  v6 = *(_QWORD *)(a1 + 32);
  if ( v6
    && (v7 = *(_QWORD *)(v6 + 16)) != 0
    && (v8 = *(_QWORD *)(v6 + 24)) != 0
    && a2 >= 0
    && a2 < (int)*(unsigned __int16 *)(v6 + 6) )
  {
    return sub_180001008(a3, a4, v8 + 2LL * *(__int16 *)(v7 + 2LL * a2));
  }
  else
  {
    return 3221226021LL;
  }
}
