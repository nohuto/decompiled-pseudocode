/*
 * XREFs of SdbpCheckDll @ 0x14036D060
 * Callers:
 *     KiSwInterruptDispatch @ 0x1401AB5C0 (KiSwInterruptDispatch.c)
 *     sub_1401AC880 @ 0x1401AC880 (sub_1401AC880.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140354010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_14036BD00 @ 0x14036BD00 (sub_14036BD00.c)
 *     sub_1409D1EB4 @ 0x1409D1EB4 (sub_1409D1EB4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SdbpCheckDll(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 (__fastcall *a6)(__int64),
        _QWORD *a7)
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  do
    *a7-- = 0LL;
  while ( a7 >= &retaddr );
  return a6(a1);
}
