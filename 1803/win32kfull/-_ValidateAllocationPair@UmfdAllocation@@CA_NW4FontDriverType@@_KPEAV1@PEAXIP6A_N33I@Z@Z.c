/*
 * XREFs of ?_ValidateAllocationPair@UmfdAllocation@@CA_NW4FontDriverType@@_KPEAV1@PEAXIP6A_N33I@Z@Z @ 0x1C00F61D4
 * Callers:
 *     ?ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z @ 0x1C007DB40 (-ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z.c)
 * Callees:
 *     ?TryProbeForRead@@YA_NPEAXII@Z @ 0x1C007E524 (-TryProbeForRead@@YA_NPEAXII@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall UmfdAllocation::_ValidateAllocationPair(
        int a1,
        __int64 a2,
        __int64 a3,
        char *a4,
        unsigned int a5,
        unsigned __int8 (__fastcall *a6)(char *, __int64, _QWORD))
{
  return *(char **)(a3 + 16) == a4
      && a1 == *(_DWORD *)(a3 + 4)
      && a2 == *(_QWORD *)(a3 + 8)
      && a5 == *(_DWORD *)(a3 + 24)
      && TryProbeForRead(a4, a5)
      && a6(a4, a3 + 28, a5) != 0;
}
