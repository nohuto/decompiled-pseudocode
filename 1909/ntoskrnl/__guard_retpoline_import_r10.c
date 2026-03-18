/*
 * XREFs of __guard_retpoline_import_r10 @ 0x140353420
 * Callers:
 *     <none>
 * Callees:
 *     __guard_retpoline_import_r10_log_event @ 0x140353500 (__guard_retpoline_import_r10_log_event.c)
 *     __guard_retpoline_exit @ 0x140353560 (__guard_retpoline_exit.c)
 */

__int64 __fastcall _guard_retpoline_import_r10()
{
  unsigned __int64 v0; // r10

  if ( retpoline_image_bitmap )
  {
    if ( _bittest64((const signed __int64 *)retpoline_image_bitmap, v0 >> 16) )
      return ((__int64 (*)(void))v0)();
    __writegsbyte(0x853u, __readgsbyte(0x853u) | 1);
    if ( (__readgsbyte(0x853u) & 2) == 0 )
    {
      _guard_retpoline_exit();
      if ( (BYTE4(xmmword_140572410) & 2) != 0 )
        _guard_retpoline_import_r10_log_event();
    }
  }
  _mm_lfence();
  return ((__int64 (*)(void))v0)();
}
