/*
 * XREFs of LdrpFreeLoadContext @ 0x180065058
 * Callers:
 *     LdrpFreeReplacedModule @ 0x180064F8C (LdrpFreeReplacedModule.c)
 *     LdrpFreeLoadContextOfNode @ 0x180064FC4 (LdrpFreeLoadContextOfNode.c)
 *     LdrpCleanupEnclaveLoadState @ 0x1800CD8E8 (LdrpCleanupEnclaveLoadState.c)
 * Callees:
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     LdrpFreeReplacedModule @ 0x180064F8C (LdrpFreeReplacedModule.c)
 *     LdrpHandlePendingModuleReplaced @ 0x1800650F8 (LdrpHandlePendingModuleReplaced.c)
 */

LOGICAL __fastcall LdrpFreeLoadContext(_QWORD *BaseAddress)
{
  LOGICAL result; // eax
  void *v3; // r8
  __int64 v4; // rdi
  __int64 v5; // rcx
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
        v5 = *(_QWORD *)(BaseAddress[11] + 8 * v4);
        if ( v5 )
        {
          v6 = *(_QWORD *)(v5 + 176);
          if ( v6 )
          {
            if ( (*(_DWORD *)(v6 + 32) & 0x80000) == 0 && *(_QWORD *)(v6 + 56) != v5 )
            {
              *(_QWORD *)(v6 + 56) = v5;
              LdrpFreeReplacedModule((PVOID *)v5);
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
