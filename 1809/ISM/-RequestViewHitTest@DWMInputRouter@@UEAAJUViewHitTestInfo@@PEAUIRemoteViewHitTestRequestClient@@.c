/*
 * XREFs of ?RequestViewHitTest@DWMInputRouter@@UEAAJUViewHitTestInfo@@PEAUIRemoteViewHitTestRequestClient@@@Z @ 0x18008C230
 * Callers:
 *     <none>
 * Callees:
 *     ?RequestViewHitTestHelper@DWMInputRouter@@IEAAXUViewHitTestInfo@@PEAI@Z @ 0x18008C0D0 (-RequestViewHitTestHelper@DWMInputRouter@@IEAAXUViewHitTestInfo@@PEAI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputRouter::RequestViewHitTest(__int64 a1, __int128 *a2, __int64 *a3)
{
  int v4; // eax
  __int64 v5; // xmm1_8
  __int128 v7; // xmm0
  __int64 v8; // xmm1_8
  __int64 v9; // rax
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]
  int v13; // [rsp+38h] [rbp-10h]

  v4 = *((_DWORD *)a2 + 6);
  v5 = *((_QWORD *)a2 + 2);
  v11 = *a2;
  v12 = v5;
  v13 = v4;
  DWMInputRouter::RequestViewHitTestHelper(a1 - 32, (__int64)&v11, a2);
  if ( a3 )
  {
    v7 = *a2;
    v13 = *((_DWORD *)a2 + 6);
    v8 = *((_QWORD *)a2 + 2);
    v9 = *a3;
    v11 = v7;
    v12 = v8;
    (*(void (__fastcall **)(__int64 *, __int128 *))(v9 + 24))(a3, &v11);
  }
  return 0LL;
}
