/*
 * XREFs of ?GetNumContacts@CInteractionRoot@@UEBAIW4InputType@@@Z @ 0x18019C080
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInteractionRoot::GetNumContacts(_QWORD **a1, unsigned int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax

  v4 = *a1[173];
  v5 = ((__int64 (__fastcall *)(_QWORD **))(*a1)[13])(a1);
  return (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(v4 + 56))(a1[173], v5, a2);
}
