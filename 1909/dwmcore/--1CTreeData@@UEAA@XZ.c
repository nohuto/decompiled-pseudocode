/*
 * XREFs of ??1CTreeData@@UEAA@XZ @ 0x1800785F4
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x180077D38 (--1CVisual@@MEAA@XZ.c)
 *     ??_ECVisualTreeData@@UEAAPEAXI@Z @ 0x1800CA250 (--_ECVisualTreeData@@UEAAPEAXI@Z.c)
 *     ??_ECDesktopTreeData@@UEAAPEAXI@Z @ 0x1801C0BA0 (--_ECDesktopTreeData@@UEAAPEAXI@Z.c)
 *     ??_ECTreeData@@UEAAPEAXI@Z @ 0x1801C0BF0 (--_ECTreeData@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTreeData::~CTreeData(CTreeData *this)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx

  *(_QWORD *)this = &CTreeData::`vftable';
  v2 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 4);
  if ( v2 )
  {
    (**v2)(v2, 1LL);
    *((_QWORD *)this + 4) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 14);
  if ( v3 )
  {
    operator delete(v3);
    *((_QWORD *)this + 14) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 19);
  if ( v4 )
  {
    operator delete(v4);
    *((_QWORD *)this + 19) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 20);
  if ( v5 )
  {
    operator delete(v5);
    *((_QWORD *)this + 20) = 0LL;
  }
  CDrawListCacheSet::~CDrawListCacheSet((CTreeData *)((char *)this + 128));
}
