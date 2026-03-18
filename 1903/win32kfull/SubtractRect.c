/*
 * XREFs of SubtractRect @ 0x1C011219C
 * Callers:
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C00C65E0 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     CreateSpb @ 0x1C015D8BC (CreateSpb.c)
 *     ?FBitsTouch@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagSPB@@K@Z @ 0x1C0208A64 (-FBitsTouch@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagSPB@@K@Z.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C0221AC4 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     xxxTrackPopupMenuEx @ 0x1C024CB78 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     IntersectRect @ 0x1C00C7044 (IntersectRect.c)
 */

_BOOL8 __fastcall SubtractRect(__int64 a1, int *a2, int *a3)
{
  int v5; // eax
  int v6; // esi
  int v7; // ecx
  int v8; // r11d
  int v9; // r10d
  _BOOL8 result; // rax
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h]

  v11 = 0LL;
  v12 = 0LL;
  v5 = IntersectRect(&v11, a2, a3);
  *(_OWORD *)a1 = *(_OWORD *)a2;
  if ( v5 )
  {
    v6 = a2[1];
    v7 = (int)v11 <= *a2;
    if ( SHIDWORD(v11) <= v6 )
      ++v7;
    v8 = a2[2];
    if ( (int)v12 >= v8 )
      ++v7;
    v9 = a2[3];
    if ( SHIDWORD(v12) >= v9 )
      ++v7;
    if ( v7 == 4 )
    {
      result = 0LL;
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 8) = 0LL;
      return result;
    }
    if ( v7 == 3 )
    {
      if ( (int)v11 > *a2 )
      {
        *(_DWORD *)(a1 + 8) = v11;
      }
      else if ( (int)v12 < v8 )
      {
        *(_DWORD *)a1 = v12;
      }
      else if ( SHIDWORD(v11) > v6 )
      {
        *(_DWORD *)(a1 + 12) = HIDWORD(v11);
      }
      else if ( SHIDWORD(v12) < v9 )
      {
        *(_DWORD *)(a1 + 4) = HIDWORD(v12);
      }
    }
  }
  return *(_DWORD *)a1 < *(_DWORD *)(a1 + 8) && *(_DWORD *)(a1 + 4) < *(_DWORD *)(a1 + 12);
}
