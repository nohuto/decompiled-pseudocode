/*
 * XREFs of ??$IntersectRectT@UMilPointAndSizeL@@@@YAHPEAUMilPointAndSizeL@@PEBU0@1@Z @ 0x1800B254C
 * Callers:
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x1800089D0 (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ @ 0x1800AB860 (-ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IntersectRectT<MilPointAndSizeL>(_DWORD *a1, int *a2, int *a3)
{
  int v5; // r11d
  int v6; // r10d
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // r8d
  int v12; // edx
  int v13; // r9d
  int v14; // r9d
  __int64 result; // rax

  v5 = *a2;
  v6 = *a3 + a3[2];
  v7 = *a2 + a2[2];
  if ( *a2 <= *a3 )
    v5 = *a3;
  *a1 = v5;
  if ( v7 >= v6 )
    v7 = v6;
  v8 = v7 - v5;
  a1[2] = v8;
  if ( v8 > 0 )
  {
    v9 = a3[1];
    v10 = a3[3];
    v11 = a2[1];
    v12 = v9 + v10;
    v13 = v11 + a2[3];
    if ( v11 <= v9 )
      v11 = v9;
    a1[1] = v11;
    if ( v13 >= v12 )
      v13 = v12;
    v14 = v13 - v11;
    a1[3] = v14;
    if ( v14 > 0 )
      return 1LL;
  }
  result = 0LL;
  *(_QWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 1) = 0LL;
  return result;
}
