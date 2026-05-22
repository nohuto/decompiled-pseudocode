/*
 * XREFs of ?RequestViewHitTestSync@DWMInputRouter@@UEAAJUViewHitTestInfo@@PEAI@Z @ 0x18008C1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?RequestViewHitTestHelper@DWMInputRouter@@IEAAXUViewHitTestInfo@@PEAI@Z @ 0x18008C0D0 (-RequestViewHitTestHelper@DWMInputRouter@@IEAAXUViewHitTestInfo@@PEAI@Z.c)
 */

__int64 __fastcall DWMInputRouter::RequestViewHitTestSync(__int64 a1, __int128 *a2, _DWORD *a3)
{
  int v3; // eax
  __int64 v4; // xmm1_8
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]
  int v8; // [rsp+38h] [rbp-10h]

  v3 = *((_DWORD *)a2 + 6);
  v4 = *((_QWORD *)a2 + 2);
  v6 = *a2;
  v7 = v4;
  v8 = v3;
  DWMInputRouter::RequestViewHitTestHelper(a1 - 32, (__int64)&v6, a3);
  return 0LL;
}
