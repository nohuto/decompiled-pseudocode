/*
 * XREFs of ?LkdForAtomAdditionFailure@@YAXPEAXJ@Z @ 0x1C011CED8
 * Callers:
 *     UserAddAtomToAtomTableEx @ 0x1C0061DA0 (UserAddAtomToAtomTableEx.c)
 *     UserAddAtomEx @ 0x1C007B5D0 (UserAddAtomEx.c)
 *     UserAddAtomToAtomTable @ 0x1C00A7EDC (UserAddAtomToAtomTable.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00268A4 (W32GetThreadWin32Thread.c)
 */

void __fastcall LkdForAtomAdditionFailure(PRTL_ATOM_TABLE a1, int a2)
{
  __int64 ThreadWin32Thread; // rax

  if ( a1 == UserAtomTableHandle )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 472) + 224LL) |= 0x800uLL;
    if ( !byte_1C021682C )
    {
      DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 400LL, 21LL, a2, 0LL, KeGetCurrentThread(), 0LL, 0LL, 0);
      byte_1C021682C = 1;
    }
  }
}
