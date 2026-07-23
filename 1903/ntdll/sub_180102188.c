/*
 * XREFs of sub_180102188 @ 0x180102188
 * Callers:
 *     RtlSetHeapInformation @ 0x180079240 (RtlSetHeapInformation.c)
 * Callees:
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_1800F085C @ 0x1800F085C (sub_1800F085C.c)
 *     sub_1801021FC @ 0x1801021FC (sub_1801021FC.c)
 *     sub_180102250 @ 0x180102250 (sub_180102250.c)
 */

__int64 __fastcall sub_180102188(__int64 a1)
{
  void *v1; // rdi
  unsigned __int16 v2; // bx
  HANDLE Buffer[13]; // [rsp+20h] [rbp-68h] BYREF

  v1 = *(void **)(a1 + 8);
  v2 = *(_WORD *)(a1 + 2);
  if ( v1 == (void *)-1LL )
  {
    if ( (v2 & 1) != 0 )
      sub_180102250();
    else
      sub_1801021FC();
    return 0LL;
  }
  else
  {
    memset(Buffer, 0, 0x60uLL);
    Buffer[10] = (HANDLE)v2;
    LODWORD(Buffer[3]) = 0x10000000;
    return sub_1800F085C(v1, Buffer);
  }
}
