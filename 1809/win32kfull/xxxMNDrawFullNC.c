/*
 * XREFs of xxxMNDrawFullNC @ 0x1C0231A54
 * Callers:
 *     xxxMNSetTop @ 0x1C020F0B8 (xxxMNSetTop.c)
 *     xxxMenuWindowProc @ 0x1C020F6B0 (xxxMenuWindowProc.c)
 * Callees:
 *     NtGdiPatBlt @ 0x1C0056440 (NtGdiPatBlt.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     MNIsUAHMenu @ 0x1C006AEB0 (MNIsUAHMenu.c)
 *     DrawEdge @ 0x1C007AF44 (DrawEdge.c)
 *     GreSetBrushOrg @ 0x1C007B4B8 (GreSetBrushOrg.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C00A707C (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     xxxSendUAHMenuMessage @ 0x1C00A7340 (xxxSendUAHMenuMessage.c)
 *     MNGetpItemFromIndex @ 0x1C00AB734 (MNGetpItemFromIndex.c)
 *     GreGetBrushOrg @ 0x1C012C9D0 (GreGetBrushOrg.c)
 *     DrawFrame @ 0x1C014FA18 (DrawFrame.c)
 *     MNDrawArrow @ 0x1C0231664 (MNDrawArrow.c)
 *     MNDrawEdge @ 0x1C0231834 (MNDrawEdge.c)
 */

__int64 __fastcall xxxMNDrawFullNC(struct tagWND *a1, HDC a2, __int64 a3)
{
  __int64 result; // rax
  int v4; // ebx
  HDC DCEx; // rsi
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  _DWORD *v14; // rdx
  LONG bottom; // r12d
  int v16; // r12d
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  int v20; // ebx
  const struct tagDPIMETRICS *DPIMETRICS; // rax
  const struct tagDPIMETRICS *v22; // rax
  RECT v23; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v24[4]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v25; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v26; // [rsp+A8h] [rbp+48h]

  result = *(_QWORD *)a3;
  v4 = 0;
  if ( *(_QWORD *)(**(_QWORD **)a3 + 40LL) )
  {
    if ( a2 )
      DCEx = a2;
    else
      DCEx = (HDC)_GetDCEx(a1, 0LL, 66561LL);
    result = MNIsUAHMenu(*(_QWORD *)(**(_QWORD **)a3 + 40LL));
    if ( (_DWORD)result )
    {
      result = *(_QWORD *)a3;
      if ( *(_QWORD *)(**(_QWORD **)a3 + 16LL) )
      {
        v10 = *(_QWORD *)(**(_QWORD **)a3 + 16LL);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9);
        v24[0] = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = v24;
        v24[1] = v10;
        if ( v10 )
          _InterlockedAdd((volatile signed __int32 *)(v10 + 8), 1u);
        v4 = xxxSendUAHMenuMessage(*(_QWORD *)(**(_QWORD **)a3 + 16LL));
        result = ThreadUnlock1(v13, v12);
      }
    }
    if ( *(_QWORD *)(**(_QWORD **)a3 + 40LL) )
    {
      if ( v4 )
      {
        MNDrawArrow(DCEx, a3, -3);
        result = MNDrawArrow(DCEx, a3, -4);
      }
      else
      {
        v14 = (_DWORD *)*((_QWORD *)a1 + 5);
        v23.top = 0;
        v23.left = 0;
        v23.right = v14[24] - v14[22];
        v23.bottom = v14[25] - v14[23];
        if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) == 0x80020000 )
        {
          MNDrawEdge(*(_QWORD *)(**(_QWORD **)a3 + 40LL), a2, &v23, 0x2000);
          bottom = v23.bottom;
        }
        else
        {
          DrawEdge(DCEx, &v23, 5, 8207);
          DrawFrame(DCEx, &v23.left, 1, 120);
          ++v23.left;
          --v23.right;
          ++v23.top;
          bottom = v23.bottom - 1;
        }
        v16 = bottom - *((_DWORD *)GetDPIMETRICS(a1) + 7);
        GreGetBrushOrg(DCEx, &v25);
        if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)a3 + 40LL) + 40LL) + 24LL) )
        {
          v17 = MNGetpItemFromIndex(
                  *(_QWORD *)(**(_QWORD **)a3 + 40LL),
                  *(_DWORD *)(*(_QWORD *)(**(_QWORD **)a3 + 40LL) + 116LL));
          GreSetBrushOrg(DCEx, 0, -*(_DWORD *)(*(_QWORD *)v17 + 68LL), 0LL);
          v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)a3 + 40LL) + 40LL) + 24LL);
        }
        else
        {
          v18 = *(_QWORD *)(gpsi + 4728LL);
        }
        v19 = GreSelectBrush(DCEx, v18);
        v20 = v23.right - v23.left;
        v26 = v19;
        DPIMETRICS = GetDPIMETRICS(a1);
        NtGdiPatBlt(DCEx, v23.left, v23.top, v20, *((_DWORD *)DPIMETRICS + 7), 15728673);
        MNDrawArrow(DCEx, a3, -3);
        v22 = GetDPIMETRICS(a1);
        NtGdiPatBlt(DCEx, v23.left, v16, v20, *((_DWORD *)v22 + 7), 15728673);
        MNDrawArrow(DCEx, a3, -4);
        GreSetBrushOrg(DCEx, v25, SHIDWORD(v25), 0LL);
        result = GreSelectBrush(DCEx, v26);
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
