/*
 * XREFs of CmpStartSiloRegistryNamespace @ 0x14077C23C
 * Callers:
 *     CmInitServerSiloState @ 0x14077C1B0 (CmInitServerSiloState.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1408425E8 (VrpHandleIoctlInitializeJobForVreg.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     CmpCreateKeyBody @ 0x1405EFC00 (CmpCreateKeyBody.c)
 *     CmpUnlockRegistry @ 0x1405F5E50 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F5E90 (CmpLockRegistry.c)
 *     CmpUnlockKcb @ 0x1405F84A0 (CmpUnlockKcb.c)
 *     CmpCleanupParseContext @ 0x1405FDF30 (CmpCleanupParseContext.c)
 *     CmpLockKcbExclusive @ 0x14064E858 (CmpLockKcbExclusive.c)
 */

__int64 __fastcall CmpStartSiloRegistryNamespace(__int64 a1)
{
  void *v2; // rbx
  _QWORD *v3; // rbx
  int KeyBody; // edi
  signed __int64 v5; // rax
  __int64 v7; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v8; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v9[38]; // [rsp+58h] [rbp-B0h] BYREF

  memset(v9, 0, 0x128uLL);
  v9[19] = &v9[18];
  v9[18] = &v9[18];
  memset(&v9[27], 0, 0x50uLL);
  v2 = 0LL;
  v8 = 0LL;
  if ( *(_QWORD *)(a1 + 32) )
    goto LABEL_4;
  CmpLockRegistry();
  v3 = CmpRegistryRootObject;
  CmpLockKcbExclusive(*((_QWORD *)CmpRegistryRootObject + 1));
  KeyBody = CmpCreateKeyBody(v3[1], 0, (__int64)v9, 0LL, 1, (ULONG_PTR **)&v8, (bool *)&v7);
  CmpUnlockKcb(v3[1]);
  CmpUnlockRegistry();
  if ( KeyBody >= 0 )
  {
    v5 = -_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), v8, 0LL);
    v2 = (void *)(v8 & -(__int64)(v5 != 0));
LABEL_4:
    KeyBody = 0;
    goto LABEL_5;
  }
  v2 = (void *)v8;
LABEL_5:
  CmpCleanupParseContext((__int64)v9, 0);
  if ( v2 )
    ObfDereferenceObject(v2);
  return (unsigned int)KeyBody;
}
