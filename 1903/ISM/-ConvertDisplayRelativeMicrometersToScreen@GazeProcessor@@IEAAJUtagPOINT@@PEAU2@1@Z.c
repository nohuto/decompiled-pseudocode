/*
 * XREFs of ?ConvertDisplayRelativeMicrometersToScreen@GazeProcessor@@IEAAJUtagPOINT@@PEAU2@1@Z @ 0x180125548
 * Callers:
 *     ?OnInputReport@GazeProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180125A40 (-OnInputReport@GazeProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetClippedPointInRect@@YA?AUtagPOINT@@U1@UtagRECT@@PEA_N@Z @ 0x1801256A8 (-GetClippedPointInRect@@YA-AUtagPOINT@@U1@UtagRECT@@PEA_N@Z.c)
 */

__int64 __fastcall GazeProcessor::ConvertDisplayRelativeMicrometersToScreen(
        GazeProcessor *this,
        struct tagPOINT a2,
        struct tagPOINT *a3,
        struct tagPOINT *a4)
{
  struct tagPOINT ClippedPointInRect; // rax
  struct tagPOINT *v5; // r11
  struct tagRECT v7; // [rsp+20h] [rbp-18h] BYREF
  struct tagPOINT v8; // [rsp+40h] [rbp+8h]

  v8.x = (int)(float)((float)((float)((float)a2.y * *((float *)this + 27)) + (float)((float)a2.x * *((float *)this + 25)))
                    + *((float *)this + 29));
  v8.y = (int)(float)((float)((float)((float)a2.y * *((float *)this + 28)) + (float)((float)a2.x * *((float *)this + 26)))
                    + *((float *)this + 30));
  *a3 = v8;
  if ( a4 )
  {
    v7 = *(struct tagRECT *)((char *)this + 124);
    ClippedPointInRect = GetClippedPointInRect(v8, &v7, (bool *)a3);
    *v5 = ClippedPointInRect;
  }
  return 0LL;
}
