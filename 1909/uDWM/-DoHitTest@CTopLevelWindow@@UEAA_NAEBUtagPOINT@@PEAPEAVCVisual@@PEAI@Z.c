/*
 * XREFs of ?DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z @ 0x18002F680
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002F090 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18000169C (-D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z @ 0x180012590 (-GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?GetCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@CAMPEAVCWindowData@@@Z @ 0x18008D0CC (-GetCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@CAMPEAVCWindowData@@@Z.c)
 *     ?D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z @ 0x1800B7A38 (-D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z.c)
 */

bool __fastcall CTopLevelWindow::DoHitTest(
        CTopLevelWindow *this,
        const struct tagPOINT *a2,
        struct CVisual **a3,
        unsigned int *a4)
{
  LONG v6; // r8d
  int v7; // r12d
  CTopLevelWindow *v8; // r15
  __int64 v9; // rbx
  char v10; // si
  __int64 v11; // rdi
  struct CWindowData *v12; // rcx
  POINT v13; // rbx
  int v14; // eax
  int top; // edi
  LONG x; // edx
  LONG left; // esi
  __int64 v18; // r8
  int v19; // eax
  int SystemMetricsForDpi; // esi
  __int64 v21; // r8
  int v22; // edi
  int v23; // eax
  LONG *v24; // rdx
  float *v26; // rdx
  LONG y; // eax
  float CorrectionScaleForUniformSpaceWindow; // xmm3_4
  __int64 v29; // rsi
  __int64 v30; // rax
  LONG **v31; // rdi
  LONG *v32; // rbx
  __int64 v33; // [rsp+38h] [rbp-D0h] BYREF
  struct CVisual **v34; // [rsp+40h] [rbp-C8h]
  unsigned int *v35; // [rsp+48h] [rbp-C0h]
  RECT v36; // [rsp+50h] [rbp-B8h] BYREF
  RECT v37; // [rsp+60h] [rbp-A8h] BYREF
  RECT rc; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v39[8]; // [rsp+88h] [rbp-80h] BYREF

  v34 = a3;
  v6 = 0;
  v7 = 0;
  v8 = 0LL;
  v35 = a4;
  *(_QWORD *)&rc.left = 0LL;
  LODWORD(v33) = 0;
  if ( *((_QWORD *)this + 3) && ((*((_BYTE *)this + 84) & 4) == 0 || *((_DWORD *)this + 48) == -1) )
    goto LABEL_13;
  LODWORD(v9) = -1;
  v10 = 0;
  while ( 1 )
  {
    if ( !v10 )
    {
      LODWORD(v9) = *((_DWORD *)this + 18);
      v10 = 1;
    }
    v9 = (unsigned int)(v9 - 1);
    if ( (_DWORD)v9 == -1 )
      break;
    v11 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v9);
    *(struct tagPOINT *)&v36.left = *a2;
    v36.left -= *(_DWORD *)(v11 + 112);
    v36.top -= *(_DWORD *)(v11 + 116);
    if ( (*(_BYTE *)(v11 + 84) & 2) != 0 )
    {
      CVisual::GetCurrentTransform((CVisual *)v11, (struct D2DMatrix *)v39);
      if ( D2DMatrixInverse((struct D2DMatrix *)v39, v26, (const struct D2DMatrix *)v39) )
      {
        *(float *)&v37.left = (float)v36.left;
        *(float *)&v37.top = (float)v36.top;
        D3DXVec2TransformCoord(
          (struct D2DVector2 *)&v37,
          (const struct D2DVector2 *)&v37,
          (const struct D2DMatrix *)v39);
        v36.top = (int)*(float *)&v37.top;
        v36.left = (int)*(float *)&v37.left;
        goto LABEL_9;
      }
    }
    else
    {
LABEL_9:
      if ( (*(unsigned __int8 (__fastcall **)(__int64, RECT *, RECT *, __int64 *))(*(_QWORD *)v11 + 136LL))(
             v11,
             &v36,
             &rc,
             &v33) )
      {
        break;
      }
    }
  }
  v8 = *(CTopLevelWindow **)&rc.left;
  if ( *(_QWORD *)&rc.left
    || a2->x < 0
    || a2->x >= *((_DWORD *)this + 30)
    || (y = a2->y, y < 0)
    || y >= *((_DWORD *)this + 31) )
  {
    v7 = v33;
  }
  else
  {
    v7 = *((_DWORD *)this + 48);
    v8 = this;
  }
  v6 = 0;
LABEL_13:
  v12 = (struct CWindowData *)*((_QWORD *)this + 90);
  v13 = *a2;
  *(struct tagPOINT *)&v36.left = *a2;
  v14 = *((_DWORD *)v12 + 87);
  if ( (v14 & 1) != 0 || (v14 & 2) != 0 )
  {
    CorrectionScaleForUniformSpaceWindow = CTopLevelWindow::GetCorrectionScaleForUniformSpaceWindow(v12);
    x = v13.x;
    if ( CorrectionScaleForUniformSpaceWindow == 1.0 )
    {
      top = v36.top;
      left = v36.left;
    }
    else
    {
      x = (int)((float)((float)v13.x / CorrectionScaleForUniformSpaceWindow) + 0.5);
      v36.left = x;
      left = x;
      top = (int)((float)((float)v36.top / CorrectionScaleForUniformSpaceWindow) + 0.5);
      v36.top = top;
      v13 = *(POINT *)&v36.left;
    }
  }
  else
  {
    top = v36.top;
    x = v13.x;
    left = v36.left;
  }
  if ( v8 && v7 == -2 )
  {
    if ( x >= *((_DWORD *)this + 147)
      && x < *((_DWORD *)this + 30) - *((_DWORD *)this + 148)
      && top >= *((_DWORD *)v12 + 24)
      && top < *((_DWORD *)this + 149) )
    {
      v7 = 2;
    }
    *(_QWORD *)&rc.left = 0LL;
    if ( *((_DWORD *)v12 + 14) - *((_DWORD *)v12 + 12) < 0 )
      rc.right = v6;
    else
      rc.right = *((_DWORD *)v12 + 14) - *((_DWORD *)v12 + 12);
    if ( *((_DWORD *)v12 + 15) - *((_DWORD *)v12 + 13) < 0 )
      rc.bottom = v6;
    else
      rc.bottom = *((_DWORD *)v12 + 15) - *((_DWORD *)v12 + 13);
    if ( !PtInRect(&rc, v13) )
    {
      v7 = 18;
      if ( top < 0 )
        v7 = 2;
    }
    v19 = *((_DWORD *)this + 146);
    if ( (v19 & 0x20) != 0 )
    {
      if ( (v19 & 0x20000) != 0 )
        v37.left = *((_DWORD *)this + 30) - left - 1;
      else
        v37.left = left;
      v29 = 5LL;
      v39[0] = *((_QWORD *)this + 65);
      v39[1] = *((_QWORD *)this + 60);
      v39[2] = *((_QWORD *)this + 61);
      v39[3] = *((_QWORD *)this + 62);
      v30 = *((_QWORD *)this + 63);
      v37.top = top;
      v31 = (LONG **)v39;
      v39[4] = v30;
      do
      {
        v32 = *v31;
        if ( *v31 )
        {
          v36.left = v32[28];
          v36.top = *((_DWORD *)this + 161);
          v36.right = v32[28] + v32[30];
          v36.bottom = v32[29] + v32[31];
          if ( v32 == *((LONG **)this + 65) )
          {
            v36.left = *((_DWORD *)this + 159);
          }
          else if ( v32 == *((LONG **)this + 63) )
          {
            v36.right = *((_DWORD *)this + 30) - *((_DWORD *)this + 160);
          }
          if ( PtInRect(&v36, *(POINT *)&v37.left) )
          {
            v7 = v32[48];
            v8 = (CTopLevelWindow *)v32;
          }
        }
        ++v31;
        --v29;
      }
      while ( v29 );
    }
    else if ( *((_QWORD *)this + 65) )
    {
      SystemMetricsForDpi = GetSystemMetricsForDpi(31LL, *(unsigned int *)(*((_QWORD *)this + 90) + 324LL), v18);
      v22 = GetSystemMetricsForDpi(50LL, *(unsigned int *)(*((_QWORD *)this + 90) + 324LL), v21);
      v23 = (SystemMetricsForDpi - v22 - GetSystemMetrics(46)) / 2;
      if ( v23 >= 1 )
      {
        v24 = (LONG *)*((_QWORD *)this + 65);
        v37.left = v24[28];
        v37.top = v24[29] - v23;
        v37.right = v24[28] + v24[30];
        v37.bottom = v24[29] + v23 + v24[31];
        if ( PtInRect(&v37, v13) )
        {
          v8 = (CTopLevelWindow *)*((_QWORD *)this + 65);
          v7 = *((_DWORD *)v8 + 48);
        }
      }
    }
  }
  *v34 = v8;
  *v35 = v7;
  return v8 != 0LL;
}
