/*
 * XREFs of KeInvalidAccessAllowed @ 0x1401154F0
 * Callers:
 *     MiSystemFault @ 0x140075120 (MiSystemFault.c)
 *     MiCheckSystemPageTables @ 0x1400758D0 (MiCheckSystemPageTables.c)
 *     MiResolveMappedFileFault @ 0x1400A5990 (MiResolveMappedFileFault.c)
 *     MiValidFault @ 0x1400C7190 (MiValidFault.c)
 *     MmAccessFault @ 0x1400CA7B0 (MmAccessFault.c)
 *     MiResolveProtoPteFault @ 0x1400D15C0 (MiResolveProtoPteFault.c)
 *     MiAllowGuardFault @ 0x140115490 (MiAllowGuardFault.c)
 *     MiRaisedIrqlFault @ 0x140129040 (MiRaisedIrqlFault.c)
 *     MiComputeMaximumFaultCluster @ 0x140170328 (MiComputeMaximumFaultCluster.c)
 * Callees:
 *     KiRspInIstStack @ 0x1402A9AE8 (KiRspInIstStack.c)
 */

char __fastcall KeInvalidAccessAllowed(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r10
  __int16 v5; // ax
  bool v6; // cl
  void *v7; // r8
  unsigned __int64 v8; // rdx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

  v4 = a1;
  if ( !a1 )
    return 0;
  v5 = *(_WORD *)(a1 + 368);
  v6 = 0;
  if ( v5 == 16 )
  {
    if ( (*(_DWORD *)(v4 + 376) & 0x200) != 0
      || !(unsigned int)KiRspInIstStack(3LL, *(_QWORD *)(v4 + 384), a3, a4)
      && !(unsigned int)KiRspInIstStack(2LL, v10, v11, v12) )
    {
      v7 = &ExpInterlockedPopEntrySListFault;
      v8 = *(_QWORD *)(v4 + 360);
      v6 = KiDynamicTraceEnabled && v8 >= ControlPc && v8 < qword_140572A78 && KeGetCurrentIrql() == 15;
      goto LABEL_5;
    }
    return 0;
  }
  if ( v5 != 51 )
    return 0;
  v7 = (void *)KeUserPopEntrySListFault;
  v8 = *(_QWORD *)(v4 + 360);
LABEL_5:
  if ( (void *)v8 == v7 )
    return 1;
  return v6;
}
