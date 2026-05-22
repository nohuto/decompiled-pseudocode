/*
 * XREFs of std::_Pop_heap_hole_by_index_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64_SpatialInteractionDevices::SpatialInputButtonCaps__lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x1800A7DDC
 * Callers:
 *     std::_Sort_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x1800A7790 (std--_Sort_unchecked_SpatialInteractionDevices--SpatialInputButtonCaps_____ptr64__lambda_7cb88ca.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Pop_heap_hole_by_index_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64_SpatialInteractionDevices::SpatialInputButtonCaps__lambda_7cb88ca86370cec64ac2ea824bd2a3de___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // rsi
  __int64 i; // r11
  __int64 v8; // r11
  unsigned __int16 v9; // ax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 result; // rax

  v4 = (a3 - 1) >> 1;
  v6 = a2;
  for ( i = a2; i < v4; *(_DWORD *)(a1 + 4 * v11 + 8) = *(_DWORD *)(a1 + 12 * i + 8) )
  {
    v8 = 2 * i;
    v9 = *(_WORD *)(a1 + 12 * v8 + 12);
    if ( *(_WORD *)(a1 + 12 * v8 + 24) < v9
      || *(_WORD *)(a1 + 12 * v8 + 24) == v9 && *(_WORD *)(a1 + 12 * v8 + 28) < *(_WORD *)(a1 + 12 * v8 + 16) )
    {
      v10 = 1LL;
    }
    else
    {
      v10 = 2LL;
    }
    i = v10 + v8;
    v11 = 3 * a2;
    a2 = i;
    *(_QWORD *)(a1 + 4 * v11) = *(_QWORD *)(a1 + 12 * i);
  }
  if ( i == v4 && (a3 & 1) == 0 )
  {
    v12 = 3 * a2;
    a2 = a3 - 1;
    *(_QWORD *)(a1 + 4 * v12) = *(_QWORD *)(a1 + 12 * a3 - 12);
    *(_DWORD *)(a1 + 4 * v12 + 8) = *(_DWORD *)(a1 + 12 * a3 - 4);
  }
  if ( v6 < a2 )
  {
    do
    {
      v13 = (a2 - 1) >> 1;
      if ( *(_WORD *)(a1 + 12 * v13) >= *(_WORD *)a4
        && (*(_WORD *)(a1 + 12 * v13) != *(_WORD *)a4 || *(_WORD *)(a1 + 12 * v13 + 4) >= *(_WORD *)(a4 + 4)) )
      {
        break;
      }
      v14 = 3 * a2;
      *(_QWORD *)(a1 + 4 * v14) = *(_QWORD *)(a1 + 12 * v13);
      a2 = (a2 - 1) >> 1;
      *(_DWORD *)(a1 + 4 * v14 + 8) = *(_DWORD *)(a1 + 12 * v13 + 8);
    }
    while ( v6 < v13 );
  }
  v15 = 3 * a2;
  *(_QWORD *)(a1 + 4 * v15) = *(_QWORD *)a4;
  result = *(unsigned int *)(a4 + 8);
  *(_DWORD *)(a1 + 4 * v15 + 8) = result;
  return result;
}
