/*
 * XREFs of ?GetLogicalBackBufferIndex@CDWMSwapChain@@UEBAII@Z @ 0x180066E90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMSwapChain::GetLogicalBackBufferIndex(CDWMSwapChain *this, int a2)
{
  __int64 v3; // rcx
  unsigned int v4; // ebx

  v3 = *((_QWORD *)this + 53);
  if ( !v3 )
    return 0LL;
  v4 = *((_DWORD *)this + 40);
  return (a2 + (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v3 + 248LL))(v3)) % v4;
}
