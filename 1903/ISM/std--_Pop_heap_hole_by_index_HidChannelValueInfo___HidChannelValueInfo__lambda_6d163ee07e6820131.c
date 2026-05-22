/*
 * XREFs of std::_Pop_heap_hole_by_index_HidChannelValueInfo___HidChannelValueInfo__lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800B2830
 * Callers:
 *     std::_Make_heap_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800B1FEC (std--_Make_heap_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___.c)
 *     std::_Pop_heap_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800B29C8 (std--_Pop_heap_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Pop_heap_hole_by_index_HidChannelValueInfo___HidChannelValueInfo__lambda_6d163ee07e6820131f280e717b4d58c9___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r11
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 result; // rax

  v4 = (a3 - 1) >> 1;
  v6 = a2;
  while ( 1 )
  {
    v8 = a2;
    if ( a2 >= v4 )
      break;
    v7 = 9 * a2;
    a2 = 2 * a2 + 2LL - (*(_DWORD *)(a1 + 144 * a2 + 144) < *(_DWORD *)(a1 + 144 * a2 + 72));
    *(_OWORD *)(a1 + 8 * v7) = *(_OWORD *)(a1 + 72 * a2);
    *(_OWORD *)(a1 + 8 * v7 + 16) = *(_OWORD *)(a1 + 72 * a2 + 16);
    *(_OWORD *)(a1 + 8 * v7 + 32) = *(_OWORD *)(a1 + 72 * a2 + 32);
    *(_OWORD *)(a1 + 8 * v7 + 48) = *(_OWORD *)(a1 + 72 * a2 + 48);
    *(_QWORD *)(a1 + 8 * v7 + 64) = *(_QWORD *)(a1 + 72 * a2 + 64);
  }
  if ( a2 == v4 && (a3 & 1) == 0 )
  {
    v9 = 9 * a2;
    v8 = a3 - 1;
    *(_OWORD *)(a1 + 8 * v9) = *(_OWORD *)(a1 + 72 * a3 - 72);
    *(_OWORD *)(a1 + 8 * v9 + 16) = *(_OWORD *)(a1 + 72 * a3 - 56);
    *(_OWORD *)(a1 + 8 * v9 + 32) = *(_OWORD *)(a1 + 72 * a3 - 40);
    *(_OWORD *)(a1 + 8 * v9 + 48) = *(_OWORD *)(a1 + 72 * a3 - 24);
    *(_QWORD *)(a1 + 8 * v9 + 64) = *(_QWORD *)(a1 + 72 * a3 - 8);
  }
  if ( v6 < v8 )
  {
    do
    {
      v10 = (v8 - 1) >> 1;
      if ( *(_DWORD *)(a1 + 72 * v10) >= *(_DWORD *)a4 )
        break;
      v11 = 9 * v8;
      v8 = (v8 - 1) >> 1;
      *(_OWORD *)(a1 + 8 * v11) = *(_OWORD *)(a1 + 72 * v10);
      *(_OWORD *)(a1 + 8 * v11 + 16) = *(_OWORD *)(a1 + 72 * v10 + 16);
      *(_OWORD *)(a1 + 8 * v11 + 32) = *(_OWORD *)(a1 + 72 * v10 + 32);
      *(_OWORD *)(a1 + 8 * v11 + 48) = *(_OWORD *)(a1 + 72 * v10 + 48);
      *(_QWORD *)(a1 + 8 * v11 + 64) = *(_QWORD *)(a1 + 72 * v10 + 64);
    }
    while ( v6 < v10 );
  }
  result = 9 * v8;
  *(_OWORD *)(a1 + 8 * result) = *(_OWORD *)a4;
  *(_OWORD *)(a1 + 8 * result + 16) = *(_OWORD *)(a4 + 16);
  *(_OWORD *)(a1 + 8 * result + 32) = *(_OWORD *)(a4 + 32);
  *(_OWORD *)(a1 + 8 * result + 48) = *(_OWORD *)(a4 + 48);
  *(_QWORD *)(a1 + 8 * result + 64) = *(_QWORD *)(a4 + 64);
  return result;
}
