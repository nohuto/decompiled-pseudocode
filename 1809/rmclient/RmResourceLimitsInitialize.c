/*
 * XREFs of RmResourceLimitsInitialize @ 0x18000E3D0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x180009BC4 (memset_0.c)
 */

__int64 __fastcall RmResourceLimitsInitialize(__int64 a1)
{
  memset_0((void *)a1, 0, 0x38uLL);
  *(_DWORD *)(a1 + 48) = 1;
  *(_QWORD *)(a1 + 32) = -1LL;
  *(_QWORD *)(a1 + 24) = -1LL;
  *(_QWORD *)(a1 + 16) = -1LL;
  *(_QWORD *)(a1 + 8) = -1LL;
  return 0LL;
}
