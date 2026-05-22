/*
 * XREFs of ?FillDeviceInfo@SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@UEAAJPEAUMPCSourceDeviceInfo@@@Z @ 0x18000F2B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeSourceObject::FillDeviceInfo(
        Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeSourceObject *this,
        struct MPCSourceDeviceInfo *a2)
{
  _OWORD *v2; // rax
  __int64 v3; // rcx
  __int128 v4; // xmm1

  v2 = (_OWORD *)((char *)this + 152);
  v3 = 7LL;
  do
  {
    *(_OWORD *)a2 = *v2;
    *((_OWORD *)a2 + 1) = v2[1];
    *((_OWORD *)a2 + 2) = v2[2];
    *((_OWORD *)a2 + 3) = v2[3];
    *((_OWORD *)a2 + 4) = v2[4];
    *((_OWORD *)a2 + 5) = v2[5];
    *((_OWORD *)a2 + 6) = v2[6];
    a2 = (struct MPCSourceDeviceInfo *)((char *)a2 + 128);
    v4 = v2[7];
    v2 += 8;
    *((_OWORD *)a2 - 1) = v4;
    --v3;
  }
  while ( v3 );
  *(_OWORD *)a2 = *v2;
  *((_OWORD *)a2 + 1) = v2[1];
  *((_OWORD *)a2 + 2) = v2[2];
  *((_QWORD *)a2 + 6) = *((_QWORD *)v2 + 6);
  return 0LL;
}
