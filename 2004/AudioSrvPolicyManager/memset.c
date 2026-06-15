/*
 * XREFs of memset @ 0x18003A7D8
 * Callers:
 *     sub_180001FD0 @ 0x180001FD0 (sub_180001FD0.c)
 *     sub_180002A40 @ 0x180002A40 (sub_180002A40.c)
 *     sub_1800036E4 @ 0x1800036E4 (sub_1800036E4.c)
 *     sub_18000419C @ 0x18000419C (sub_18000419C.c)
 *     sub_180004AC4 @ 0x180004AC4 (sub_180004AC4.c)
 *     DllMain @ 0x180005830 (DllMain.c)
 *     sub_18000609C @ 0x18000609C (sub_18000609C.c)
 *     sub_18000F0C0 @ 0x18000F0C0 (sub_18000F0C0.c)
 *     sub_1800147A0 @ 0x1800147A0 (sub_1800147A0.c)
 *     sub_180018B08 @ 0x180018B08 (sub_180018B08.c)
 *     sub_180018BEC @ 0x180018BEC (sub_180018BEC.c)
 *     sub_180019980 @ 0x180019980 (sub_180019980.c)
 *     sub_18001DBC4 @ 0x18001DBC4 (sub_18001DBC4.c)
 *     sub_18002633C @ 0x18002633C (sub_18002633C.c)
 *     sub_18002690C @ 0x18002690C (sub_18002690C.c)
 *     sub_180026E90 @ 0x180026E90 (sub_180026E90.c)
 *     sub_18002B8A0 @ 0x18002B8A0 (sub_18002B8A0.c)
 *     sub_1800343E0 @ 0x1800343E0 (sub_1800343E0.c)
 *     sub_1800346C0 @ 0x1800346C0 (sub_1800346C0.c)
 *     sub_180036244 @ 0x180036244 (sub_180036244.c)
 *     sub_180036A50 @ 0x180036A50 (sub_180036A50.c)
 *     __scrt_fastfail @ 0x18003A2F0 (__scrt_fastfail.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memset(void *a1, int Val, size_t Size)
{
  return __imp_memset(a1, Val, Size);
}
