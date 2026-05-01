/*
 * XREFs of ??_GWin32PrimaryAppProxy@@UEAAPEAXI@Z @ 0x1800970D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18004059C (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

Win32PrimaryAppProxy *__fastcall Win32PrimaryAppProxy::`scalar deleting destructor'(
        Win32PrimaryAppProxy *this,
        char a2)
{
  std::wstring::_Tidy_deallocate((_QWORD *)this + 1);
  *(_QWORD *)this = &PrimaryAppProxyBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
