/*
 * XREFs of ?vPushToCurrentThread@UMPDOBJ@@SAXPEAV1@@Z @ 0x1C00DC160
 * Callers:
 *     NtGdiSetPUMPDOBJ @ 0x1C00DBCC0 (NtGdiSetPUMPDOBJ.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

void __fastcall UMPDOBJ::vPushToCurrentThread(struct UMPDOBJ *a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx

  v3 = (_QWORD *)((char *)a1 + 40);
  v4 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3) + 40;
  v5 = *(_QWORD *)v4;
  if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4 )
    __fastfail(3u);
  *v3 = v5;
  v3[1] = v4;
  *(_QWORD *)(v5 + 8) = v3;
  *(_QWORD *)v4 = v3;
}
