/*
 * XREFs of ACPIBuildProcessPowerResourcePhaseDep @ 0x1C002F730
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x1C00140BC (AMLIAsyncEvalObject.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C00159F0 (ACPIBuildCompleteMustSucceed.c)
 *     AMLIGetNamedChild @ 0x1C00207C0 (AMLIGetNamedChild.c)
 *     memset @ 0x1C00310C0 (memset.c)
 */

__int64 __fastcall ACPIBuildProcessPowerResourcePhaseDep(__int64 a1)
{
  __int64 v1; // rbx
  _SLIST_ENTRY *v2; // rbp
  unsigned int v4; // esi
  __int64 *v5; // rbx
  __int64 v7; // rcx
  char v8; // al

  v1 = *(_QWORD *)(a1 + 40);
  v2 = (_SLIST_ENTRY *)(a1 + 80);
  *(_DWORD *)(a1 + 32) = 5;
  v4 = 0;
  memset((void *)(a1 + 80), 0, 0x28uLL);
  v5 = AMLIGetNamedChild(*(__int64 **)(v1 + 32), 1346716767);
  if ( !v5 )
    goto LABEL_2;
  v7 = *(_QWORD *)(a1 + 56);
  if ( v7 )
  {
    AMLIDereferenceHandleEx(v7);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  v8 = gdwfAMLI;
  *(_QWORD *)(a1 + 56) = v5;
  dword_1C0080868 = 0;
  pszDest = 0;
  if ( (v8 & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)v5 + 2);
  v4 = AMLIAsyncEvalObject(v5, v2, 0, 0LL, ACPIBuildCompleteMustSucceed, a1);
  if ( v4 != 259 )
LABEL_2:
    ACPIBuildCompleteMustSucceed((ULONG_PTR)v5, v4, (__int64)v2, a1);
  if ( v5 )
    AMLIDereferenceHandleEx((__int64)v5);
  return v4;
}
