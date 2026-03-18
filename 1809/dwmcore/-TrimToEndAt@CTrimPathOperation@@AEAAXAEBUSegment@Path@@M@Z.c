/*
 * XREFs of ?TrimToEndAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z @ 0x18021F6F0
 * Callers:
 *     ?SplitSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z @ 0x18021F284 (-SplitSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z.c)
 *     ?TrimToStartAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z @ 0x18021F7A4 (-TrimToStartAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z.c)
 * Callees:
 *     ??0Segment@Path@@IEAA@W4SegmentType@1@@Z @ 0x1801999EC (--0Segment@Path@@IEAA@W4SegmentType@1@@Z.c)
 *     ?AppendSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z @ 0x18021E5FC (-AppendSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z.c)
 *     ?InterpolateSegment@CTrimPathOperation@@AEAAPEAUSegment@Path@@AEBU23@MMPEAUD2D_POINT_2F@@@Z @ 0x18021EFAC (-InterpolateSegment@CTrimPathOperation@@AEAAPEAUSegment@Path@@AEBU23@MMPEAUD2D_POINT_2F@@@Z.c)
 */

void __fastcall CTrimPathOperation::TrimToEndAt(CTrimPathOperation *this, const struct Path::Segment *a2, float a3)
{
  float v5; // xmm3_4
  float *v6; // rax
  bool v7; // al
  char v8; // [rsp+50h] [rbp+8h] BYREF
  __int16 v9; // [rsp+51h] [rbp+9h]
  int v10; // [rsp+54h] [rbp+Ch]

  v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a3) & _xmm);
  if ( v5 >= 0.0000011920929 )
  {
    v6 = (float *)CTrimPathOperation::InterpolateSegment(this, a2, 0.0, a3, 0LL);
    v6[1] = a3 * *((float *)a2 + 1);
    CTrimPathOperation::AppendSegment(this, (const struct Path::Segment *)v6);
  }
  Path::Segment::Segment(&v8, 1);
  v9 = 0;
  v10 = 0;
  CTrimPathOperation::AppendSegment(this, (const struct Path::Segment *)&v8);
  v7 = *((_BYTE *)this + 396) == 0;
  *((_BYTE *)this + 397) = 0;
  ++*((_DWORD *)this + 8);
  *((_BYTE *)this + 396) = v7;
}
