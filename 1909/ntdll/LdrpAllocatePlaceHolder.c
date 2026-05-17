/*
 * XREFs of LdrpAllocatePlaceHolder @ 0x18002AB70
 * Callers:
 *     LdrpLoadDependentModule @ 0x180023170 (LdrpLoadDependentModule.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18002AA74 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpCreatePendingEnclaveModule @ 0x1800CD9B0 (LdrpCreatePendingEnclaveModule.c)
 * Callees:
 *     LdrpLogDllState @ 0x1800255A8 (LdrpLogDllState.c)
 *     LdrpAllocateModuleEntry @ 0x18002AC94 (LdrpAllocateModuleEntry.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 */

__int64 __fastcall LdrpAllocatePlaceHolder(
        const void **a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 *a6,
        __int64 a7)
{
  __int64 v10; // rdx
  __int64 Heap; // rax
  __int64 v13; // rbx
  __int64 ModuleEntry; // rax

  v10 = (NtdllBaseTag + 0x40000) | 8u;
  *a6 = 0LL;
  Heap = RtlAllocateHeap(LdrpHeap, v10, *(unsigned __int16 *)a1 + 194LL);
  v13 = Heap;
  if ( Heap )
  {
    *(_QWORD *)(Heap + 176) = -1LL;
    *(_QWORD *)(Heap + 40) = a7;
    *(_QWORD *)(Heap + 48) = a5;
    *(_QWORD *)(Heap + 8) = Heap + 192;
    *(_DWORD *)(Heap + 32) = a3 | 0x8000;
    *(_QWORD *)(Heap + 16) = a2;
    *(_WORD *)Heap = *(_WORD *)a1;
    *(_WORD *)(Heap + 2) = *(_WORD *)a1 + 2;
    memmove((void *)(Heap + 192), a1[1], *(unsigned __int16 *)a1);
    *(_WORD *)(*(_QWORD *)(v13 + 8) + 2 * ((unsigned __int64)*(unsigned __int16 *)a1 >> 1)) = 0;
    ModuleEntry = LdrpAllocateModuleEntry(v13);
    *a6 = ModuleEntry;
    if ( ModuleEntry )
    {
      *(_DWORD *)(ModuleEntry + 268) = a4;
      LdrpLogDllState(0, v13, 0x14ACu);
    }
    else
    {
      RtlFreeHeap(LdrpHeap, 0LL, v13);
    }
  }
  return *a6 == 0 ? 0xC0000017 : 0;
}
