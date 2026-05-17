/*
 * XREFs of RtlCreateProcessParameters @ 0x1800D6A20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005C3BC @ 0x18005C3BC (sub_18005C3BC.c)
 */

__int64 __fastcall RtlCreateProcessParameters(
        _QWORD *a1,
        unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 *a5,
        void *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  return sub_18005C3BC(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, 0LL, 0);
}
