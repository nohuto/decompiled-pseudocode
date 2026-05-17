/*
 * XREFs of RtlReAllocateHeap @ 0x1800431F0
 * Callers:
 *     sub_1800184BC @ 0x1800184BC (sub_1800184BC.c)
 *     sub_1800593F0 @ 0x1800593F0 (sub_1800593F0.c)
 *     RtlAllocateHandle @ 0x18005B950 (RtlAllocateHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x18006F560 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrAddLoadAsDataTable @ 0x180072080 (LdrAddLoadAsDataTable.c)
 *     LdrRemoveLoadAsDataTable @ 0x180073440 (LdrRemoveLoadAsDataTable.c)
 *     sub_1800D4DF4 @ 0x1800D4DF4 (sub_1800D4DF4.c)
 *     sub_1800ED05C @ 0x1800ED05C (sub_1800ED05C.c)
 *     sub_180100F24 @ 0x180100F24 (sub_180100F24.c)
 *     sub_1801055A0 @ 0x1801055A0 (sub_1801055A0.c)
 * Callees:
 *     sub_180043280 @ 0x180043280 (sub_180043280.c)
 *     sub_180045138 @ 0x180045138 (sub_180045138.c)
 *     sub_180046EEC @ 0x180046EEC (sub_180046EEC.c)
 *     sub_18010A694 @ 0x18010A694 (sub_18010A694.c)
 */

__int64 __fastcall RtlReAllocateHeap(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  if ( !a1 )
    sub_18010A694(19, 0, a3, 0, 0LL, 0LL);
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
    return sub_180045138(a1, a2, a3, a4);
  if ( (byte_180166058 & 2) != 0 )
    return sub_180046EEC(a1, a3, a4, a2);
  return sub_180043280(a1, a2, a3, a4, 0LL, 0LL);
}
