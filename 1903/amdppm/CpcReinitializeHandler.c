/*
 * XREFs of CpcReinitializeHandler @ 0x1C000A190
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddr @ 0x1C0002208 (WriteGenAddr.c)
 *     WriteGenAddrHidden @ 0x1C0002478 (WriteGenAddrHidden.c)
 *     _guard_dispatch_icall_nop @ 0x1C000DFB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CpcReinitializeHandler(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  _BYTE *v4; // rax

  if ( *((_BYTE *)a1 + 92) )
  {
    v2 = a1[14];
    v3 = *a1;
    v4 = (_BYTE *)(v2 + 176);
    if ( *(_BYTE *)(v3 + 78) )
    {
      WriteGenAddrHidden(*(_DWORD *)(v3 + 80), v4, 1uLL);
    }
    else if ( v4 )
    {
      WriteGenAddr(v4, 1uLL);
    }
  }
  if ( *((_BYTE *)a1 + 104) )
  {
    if ( !*(_BYTE *)(*a1 + 78) )
      ((void (*)(void))qword_1C00135D8)();
  }
}
