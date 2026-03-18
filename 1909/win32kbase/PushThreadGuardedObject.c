/*
 * XREFs of PushThreadGuardedObject @ 0x1C000EFB0
 * Callers:
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C000EE80 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     GreCombineRgn @ 0x1C00247C0 (GreCombineRgn.c)
 *     ??0AUTO_TGO@@IEAA@XZ @ 0x1C0048DD8 (--0AUTO_TGO@@IEAA@XZ.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0068160 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     GrePushThreadGuardedObject @ 0x1C01231B0 (GrePushThreadGuardedObject.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00268A4 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall PushThreadGuardedObject(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rax
  __int64 v9; // rcx

  v3 = 0;
  if ( a1 )
  {
    KeEnterCriticalRegion();
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    a1[2] = a2;
    a1[3] = a3;
    if ( ThreadWin32Thread )
    {
      v8 = ThreadWin32Thread + 88;
      v9 = *(_QWORD *)v8;
      if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8 )
        __fastfail(3u);
      *a1 = v9;
      v3 = 1;
      a1[1] = v8;
      *(_QWORD *)(v9 + 8) = a1;
      *(_QWORD *)v8 = a1;
    }
    else
    {
      a1[1] = a1;
      *a1 = a1;
    }
    KeLeaveCriticalRegion();
  }
  return v3;
}
