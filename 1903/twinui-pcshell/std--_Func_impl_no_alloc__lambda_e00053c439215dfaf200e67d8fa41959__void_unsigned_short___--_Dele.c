/*
 * XREFs of std::_Func_impl_no_alloc__lambda_e00053c439215dfaf200e67d8fa41959__void_unsigned_short___::_Delete_this @ 0x1802737D0
 * Callers:
 *     ?GetTopLevelHost@ViewEventDispatcher@@UEAAJIPEAUClientIdentifier@Popups@Shell@Internal@Windows@@@Z @ 0x18026BD20 (-GetTopLevelHost@ViewEventDispatcher@@UEAAJIPEAUClientIdentifier@Popups@Shell@Internal@Windows@@.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_e00053c439215dfaf200e67d8fa41959__void_unsigned_short___::_Delete_this(
        void *a1,
        char a2)
{
  if ( a2 )
    operator delete(a1, (const struct std::nothrow_t *)0x18);
}
