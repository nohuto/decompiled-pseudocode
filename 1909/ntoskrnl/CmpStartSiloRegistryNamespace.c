/*
 * XREFs of CmpStartSiloRegistryNamespace @ 0x14077EB0C
 * Callers:
 *     CmInitServerSiloState @ 0x14077EA80 (CmInitServerSiloState.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140841C48 (VrpHandleIoctlInitializeJobForVreg.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     CmpCreateKeyBody @ 0x1405F03D0 (CmpCreateKeyBody.c)
 *     CmpUnlockRegistry @ 0x1405F6EA0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F6EE0 (CmpLockRegistry.c)
 *     CmpUnlockKcbStack @ 0x1405F9440 (CmpUnlockKcbStack.c)
 *     CmpCleanupKcbStack @ 0x1405FDFE0 (CmpCleanupKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405FE5B0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpCleanupParseContext @ 0x1405FF960 (CmpCleanupParseContext.c)
 *     CmpLockKcbStackExclusive @ 0x14063BBC8 (CmpLockKcbStackExclusive.c)
 */

__int64 __fastcall CmpStartSiloRegistryNamespace(__int64 a1)
{
  void *v2; // rbx
  int KeyBody; // edi
  _QWORD *v4; // rbx
  __int64 v5; // r8
  struct _LOOKASIDE_LIST_EX *v6; // r9
  signed __int64 v7; // rax
  __int64 v9; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v10; // [rsp+50h] [rbp-B8h] BYREF
  _WORD v11[16]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v12[38]; // [rsp+78h] [rbp-90h] BYREF

  memset(v11, 0, sizeof(v11));
  v11[1] = -1;
  memset(v12, 0, 0x128uLL);
  v12[19] = &v12[18];
  v12[18] = &v12[18];
  memset(&v12[27], 0, 0x50uLL);
  v2 = 0LL;
  v10 = 0LL;
  if ( *(_QWORD *)(a1 + 32) )
    goto LABEL_2;
  CmpLockRegistry();
  v4 = CmpRegistryRootObject;
  CmpStartKcbStackForTopLayerKcb((__int64)v11, *((_QWORD *)CmpRegistryRootObject + 1), v5, v6);
  CmpLockKcbStackExclusive((__int64)v11);
  KeyBody = CmpCreateKeyBody(v4[1], 0, (__int64)v12, 0LL, 1, (__int64)v11, (ULONG_PTR **)&v10, (bool *)&v9);
  CmpUnlockKcbStack((__int64)v11);
  CmpUnlockRegistry();
  if ( KeyBody >= 0 )
  {
    v7 = -_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), v10, 0LL);
    v2 = (void *)(v10 & -(__int64)(v7 != 0));
LABEL_2:
    KeyBody = 0;
    goto LABEL_6;
  }
  v2 = (void *)v10;
LABEL_6:
  CmpCleanupKcbStack((__int64)v11);
  CmpCleanupParseContext((__int64)v12, 0);
  if ( v2 )
    ObfDereferenceObject(v2);
  return (unsigned int)KeyBody;
}
