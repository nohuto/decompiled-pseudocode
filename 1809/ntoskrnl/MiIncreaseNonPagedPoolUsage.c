/*
 * XREFs of MiIncreaseNonPagedPoolUsage @ 0x140163F48
 * Callers:
 *     MiExpandNonPagedPool @ 0x1401627E8 (MiExpandNonPagedPool.c)
 *     MiScanLeafNonPagedPool @ 0x1401638F0 (MiScanLeafNonPagedPool.c)
 * Callees:
 *     MiCountSystemPool @ 0x1401B4F60 (MiCountSystemPool.c)
 */

__int64 __fastcall MiIncreaseNonPagedPoolUsage(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r8
  __int64 v6; // rax

  if ( !a2 )
  {
    v4 = (a3 + 511) & 0xFFFFFFFFFFFFFE00uLL;
    v5 = (a4 + a3) & 0xFFFFFFFFFFFFFE00uLL;
    v6 = a4;
    if ( v5 > v4 )
      v6 = a4 + v4 - v5;
    *(_QWORD *)(a1 + 288) += v6;
  }
  *(_QWORD *)(a1 + 272) += a4;
  return MiCountSystemPool(0LL, a4, 1LL);
}
