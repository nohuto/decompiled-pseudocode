/*
 * XREFs of ??$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x180061F60
 * Callers:
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x180061E70 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ?BuildCommandList@CFramebuffer@CComputeScribbleRenderer@@AEAAJPEAVCComputeScribbleStopwatch@@AEAV?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@@Z @ 0x1801B3F64 (-BuildCommandList@CFramebuffer@CComputeScribbleRenderer@@AEAAJPEAVCComputeScribbleStopwatch@@AEA.c)
 *     ?ProcessSegmentUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_SEGMENTUPDATE@@PEBXI@Z @ 0x180214490 (-ProcessSegmentUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_SEGMENTUPDA.c)
 *     ?Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z @ 0x180258718 (-Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z.c)
 * Callees:
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x1800518E4 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800BA758 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800BA8B4 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 */

__int64 __fastcall CRegion::AppendRects<tagRECT>(FastRegion::CRegion *this, __int64 a2, unsigned int a3)
{
  _DWORD *v3; // r9
  unsigned int v4; // ebx
  unsigned int v8; // r14d
  int *v9; // rax
  int v10; // r11d
  int v11; // edi
  int v12; // r8d
  int v13; // r10d
  int v14; // edi
  __int64 v16; // rsi
  struct tagRECT v17; // [rsp+28h] [rbp-99h]
  struct tagRECT v18; // [rsp+38h] [rbp-89h] BYREF
  _DWORD *v19; // [rsp+48h] [rbp-79h] BYREF
  _DWORD Mem[18]; // [rsp+50h] [rbp-71h] BYREF
  _BYTE v21[80]; // [rsp+98h] [rbp-29h] BYREF

  Mem[0] = 0;
  v3 = Mem;
  v4 = 0;
  v19 = Mem;
  if ( a3 )
  {
    while ( 1 )
    {
      v8 = v4 + 5;
      if ( a3 < v4 + 5 )
        v8 = a3;
      v9 = (int *)(a2 + 16LL * v4);
      v10 = *v9;
      v11 = v9[2];
      v12 = v9[1];
      v13 = v9[3];
      if ( *v9 >= v11 || v12 >= v13 )
      {
        *v3 = 0;
      }
      else
      {
        *v3 = 2;
        v3[1] = v10;
        v3[2] = v11;
        v3[3] = v12;
        v3[4] = 16;
        v3[7] = v10;
        v3[8] = v11;
        v3[5] = v13;
        v3[6] = 16;
      }
      if ( ++v4 < v8 )
        break;
LABEL_8:
      v14 = FastRegion::CRegion::Union(this, (const struct CRegion *)&v19);
      if ( v14 < 0 )
        goto LABEL_18;
      v3 = v19;
      if ( v4 >= a3 )
        goto LABEL_10;
    }
    v16 = 16LL * v4 + a2 + 8;
    while ( 1 )
    {
      v17 = *(struct tagRECT *)(v16 - 8);
      v18 = v17;
      FastRegion::CRegion::CRegion((FastRegion::CRegion *)v21, &v18);
      v14 = FastRegion::CRegion::Union((FastRegion::CRegion *)&v19, (const struct CRegion *)v21);
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v21);
      if ( v14 < 0 )
        break;
      ++v4;
      v16 += 16LL;
      if ( v4 >= v8 )
        goto LABEL_8;
    }
LABEL_18:
    v3 = v19;
  }
  else
  {
LABEL_10:
    v14 = 0;
  }
  if ( Mem != v3 )
    operator delete(v3);
  return (unsigned int)v14;
}
