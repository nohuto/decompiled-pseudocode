/*
 * XREFs of SdbpCheckDll @ 0x14034A890
 * Callers:
 *     KiSwInterruptDispatch @ 0x1401A0550 (KiSwInterruptDispatch.c)
 *     sub_1401A1740 @ 0x1401A1740 (sub_1401A1740.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140332010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140349570 @ 0x140349570 (sub_140349570.c)
 *     sub_14098FE9C @ 0x14098FE9C (sub_14098FE9C.c)
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
