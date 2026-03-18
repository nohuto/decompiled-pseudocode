/*
 * XREFs of PhysicalToLogicalInPlaceRgnWorker @ 0x1C003CA20
 * Callers:
 *     PhysicalToLogicalInPlaceRgn @ 0x1C003C0C0 (PhysicalToLogicalInPlaceRgn.c)
 *     ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C003CB30 (-CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0071310 (_GetTopLevelWindow.c)
 *     ?GetWindowCoordinateSpaceDpi@@YAGPEAUtagWND@@@Z @ 0x1C011190C (-GetWindowCoordinateSpaceDpi@@YAGPEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?TransformRgn@@YAPEAUHRGN__@@PEAU1@PEAUtagXFORM@@@Z @ 0x1C01D1058 (-TransformRgn@@YAPEAUHRGN__@@PEAU1@PEAUtagXFORM@@@Z.c)
 */

__int64 __fastcall PhysicalToLogicalInPlaceRgnWorker(struct tagWND *a1, HRGN *a2, int a3)
{
  struct tagWND *TopLevelWindow; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int16 WindowCoordinateSpaceDpi; // bx
  float *v14; // rax
  float v15; // xmm6_4
  float v16; // xmm2_4
  float v17; // xmm3_4
  HRGN v18; // rax
  float v19; // [rsp+20h] [rbp-48h] BYREF
  __int64 v20; // [rsp+24h] [rbp-44h]
  float v21; // [rsp+2Ch] [rbp-3Ch]
  float v22; // [rsp+30h] [rbp-38h]
  float v23; // [rsp+34h] [rbp-34h]

  TopLevelWindow = a1;
  if ( a3 )
  {
    if ( gfDwmChildWindowDpiIsolationEnabled )
    {
      if ( a1 )
      {
        do
        {
          v5 = *((_QWORD *)TopLevelWindow + 10);
          if ( v5 )
          {
            v6 = *((_QWORD *)TopLevelWindow + 3);
            v7 = 0LL;
            if ( v6 )
            {
              v8 = *(_QWORD *)(v6 + 8);
              if ( v8 )
                v7 = *(_QWORD *)(v8 + 24);
            }
            if ( v5 == v7 )
              break;
            v9 = *((_QWORD *)TopLevelWindow + 3);
            v10 = 0LL;
            if ( v9 )
            {
              v11 = *(_QWORD *)(v9 + 8);
              if ( v11 )
                v10 = *(_QWORD *)(v11 + 24);
            }
            if ( v5 != v10
              && (((unsigned __int16)(*(_DWORD *)(*((_QWORD *)TopLevelWindow + 5) + 288LL) >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(v5 + 40) + 288LL) >> 8)) & 0x1FF) != 0 )
            {
              WindowCoordinateSpaceDpi = GetWindowCoordinateSpaceDpi(TopLevelWindow);
              if ( WindowCoordinateSpaceDpi != GetWindowCoordinateSpaceDpi(*((struct tagWND **)TopLevelWindow + 10)) )
                break;
            }
          }
          TopLevelWindow = (struct tagWND *)*((_QWORD *)TopLevelWindow + 10);
        }
        while ( TopLevelWindow );
      }
    }
    else
    {
      TopLevelWindow = (struct tagWND *)GetTopLevelWindow(a1);
    }
  }
  if ( (unsigned __int64)*a2 <= 2
    || !TopLevelWindow
    || !*((_QWORD *)TopLevelWindow + 25)
    || !(unsigned int)IsWindowDesktopComposed(TopLevelWindow) )
  {
    return 0LL;
  }
  v14 = (float *)*((_QWORD *)TopLevelWindow + 25);
  v20 = 0LL;
  v19 = 1.0 / *v14;
  v15 = 1.0 / v14[5];
  v21 = v15;
  LODWORD(v16) = COERCE_UNSIGNED_INT(v14[12] / *v14) ^ _xmm;
  v22 = v16;
  LODWORD(v17) = COERCE_UNSIGNED_INT(v14[13] / v14[5]) ^ _xmm;
  v23 = v17;
  if ( v19 == 1.0 && v15 == 1.0 && v16 == 0.0 && v17 == 0.0 )
    return 0LL;
  v18 = TransformRgn(*a2, (struct tagXFORM *)&v19);
  if ( !v18 )
    return 0LL;
  *a2 = v18;
  return 1LL;
}
