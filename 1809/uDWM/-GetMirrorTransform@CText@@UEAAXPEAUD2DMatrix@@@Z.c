/*
 * XREFs of ?GetMirrorTransform@CText@@UEAAXPEAUD2DMatrix@@@Z @ 0x1800867C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CText::GetMirrorTransform(CText *this, struct D2DMatrix *a2)
{
  int v2; // eax

  *(_DWORD *)a2 = -1082130432;
  *(_QWORD *)((char *)a2 + 44) = 0LL;
  *(_QWORD *)((char *)a2 + 52) = 0LL;
  *((_QWORD *)a2 + 4) = 0LL;
  *((_QWORD *)a2 + 3) = 0LL;
  *(_QWORD *)((char *)a2 + 12) = 0LL;
  *(_QWORD *)((char *)a2 + 4) = 0LL;
  *((_DWORD *)a2 + 15) = 1065353216;
  *((_DWORD *)a2 + 10) = 1065353216;
  *((_DWORD *)a2 + 5) = 1065353216;
  v2 = *((_DWORD *)this + 100);
  if ( v2 >= *((_DWORD *)this + 30) )
    v2 = *((_DWORD *)this + 30);
  *((float *)a2 + 12) = (float)v2;
}
