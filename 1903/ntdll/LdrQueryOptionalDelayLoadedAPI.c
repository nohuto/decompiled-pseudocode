/*
 * XREFs of LdrQueryOptionalDelayLoadedAPI @ 0x1800CEF90
 * Callers:
 *     <none>
 * Callees:
 *     LdrResolveDelayLoadedAPI @ 0x1800187C0 (LdrResolveDelayLoadedAPI.c)
 *     sub_1800CF094 @ 0x1800CF094 (sub_1800CF094.c)
 *     sub_1800CF140 @ 0x1800CF140 (sub_1800CF140.c)
 *     sub_1800CF1D4 @ 0x1800CF1D4 (sub_1800CF1D4.c)
 */

__int64 __fastcall LdrQueryOptionalDelayLoadedAPI(const void *a1, unsigned __int8 *a2, __int64 a3, int a4)
{
  int v7; // ecx
  __int64 *v8; // rax
  _BYTE *v9; // rbx
  __int64 v10; // rax
  _BYTE *v11; // [rsp+30h] [rbp-18h] BYREF

  if ( a4 )
    return 3221225485LL;
  v7 = *a2 - 42;
  if ( *a2 == 42 )
    v7 = a2[1];
  if ( v7 )
  {
    v10 = sub_1800CF1D4(a1);
    v9 = (_BYTE *)v10;
    if ( !v10 )
      return 3221225781LL;
    v8 = (__int64 *)sub_1800CF140(a1, v10, a3);
  }
  else
  {
    v8 = (__int64 *)sub_1800CF094(a1, a3, &v11);
    v9 = v11;
  }
  if ( v8 )
    return LdrResolveDelayLoadedAPI(a1, v9, 0, 0, v8, 0) == 0 ? 0xC0000139 : 0;
  return 3221225781LL;
}
