/*
 * XREFs of atexit @ 0x180039D78
 * Callers:
 *     sub_180001CB0 @ 0x180001CB0 (sub_180001CB0.c)
 *     sub_180001CD0 @ 0x180001CD0 (sub_180001CD0.c)
 *     sub_180001D90 @ 0x180001D90 (sub_180001D90.c)
 *     sub_180001DB0 @ 0x180001DB0 (sub_180001DB0.c)
 *     sub_180001DD0 @ 0x180001DD0 (sub_180001DD0.c)
 *     sub_180001E00 @ 0x180001E00 (sub_180001E00.c)
 *     sub_180001E50 @ 0x180001E50 (sub_180001E50.c)
 *     sub_180001E90 @ 0x180001E90 (sub_180001E90.c)
 *     sub_180001EF0 @ 0x180001EF0 (sub_180001EF0.c)
 *     sub_180001F40 @ 0x180001F40 (sub_180001F40.c)
 *     sub_180001F60 @ 0x180001F60 (sub_180001F60.c)
 *     sub_180001F90 @ 0x180001F90 (sub_180001F90.c)
 *     sub_1800055CC @ 0x1800055CC (sub_1800055CC.c)
 *     sub_180035580 @ 0x180035580 (sub_180035580.c)
 *     ?__scrt_initialize_thread_safe_statics@@YAHXZ @ 0x180039E90 (-__scrt_initialize_thread_safe_statics@@YAHXZ.c)
 * Callees:
 *     _onexit @ 0x180039D20 (_onexit.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit((_onexit_t)a1) != 0LL) - 1;
}
