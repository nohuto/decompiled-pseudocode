/*
 * XREFs of MiInitializeVsmEnclave @ 0x140893AB4
 * Callers:
 *     MiInitializeEnclave @ 0x1408939B0 (MiInitializeEnclave.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     MiLockVad @ 0x14007323C (MiLockVad.c)
 *     MiUnlockVad @ 0x140074220 (MiUnlockVad.c)
 *     PsReferencePrimaryToken @ 0x1405D6170 (PsReferencePrimaryToken.c)
 *     MiMapImageForEnclaveUse @ 0x140894398 (MiMapImageForEnclaveUse.c)
 *     MiUnmapImageForEnclaveUse @ 0x1408946B4 (MiUnmapImageForEnclaveUse.c)
 *     PsDereferenceVsmEnclave @ 0x1408CC0B8 (PsDereferenceVsmEnclave.c)
 *     PsInitializeVsmEnclave @ 0x1408CC168 (PsInitializeVsmEnclave.c)
 */

__int64 __fastcall MiInitializeVsmEnclave(PEPROCESS Process, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rdi
  __int64 v6; // r15
  struct _KTHREAD *CurrentThread; // rbp
  int v11; // esi
  void *v12; // rsi
  PACCESS_TOKEN v13; // rbx
  __int64 v15; // [rsp+30h] [rbp-38h] BYREF

  v5 = *(_QWORD *)(a2 + 72);
  LODWORD(v6) = 0;
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v5 + 16)) <= 1 )
    __fastfail(0xEu);
  CurrentThread = KeGetCurrentThread();
  MiUnlockVad((__int64)CurrentThread, a2);
  if ( *(_BYTE *)(v5 + 76) )
  {
    if ( a4 < 0x38 )
    {
      v11 = -1073741820;
      goto LABEL_11;
    }
    v12 = *(void **)(a3 + 48);
    if ( v12 )
    {
      v13 = PsReferencePrimaryToken(Process);
      v11 = MiMapImageForEnclaveUse(v12, (__int64)&v15);
      ObfDereferenceObject(v13);
      if ( v11 < 0 )
        goto LABEL_11;
      v6 = *(_QWORD *)(*(_QWORD *)(v15 + 96) + 56LL);
    }
  }
  v11 = PsInitializeVsmEnclave(v5, a3, a4, v6, 0LL);
LABEL_11:
  PsDereferenceVsmEnclave((PVOID)v5);
  MiLockVad((__int64)CurrentThread, a2);
  return (unsigned int)v11;
}
