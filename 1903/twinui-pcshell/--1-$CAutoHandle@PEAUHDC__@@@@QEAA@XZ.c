/*
 * XREFs of ??1?$CAutoHandle@PEAUHDC__@@@@QEAA@XZ @ 0x1803C9B44
 * Callers:
 *     __lambda_c95b2e5eab2cd436d4d0117f4debe67d_::operator()_::_1_::dtor$0 @ 0x1803F3F8B (__lambda_c95b2e5eab2cd436d4d0117f4debe67d_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

int __fastcall CAutoHandle<HDC__ *>::~CAutoHandle<HDC__ *>(HDC *a1)
{
  HDC v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    LODWORD(v1) = DeleteDC(v1);
  return (int)v1;
}
