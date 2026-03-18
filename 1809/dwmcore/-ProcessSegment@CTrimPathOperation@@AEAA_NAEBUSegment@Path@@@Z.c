/*
 * XREFs of ?ProcessSegment@CTrimPathOperation@@AEAA_NAEBUSegment@Path@@@Z @ 0x18021F184
 * Callers:
 *     ?Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z @ 0x18021F368 (-Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z.c)
 * Callees:
 *     ?AppendSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z @ 0x18021E5FC (-AppendSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z.c)
 *     ?ShouldSplitCurrentSegment@CTrimPathOperation@@AEBA_NXZ @ 0x18021F260 (-ShouldSplitCurrentSegment@CTrimPathOperation@@AEBA_NXZ.c)
 *     ?SplitSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z @ 0x18021F284 (-SplitSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z.c)
 *     ?UpdateCurrentEndPoint@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z @ 0x18021F8C4 (-UpdateCurrentEndPoint@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z.c)
 */

char __fastcall CTrimPathOperation::ProcessSegment(CTrimPathOperation *this, const struct Path::Segment *a2)
{
  char v4; // dl
  __int64 v5; // rcx
  float v6; // xmm1_4
  float v7; // xmm2_4
  bool v8; // zf
  CTrimPathOperation *v10; // rcx

  v4 = 0;
  if ( !*(_BYTE *)a2 )
  {
    *((_QWORD *)this + 6) = *(_QWORD *)a2;
    *((_QWORD *)this + 7) = *((_QWORD *)a2 + 1);
  }
  v5 = *((unsigned int *)this + 8);
  if ( (unsigned int)v5 < 2 )
  {
    v6 = *((float *)a2 + 1) + *((float *)this + 11);
    *((float *)this + 11) = v6;
    v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + v5 + 6) - v6)) & _xmm);
    if ( v7 > 0.0000011920929 )
    {
      if ( CTrimPathOperation::ShouldSplitCurrentSegment(this) )
      {
        CTrimPathOperation::SplitSegment(v10, a2);
        goto LABEL_9;
      }
    }
    else if ( !*(_BYTE *)a2 )
    {
      v8 = *((_BYTE *)this + 396) == 0;
      *((_BYTE *)this + 397) = 1;
      *((_BYTE *)this + 396) = v8;
      *((_DWORD *)this + 8) = v5 + 1;
    }
    if ( *((_BYTE *)this + 396) == v4 )
    {
LABEL_9:
      CTrimPathOperation::UpdateCurrentEndPoint(this, a2);
      return 1;
    }
LABEL_8:
    CTrimPathOperation::AppendSegment(this, a2);
    goto LABEL_9;
  }
  if ( *((_BYTE *)this + 396) )
    goto LABEL_8;
  return 0;
}
