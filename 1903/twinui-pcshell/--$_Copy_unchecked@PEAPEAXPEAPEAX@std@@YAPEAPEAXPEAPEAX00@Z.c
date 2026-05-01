/*
 * XREFs of ??$_Copy_unchecked@PEAPEAXPEAPEAX@std@@YAPEAPEAXPEAPEAX00@Z @ 0x1801C3E14
 * Callers:
 *     ??$_Assign_range@PEAPEAX@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAXPEAPEAX0Uforward_iterator_tag@1@@Z @ 0x1801C3C28 (--$_Assign_range@PEAPEAX@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAXPEAPEAX0Uforward_iterato.c)
 * Callees:
 *     memmove_0 @ 0x1800B0F63 (memmove_0.c)
 *     ??$_Ptr_move_cat@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@U12345@@std@@YA?AU_Really_trivial_ptr_iterator_tag@0@AEBQEAUDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@0@Z @ 0x1801C3F8C (--$_Ptr_move_cat@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@U12345.c)
 */

char *__fastcall std::_Copy_unchecked<void * *,void * *>(void *a1, __int64 a2, void *a3)
{
  char *v4; // rbx
  size_t v5; // rdi
  void *Src; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF
  void *v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = a3;
  Src = a1;
  std::_Ptr_move_cat<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>(
    &v8,
    &Src,
    &v9);
  v4 = (char *)v9;
  v5 = a2 - (_QWORD)Src;
  memmove_0(v9, Src, v5);
  return &v4[v5];
}
