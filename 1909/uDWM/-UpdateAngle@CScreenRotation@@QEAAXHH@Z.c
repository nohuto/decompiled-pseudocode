/*
 * XREFs of ?UpdateAngle@CScreenRotation@@QEAAXHH@Z @ 0x1800A5E2C
 * Callers:
 *     ?HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z @ 0x180091024 (-HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z.c)
 *     ?HandleScreenRotation@CWindowList@@QEAAXHH@Z @ 0x180091188 (-HandleScreenRotation@CWindowList@@QEAAXHH@Z.c)
 * Callees:
 *     ?Translate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x180010CA0 (-Translate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180023740 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetCenter@CVisual@@QEAAXNN@Z @ 0x18008E2A4 (-SetCenter@CVisual@@QEAAXNN@Z.c)
 *     ?SetRotation@CVisual@@QEAAXN@Z @ 0x18008E488 (-SetRotation@CVisual@@QEAAXN@Z.c)
 */

void __fastcall CScreenRotation::UpdateAngle(CScreenRotation *this, int a2, int a3)
{
  int v4; // r9d
  LONG v6; // r14d
  LONG v7; // ebx
  __m128i v8; // xmm0
  __int64 v9; // rax
  __int64 v10; // rax
  _BYTE v11[20]; // [rsp+20h] [rbp-30h] BYREF
  float v12; // [rsp+34h] [rbp-1Ch]
  float v13; // [rsp+38h] [rbp-18h]
  struct tagPOINT v14; // [rsp+80h] [rbp+30h] BYREF
  __int64 v15; // [rsp+98h] [rbp+48h]

  v4 = a2;
  if ( *((_BYTE *)this + 330) )
  {
    v4 = (a3 - *((_DWORD *)this + 85)) % 360;
  }
  else
  {
    *((_BYTE *)this + 330) = 1;
    *((_DWORD *)this + 85) = a2 + a3;
  }
  if ( v4 == -270 )
  {
    v4 = 90;
  }
  else if ( v4 == 270 )
  {
    v4 = -90;
  }
  else if ( abs32(v4) == 360 )
  {
    v4 = 0;
  }
  *((_DWORD *)this + 83) = v4;
  v14 = (struct tagPOINT)*((_QWORD *)this + 15);
  v6 = v14.y >> 1;
  v7 = v14.x >> 1;
  CVisual::SetCenter(this, (double)(v14.x >> 1), (double)(v14.y >> 1));
  CVisual::SetRotation(this, (double)*((int *)this + 83));
  v8 = _mm_cvtsi32_si128(*((_DWORD *)this + 83));
  v9 = *((_QWORD *)this + 39);
  v12 = 0.0;
  v13 = 0.0;
  v14 = 0LL;
  *(_DWORD *)(v9 + 940) = _mm_cvtepi32_ps(v8).m128_u32[0];
  if ( abs32(*((_DWORD *)this + 83)) == 180 || !*((_DWORD *)this + 83) )
  {
    if ( !*((_BYTE *)this + 330) )
      *((_BYTE *)this + 329) = 1;
  }
  else
  {
    v14.x = v6 - v7;
    v10 = *((_QWORD *)this + 39);
    v14.y = v7 - v6;
    v15 = *(_QWORD *)(v10 + 128);
    v12 = (float)((SHIDWORD(v15) >> 1) - ((int)v15 >> 1));
    v13 = (float)(((int)v15 >> 1) - (SHIDWORD(v15) >> 1));
  }
  CAnimatedTransitionVisual::Translate2D(
    *((CAnimatedTransitionVisual **)this + 39),
    (const struct TA_TRANSFORM_2D *)v11);
  CVisual::SetOffset((struct tagPOINT *)this, &v14);
  *((_DWORD *)this + 86) = a3;
}
