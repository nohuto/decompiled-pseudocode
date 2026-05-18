/*
 * XREFs of ?make_error_code@std@@YA?AVerror_code@1@W4io_errc@1@@Z @ 0x18002BFDC
 * Callers:
 *     sub_180029FB0 @ 0x180029FB0 (sub_180029FB0.c)
 *     sub_18002BA7C @ 0x18002BA7C (sub_18002BA7C.c)
 * Callees:
 *     ?_Execute_once@std@@YAHAEAUonce_flag@1@P6AHPEAX1PEAPEAX@Z1@Z @ 0x18012753E (-_Execute_once@std@@YAHAEAUonce_flag@1@P6AHPEAX1PEAPEAX@Z1@Z.c)
 */

__int64 __fastcall std::make_error_code(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( !std::_Execute_once(
          (struct std::once_flag *)&unk_180269F98,
          (int (*)(void *, void *, void **))std::_Immortalize_impl<std::_Generic_error_category>,
          &unk_180269FA0) )
  {
    _o_terminate();
    __debugbreak();
  }
  *(_QWORD *)(a1 + 8) = &unk_180269FA0;
  result = a1;
  *(_DWORD *)a1 = a2;
  return result;
}
