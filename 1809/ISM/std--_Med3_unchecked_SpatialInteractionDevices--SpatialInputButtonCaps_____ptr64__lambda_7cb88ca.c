/*
 * XREFs of std::_Med3_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x1800A8170
 * Callers:
 *     std::_Partition_by_median_guess_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x1800A7AA8 (std--_Partition_by_median_guess_unchecked_SpatialInteractionDevices--SpatialInputButtonCaps_____.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Med3_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___(
        __int64 a1,
        unsigned __int16 *a2,
        __int64 *a3)
{
  unsigned __int16 v4; // cx
  int v5; // ecx
  __int64 v6; // xmm1_8
  __int64 v7; // xmm1_8
  int v8; // ecx

  v4 = *a2;
  if ( *a2 < *(_WORD *)a1 || v4 == *(_WORD *)a1 && a2[2] < *(_WORD *)(a1 + 4) )
  {
    v5 = *((_DWORD *)a2 + 2);
    v6 = *(_QWORD *)a2;
    *(_QWORD *)a2 = *(_QWORD *)a1;
    *((_DWORD *)a2 + 2) = *(_DWORD *)(a1 + 8);
    *(_QWORD *)a1 = v6;
    *(_DWORD *)(a1 + 8) = v5;
    v4 = *a2;
  }
  if ( *(_WORD *)a3 < v4 || *(_WORD *)a3 == v4 && *((_WORD *)a3 + 2) < a2[2] )
  {
    v7 = *a3;
    v8 = *((_DWORD *)a3 + 2);
    *a3 = *(_QWORD *)a2;
    *((_DWORD *)a3 + 2) = *((_DWORD *)a2 + 2);
    *(_QWORD *)a2 = v7;
    *((_DWORD *)a2 + 2) = v8;
    if ( *a2 < *(_WORD *)a1 || *a2 == *(_WORD *)a1 && a2[2] < *(_WORD *)(a1 + 4) )
    {
      *(_QWORD *)a2 = *(_QWORD *)a1;
      *((_DWORD *)a2 + 2) = *(_DWORD *)(a1 + 8);
      *(_QWORD *)a1 = v7;
      *(_DWORD *)(a1 + 8) = v8;
    }
  }
}
