/*
 * XREFs of LdrQueryImageFileExecutionOptionsEx @ 0x1800799E0
 * Callers:
 *     LdrQueryImageFileExecutionOptions @ 0x1800799A0 (LdrQueryImageFileExecutionOptions.c)
 * Callees:
 *     sub_180073150 @ 0x180073150 (sub_180073150.c)
 *     sub_1800732AC @ 0x1800732AC (sub_1800732AC.c)
 *     LdrQueryImageFileKeyOption @ 0x180079A80 (LdrQueryImageFileKeyOption.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 */

__int64 __fastcall LdrQueryImageFileExecutionOptionsEx(
        unsigned __int16 *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  int v10; // eax
  unsigned int ImageFileKeyOption; // ebx
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  if ( a1 )
    v10 = sub_180073150(a1, 9LL, 0, &v13);
  else
    v10 = sub_1800732AC(&v13);
  ImageFileKeyOption = v10;
  if ( v10 >= 0 )
  {
    ImageFileKeyOption = LdrQueryImageFileKeyOption(v13, a2, a3, a4, a5, a6);
    if ( a1 )
      ZwClose(v13);
  }
  return ImageFileKeyOption;
}
