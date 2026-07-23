/*
 * XREFs of sub_1800798FC @ 0x1800798FC
 * Callers:
 *     sub_1800D16F0 @ 0x1800D16F0 (sub_1800D16F0.c)
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 *     sub_1800D4744 @ 0x1800D4744 (sub_1800D4744.c)
 * Callees:
 *     LdrQueryImageFileKeyOption @ 0x180079A80 (LdrQueryImageFileKeyOption.c)
 */

NTSTATUS __fastcall sub_1800798FC(
        void *a1,
        void *a2,
        const WCHAR *a3,
        ULONG a4,
        PVOID Buffer,
        ULONG BufferSize,
        __int64 a7,
        _QWORD *a8)
{
  NTSTATUS result; // eax

  if ( a1
    && ((result = LdrQueryImageFileKeyOption(a1, a3, a4, Buffer, BufferSize, 0LL),
         ((result + 0x80000000) & 0x80000000) != 0)
     || result == -2147483643) )
  {
    if ( a8 )
      *a8 = a1;
  }
  else if ( a2
         && ((result = LdrQueryImageFileKeyOption(a2, a3, a4, Buffer, BufferSize, 0LL),
              ((result + 0x80000000) & 0x80000000) != 0)
          || result == -2147483643) )
  {
    if ( a8 )
      *a8 = a2;
  }
  else
  {
    return -1073741811;
  }
  return result;
}
