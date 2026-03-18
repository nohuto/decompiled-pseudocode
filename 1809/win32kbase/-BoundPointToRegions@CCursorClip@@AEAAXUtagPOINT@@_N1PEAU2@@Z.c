/*
 * XREFs of ?BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@_N1PEAU2@@Z @ 0x1C003D56C
 * Callers:
 *     ?BoundPoint@CCursorClip@@QEAA_NUtagPOINT@@W4BoundPointOptions@@W4InputTracing_MouseUpdatePositionReason@@PEAU2@@Z @ 0x1C003D420 (-BoundPoint@CCursorClip@@QEAA_NUtagPOINT@@W4BoundPointOptions@@W4InputTracing_MouseUpdatePositio.c)
 * Callees:
 *     ?RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C003CE70 (-RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z.c)
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x1C003CF5C (--0CLockedInputSpace@@QEAA@XZ.c)
 *     PtInRect @ 0x1C003D634 (PtInRect.c)
 *     ?ClipPointToRect@CCursorClip@@CAXUtagPOINT@@PEBUtagRECT@@PEAU2@@Z @ 0x1C003D6B4 (-ClipPointToRect@CCursorClip@@CAXUtagPOINT@@PEBUtagRECT@@PEAU2@@Z.c)
 *     ??1CEResourceLockExclusive@@QEAA@XZ @ 0x1C00AD1D4 (--1CEResourceLockExclusive@@QEAA@XZ.c)
 *     ?ApplySpeedBumpAndCornerLock@CCursorClip@@AEAAXUtagPOINT@@_N1PEAU2@@Z @ 0x1C01488E4 (-ApplySpeedBumpAndCornerLock@CCursorClip@@AEAAXUtagPOINT@@_N1PEAU2@@Z.c)
 */

void __fastcall CCursorClip::BoundPointToRegions(
        CCursorClip *this,
        struct tagPOINT a2,
        bool a3,
        bool a4,
        struct tagPOINT *a5)
{
  struct tagRECT *v5; // rbx
  struct CEResource *v9; // rdx
  struct tagRECT *v10; // rsi
  __int64 v11; // rcx
  struct tagRECT *v12; // [rsp+30h] [rbp-28h] BYREF
  char v13[32]; // [rsp+38h] [rbp-20h] BYREF

  v5 = (struct tagRECT *)((char *)this + 56);
  *a5 = a2;
  if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))PtInRect)((char *)this + 56, a2) )
    return;
  CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)&v12, v9);
  InputConfig::Mouse::RegionFromPoint(*a5, (struct CLockedInputSpaceRegion *)&v12);
  v10 = v12;
  if ( v5->left >= v5->right || v5->top >= v5->bottom )
    goto LABEL_4;
  if ( v12 )
  {
    v11 = *(_QWORD *)&v5->left - *(_QWORD *)&v12->left;
    if ( *(_QWORD *)&v5->left == *(_QWORD *)&v12->left )
      v11 = *(_QWORD *)&v5->right - *(_QWORD *)&v12->right;
    if ( v11 )
      CCursorClip::ApplySpeedBumpAndCornerLock(this, *a5, a3, a4, a5);
LABEL_4:
    if ( v10 && !(unsigned int)PtInRect(v5, *a5) )
      *v5 = *v10;
  }
  if ( !(unsigned int)PtInRect(v5, *a5) )
    CCursorClip::ClipPointToRect(*a5, v5, a5);
  CEResourceLockExclusive::~CEResourceLockExclusive((CEResourceLockExclusive *)v13);
}
