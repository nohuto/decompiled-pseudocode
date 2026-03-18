/*
 * XREFs of ?BufferOutput@CInteractionContextWrapper@@UEAAX_N@Z @ 0x180232490
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CInteractionContextWrapper::BufferOutput(CInteractionContextWrapper *this, char a2)
{
  if ( *((_BYTE *)this + 536) != a2 )
  {
    *((_BYTE *)this + 536) = a2;
    if ( a2 )
      (*(void (__fastcall **)(CInteractionContextWrapper *))(*(_QWORD *)this + 152LL))(this);
  }
}
