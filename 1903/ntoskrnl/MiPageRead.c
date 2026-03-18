/*
 * XREFs of MiPageRead @ 0x1400A760C
 * Callers:
 *     MiPfExecuteReadList @ 0x14066E304 (MiPfExecuteReadList.c)
 *     MiReadImageHeaders @ 0x1406DBE84 (MiReadImageHeaders.c)
 * Callees:
 *     IoPageReadEx @ 0x1400A7640 (IoPageReadEx.c)
 */

__int64 __fastcall MiPageRead(
        struct _FILE_OBJECT *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7)
{
  return IoPageReadEx(a1, a5, a6, a7);
}
