/*
 * XREFs of MiCanDeleteEnclave @ 0x1402BD004
 * Callers:
 *     MiFreeVadRange @ 0x140025674 (MiFreeVadRange.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     MiUnlockVad @ 0x1400784A0 (MiUnlockVad.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiFreeEnclaveModules @ 0x14085B430 (MiFreeEnclaveModules.c)
 *     PsDereferenceVsmEnclave @ 0x14088F3E4 (PsDereferenceVsmEnclave.c)
 *     PsIsVsmEnclaveTerminated @ 0x14088F58C (PsIsVsmEnclaveTerminated.c)
 *     PsReferenceVsmEnclave @ 0x14088F624 (PsReferenceVsmEnclave.c)
 *     PsRundownVsmEnclave @ 0x14088F648 (PsRundownVsmEnclave.c)
 */

__int64 __fastcall MiCanDeleteEnclave(ULONG_PTR BugCheckParameter3)
{
  struct _KTHREAD *CurrentThread; // rbp
  void *v4; // rsi
  _QWORD *v5; // rdx
  ULONG_PTR v6; // rcx
  __int64 v7; // rax
  _QWORD *v8; // rax
  unsigned int v9; // edi
  int v10; // eax

  if ( (*(_DWORD *)(BugCheckParameter3 + 64) & 1) != 0 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v4 = *(void **)(BugCheckParameter3 + 72);
  PsReferenceVsmEnclave(v4);
  v6 = BugCheckParameter3 + 80;
  if ( v5 )
  {
    v7 = *(_QWORD *)v6;
    if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6
      || (*v5 = v7, v5[1] = v6, *(_QWORD *)(v7 + 8) = v5, *(_QWORD *)v6 = v5, v5[1] != v6)
      || (v8 = *(_QWORD **)(BugCheckParameter3 + 88), *v8 != v6) )
    {
      __fastfail(3u);
    }
    *v8 = v5;
    v5[1] = v8;
    *(_QWORD *)(BugCheckParameter3 + 88) = BugCheckParameter3 + 80;
    *(_QWORD *)v6 = v6;
  }
  else
  {
    MiFreeEnclaveModules(v6);
  }
  if ( (unsigned __int8)PsIsVsmEnclaveTerminated(v4) )
  {
    MiUnlockVad((__int64)CurrentThread, BugCheckParameter3);
    v10 = PsRundownVsmEnclave(v4);
    v9 = v10;
    if ( v10 < 0 )
      KeBugCheckEx(0x1Au, 0x44417uLL, v10, BugCheckParameter3, *(_QWORD *)(BugCheckParameter3 + 72));
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(BugCheckParameter3 + 40, 0LL);
    LOBYTE(CurrentThread[1].Queue) |= 0x80u;
    if ( (*(_DWORD *)(BugCheckParameter3 + 48) & 0x20000000) != 0 )
      v9 = -1073741800;
  }
  else
  {
    v9 = -1073740527;
  }
  PsDereferenceVsmEnclave(v4);
  return v9;
}
