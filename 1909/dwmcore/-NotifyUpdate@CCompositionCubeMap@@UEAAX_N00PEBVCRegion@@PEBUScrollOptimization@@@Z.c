/*
 * XREFs of ?NotifyUpdate@CCompositionCubeMap@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x1801CEC30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionCubeMap::NotifyUpdate(
        CCompositionCubeMap *this,
        char a2,
        char a3,
        char a4,
        const struct CRegion *a5)
{
  if ( a2 || a3 || a4 || a5 )
  {
    *((_BYTE *)this + 72) = 1;
    (*(void (__fastcall **)(char *, _QWORD, _QWORD))(*((_QWORD *)this - 9) + 64LL))((char *)this - 72, 0LL, 0LL);
  }
}
