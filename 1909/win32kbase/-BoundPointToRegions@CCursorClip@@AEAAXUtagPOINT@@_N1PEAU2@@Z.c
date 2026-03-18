/*
 * XREFs of ?BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@_N1PEAU2@@Z @ 0x1C0052BF4
 * Callers:
 *     ?BoundPoint@CCursorClip@@QEAA_NUtagPOINT@@W4BoundPointOptions@@W4InputTracing_MouseUpdatePositionReason@@PEAU2@@Z @ 0x1C0052AC0 (-BoundPoint@CCursorClip@@QEAA_NUtagPOINT@@W4BoundPointOptions@@W4InputTracing_MouseUpdatePositio.c)
 * Callees:
 *     ?RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C0052990 (-RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z.c)
 *     PtInRect @ 0x1C0052CD4 (PtInRect.c)
 *     ?ClipPointToRect@CCursorClip@@CAXUtagPOINT@@PEBUtagRECT@@PEAU2@@Z @ 0x1C0052D50 (-ClipPointToRect@CCursorClip@@CAXUtagPOINT@@PEBUtagRECT@@PEAU2@@Z.c)
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x1C0052E30 (--0CLockedInputSpace@@QEAA@XZ.c)
 *     ?ApplySpeedBumpAndCornerLock@CCursorClip@@AEAAXUtagPOINT@@_N1PEAU2@@Z @ 0x1C01756BC (-ApplySpeedBumpAndCornerLock@CCursorClip@@AEAAXUtagPOINT@@_N1PEAU2@@Z.c)
 */

void __fastcall CCursorClip::BoundPointToRegions(
        CCursorClip *this,
        struct tagPOINT a2,
        bool a3,
        bool a4,
        struct tagPOINT *a5)
{
  struct tagRECT *v5; // rbx
  struct tagRECT *v9; // rsi
  __int64 v10; // rcx
  _QWORD v11[5]; // [rsp+30h] [rbp-28h] BYREF

  v5 = (struct tagRECT *)((char *)this + 56);
  *a5 = a2;
  if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))PtInRect)((char *)this + 56, a2) )
    return;
  CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v11);
  InputConfig::Mouse::RegionFromPoint(*a5, (struct CLockedInputSpaceRegion *)v11);
  v9 = (struct tagRECT *)v11[0];
  if ( v5->left >= v5->right || v5->top >= v5->bottom )
    goto LABEL_4;
  if ( v11[0] )
  {
    v10 = *(_QWORD *)&v5->left - *(_QWORD *)v11[0];
    if ( *(_QWORD *)&v5->left == *(_QWORD *)v11[0] )
      v10 = *(_QWORD *)&v5->right - *(_QWORD *)(v11[0] + 8LL);
    if ( v10 )
      CCursorClip::ApplySpeedBumpAndCornerLock(this, *a5, a3, a4, a5);
LABEL_4:
    if ( v9 && !(unsigned int)PtInRect(v5, *a5) )
      *v5 = *v9;
  }
  if ( !(unsigned int)PtInRect(v5, *a5) )
    CCursorClip::ClipPointToRect(*a5, v5, a5);
  ExReleaseResourceLite(*(PERESOURCE *)v11[1]);
  KeLeaveCriticalRegion();
}
