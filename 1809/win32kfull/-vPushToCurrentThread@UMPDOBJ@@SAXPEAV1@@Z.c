/*
 * XREFs of ?vPushToCurrentThread@UMPDOBJ@@SAXPEAV1@@Z @ 0x1C008FFFC
 * Callers:
 *     NtGdiSetPUMPDOBJ @ 0x1C008F620 (NtGdiSetPUMPDOBJ.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 */

void __fastcall UMPDOBJ::vPushToCurrentThread(struct UMPDOBJ *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx

  v2 = (_QWORD *)((char *)a1 + 40);
  v3 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2) + 40;
  v4 = *(_QWORD *)v3;
  if ( *(_QWORD *)(*(_QWORD *)v3 + 8LL) != v3 )
    __fastfail(3u);
  *v2 = v4;
  v2[1] = v3;
  *(_QWORD *)(v4 + 8) = v2;
  *(_QWORD *)v3 = v2;
}
