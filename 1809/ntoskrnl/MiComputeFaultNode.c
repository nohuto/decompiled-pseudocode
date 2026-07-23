/*
 * XREFs of MiComputeFaultNode @ 0x14002C918
 * Callers:
 *     MiResolveMappedFileFault @ 0x14002BE50 (MiResolveMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x140154C44 (MiResolvePageFileFault.c)
 * Callees:
 *     MiLocateAddress @ 0x140087850 (MiLocateAddress.c)
 */

__int64 __fastcall MiComputeFaultNode(unsigned __int64 *a1, __int64 a2, __int64 *a3)
{
  unsigned __int64 v4; // r10
  unsigned __int64 v7; // r11
  __int64 v8; // rdx
  unsigned __int64 v9; // r11
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *Process; // rsi
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __int64 Address; // rax
  unsigned int v15; // eax
  __int64 result; // rax

  v4 = a1[1] >> 57;
  if ( (_DWORD)v4 )
    return (unsigned int)v4;
  v7 = a1[2];
  v8 = *a3;
  if ( (v7 & 1) != 0 )
  {
    v9 = v7 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( *(_BYTE *)v9 == 4 )
    {
      LODWORD(v4) = *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[*(unsigned int *)(*(_QWORD *)(v9 + 40) + 588LL)]
                                                    + 192)
                                        + 146LL);
    }
    else
    {
      if ( *(_BYTE *)v9 != 2 )
        goto LABEL_10;
      LODWORD(v4) = *(_DWORD *)(v9 + 40);
    }
    if ( (_DWORD)v4 )
      return (unsigned int)v4;
  }
  else
  {
    v9 = 0LL;
  }
LABEL_10:
  if ( (*(_BYTE *)(a1[7] + 184) & 7) != 0 )
    return (unsigned int)v4;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v12 = *(_QWORD *)&Process[1].IdealGlobalNode;
  if ( v8
    || ((v13 = *a1, *a1 < 0xFFFFF68000000000uLL) || v13 > 0xFFFFF6FFFFFFFFFFuLL)
    && (v9 || *(_QWORD *)(v12 + 376) || *(_QWORD *)(v12 + 384) || *(_BYTE *)(v12 + 304) == 1)
    && (Address = MiLocateAddress(v13), *a3 = Address, (v8 = Address) != 0) )
  {
    v15 = *(_DWORD *)(v8 + 48);
    LODWORD(v4) = (v15 >> 8) & 0x3F;
    if ( (_DWORD)v4 )
      return (*(_DWORD *)(v8 + 48) >> 8) & 0x3F;
    if ( (v15 & 0x4000) == 0 )
      a2 = **(_QWORD **)(v8 + 72);
  }
  if ( !a2
    || (result = (*(_DWORD *)(a2 + 56) >> 20) & 0x3F, LODWORD(v4) = (*(_DWORD *)(a2 + 56) >> 20) & 0x3F, !(_DWORD)v4) )
  {
    if ( v9 )
    {
      if ( CurrentThread->ApcStateIndex == 1 )
        LODWORD(v4) = Process->IdealNode[CurrentThread->Affinity.Group] + 1;
    }
    return (unsigned int)v4;
  }
  return result;
}
