/*
 * XREFs of ??1InteractionContext@EdgyProcessorTarget@@QEAA@XZ @ 0x1800CDEF0
 * Callers:
 *     ??_GEdgyProcessorTarget@@UEAAPEAXI@Z @ 0x1800CCA18 (--_GEdgyProcessorTarget@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall EdgyProcessorTarget::InteractionContext::~InteractionContext(
        EdgyProcessorTarget::InteractionContext *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  *(_QWORD *)this = &EdgyProcessorTarget::InteractionContext::`vftable';
  v2 = *((_QWORD *)this + 3);
  if ( v2 )
  {
    DestroyInteractionContext(v2);
    *((_QWORD *)this + 3) = 0LL;
  }
  v3 = *((_QWORD *)this + 2);
  if ( v3 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *((_QWORD *)this + 2);
  if ( v4 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
