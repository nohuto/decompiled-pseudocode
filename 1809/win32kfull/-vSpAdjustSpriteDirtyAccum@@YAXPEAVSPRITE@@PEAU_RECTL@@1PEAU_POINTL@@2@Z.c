/*
 * XREFs of ?vSpAdjustSpriteDirtyAccum@@YAXPEAVSPRITE@@PEAU_RECTL@@1PEAU_POINTL@@2@Z @ 0x1C026664C
 * Callers:
 *     ?GdiAdjustSpriteDirtyAccum@@YAHPEAUHDEV__@@PEAUHWND__@@PEAU_RECTL@@2PEAU_POINTL@@3@Z @ 0x1C0261D6C (-GdiAdjustSpriteDirtyAccum@@YAHPEAUHDEV__@@PEAUHWND__@@PEAU_RECTL@@2PEAU_POINTL@@3@Z.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C000E3D4 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void __fastcall vSpAdjustSpriteDirtyAccum(
        REGION **a1,
        struct _RECTL *a2,
        struct _RECTL *a3,
        struct _POINTL *a4,
        struct _POINTL *a5)
{
  LONG x; // eax
  LONG y; // eax
  REGION *v10; // [rsp+20h] [rbp-30h] BYREF
  int v11; // [rsp+28h] [rbp-28h]
  struct _RECTL v12; // [rsp+30h] [rbp-20h] BYREF

  REGION::vDeleteREGION(a1[24]);
  a1[24] = 0LL;
  v12.left = -a4->x;
  v12.top = -a4->y;
  v12.right = a3->right;
  v12.bottom = a3->bottom;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v10);
  if ( v10 )
  {
    x = a5->x;
    v12.left += a5->x;
    v12.right += x;
    y = a5->y;
    v12.top += y;
    v12.bottom += y;
    RGNOBJ::vSet((RGNOBJ *)&v10, &v12);
    a1[24] = v10;
  }
  if ( v11 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v10);
}
