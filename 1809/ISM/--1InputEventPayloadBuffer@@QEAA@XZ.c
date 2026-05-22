/*
 * XREFs of ??1InputEventPayloadBuffer@@QEAA@XZ @ 0x18008FC6C
 * Callers:
 *     _InputRedirectionTarget::DeliverInput_::_1_::dtor$0 @ 0x180132614 (_InputRedirectionTarget--DeliverInput_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall InputEventPayloadBuffer::~InputEventPayloadBuffer(
        InputEventPayloadBuffer *this,
        const struct std::nothrow_t *a2)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 1);
  if ( v2 )
    operator delete(v2, a2);
}
