/*
 * XREFs of NtCreateSectionEx @ 0x14084E8E0
 * Callers:
 *     <none>
 * Callees:
 *     MiCreateSectionCommon @ 0x1405DD7A0 (MiCreateSectionCommon.c)
 */

__int64 __fastcall NtCreateSectionEx(
        unsigned __int64 a1,
        __int64 a2,
        int a3,
        __int64 *a4,
        int a5,
        int a6,
        __int64 a7,
        volatile void *Address)
{
  return MiCreateSectionCommon(a1, a2, a3, a4, a5, a6, a7, Address);
}
