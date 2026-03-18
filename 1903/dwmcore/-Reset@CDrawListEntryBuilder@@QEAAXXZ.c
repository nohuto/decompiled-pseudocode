/*
 * XREFs of ?Reset@CDrawListEntryBuilder@@QEAAXXZ @ 0x180091978
 * Callers:
 *     ?FlushDrawListCache@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@@Z @ 0x18007B02C (-FlushDrawListCache@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntr.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800915B4 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x180253C38 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDrawListEntryBuilder::Reset(CDrawListEntryBuilder *this)
{
  _QWORD *v1; // rbx
  _QWORD *v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rcx

  v1 = (_QWORD *)*((_QWORD *)this + 5);
  v3 = (_QWORD *)*((_QWORD *)this + 6);
  while ( v1 != v3 )
  {
    if ( *v1 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 8LL))(*v1);
      *v1 = 0LL;
    }
    ++v1;
  }
  v4 = (__int64)(*((_QWORD *)this + 6) - *((_QWORD *)this + 5)) >> 3;
  if ( v4 )
    *((_QWORD *)this + 6) -= 8 * v4;
  *((_DWORD *)this + 24) = 0;
  v5 = *((_QWORD *)this + 4);
  if ( v5 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  }
}
