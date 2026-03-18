/*
 * XREFs of MiUnapplyDriverHotPatch @ 0x140891598
 * Callers:
 *     MiApplyHotPatchToDriver @ 0x14088CFCC (MiApplyHotPatchToDriver.c)
 * Callees:
 *     VslRevertHotPatch @ 0x14029041C (VslRevertHotPatch.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     VslDetermineHotPatchUndoTableSize @ 0x140851948 (VslDetermineHotPatchUndoTableSize.c)
 *     VslObtainHotPatchUndoTable @ 0x140852258 (VslObtainHotPatchUndoTable.c)
 *     MiPrepareDriverPatchState @ 0x140887620 (MiPrepareDriverPatchState.c)
 *     MiUnlockDriverPages @ 0x1408876B0 (MiUnlockDriverPages.c)
 *     MiLockHotPatchUndoPages @ 0x14088ECF0 (MiLockHotPatchUndoPages.c)
 */

__int64 __fastcall MiUnapplyDriverHotPatch(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int64 v5; // rcx
  void *v6; // rdi
  signed int v7; // ebx
  PVOID PoolWithTag; // rax
  __int64 v10[2]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v11[12]; // [rsp+30h] [rbp-20h]
  int v12; // [rsp+3Ch] [rbp-14h]
  __int64 v13; // [rsp+40h] [rbp-10h]
  __int64 v14; // [rsp+48h] [rbp-8h]
  SIZE_T NumberOfBytes; // [rsp+70h] [rbp+20h] BYREF

  v2 = *(_DWORD *)(a1 + 64);
  *(_QWORD *)&v11[4] = 0LL;
  v12 = 0;
  v14 = 0LL;
  v10[0] = a1;
  v5 = *(_QWORD *)(a1 + 48);
  v10[1] = 0LL;
  v13 = 0LL;
  v6 = 0LL;
  *(_QWORD *)v11 = (v2 >> 12) + ((v2 & 0xFFF) != 0);
  v7 = VslDetermineHotPatchUndoTableSize(v5, &NumberOfBytes);
  if ( v7 >= 0 )
  {
    v7 = NumberOfBytes;
    if ( (_DWORD)NumberOfBytes )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x54555048u);
      v6 = PoolWithTag;
      if ( PoolWithTag )
      {
        v7 = VslObtainHotPatchUndoTable(*(PVOID *)(a1 + 48), (__int64)PoolWithTag, v7);
        if ( v7 >= 0 )
        {
          v7 = MiPrepareDriverPatchState((__int64)v10);
          if ( v7 >= 0 )
          {
            v7 = MiLockHotPatchUndoPages((__int64)v10, (int)v6);
            if ( v7 >= 0 )
              v7 = VslRevertHotPatch(*(_QWORD *)(a1 + 48), 0, 0);
          }
        }
      }
      else
      {
        v7 = -1073741670;
      }
    }
  }
  MiUnlockDriverPages(v10);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( v7 >= 0 )
    *(_QWORD *)(a2 + 120) = 0LL;
  return (unsigned int)v7;
}
