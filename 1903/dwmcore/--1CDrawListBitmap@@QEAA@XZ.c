/*
 * XREFs of ??1CDrawListBitmap@@QEAA@XZ @ 0x1800BBED0
 * Callers:
 *     ??_ECBrushRenderingEffect@@UEAAPEAXI@Z @ 0x1800B9BB0 (--_ECBrushRenderingEffect@@UEAAPEAXI@Z.c)
 *     ??_GCCommonRenderingEffect@@UEAAPEAXI@Z @ 0x1800B9CB0 (--_GCCommonRenderingEffect@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDrawListBitmap::~CDrawListBitmap(CDrawListBitmap *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
