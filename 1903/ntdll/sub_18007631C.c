/*
 * XREFs of sub_18007631C @ 0x18007631C
 * Callers:
 *     sub_180075F10 @ 0x180075F10 (sub_180075F10.c)
 *     sub_180076000 @ 0x180076000 (sub_180076000.c)
 *     sub_180076258 @ 0x180076258 (sub_180076258.c)
 *     sub_1800DEB44 @ 0x1800DEB44 (sub_1800DEB44.c)
 *     sub_1800DEDD4 @ 0x1800DEDD4 (sub_1800DEDD4.c)
 *     sub_1800DF058 @ 0x1800DF058 (sub_1800DF058.c)
 * Callees:
 *     sub_180026FF4 @ 0x180026FF4 (sub_180026FF4.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

void __fastcall sub_18007631C(
        _DWORD *a1,
        int *a2,
        void *a3,
        size_t a4,
        size_t *a5,
        size_t Size,
        _DWORD *a7,
        __int64 a8,
        unsigned int a9,
        _QWORD *a10,
        _DWORD *a11)
{
  int v15; // eax

  if ( a7 && (v15 = sub_180026FF4(a7, 0LL, a9, a10, a11), *a2 = v15, v15 != -1072365567) )
  {
    *a1 = ((v15 >> 31) & 1) + 1;
  }
  else
  {
    *a1 = 2;
    if ( Size > a4 )
    {
      *a2 = -1073741789;
    }
    else
    {
      memset(a3, 0, Size);
      if ( a5 )
        *a5 = Size;
      *a2 = 0;
    }
  }
}
