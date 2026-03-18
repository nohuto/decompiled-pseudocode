/*
 * XREFs of ?IsSimpleGeometry@CPathData@@QEBA_NXZ @ 0x18022C09C
 * Callers:
 *     ?GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z @ 0x18024C678 (-GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z.c)
 *     ?Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z @ 0x18024D1E0 (-Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z.c)
 *     ?GetSimplifiedPathDataInternal@CPathSegmentsShape@@MEBAJPEAPEAVCPathData@@@Z @ 0x18024D8A0 (-GetSimplifiedPathDataInternal@CPathSegmentsShape@@MEBAJPEAPEAVCPathData@@@Z.c)
 * Callees:
 *     ??Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ @ 0x18022B9C0 (--Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ.c)
 */

bool __fastcall CPathData::IsSimpleGeometry(CPathData *this)
{
  char v1; // al
  char *v3; // rax
  char *v4; // rbx
  char *v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_BYTE *)this + 80);
  if ( !v1 )
  {
    v3 = (char *)*((_QWORD *)this + 3);
    v4 = (char *)*((_QWORD *)this + 4);
    v6 = v3;
    while ( v3 != v4 )
    {
      if ( (unsigned __int8)(*v3 - 3) <= 1u )
      {
        v1 = -1;
        goto LABEL_8;
      }
      Path::SegmentCollection::const_iterator::operator++(&v6);
      v3 = v6;
    }
    v1 = 1;
LABEL_8:
    *((_BYTE *)this + 80) = v1;
  }
  return v1 == 1;
}
