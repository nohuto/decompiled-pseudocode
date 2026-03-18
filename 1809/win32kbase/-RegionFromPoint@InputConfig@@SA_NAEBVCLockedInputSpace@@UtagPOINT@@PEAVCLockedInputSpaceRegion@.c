/*
 * XREFs of ?RegionFromPoint@InputConfig@@SA_NAEBVCLockedInputSpace@@UtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C003CECC
 * Callers:
 *     ?RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C003CE70 (-RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z.c)
 * Callees:
 *     PtInRect @ 0x1C003D634 (PtInRect.c)
 *     ??0CEResourceLockShared@@QEAA@AEAUCEResource@@@Z @ 0x1C00AD190 (--0CEResourceLockShared@@QEAA@AEAUCEResource@@@Z.c)
 *     ??1CEResourceLockExclusive@@QEAA@XZ @ 0x1C00AD1D4 (--1CEResourceLockExclusive@@QEAA@XZ.c)
 */

char __fastcall InputConfig::RegionFromPoint(
        const struct CLockedInputSpace *a1,
        struct tagPOINT a2,
        struct CLockedInputSpaceRegion *a3)
{
  char v3; // di
  _QWORD *v6; // rsi
  _QWORD *v7; // r9
  __int64 v8; // rcx
  _QWORD *v9; // r9
  char v11[8]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v12; // [rsp+28h] [rbp-20h]
  _QWORD *v13; // [rsp+30h] [rbp-18h]

  v3 = 0;
  *(_QWORD *)a3 = 0LL;
  v6 = (_QWORD *)(*(_QWORD *)a1 + 1200LL);
  CEResourceLockShared::CEResourceLockShared((CEResourceLockShared *)v11, *(struct CEResource **)&a2);
  v7 = (_QWORD *)*v6;
  v12 = v6;
  while ( 1 )
  {
    v13 = v7;
    if ( v7 == v6 || v7 == (_QWORD *)-16LL )
      break;
    if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))PtInRect)(v7 + 2, a2) )
    {
      *(_QWORD *)a3 = v8;
      v3 = 1;
      break;
    }
    v7 = (_QWORD *)*v9;
  }
  CEResourceLockExclusive::~CEResourceLockExclusive((CEResourceLockExclusive *)v11);
  return v3;
}
