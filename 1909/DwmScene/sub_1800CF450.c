/*
 * XREFs of sub_1800CF450 @ 0x1800CF450
 * Callers:
 *     sub_1800CF524 @ 0x1800CF524 (sub_1800CF524.c)
 *     sub_1800CF678 @ 0x1800CF678 (sub_1800CF678.c)
 *     sub_1800CF810 @ 0x1800CF810 (sub_1800CF810.c)
 *     sub_1800CF94C @ 0x1800CF94C (sub_1800CF94C.c)
 * Callees:
 *     sub_1800CEA30 @ 0x1800CEA30 (sub_1800CEA30.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800CF450(_QWORD *a1, int *a2, int *a3, int *a4, int *a5, int *a6, int *a7)
{
  _DWORD *v11; // rdi
  int v12; // ebx

  v11 = operator new(0x28uLL);
  if ( v11 )
  {
    v12 = *a7;
    sub_1800CEA30((__int64)v11, *a2, *a3, *a4, *a5, *a6);
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
