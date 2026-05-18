/*
 * XREFs of sub_1800CF340 @ 0x1800CF340
 * Callers:
 *     sub_1800CF414 @ 0x1800CF414 (sub_1800CF414.c)
 *     sub_1800CF568 @ 0x1800CF568 (sub_1800CF568.c)
 *     sub_1800CF700 @ 0x1800CF700 (sub_1800CF700.c)
 *     sub_1800CF83C @ 0x1800CF83C (sub_1800CF83C.c)
 * Callees:
 *     sub_1800CE920 @ 0x1800CE920 (sub_1800CE920.c)
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800CF340(_QWORD *a1, int *a2, int *a3, int *a4, int *a5, int *a6, int *a7)
{
  _DWORD *v11; // rdi
  int v12; // ebx

  v11 = operator new(0x28uLL);
  if ( v11 )
  {
    v12 = *a7;
    sub_1800CE920((__int64)v11, *a2, *a3, *a4, *a5, *a6);
    *(_QWORD *)v11 = &Spectre::Engine::DeviceVertexBuffer::VertexBufferDesc::`vftable';
    v11[8] = v12;
  }
  else
  {
    v11 = 0LL;
  }
  *a1 = v11;
  return a1;
}
