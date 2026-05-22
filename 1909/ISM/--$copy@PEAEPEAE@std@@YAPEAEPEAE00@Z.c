/*
 * XREFs of ??$copy@PEAEPEAE@std@@YAPEAEPEAE00@Z @ 0x18009B680
 * Callers:
 *     ?StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z @ 0x18009F354 (-StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z.c)
 * Callees:
 *     ??$_Ptr_copy_cat@$$CBUPointData3D@@U1@@std@@YA?AU_Really_trivial_ptr_iterator_tag@0@AEBQEBUPointData3D@@AEBQEAU2@@Z @ 0x18000A2B4 (--$_Ptr_copy_cat@$$CBUPointData3D@@U1@@std@@YA-AU_Really_trivial_ptr_iterator_tag@0@AEBQEBUPoint.c)
 *     memmove_0 @ 0x18003788B (memmove_0.c)
 */

char *__fastcall std::copy<unsigned char *,unsigned char *>(void *a1, __int64 a2, void *a3)
{
  char *v4; // rbx
  size_t v5; // rdi
  char v7; // [rsp+30h] [rbp+8h] BYREF
  void *v8; // [rsp+38h] [rbp+10h]
  void *Src; // [rsp+40h] [rbp+18h]

  v8 = a3;
  Src = a1;
  std::_Ptr_copy_cat<PointData3D const,PointData3D>(&v7);
  v4 = (char *)v8;
  v5 = a2 - (_QWORD)Src;
  memmove_0(v8, Src, v5);
  return &v4[v5];
}
