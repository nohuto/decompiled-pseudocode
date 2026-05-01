/*
 * XREFs of ??1?$unique_ptr@VAltTabWindowHook@@U?$default_delete@VAltTabWindowHook@@@std@@@std@@QEAA@XZ @ 0x18027E3C4
 * Callers:
 *     _XamlAltTabViewController::XamlAltTabViewController_::_1_::dtor$2 @ 0x18028E16E (_XamlAltTabViewController--XamlAltTabViewController_--_1_--dtor$2.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1AltTabWindowHook@@QEAA@XZ @ 0x18028E574 (--1AltTabWindowHook@@QEAA@XZ.c)
 */

void __fastcall std::unique_ptr<AltTabWindowHook>::~unique_ptr<AltTabWindowHook>(AltTabWindowHook **a1)
{
  AltTabWindowHook *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    AltTabWindowHook::~AltTabWindowHook(*a1);
    operator delete(v1, (const struct std::nothrow_t *)0x10);
  }
}
