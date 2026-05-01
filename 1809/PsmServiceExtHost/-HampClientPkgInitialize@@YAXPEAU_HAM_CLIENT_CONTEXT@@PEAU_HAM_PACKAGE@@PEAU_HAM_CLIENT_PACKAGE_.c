/*
 * XREFs of ?HampClientPkgInitialize@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z @ 0x180001584
 * Callers:
 *     ?HampClientPkgCreate@@YAJPEAU_HAM_PACKAGE_INFO@@PEAU_HAM_CLIENT_CONTEXT@@PEA_K@Z @ 0x180001460 (-HampClientPkgCreate@@YAJPEAU_HAM_PACKAGE_INFO@@PEAU_HAM_CLIENT_CONTEXT@@PEA_K@Z.c)
 * Callees:
 *     ?HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z @ 0x180038D4C (-HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 */

void __fastcall HampClientPkgInitialize(
        struct _HAM_CLIENT_CONTEXT *a1,
        struct _HAM_PACKAGE *a2,
        struct _HAM_CLIENT_PACKAGE_CONTEXT *a3)
{
  __int64 v6; // r8

  memset_0(a3, 0, 0x48uLL);
  *((_QWORD *)a3 + 2) = -1LL;
  *((_QWORD *)a3 + 4) = (char *)a1 + 56;
  *((_QWORD *)a3 + 3) = 1LL;
  *((_QWORD *)a3 + 5) = a1;
  *((_QWORD *)a3 + 6) = HamObjectIdGenerate(7LL);
  if ( v6 + _InterlockedExchangeAdd64((volatile signed __int64 *)a2 + 3, (unsigned int)v6) <= v6 )
    __fastfail(0xEu);
  *((_QWORD *)a3 + 7) = a2;
}
