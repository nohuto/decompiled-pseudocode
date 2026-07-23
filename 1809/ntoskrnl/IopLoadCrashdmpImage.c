/*
 * XREFs of IopLoadCrashdmpImage @ 0x1407200D0
 * Callers:
 *     <none>
 * Callees:
 *     MmLoadSystemImageEx @ 0x1406821B8 (MmLoadSystemImageEx.c)
 */

__int64 __fastcall IopLoadCrashdmpImage(
        __int64 a1,
        const UNICODE_STRING *a2,
        __int64 a3,
        int a4,
        _QWORD *a5,
        char **a6)
{
  return MmLoadSystemImageEx(a1, a2, a3, a4 | 0x20u, a5, a6);
}
