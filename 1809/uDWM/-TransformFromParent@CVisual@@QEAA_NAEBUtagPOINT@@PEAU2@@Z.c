/*
 * XREFs of ?TransformFromParent@CVisual@@QEAA_NAEBUtagPOINT@@PEAU2@@Z @ 0x180004638
 * Callers:
 *     ?HitTestQuery@CTopLevelWindow@@QEAAXAEBUtagPOINT@@_NIPEAI@Z @ 0x180004224 (-HitTestQuery@CTopLevelWindow@@QEAAXAEBUtagPOINT@@_NIPEAI@Z.c)
 *     ?DoHitTest@UdwmTopVisual@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z @ 0x1800043A0 (-DoHitTest@UdwmTopVisual@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z.c)
 *     ?DoHitTest@UdwmBottomVisual@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z @ 0x180004440 (-DoHitTest@UdwmBottomVisual@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z.c)
 *     ?DoHitTest@CVisual@@UEAA_NAEBUtagPOINT@@PEAPEAV1@PEAI@Z @ 0x180004500 (-DoHitTest@CVisual@@UEAA_NAEBUtagPOINT@@PEAPEAV1@PEAI@Z.c)
 * Callees:
 *     ?D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x1800077CC (-D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z @ 0x180037234 (-GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z @ 0x1800B1A94 (-D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z.c)
 */

char __fastcall CVisual::TransformFromParent(CVisual *this, const struct tagPOINT *a2, struct tagPOINT *a3)
{
  struct tagPOINT v3; // rax
  char v5; // bl
  float *v7; // rdx
  float y; // xmm1_4
  LONG v9; // ecx
  float x; // [rsp+20h] [rbp-68h] BYREF
  float v11; // [rsp+24h] [rbp-64h]
  _BYTE v12[64]; // [rsp+30h] [rbp-58h] BYREF

  v3 = *a2;
  *a3 = *a2;
  v5 = 1;
  a3->x = v3.x - *((_DWORD *)this + 28);
  a3->y -= *((_DWORD *)this + 29);
  if ( (*((_BYTE *)this + 84) & 2) != 0 )
  {
    CVisual::GetCurrentTransform(this, (struct D2DMatrix *)v12);
    if ( D2DMatrixInverse((struct D2DMatrix *)v12, v7, (const struct D2DMatrix *)v12) )
    {
      y = (float)a3->y;
      x = (float)a3->x;
      v11 = y;
      D3DXVec2TransformCoord((struct D2DVector2 *)&x, (const struct D2DVector2 *)&x, (const struct D2DMatrix *)v12);
      v9 = (int)x;
      a3->y = (int)v11;
      a3->x = v9;
    }
    else
    {
      return 0;
    }
  }
  return v5;
}
