/*
 * XREFs of ??_GAssistantLightBlock@Lighting@TwinUI@@UEAAPEAXI@Z @ 0x1804027D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

TwinUI::Lighting::AssistantLightBlock *__fastcall TwinUI::Lighting::AssistantLightBlock::`scalar deleting destructor'(
        TwinUI::Lighting::AssistantLightBlock *this,
        char a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 1);
  if ( v4 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *(_QWORD *)this = &TwinUI::Lighting::IAssistantLight::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x10);
  return this;
}
