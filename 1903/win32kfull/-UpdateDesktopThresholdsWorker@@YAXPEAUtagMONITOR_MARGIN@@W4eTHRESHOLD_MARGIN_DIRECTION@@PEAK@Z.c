/*
 * XREFs of ?UpdateDesktopThresholdsWorker@@YAXPEAUtagMONITOR_MARGIN@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAK@Z @ 0x1C00E6688
 * Callers:
 *     UpdateDesktopThresholds @ 0x1C00E64F0 (UpdateDesktopThresholds.c)
 * Callees:
 *     ?GetCoordFromRect@@YAXPEAUtagMONITOR_MARGIN@@PEAUtagRECT@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C00E6788 (-GetCoordFromRect@@YAXPEAUtagMONITOR_MARGIN@@PEAUtagRECT@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z.c)
 */

__int64 __fastcall UpdateDesktopThresholdsWorker(__int64 a1, int a2, _DWORD *a3)
{
  __int64 v3; // r15
  __int64 result; // rax
  __int64 i; // r10
  __int64 v7; // r9
  __int64 v8; // r9
  __int64 v9; // r11
  int v10; // ebp
  __int64 v11; // rdi
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // ebx
  __int64 v16; // rbx
  int v17; // ecx
  int v18; // r9d
  __int64 v19; // rcx
  __int64 v20; // [rsp+20h] [rbp-38h] BYREF
  __int64 v21; // [rsp+28h] [rbp-30h]

  v3 = a2;
  v20 = 0LL;
  v21 = 0LL;
  result = gpDispInfo;
  for ( i = *(_QWORD *)(gpDispInfo + 104LL); i; i = *(_QWORD *)(i + 56) )
  {
    result = *(_QWORD *)(i + 40);
    if ( (*(_DWORD *)(result + 24) & 1) != 0 )
    {
      v7 = (unsigned int)*a3;
      *(_BYTE *)(v3 + i + 248) = 0;
      *(_BYTE *)(v3 + i + 252) = 0;
      *(_BYTE *)(v3 + i + 256) = 0;
      *(_BYTE *)(v3 + i + 260) = 0;
      *(_BYTE *)(v3 + i + 264) = 0;
      *(_BYTE *)(v3 + i + 268) = 0;
      *(_BYTE *)(v3 + i + 272) = 0;
      result = GetCoordFromRect(&v20, *(_QWORD *)(i + 40) + 28LL, (unsigned int)v3, v7);
      if ( (_DWORD)v8 )
      {
        v10 = v21;
        v11 = 0LL;
        v12 = HIDWORD(v20);
        v13 = 0x7FFFFFFF;
        v14 = v20;
        do
        {
          v15 = *(_DWORD *)(v9 + 24 * v11);
          if ( v15 >= (int)v20 && v15 < SHIDWORD(v20)
            || (result = *(unsigned int *)(v9 + 24 * v11 + 4), (int)result > (int)v20) && (int)result <= SHIDWORD(v20)
            || (int)v20 >= v15 && (int)v20 < (int)result
            || SHIDWORD(v20) > v15 && SHIDWORD(v20) <= (int)result )
          {
            if ( (int)v21 > *(_DWORD *)(v9 + 24 * v11 + 8) )
              goto LABEL_6;
            if ( (int)v21 < v13 )
              v13 = v21;
          }
          v11 = (unsigned int)(v11 + 1);
        }
        while ( (unsigned int)v11 < (unsigned int)v8 );
        if ( v13 == 0x7FFFFFFF )
        {
          v19 = 3 * v8;
          *(_DWORD *)(v9 + 8 * v19) = v20;
          result = (unsigned int)(v8 + 1);
          *(_DWORD *)(v9 + 8 * v19 + 4) = v12;
          *(_DWORD *)(v9 + 8 * v19 + 8) = v10;
          *(_QWORD *)(v9 + 8 * v19 + 16) = i;
          *a3 = result;
        }
        else
        {
          result = v9 + 4;
          v16 = v8;
          do
          {
            v17 = *(_DWORD *)(result - 4);
            if ( v17 >= v14 && v17 < v12
              || (v18 = *(_DWORD *)result, *(_DWORD *)result > v14) && v18 <= v12
              || v14 >= v17 && v14 < v18
              || v12 > v17 && v12 <= v18 )
            {
              *(_DWORD *)(result - 4) = v14;
              *(_DWORD *)result = v12;
              *(_DWORD *)(result + 4) = v10;
              *(_QWORD *)(result + 12) = i;
            }
            result += 24LL;
            --v16;
          }
          while ( v16 );
        }
      }
      else
      {
        *(_QWORD *)v9 = v20;
        result = (unsigned int)v21;
        *(_DWORD *)(v9 + 8) = v21;
        *(_QWORD *)(v9 + 16) = i;
        *a3 = 1;
      }
    }
LABEL_6:
    ;
  }
  return result;
}
