/*
 * XREFs of AlpcpRestoreWriteAccess @ 0x14064CABC
 * Callers:
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14064ACD4 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcViewDestroyProcedure @ 0x14064C310 (AlpcViewDestroyProcedure.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MmUnsecureVirtualMemory @ 0x14060AA10 (MmUnsecureVirtualMemory.c)
 */

void __fastcall AlpcpRestoreWriteAccess(__int64 a1)
{
  void *v2; // rcx
  __int64 v3; // rdi
  _KPROCESS *Process; // rsi
  _BYTE v5[48]; // [rsp+20h] [rbp-48h] BYREF

  memset(v5, 0, sizeof(v5));
  v2 = *(void **)(a1 + 64);
  v3 = *(_QWORD *)(a1 + 16);
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( v2 )
  {
    if ( *(_KPROCESS **)(a1 + 32) != Process )
    {
      KiStackAttachProcess(*(_KPROCESS **)(a1 + 32), 0, (__int64)v5);
      v2 = *(void **)(a1 + 64);
    }
    MmUnsecureVirtualMemory(v2);
    if ( *(_KPROCESS **)(a1 + 32) != Process )
      KiUnstackDetachProcess((struct _KTHREAD *)v5, 0);
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  *(_DWORD *)(a1 + 72) |= 1u;
  *(_QWORD *)(v3 + 72) = 0LL;
  *(_QWORD *)(v3 + 80) = a1;
}
