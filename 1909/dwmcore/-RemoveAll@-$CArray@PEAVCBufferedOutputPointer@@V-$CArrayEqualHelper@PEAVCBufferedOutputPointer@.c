/*
 * XREFs of ?RemoveAll@?$CArray@PEAVCBufferedOutputPointer@@V?$CArrayEqualHelper@PEAVCBufferedOutputPointer@@@@@@QEAAXXZ @ 0x1800D2ABC
 * Callers:
 *     ??1CInteractionContextWrapper@@UEAA@XZ @ 0x1800C16FC (--1CInteractionContextWrapper@@UEAA@XZ.c)
 *     ?ResetBufferedOutput@CInteractionContextWrapper@@UEAAXXZ @ 0x180233920 (-ResetBufferedOutput@CInteractionContextWrapper@@UEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 */

void __fastcall CArray<CBufferedOutputPointer *,CArrayEqualHelper<CBufferedOutputPointer *>>::RemoveAll(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    operator delete(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
}
