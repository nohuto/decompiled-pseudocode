/*
 * XREFs of ?EndAppend@CD3DDynamicAppendBuffer@@QEAAXXZ @ 0x1801899E8
 * Callers:
 *     ?Render@CDrawListEntryBatch@@UEAAJXZ @ 0x1800C99A0 (-Render@CDrawListEntryBatch@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DDynamicAppendBuffer::EndAppend(CD3DDynamicAppendBuffer *this)
{
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)this + 640LL) + 120LL))(
    *(_QWORD *)(*(_QWORD *)this + 640LL),
    *((_QWORD *)this + 1),
    0LL);
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
}
