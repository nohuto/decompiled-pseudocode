/*
 * XREFs of LdrDisableThreadCalloutsForDll @ 0x180076F20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001869C @ 0x18001869C (sub_18001869C.c)
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 */

__int64 __fastcall LdrDisableThreadCalloutsForDll(unsigned __int64 a1)
{
  int v1; // ebx
  __int64 v2; // rcx
  int v4; // [rsp+38h] [rbp+10h] BYREF
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v1 = 0;
  if ( !byte_180165408 )
  {
    v1 = sub_18001869C(a1, &v5, &v4);
    if ( v1 >= 0 )
    {
      v2 = v5;
      if ( !*(_WORD *)(v5 + 110) )
        *(_BYTE *)(v5 + 106) |= 4u;
      sub_18001B678(v2);
    }
  }
  return (unsigned int)v1;
}
