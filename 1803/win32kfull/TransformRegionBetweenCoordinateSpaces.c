/*
 * XREFs of TransformRegionBetweenCoordinateSpaces @ 0x1C01AFDFC
 * Callers:
 *     ?MoveRect@@YAHPEAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z @ 0x1C01C1160 (-MoveRect@@YAHPEAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01C3590 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall TransformRegionBetweenCoordinateSpaces(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rbp
  unsigned int v4; // esi
  int RegionData; // eax
  unsigned int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rbx
  _QWORD *v10; // r14
  unsigned int v11; // ebp
  __int64 RectRgn; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r15
  __int64 v21; // [rsp+30h] [rbp-58h] BYREF
  __int64 v22; // [rsp+38h] [rbp-50h]

  v3 = *a3;
  v4 = 0;
  if ( (unsigned __int64)*a3 > 2
    && (((unsigned __int16)(*(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL) >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(a2 + 40) + 288LL) >> 8)) & 0x1FF) != 0 )
  {
    RegionData = GreGetRegionData(v3, 0LL, 0LL);
    v7 = RegionData;
    if ( RegionData > 0 )
    {
      v8 = Win32AllocPool(RegionData, 1919775573LL);
      v9 = v8;
      if ( v8 )
      {
        if ( (unsigned int)GreGetRegionData(v3, v7, v8) )
        {
          v10 = (_QWORD *)(v9 + 32);
          v21 = 0LL;
          v22 = 0LL;
          v11 = 0;
          RectRgn = GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
          if ( !*(_DWORD *)(v9 + 8) )
            goto LABEL_14;
          do
          {
            TransformRectBetweenCoordinateSpaces(&v21, v10, a1, a2);
            v15 = v21 - *v10;
            if ( v21 == *v10 )
              v15 = v22 - v10[1];
            v4 |= v15 != 0;
            v16 = GreCreateRectRgnIndirect(&v21, v13, v14);
            v17 = v16;
            if ( v16 )
            {
              GreCombineRgn(RectRgn, RectRgn, v16, 2LL);
              GreDeleteObject(v17);
            }
            v10 += 2;
            ++v11;
          }
          while ( v11 < *(_DWORD *)(v9 + 8) );
          if ( v4 )
            *a3 = RectRgn;
          else
LABEL_14:
            GreDeleteObject(RectRgn);
        }
        Win32FreePool(v9);
      }
    }
  }
  return v4;
}
