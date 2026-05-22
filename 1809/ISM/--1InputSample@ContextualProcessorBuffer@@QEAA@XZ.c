/*
 * XREFs of ??1InputSample@ContextualProcessorBuffer@@QEAA@XZ @ 0x1800C3968
 * Callers:
 *     _ContextualProcessorBuffer::DeliverInput_::_1_::dtor$9 @ 0x180133DF2 (_ContextualProcessorBuffer--DeliverInput_--_1_--dtor$9.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ContextualProcessorBuffer::InputSample::~InputSample(
        ContextualProcessorBuffer::InputSample *this,
        const struct std::nothrow_t *a2)
{
  __int64 v3; // rcx

  v3 = *((_QWORD *)this + 1);
  if ( v3 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  if ( *(_QWORD *)this )
    operator delete(*(void **)this, a2);
}
