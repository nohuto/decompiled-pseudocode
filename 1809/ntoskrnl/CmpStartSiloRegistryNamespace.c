/*
 * XREFs of CmpStartSiloRegistryNamespace @ 0x1407319A8
 * Callers:
 *     CmInitServerSiloState @ 0x1407318F4 (CmInitServerSiloState.c)
 *     CmInitSiloNamespace @ 0x1407F7E48 (CmInitSiloNamespace.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmpLockKcbStackExclusive @ 0x1405AB5D8 (CmpLockKcbStackExclusive.c)
 *     CmpCleanupParseContext @ 0x1405B6FC4 (CmpCleanupParseContext.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405CCDE0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpCreateKeyBody @ 0x1405E1970 (CmpCreateKeyBody.c)
 *     CmpCleanupKcbStack @ 0x140644FD0 (CmpCleanupKcbStack.c)
 *     CmpUnlockKcbStack @ 0x1406450E0 (CmpUnlockKcbStack.c)
 *     CmpLockRegistry @ 0x140646120 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpStartSiloRegistryNamespace(__int64 a1)
{
  __int64 *v2; // rbx
  int KeyBody; // edi
  signed __int32 **v4; // rbx
  signed __int64 v5; // rax
  __int64 v7; // [rsp+48h] [rbp-C0h] BYREF
  signed __int64 v8; // [rsp+50h] [rbp-B8h] BYREF
  _WORD v9[16]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v10[38]; // [rsp+78h] [rbp-90h] BYREF

  memset(v9, 0, sizeof(v9));
  v9[1] = -1;
  memset(v10, 0, 0x128uLL);
  v10[19] = &v10[18];
  v10[18] = &v10[18];
  memset(&v10[27], 0, 0x50uLL);
  v2 = 0LL;
  v8 = 0LL;
  if ( *(_QWORD *)(a1 + 32) )
    goto LABEL_2;
  CmpLockRegistry();
  v4 = (signed __int32 **)CmpRegistryRootObject;
  CmpStartKcbStackForTopLayerKcb((__int64)v9, *((_QWORD *)CmpRegistryRootObject + 1));
  CmpLockKcbStackExclusive((__int64)v9);
  KeyBody = CmpCreateKeyBody(v4[1], 0, (__int64)v10, 0LL, 1, (__int64)v9, (__int64 **)&v8, (bool *)&v7);
  CmpUnlockKcbStack((__int64)v9);
  CmpUnlockRegistry();
  if ( KeyBody >= 0 )
  {
    v5 = -_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), v8, 0LL);
    v2 = (__int64 *)(v8 & -(__int64)(v5 != 0));
LABEL_2:
    KeyBody = 0;
    goto LABEL_6;
  }
  v2 = (__int64 *)v8;
LABEL_6:
  CmpCleanupKcbStack((__int64)v9);
  CmpCleanupParseContext((__int64)v10, 0);
  if ( v2 )
    ObfDereferenceObject(v2);
  return (unsigned int)KeyBody;
}
