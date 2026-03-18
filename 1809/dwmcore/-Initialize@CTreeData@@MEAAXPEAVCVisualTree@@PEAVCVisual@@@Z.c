/*
 * XREFs of ?Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x1800650B0
 * Callers:
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x18004D428 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CVisualTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x180065090 (-Initialize@CVisualTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?Initialize@CDesktopTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x1801B71A0 (-Initialize@CDesktopTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTreeData::Initialize(CTreeData *this, struct CVisualTree *a2, struct CVisual *a3)
{
  __int64 v4; // rcx

  *((_BYTE *)this + 16) &= 0xF3u;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 3) = a3;
  *((_DWORD *)this + 34) = 0;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_DWORD *)this + 52) = 0;
  *((_BYTE *)this + 212) = 0;
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
    (*(void (__fastcall **)(__int64, struct CVisualTree *))(*(_QWORD *)v4 + 8LL))(v4, a2);
  (*(void (__fastcall **)(CTreeData *, struct CVisualTree *))(*(_QWORD *)this + 32LL))(this, a2);
}
