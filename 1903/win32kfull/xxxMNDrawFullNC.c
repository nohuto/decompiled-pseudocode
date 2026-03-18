/*
 * XREFs of xxxMNDrawFullNC @ 0x1C024A69C
 * Callers:
 *     xxxMNSetTop @ 0x1C0226E04 (xxxMNSetTop.c)
 *     xxxMenuWindowProc @ 0x1C0227440 (xxxMenuWindowProc.c)
 * Callees:
 *     MNGetpItemFromIndex @ 0x1C0021DE0 (MNGetpItemFromIndex.c)
 *     MNIsUAHMenu @ 0x1C00229C0 (MNIsUAHMenu.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     NtGdiPatBlt @ 0x1C00711E0 (NtGdiPatBlt.c)
 *     DrawEdge @ 0x1C008D37C (DrawEdge.c)
 *     GreSetBrushOrg @ 0x1C008D924 (GreSetBrushOrg.c)
 *     xxxSendUAHMenuMessage @ 0x1C00F934C (xxxSendUAHMenuMessage.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C00FBE48 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     GreGetBrushOrg @ 0x1C0136A74 (GreGetBrushOrg.c)
 *     DrawFrame @ 0x1C0156770 (DrawFrame.c)
 *     MNDrawArrow @ 0x1C024A2A8 (MNDrawArrow.c)
 *     MNDrawEdge @ 0x1C024A474 (MNDrawEdge.c)
 */

__int64 __fastcall xxxMNDrawFullNC(struct tagWND *a1, HDC a2, __int64 **a3)
{
  __int64 result; // rax
  int v4; // ebx
  HDC DCEx; // rsi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  _DWORD *v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  LONG bottom; // r12d
  unsigned int v22; // r12d
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  int v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  const struct tagDPIMETRICS *DPIMETRICS; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  const struct tagDPIMETRICS *v34; // rax
  RECT v35; // [rsp+30h] [rbp-30h] BYREF
  __int64 v36; // [rsp+40h] [rbp-20h] BYREF
  __int64 v37; // [rsp+48h] [rbp-18h]
  __int64 v38; // [rsp+50h] [rbp-10h]
  __int64 v39; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v40; // [rsp+A8h] [rbp+48h]

  result = (__int64)*a3;
  v4 = 0;
  v39 = 0LL;
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
        v36 = 0LL;
        v37 = 0LL;
        v38 = 0LL;
        v12 = *(_QWORD *)(**a3 + 16);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v10, v11);
        v36 = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = &v36;
        v37 = v12;
        if ( v12 )
          HMLockObject(v12);
        v4 = xxxSendUAHMenuMessage(*(_QWORD *)(**a3 + 16));
        result = ThreadUnlock1(v15, v14, v16);
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
        v17 = (_DWORD *)*((_QWORD *)a1 + 5);
        v35.top = 0;
        v35.left = 0;
        v35.right = v17[24] - v17[22];
        v35.bottom = v17[25] - v17[23];
        if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) == 0x80020000 )
        {
          MNDrawEdge(*(_QWORD *)(**a3 + 40), a2, &v35, 0x2000);
          bottom = v35.bottom;
        }
        else
        {
          DrawEdge(DCEx, &v35, 5, 8207);
          DrawFrame(DCEx, &v35.left, 1, 120);
          ++v35.left;
          --v35.right;
          ++v35.top;
          bottom = v35.bottom - 1;
        }
        v22 = bottom - *((_DWORD *)GetDPIMETRICS(a1, v18, v19, v20) + 7);
        GreGetBrushOrg(DCEx, &v39);
        if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**a3 + 40) + 40LL) + 24LL) )
        {
          v23 = MNGetpItemFromIndex(*(_QWORD *)(**a3 + 40), *(_DWORD *)(*(_QWORD *)(**a3 + 40) + 116LL));
          GreSetBrushOrg(DCEx, 0, -*(_DWORD *)(*(_QWORD *)v23 + 68LL), 0LL);
          v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**a3 + 40) + 40LL) + 24LL);
        }
        else
        {
          v24 = *(_QWORD *)(gpsi + 4728LL);
        }
        v25 = GreSelectBrush(DCEx, v24);
        v26 = v35.right - v35.left;
        v40 = v25;
        DPIMETRICS = GetDPIMETRICS(a1, v27, v28, v29);
        NtGdiPatBlt(DCEx, (unsigned int)v35.left, v35.top, v26, *((_DWORD *)DPIMETRICS + 7), 15728673);
        MNDrawArrow(DCEx, a3, 4294967293LL);
        v34 = GetDPIMETRICS(a1, v31, v32, v33);
        NtGdiPatBlt(DCEx, (unsigned int)v35.left, v22, v26, *((_DWORD *)v34 + 7), 15728673);
        MNDrawArrow(DCEx, a3, 4294967292LL);
        GreSetBrushOrg(DCEx, v39, SHIDWORD(v39), 0LL);
        result = GreSelectBrush(DCEx, v40);
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
