/*
 * XREFs of ?CreateModernResourceEnforcer@@YAJPEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@PEAPEAVModernResourceEnforcer@@@Z @ 0x1800416D4
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x180041E70 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     ?Init@ModernResourceEnforcer@@IEAAJPEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@@Z @ 0x180041754 (-Init@ModernResourceEnforcer@@IEAAJPEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@@Z.c)
 *     ??0ModernResourceEnforcer@@IEAA@XZ @ 0x1800417FC (--0ModernResourceEnforcer@@IEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180048EB0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CreateModernResourceEnforcer(
        struct _PSM_EXT_INTERNAL_FUNCTION_TABLE4 *a1,
        struct ModernResourceEnforcer **a2)
{
  ModernResourceEnforcer *v4; // rax
  ModernResourceEnforcer *v5; // rbx
  int v6; // edi

  v4 = (ModernResourceEnforcer *)operator new(0x130uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
    v5 = ModernResourceEnforcer::ModernResourceEnforcer(v4);
  else
    v5 = 0LL;
  if ( v5 )
  {
    v6 = ModernResourceEnforcer::Init(v5, a1);
    if ( v6 >= 0 )
    {
      *a2 = v5;
      v5 = 0LL;
    }
    if ( v5 )
      (*(void (__fastcall **)(ModernResourceEnforcer *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v6;
}
