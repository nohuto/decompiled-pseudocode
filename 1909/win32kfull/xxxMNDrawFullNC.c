/*
 * XREFs of xxxMNDrawFullNC @ 0x1C0249F5C
 * Callers:
 *     xxxMNSetTop @ 0x1C02268C4 (xxxMNSetTop.c)
 *     xxxMenuWindowProc @ 0x1C0226F00 (xxxMenuWindowProc.c)
 * Callees:
 *     MNIsUAHMenu @ 0x1C0028E30 (MNIsUAHMenu.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     NtGdiPatBlt @ 0x1C00BB170 (NtGdiPatBlt.c)
 *     GreGetBrushOrg @ 0x1C011110C (GreGetBrushOrg.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C0128B34 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     xxxSendUAHMenuMessage @ 0x1C0128BAC (xxxSendUAHMenuMessage.c)
 *     MNGetpItemFromIndex @ 0x1C012A5A4 (MNGetpItemFromIndex.c)
 *     DrawEdge @ 0x1C012B8CC (DrawEdge.c)
 *     GreSetBrushOrg @ 0x1C012BE74 (GreSetBrushOrg.c)
 *     DrawFrame @ 0x1C0157530 (DrawFrame.c)
 *     MNDrawArrow @ 0x1C0249B68 (MNDrawArrow.c)
 *     MNDrawEdge @ 0x1C0249D34 (MNDrawEdge.c)
 */

__int64 __fastcall xxxMNDrawFullNC(struct tagWND *a1, HDC a2, __int64 **a3)
{
  __int64 result; // rax
  int v4; // ebx
  HDC DCEx; // rsi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  _DWORD *v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // r8
  LONG bottom; // r12d
  unsigned int v20; // r12d
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  int v24; // ebx
  __int64 v25; // rdx
  __int64 v26; // r8
  const struct tagDPIMETRICS *DPIMETRICS; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  const struct tagDPIMETRICS *v30; // rax
  RECT v31; // [rsp+30h] [rbp-30h] BYREF
  __int64 v32; // [rsp+40h] [rbp-20h] BYREF
  __int64 v33; // [rsp+48h] [rbp-18h]
  __int64 v34; // [rsp+50h] [rbp-10h]
  __int64 v35; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v36; // [rsp+A8h] [rbp+48h]

  result = (__int64)*a3;
  v4 = 0;
  v35 = 0LL;
  if ( *(_QWORD *)(*(_QWORD *)result + 40LL) )
  {
    if ( a2 )
      DCEx = a2;
    else
      DCEx = (HDC)_GetDCEx(a1, 0LL, 66561LL);
    result = MNIsUAHMenu(*(_QWORD *)(**a3 + 40));
    if ( (_DWORD)result )
    {
      result = (__int64)*a3;
      if ( *(_QWORD *)(**a3 + 16) )
      {
        v32 = 0LL;
        v33 = 0LL;
        v34 = 0LL;
        v11 = *(_QWORD *)(**a3 + 16);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v10);
        v32 = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = &v32;
        v33 = v11;
        if ( v11 )
          HMLockObject(v11);
        v4 = xxxSendUAHMenuMessage(*(_QWORD *)(**a3 + 16));
        result = ThreadUnlock1(v14, v13, v15);
      }
    }
    if ( *(_QWORD *)(**a3 + 40) )
    {
      if ( v4 )
      {
        MNDrawArrow(DCEx, a3, 4294967293LL);
        result = MNDrawArrow(DCEx, a3, 4294967292LL);
      }
      else
      {
        v16 = (_DWORD *)*((_QWORD *)a1 + 5);
        v31.top = 0;
        v31.left = 0;
        v31.right = v16[24] - v16[22];
        v31.bottom = v16[25] - v16[23];
        if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) == 0x80020000 )
        {
          MNDrawEdge(*(_QWORD *)(**a3 + 40), a2, &v31, 0x2000);
          bottom = v31.bottom;
        }
        else
        {
          DrawEdge(DCEx, &v31, 5, 8207);
          DrawFrame(DCEx, &v31.left, 1, 120);
          ++v31.left;
          --v31.right;
          ++v31.top;
          bottom = v31.bottom - 1;
        }
        v20 = bottom - *((_DWORD *)GetDPIMETRICS(a1, v17, v18) + 7);
        GreGetBrushOrg(DCEx, &v35);
        if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**a3 + 40) + 40LL) + 24LL) )
        {
          v21 = MNGetpItemFromIndex(*(_QWORD *)(**a3 + 40), *(_DWORD *)(*(_QWORD *)(**a3 + 40) + 116LL));
          GreSetBrushOrg(DCEx, 0, -*(_DWORD *)(*(_QWORD *)v21 + 68LL), 0LL);
          v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**a3 + 40) + 40LL) + 24LL);
        }
        else
        {
          v22 = *(_QWORD *)(gpsi + 4728LL);
        }
        v23 = GreSelectBrush(DCEx, v22);
        v24 = v31.right - v31.left;
        v36 = v23;
        DPIMETRICS = GetDPIMETRICS(a1, v25, v26);
        NtGdiPatBlt(DCEx, (unsigned int)v31.left, v31.top, v24, *((_DWORD *)DPIMETRICS + 7), 15728673);
        MNDrawArrow(DCEx, a3, 4294967293LL);
        v30 = GetDPIMETRICS(a1, v28, v29);
        NtGdiPatBlt(DCEx, (unsigned int)v31.left, v20, v24, *((_DWORD *)v30 + 7), 15728673);
        MNDrawArrow(DCEx, a3, 4294967292LL);
        GreSetBrushOrg(DCEx, v35, SHIDWORD(v35), 0LL);
        result = GreSelectBrush(DCEx, v36);
      }
      if ( !a2 )
        return _ReleaseDC(DCEx);
    }
    else if ( !a2 && DCEx )
    {
      return _ReleaseDC(DCEx);
    }
  }
  return result;
}
