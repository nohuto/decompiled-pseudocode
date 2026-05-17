/*
 * XREFs of sub_180021798 @ 0x180021798
 * Callers:
 *     sub_18002113C @ 0x18002113C (sub_18002113C.c)
 *     LdrLoadDll @ 0x180021600 (LdrLoadDll.c)
 *     LdrGetDllHandleEx @ 0x1800217F0 (LdrGetDllHandleEx.c)
 *     sub_18002DEC8 @ 0x18002DEC8 (sub_18002DEC8.c)
 *     sub_180068E90 @ 0x180068E90 (sub_180068E90.c)
 *     sub_180069034 @ 0x180069034 (sub_180069034.c)
 *     sub_1800805E4 @ 0x1800805E4 (sub_1800805E4.c)
 *     sub_180081070 @ 0x180081070 (sub_180081070.c)
 *     sub_180081C0C @ 0x180081C0C (sub_180081C0C.c)
 *     LdrLoadEnclaveModule @ 0x1800CD6A0 (LdrLoadEnclaveModule.c)
 *     sub_1800D0FDC @ 0x1800D0FDC (sub_1800D0FDC.c)
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 *     sub_1800D9FD0 @ 0x1800D9FD0 (sub_1800D9FD0.c)
 * Callees:
 *     sub_180032198 @ 0x180032198 (sub_180032198.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_1800CE318 @ 0x1800CE318 (sub_1800CE318.c)
 */

void *__fastcall sub_180021798(__int64 a1, __int64 a2, __int64 *a3)
{
  void *result; // rax
  __int64 v7; // rcx
  bool v8; // zf

  result = memset(a3, 0, 0x80uLL);
  if ( (a2 & 1) != 0 || !a2 )
  {
    a3[4] = a1;
    *((_DWORD *)a3 + 6) = a2 & 0xFFFFFFFE;
  }
  else
  {
    v8 = (dword_18015FAB0 & 5) == 0;
    *a3 = a2;
    if ( !v8 )
      sub_1800CE318(
        (unsigned int)"minkernel\\ntdll\\ldrutil.c",
        1445,
        (unsigned int)"LdrpInitializeDllPath",
        2,
        (__int64)"DLL search path passed in externally: %ws\n",
        a2);
    return (void *)sub_180032198(v7, a1, *a3, 5312LL);
  }
  return result;
}
