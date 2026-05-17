/*
 * XREFs of LdrIsModuleSxsRedirected @ 0x1800CE670
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001869C @ 0x18001869C (sub_18001869C.c)
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 */

bool __fastcall LdrIsModuleSxsRedirected(unsigned __int64 a1)
{
  char v1; // bl
  int v2; // ebx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  if ( (int)sub_18001869C(a1, &v4, 0LL) >= 0 )
  {
    v2 = *(_DWORD *)(v4 + 104);
    sub_18001B678(v4);
    return (v2 & 0x10000000) != 0;
  }
  return v1;
}
