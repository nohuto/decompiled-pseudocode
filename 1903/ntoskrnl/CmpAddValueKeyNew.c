/*
 * XREFs of CmpAddValueKeyNew @ 0x14062DEF4
 * Callers:
 *     CmSetValueKey @ 0x14062CAE0 (CmSetValueKey.c)
 *     CmpSetValueKeyNew @ 0x14062DBC4 (CmpSetValueKeyNew.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1406E23D8 (CmpLightWeightPrepareSetValueKeyUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     HvFreeCell @ 0x14062DCA8 (HvFreeCell.c)
 *     CmpCopyName @ 0x14062E02C (CmpCopyName.c)
 *     HvAllocateCell @ 0x14062E37C (HvAllocateCell.c)
 *     CmpSetValueDataNew @ 0x14062F154 (CmpSetValueDataNew.c)
 *     CmpNameSize @ 0x1406C6CB8 (CmpNameSize.c)
 */

__int64 __fastcall CmpAddValueKeyNew(
        ULONG_PTR BugCheckParameter2,
        unsigned __int16 *a2,
        int a3,
        void *a4,
        size_t Size,
        int a6)
{
  unsigned __int16 v10; // ax
  unsigned int Cell; // ebp
  _WORD *v12; // rbx
  void *v13; // rcx
  unsigned __int16 v14; // ax
  _DWORD v16[2]; // [rsp+30h] [rbp-28h] BYREF
  _WORD *v17; // [rsp+38h] [rbp-20h] BYREF

  v16[0] = -1;
  v16[1] = 0;
  v10 = CmpNameSize(a2);
  Cell = HvAllocateCell(BugCheckParameter2, (unsigned int)v10 + 20, a6, (unsigned int)&v17, (__int64)v16);
  if ( Cell != -1 )
  {
    v12 = v17;
    v13 = v17 + 10;
    *v17 = 27510;
    v14 = CmpCopyName(v13);
    v12[1] = v14;
    v12[8] = v14 < *a2;
    if ( (unsigned int)Size > 4 )
    {
      if ( (int)CmpSetValueDataNew(BugCheckParameter2, a4, (unsigned int)Size, (__int64)(v12 + 4)) < 0 )
      {
        HvFreeCell(BugCheckParameter2, Cell);
        Cell = -1;
        goto LABEL_7;
      }
      *((_DWORD *)v12 + 1) = Size;
    }
    else
    {
      *((_DWORD *)v12 + 1) = Size + 0x80000000;
      *((_DWORD *)v12 + 2) = 0;
      memmove(v12 + 4, a4, (unsigned int)Size);
    }
    *((_DWORD *)v12 + 3) = a3;
LABEL_7:
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v16);
    return Cell;
  }
  return 0xFFFFFFFFLL;
}
