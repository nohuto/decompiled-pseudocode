/*
 * XREFs of ??$_Uninitialized_copy@PEAPEAUForegroundSwitchData@Discover@PenWorkspace@@PEAPEAU123@V?$allocator@PEAUForegroundSwitchData@Discover@PenWorkspace@@@std@@@std@@YAPEAPEAUForegroundSwitchData@Discover@PenWorkspace@@QEAPEAU123@0PEAPEAU123@AEAV?$allocator@PEAUForegroundSwitchData@Discover@PenWorkspace@@@0@@Z @ 0x1801DFB08
 * Callers:
 *     ?_Growmap@?$deque@UForegroundSwitchData@Discover@PenWorkspace@@V?$allocator@UForegroundSwitchData@Discover@PenWorkspace@@@std@@@std@@IEAAX_K@Z @ 0x1801E3A70 (-_Growmap@-$deque@UForegroundSwitchData@Discover@PenWorkspace@@V-$allocator@UForegroundSwitchDat.c)
 * Callees:
 *     memmove_0 @ 0x1800B0F63 (memmove_0.c)
 *     ??$_Ptr_move_cat@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@U12345@@std@@YA?AU_Really_trivial_ptr_iterator_tag@0@AEBQEAUDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@0@Z @ 0x1801C3F8C (--$_Ptr_move_cat@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@U12345.c)
 */

char *std::_Uninitialized_copy<PenWorkspace::Discover::ForegroundSwitchData * *,PenWorkspace::Discover::ForegroundSwitchData * *,std::allocator<PenWorkspace::Discover::ForegroundSwitchData *>>(
        const void *a1,
        __int64 a2,
        char *a3,
        ...)
{
  size_t v4; // rdi
  va_list va; // [rsp+48h] [rbp+20h] BYREF

  va_start(va, a3);
  std::_Ptr_move_cat<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>(va);
  v4 = a2 - (_QWORD)a1;
  memmove_0(a3, a1, v4);
  return &a3[v4];
}
