/*
 * XREFs of MiCreateHardwareEnclave @ 0x14085ADF0
 * Callers:
 *     MiCreateEnclave @ 0x14085AD08 (MiCreateEnclave.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiGetVmPartition @ 0x1402B4770 (MiGetVmPartition.c)
 *     MiGetEnclavePage @ 0x1402BDF38 (MiGetEnclavePage.c)
 *     MiInitializeEnclavePfn @ 0x1402BE220 (MiInitializeEnclavePfn.c)
 *     MiReserveEnclavePages @ 0x1402BE9C8 (MiReserveEnclavePages.c)
 *     KeCreateEnclave @ 0x140844AE0 (KeCreateEnclave.c)
 */

__int64 __fastcall MiCreateHardwareEnclave(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  _KPROCESS *Process; // r15
  __int64 v8; // r14
  unsigned __int64 v9; // rbp
  __int64 VmPartition; // rax
  __int64 v11; // r8
  unsigned __int64 v12; // r10
  __int64 v13; // rdi
  __int64 result; // rax
  __int64 EnclavePage; // rax
  __int64 v16; // rsi
  unsigned __int64 v17; // rdi
  __int64 v18; // rdx
  int v19; // r8d
  bool v20; // zf
  unsigned __int64 v21; // rcx
  __int16 v22; // cx
  bool v23; // cl
  __int16 v24; // r9
  int v25; // [rsp+20h] [rbp-48h]
  __int64 v26; // [rsp+70h] [rbp+8h] BYREF

  v26 = a1;
  Process = KeGetCurrentThread()->ApcState.Process;
  v8 = (*(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32)) << 12;
  v9 = ((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) << 12) | 0xFFF;
  VmPartition = MiGetVmPartition((__int64)&Process[1].IdealNode[12]);
  v13 = VmPartition;
  if ( v12 )
  {
    result = MiReserveEnclavePages(a2, VmPartition, (v12 >> 12) + ((v12 & v11) != 0));
    if ( (int)result < 0 )
      return result;
  }
  EnclavePage = MiGetEnclavePage(v13, 0, v11);
  v16 = EnclavePage;
  if ( EnclavePage == -1 )
    return 3221225495LL;
  v17 = *(_QWORD *)(a2 + 80);
  MiInitializeEnclavePfn(EnclavePage, v17, 4);
  MiMakeValidPte(v17, v16, -1610612732);
  if ( MiPteInShadowRange(v17) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v19 = 1;
      if ( !HIBYTE(word_14043B26C) )
      {
        v20 = (v18 & 1) == 0;
        goto LABEL_11;
      }
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
    {
      v20 = (v18 & 1) == 0;
LABEL_11:
      if ( !v20 )
        v18 |= 0x8000000000000000uLL;
    }
  }
  *(_QWORD *)v17 = v18;
  if ( v19 )
    MiWritePteShadow(v17, v18);
  v21 = Process[1].ActiveProcessors.Bitmap[7];
  v23 = 0;
  if ( v21 )
  {
    v22 = *(_WORD *)(v21 + 8);
    if ( v22 == 332 || v22 == 452 )
      v23 = 1;
  }
  v24 = ((*(_WORD *)(a2 + 72) & 1) << 8) | 1;
  if ( v23 )
    v24 = (*(_WORD *)(a2 + 72) & 1) << 8;
  result = KeCreateEnclave((__int64)(v17 << 25) >> 16, v8, v9 - v8 + 1, a4, v25, v24, (int *)&v26, a5);
  if ( (int)result >= 0 )
  {
    if ( (v26 & 2) != 0 )
    {
      *(_DWORD *)(a2 + 64) |= 4u;
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)&Process[1].IdealGlobalNode + 232LL));
    }
    return 0LL;
  }
  return result;
}
