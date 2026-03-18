/*
 * XREFs of CmpCreateRegistryThread @ 0x1407593C0
 * Callers:
 *     CmpInitializeRegistryProcess @ 0x1407584C4 (CmpInitializeRegistryProcess.c)
 *     CmCompleteRegistryInitialization @ 0x140759428 (CmCompleteRegistryInitialization.c)
 * Callees:
 *     PsCreateSystemThreadEx @ 0x1406725D0 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall CmpCreateRegistryThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int128 v5; // [rsp+50h] [rbp-38h] BYREF
  __int64 v6; // [rsp+60h] [rbp-28h]
  __int64 v7; // [rsp+68h] [rbp-20h]
  __int128 v8; // [rsp+70h] [rbp-18h]

  v5 = 0x30uLL;
  v6 = 0LL;
  v7 = 512LL;
  v8 = 0LL;
  return PsCreateSystemThreadEx(a1, 0x1FFFFF, &v5, CmpRegistryProcess, 0LL, a3, a4, 0LL, 0LL);
}
