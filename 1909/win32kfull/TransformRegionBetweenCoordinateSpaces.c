/*
 * XREFs of TransformRegionBetweenCoordinateSpaces @ 0x1C01E7694
 * Callers:
 *     ?MoveRect@@YAHPEAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z @ 0x1C01FAEB0 (-MoveRect@@YAHPEAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FE0FC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall TransformRegionBetweenCoordinateSpaces(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rsi
  unsigned int v4; // r14d
  unsigned int v6; // edx
  unsigned int v7; // r8d
  int v8; // ecx
  int v9; // eax
  int RegionData; // eax
  unsigned int v11; // edi
  __int64 v12; // rax
  __int64 v13; // rbx
  _QWORD *v14; // rsi
  unsigned int v15; // ebp
  __int64 RectRgn; // rdi
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r15
  __int64 v23; // [rsp+30h] [rbp-58h] BYREF
  __int64 v24; // [rsp+38h] [rbp-50h]

  v3 = *a3;
  v4 = 0;
  if ( (unsigned __int64)*a3 > 2 )
  {
    v6 = *(_DWORD *)(*(_QWORD *)(a2 + 40) + 288LL);
    v7 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL);
    if ( (((unsigned __int16)(v6 >> 8) ^ (unsigned __int16)(v7 >> 8)) & 0x1FF) != 0
      || ((v6 & 0xF) != 2 || (v6 & 0x20000000) == 0 ? (v8 = 0) : (v8 = 1),
          (v7 & 0xF) != 2 || (v7 & 0x20000000) == 0 ? (v9 = 0) : (v9 = 1),
          v8 != v9) )
    {
      RegionData = GreGetRegionData(v3, 0LL, 0LL);
      v11 = RegionData;
      if ( RegionData > 0 )
      {
        v12 = Win32AllocPool(RegionData, 1919775573LL);
        v13 = v12;
        if ( v12 )
        {
          if ( (unsigned int)GreGetRegionData(v3, v11, v12) )
          {
            v14 = (_QWORD *)(v13 + 32);
            v23 = 0LL;
            v24 = 0LL;
            v15 = 0;
            RectRgn = GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
            if ( !*(_DWORD *)(v13 + 8) )
              goto LABEL_23;
            do
            {
              TransformRectBetweenCoordinateSpaces(&v23, v14, a1, a2);
              v17 = v23 - *v14;
              if ( v23 == *v14 )
                v17 = v24 - v14[1];
              v4 |= v17 != 0;
              v18 = GreCreateRectRgnIndirect(&v23);
              v19 = v18;
              if ( v18 )
              {
                GreCombineRgn(RectRgn, RectRgn, v18, 2LL);
                GreDeleteObject(v19);
              }
              v14 += 2;
              ++v15;
            }
            while ( v15 < *(_DWORD *)(v13 + 8) );
            if ( v4 )
              *a3 = RectRgn;
            else
LABEL_23:
              GreDeleteObject(RectRgn);
          }
          Win32FreePool(v13);
        }
      }
    }
  }
  return v4;
}
