/*
 * XREFs of ?DoStackCaptureDirect@@YAXJI@Z @ 0x18004FBB4
 * Callers:
 *     ?Update@CBitmapSource@@AEAAJPEAUHICON__@@@Z @ 0x18000CE90 (-Update@CBitmapSource@@AEAAJPEAUHICON__@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DoStackCaptureDirect(int a1, unsigned int a2)
{
  void *retaddr; // [rsp+0h] [rbp+0h]

  DoStackCapture(a1, a2, retaddr);
}
