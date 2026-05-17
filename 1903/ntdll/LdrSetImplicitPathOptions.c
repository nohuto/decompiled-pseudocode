/*
 * XREFs of LdrSetImplicitPathOptions @ 0x1800CEC40
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001869C @ 0x18001869C (sub_18001869C.c)
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 */

__int64 __fastcall LdrSetImplicitPathOptions(unsigned __int64 a1, int a2)
{
  int v3; // edi
  __int64 v4; // rcx
  int v6; // [rsp+38h] [rbp+10h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  if ( (~((dword_180162714 & 4 | 0x7B) << 8) & a2) != 0 || !a2 )
    return 3221225485LL;
  v3 = sub_18001869C(a1, &v7, &v6);
  if ( v3 >= 0 )
  {
    v4 = v7;
    *(_DWORD *)(v7 + 272) = a2;
    sub_18001B678(v4);
  }
  return (unsigned int)v3;
}
