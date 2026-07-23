/*
 * XREFs of LdrpFreeLoadContext @ 0x180028C38
 * Callers:
 *     LdrpFreeLoadContextOfNode @ 0x180028BA4 (LdrpFreeLoadContextOfNode.c)
 *     LdrpFreeReplacedModule @ 0x180086508 (LdrpFreeReplacedModule.c)
 *     LdrpCleanupEnclaveLoadState @ 0x1800CF038 (LdrpCleanupEnclaveLoadState.c)
 * Callees:
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     LdrpHandlePendingModuleReplaced @ 0x180028CDC (LdrpHandlePendingModuleReplaced.c)
 *     LdrpFreeReplacedModule @ 0x180086508 (LdrpFreeReplacedModule.c)
 */

LOGICAL __fastcall LdrpFreeLoadContext(_QWORD *BaseAddress)
{
  LOGICAL result; // eax
  void *v3; // r8
  __int64 v4; // rdi
  _QWORD *v5; // rcx
  __int64 v6; // rax

  *(_QWORD *)(BaseAddress[7] + 176LL) = 0LL;
  result = LdrpHandlePendingModuleReplaced(BaseAddress);
  v3 = (void *)BaseAddress[11];
  if ( v3 )
  {
    v4 = 0LL;
    if ( *((_DWORD *)BaseAddress + 24) )
    {
      do
      {
        v5 = *(_QWORD **)(BaseAddress[11] + 8 * v4);
        if ( v5 )
        {
          v6 = v5[22];
          if ( v6 )
          {
            if ( (*(_DWORD *)(v6 + 32) & 0x80000) == 0 && *(_QWORD **)(v6 + 56) != v5 )
            {
              *(_QWORD *)(v6 + 56) = v5;
              LdrpFreeReplacedModule(v5);
            }
          }
        }
        v4 = (unsigned int)(v4 + 1);
      }
      while ( (unsigned int)v4 < *((_DWORD *)BaseAddress + 24) );
      v3 = (void *)BaseAddress[11];
    }
    result = RtlFreeHeap(LdrpHeap, 0, v3);
  }
  if ( (BaseAddress[4] & 0x8000) != 0 )
    return RtlFreeHeap(LdrpHeap, 0, BaseAddress);
  return result;
}
