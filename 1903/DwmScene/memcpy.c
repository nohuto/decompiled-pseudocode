/*
 * XREFs of memcpy @ 0x180125A84
 * Callers:
 *     sub_18000D458 @ 0x18000D458 (sub_18000D458.c)
 *     sub_18000E118 @ 0x18000E118 (sub_18000E118.c)
 *     sub_18000E23C @ 0x18000E23C (sub_18000E23C.c)
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     sub_18001110C @ 0x18001110C (sub_18001110C.c)
 *     sub_1800115D0 @ 0x1800115D0 (sub_1800115D0.c)
 *     sub_180011EAC @ 0x180011EAC (sub_180011EAC.c)
 *     sub_18001F188 @ 0x18001F188 (sub_18001F188.c)
 *     sub_18001F2C4 @ 0x18001F2C4 (sub_18001F2C4.c)
 *     sub_180021B70 @ 0x180021B70 (sub_180021B70.c)
 *     sub_180022260 @ 0x180022260 (sub_180022260.c)
 *     sub_180026168 @ 0x180026168 (sub_180026168.c)
 *     sub_180026670 @ 0x180026670 (sub_180026670.c)
 *     sub_1800303E0 @ 0x1800303E0 (sub_1800303E0.c)
 *     sub_180031DF0 @ 0x180031DF0 (sub_180031DF0.c)
 *     sub_180045004 @ 0x180045004 (sub_180045004.c)
 *     sub_180045404 @ 0x180045404 (sub_180045404.c)
 *     sub_180056944 @ 0x180056944 (sub_180056944.c)
 *     sub_18006F344 @ 0x18006F344 (sub_18006F344.c)
 *     sub_18007F630 @ 0x18007F630 (sub_18007F630.c)
 *     sub_1800A6214 @ 0x1800A6214 (sub_1800A6214.c)
 *     sub_1800B77C4 @ 0x1800B77C4 (sub_1800B77C4.c)
 *     sub_1800B8BC0 @ 0x1800B8BC0 (sub_1800B8BC0.c)
 *     sub_1800D206C @ 0x1800D206C (sub_1800D206C.c)
 *     sub_1800D2A30 @ 0x1800D2A30 (sub_1800D2A30.c)
 *     sub_1800F4184 @ 0x1800F4184 (sub_1800F4184.c)
 *     sub_1800F41F0 @ 0x1800F41F0 (sub_1800F41F0.c)
 *     sub_1801033A8 @ 0x1801033A8 (sub_1801033A8.c)
 *     sub_18011BA5C @ 0x18011BA5C (sub_18011BA5C.c)
 *     sub_18011DBBC @ 0x18011DBBC (sub_18011DBBC.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy(void *a1, const void *Src, size_t Size)
{
  return __imp_memcpy(a1, Src, Size);
}
