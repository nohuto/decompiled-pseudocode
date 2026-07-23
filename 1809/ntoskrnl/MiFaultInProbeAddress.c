/*
 * XREFs of MiFaultInProbeAddress @ 0x14009363C
 * Callers:
 *     MiProbeAndLockPages @ 0x140040CF0 (MiProbeAndLockPages.c)
 *     MiLockPageLeafPageTable @ 0x140041DD0 (MiLockPageLeafPageTable.c)
 *     MiProbeLeafFrame @ 0x140094BAC (MiProbeLeafFrame.c)
 * Callees:
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     MiLockProbePacketWorkingSet @ 0x14009374C (MiLockProbePacketWorkingSet.c)
 *     MiUnlockProbePacketWorkingSet @ 0x140093794 (MiUnlockProbePacketWorkingSet.c)
 *     MiDeliverPicoExceptionForProbedPage @ 0x1402A83A8 (MiDeliverPicoExceptionForProbedPage.c)
 */

__int64 __fastcall MiFaultInProbeAddress(__int64 a1)
{
  unsigned __int64 v1; // rsi
  __int64 v2; // rax
  unsigned int v3; // ebp
  unsigned __int64 v4; // rdx
  ULONG_PTR v6; // rdi
  int v7; // edi
  _QWORD v9[2]; // [rsp+20h] [rbp-88h] BYREF
  __int16 v10; // [rsp+30h] [rbp-78h] BYREF
  _QWORD *v11; // [rsp+38h] [rbp-70h]
  __int64 v12; // [rsp+40h] [rbp-68h]
  __int64 v13; // [rsp+48h] [rbp-60h]
  __int64 v14; // [rsp+50h] [rbp-58h]
  int v15; // [rsp+58h] [rbp-50h]

  v1 = *(_QWORD *)a1;
  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_DWORD *)(a1 + 88);
  v4 = *(_QWORD *)a1;
  v10 = 2;
  v9[0] = v4 & 0xFFFFFFFFFFFFF000uLL;
  v9[1] = v2 - (v4 & 0xFFFFFFFFFFFFF000uLL);
  v12 = 1LL;
  v11 = v9;
  v13 = 0LL;
  v6 = 0LL;
  v14 = 0LL;
  v15 = 0;
  if ( v3 )
  {
    v6 = 2LL;
    if ( v3 == 3 )
    {
      v6 = 0LL;
    }
    else if ( (*(_BYTE *)(a1 + 64) & 0xF) == 6 && (unsigned int)MiGetSystemRegionType(v1) == 12 )
    {
      v6 = 0LL;
    }
  }
  MiUnlockProbePacketWorkingSet(a1);
  v7 = MmAccessFault(v6, v1, 0LL, (ULONG_PTR)&v10 + 1);
  if ( v7 < 0 && (*(_DWORD *)(a1 + 64) & 0xF) == 1 && *(_QWORD *)(*(_QWORD *)(a1 + 80) + 1808LL) )
    v7 = MiDeliverPicoExceptionForProbedPage(v1, v3);
  MiLockProbePacketWorkingSet(a1);
  return (unsigned int)v7;
}
