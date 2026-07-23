/*
 * XREFs of CmpFlushNotifiesOnKeyBodyList @ 0x1405AE310
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x14000FBF0 (CmpRemoveHiveFromNamespace.c)
 *     CmDeleteLayeredKey @ 0x14026CEBC (CmDeleteLayeredKey.c)
 *     CmpLightWeightCommitRecreateKeyUoW @ 0x140582804 (CmpLightWeightCommitRecreateKeyUoW.c)
 *     CmpTransMgrFreeVolatileData @ 0x1405AA000 (CmpTransMgrFreeVolatileData.c)
 *     CmDeleteKey @ 0x1405AADD8 (CmDeleteKey.c)
 *     CmpCompleteUnloadKey @ 0x1405B061C (CmpCompleteUnloadKey.c)
 *     CmpPerformUnloadKey @ 0x140693550 (CmpPerformUnloadKey.c)
 *     CmpInvalidateSubtreeWorker @ 0x1406E25B0 (CmpInvalidateSubtreeWorker.c)
 *     CmRenameKey @ 0x1407EECF4 (CmRenameKey.c)
 *     CmpFlushNotifiesPostCallback @ 0x1407FB070 (CmpFlushNotifiesPostCallback.c)
 *     CmpInvalidateAllHigherLayerKcbsPostCallback @ 0x1407FB1C0 (CmpInvalidateAllHigherLayerKcbsPostCallback.c)
 *     CmpRefreshHive @ 0x140803FAC (CmpRefreshHive.c)
 *     CmpRefreshWorkerRoutine @ 0x140804440 (CmpRefreshWorkerRoutine.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x140804978 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x140804C84 (CmpLightWeightCommitRenameKeyUoW.c)
 * Callees:
 *     CmpFlushNotify @ 0x140693968 (CmpFlushNotify.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x1408009D8 (CmpKeyEnumStackFreeResumeContext.c)
 */

__int64 __fastcall CmpFlushNotifiesOnKeyBodyList(__int64 a1, __int64 a2, char a3)
{
  __int64 *v3; // rdi
  __int64 *v5; // rbx
  __int16 v6; // r12
  __int64 v8; // rdi
  signed __int64 *v9; // rsi
  signed __int64 v10; // rbx
  __int64 result; // rax
  struct _PRIVILEGE_SET *v12; // rcx
  struct _PRIVILEGE_SET *v13; // rcx

  v3 = (__int64 *)(a1 + 112);
  v5 = *(__int64 **)(a1 + 112);
  v6 = a2;
  while ( v5 != v3 )
  {
    if ( *(v5 - 2) )
    {
      LOBYTE(a2) = a3;
      result = CmpFlushNotify(v5 - 4, a2, 0LL);
    }
    v13 = (struct _PRIVILEGE_SET *)_InterlockedExchange64(v5 + 7, 0LL);
    if ( v13 )
      result = CmpKeyEnumStackFreeResumeContext(v13);
    *((_WORD *)v5 + 8) |= v6;
    v5 = (__int64 *)*v5;
  }
  v8 = 0LL;
  v9 = (signed __int64 *)(a1 + 128);
  do
  {
    v10 = *v9;
    if ( (unsigned __int64)*v9 >= 3 )
    {
      result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v8 + 128), 2LL, v10);
      if ( v10 == result )
      {
        if ( *(_QWORD *)(v10 + 16) )
        {
          LOBYTE(a2) = a3;
          CmpFlushNotify(v10, a2, 0LL);
        }
        v12 = (struct _PRIVILEGE_SET *)_InterlockedExchange64((volatile __int64 *)(v10 + 88), 0LL);
        if ( v12 )
          CmpKeyEnumStackFreeResumeContext(v12);
        *(_WORD *)(v10 + 48) |= v6;
        result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v8 + 128), v10, 2LL);
      }
    }
    v8 = (unsigned int)(v8 + 1);
    ++v9;
  }
  while ( (unsigned int)v8 < 4 );
  return result;
}
