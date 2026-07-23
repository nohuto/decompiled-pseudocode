/*
 * XREFs of HvpFindFreeCellInBin @ 0x1405FC8C4
 * Callers:
 *     HvpFindFreeCell @ 0x1405FAA70 (HvpFindFreeCell.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     HvpMarkCellDirty @ 0x1405FBC04 (HvpMarkCellDirty.c)
 */

__int64 __fastcall HvpFindFreeCellInBin(
        ULONG_PTR BugCheckParameter2,
        unsigned int a2,
        int a3,
        _DWORD *a4,
        unsigned int *a5,
        __int64 *a6,
        __int64 a7)
{
  unsigned int *v7; // r10
  unsigned __int64 v8; // r11
  __int64 v10; // rdi
  __int64 v11; // rax
  unsigned int v13; // ebx
  __int64 v14; // rax

  v7 = a4 + 8;
  v8 = (unsigned __int64)a4 + (unsigned int)a4[2];
  if ( (unsigned __int64)(a4 + 8) >= v8 )
    return 3221226021LL;
  v10 = 0LL;
  while ( 1 )
  {
    v11 = *v7;
    if ( (int)v11 >= 0 )
      break;
    v11 = (unsigned int)-(int)v11;
LABEL_5:
    v7 = (unsigned int *)((char *)v7 + v11);
    if ( (unsigned __int64)v7 >= v8 )
      return 3221226021LL;
  }
  v13 = a4[1] + (_DWORD)v7 + (a3 << 31) - (_DWORD)a4;
  if ( a2 > (unsigned int)v11 )
    goto LABEL_5;
  if ( !HvpMarkCellDirty(BugCheckParameter2, v13, 1) )
    return 3221225853LL;
  v14 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64))(BugCheckParameter2 + 8))(BugCheckParameter2, v13, a7);
  if ( v14 )
    v10 = v14 - 4;
  *a6 = v10;
  *a5 = v13;
  return 0LL;
}
