/*
 * XREFs of IopUpdateMinidumpContext @ 0x140281E58
 * Callers:
 *     IoWriteCrashDump @ 0x14028079C (IoWriteCrashDump.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x14028246C (IopWriteCapsuleTriageDumpToFirmware.c)
 * Callees:
 *     KeGetPrcb @ 0x1400A6204 (KeGetPrcb.c)
 *     MmIsSpecialPoolAddress @ 0x1401671B0 (MmIsSpecialPoolAddress.c)
 *     IoAddTriageDumpDataBlock @ 0x140191E2C (IoAddTriageDumpDataBlock.c)
 *     KiIsAddressRangeValid @ 0x140191F34 (KiIsAddressRangeValid.c)
 *     IopGetMaxValidMemorySize @ 0x140281828 (IopGetMaxValidMemorySize.c)
 *     IopAddBugcheckPnpTriageData @ 0x140286E88 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x140286EF0 (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x140286F98 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x1402872F8 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageThread @ 0x140287544 (IopAddBugcheckTriageThread.c)
 *     PopInternalAddToDumpFile @ 0x1402D3514 (PopInternalAddToDumpFile.c)
 */

__int64 __fastcall IopUpdateMinidumpContext(
        int a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        _KTHREAD *a7)
{
  struct _KPRCB *CurrentPrcb; // r12
  __int64 v13; // rdi
  __int64 v14; // r8
  char *v15; // rdx
  unsigned __int64 v16; // rbx
  unsigned int v17; // edx
  int MaxValidMemorySize; // eax
  __int64 result; // rax
  char *IsrStack; // rcx
  unsigned int v21; // ecx
  int v22; // eax
  __int64 v23; // rax
  char *v24; // r12
  unsigned __int64 v25; // rbx
  unsigned int v26; // r12d
  int v27; // eax
  __int64 v28; // rcx
  _QWORD *v29; // r12
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // r8
  unsigned int v33; // r8d
  int v34; // edx
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r14
  unsigned __int64 v41; // rcx
  unsigned int v42; // edx
  PVOID *i; // rbx
  __int64 v44; // rcx
  __int128 v45; // xmm1
  char v46; // [rsp+60h] [rbp+8h]
  __int64 Prcb; // [rsp+68h] [rbp+10h]
  __int64 v48; // [rsp+80h] [rbp+28h]
  unsigned __int64 *v49; // [rsp+88h] [rbp+30h]
  unsigned __int64 v50; // [rsp+88h] [rbp+30h]
  __int64 v51; // [rsp+88h] [rbp+30h]

  CurrentPrcb = KeGetCurrentPrcb();
  v46 = 0;
  if ( a1 != 126 )
  {
    if ( a1 == 127 )
    {
      v13 = (__int64)a6;
      if ( a2 == 8 )
      {
        a6[20] = *(_QWORD *)(a3 + 344);
        a6[31] = *(_QWORD *)(a3 + 360);
        a6[19] = *(_QWORD *)(a3 + 384);
      }
      goto LABEL_5;
    }
LABEL_8:
    v13 = (__int64)a6;
    goto LABEL_9;
  }
  if ( !a5 )
    goto LABEL_8;
  v13 = a5;
LABEL_5:
  v46 = 1;
LABEL_9:
  IoAddTriageDumpDataBlock(a2 & 0xFFFFF000, 4096);
  IoAddTriageDumpDataBlock(a3 & 0xFFFFF000, 4096);
  IoAddTriageDumpDataBlock(a4 & 0xFFFFF000, 4096);
  IoAddTriageDumpDataBlock(a5 & 0xFFFFF000, 4096);
  if ( a1 == 205 || a1 == 214 || a1 == 209 && MmIsSpecialPoolAddress(a2) )
    IoAddTriageDumpDataBlock((a2 - 4096) & 0xFFFFF000, 4096);
  v14 = 0x7FFFLL;
  v15 = (char *)KeGetPcr()->Prcb.DpcStack + 80;
  v16 = *(_QWORD *)(v13 + 152);
  if ( (unsigned __int64)&v15[-(unsigned int)KeKernelStackSize] <= v16 && v16 < (unsigned __int64)v15 )
  {
    if ( (unsigned __int64)&v15[-v16] >= 0x7FFF )
      v17 = 0x7FFF;
    else
      v17 = (_DWORD)v15 - v16;
    MaxValidMemorySize = IopGetMaxValidMemorySize(*(_QWORD *)(v13 + 152), v17);
    IoAddTriageDumpDataBlock(v16, MaxValidMemorySize);
    v14 = 0x7FFFLL;
  }
  result = 2LL;
  v48 = 2LL;
  if ( CurrentPrcb->DebuggerSavedIRQL > 2u )
  {
    IsrStack = (char *)KeGetPcr()->Prcb.IsrStack;
    result = (__int64)(IsrStack - 24576);
    if ( (unsigned __int64)(IsrStack - 24576) <= v16 && v16 < (unsigned __int64)IsrStack )
    {
      if ( (unsigned __int64)&IsrStack[-v16] >= 0x7FFF )
        v21 = 0x7FFF;
      else
        v21 = (_DWORD)IsrStack - v16;
      v22 = IopGetMaxValidMemorySize(v16, v21);
      result = IoAddTriageDumpDataBlock(v16, v22);
    }
  }
  if ( a1 == 307 )
  {
    v23 = (__int64)a7;
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 && a7 != CurrentPrcb->IdleThread )
    {
      v24 = (char *)KeGetPcr()->Prcb.DpcStack + 80;
      v25 = (unsigned __int64)&v24[-(unsigned int)KeKernelStackSize];
      v49 = (unsigned __int64 *)((char *)KeGetPcr()->Prcb.IsrStack - 8);
      if ( KiIsAddressRangeValid((__int64)v49, 8LL) )
      {
        v50 = *v49;
        if ( KiIsAddressRangeValid(v50, 8LL) )
        {
          if ( v25 <= v50 && v50 < (unsigned __int64)v24 )
            v25 = v50;
        }
      }
      if ( (unsigned __int64)&v24[-v25] >= 0x7FFF )
        v26 = 0x7FFF;
      else
        v26 = (_DWORD)v24 - v25;
      v27 = IopGetMaxValidMemorySize(v25, v26);
      IoAddTriageDumpDataBlock(v25, v27);
      v23 = (__int64)a7;
    }
    Prcb = KeGetPrcb(*(_DWORD *)(v23 + 536));
    v28 = 2LL;
    result = Prcb + 11776;
    v51 = Prcb + 11776;
    do
    {
      v29 = *(_QWORD **)result;
      if ( *(_QWORD *)result )
      {
        do
        {
          IoAddTriageDumpDataBlock((_DWORD)v29 - 8, 64);
          v30 = v29[6];
          if ( v30 != 1 )
            IoAddTriageDumpDataBlock(v30, 64);
          v29 = (_QWORD *)*v29;
        }
        while ( v29 );
        result = v51;
        v28 = v48;
      }
      result += 40LL;
      --v28;
      v51 = result;
      v48 = v28;
    }
    while ( v28 );
    v31 = *(_QWORD *)(Prcb + 25000);
    if ( !v31 )
      goto LABEL_87;
    v32 = *(_QWORD *)(Prcb + 25008);
    if ( v31 == v32 )
      goto LABEL_87;
    v33 = v32 - v31;
    v34 = 8 * dword_14054138C;
    if ( v33 <= 8 * dword_14054138C )
      v34 = v33;
    result = IoAddTriageDumpDataBlock(v31, v34);
  }
  if ( a1 == 335 || a1 == 348 )
  {
    if ( a5 )
    {
      result = IoAddTriageDumpDataBlock(a5, 16);
      if ( *(_QWORD *)(a5 + 8) )
        result = ((__int64 (*)(void))IopAddBugcheckTriageThread)();
    }
  }
  if ( a1 == 412 )
  {
    result = a2 - 16;
    if ( a2 - 16 > 0x40 || (result & 0xF) != 0 || !a3 )
      goto LABEL_87;
    result = IopAddBugcheckTriageThread(a3, v15, v14);
  }
  if ( a1 == 159 )
  {
    if ( a2 == 4 )
    {
      if ( a4 )
        result = IopAddBugcheckPnpTriageData(a4, a5, v14);
      goto LABEL_87;
    }
    if ( a2 != 3 )
      goto LABEL_87;
    result = IopAddBugcheckPowerTriageData(a3, a4, a5);
  }
  if ( a1 == 469 )
    result = IopAddBugcheckPnpWatchdogTriageData(a3, a4, v14);
  if ( a1 == 160 )
  {
    if ( a2 == 1560 )
      result = IopAddBugcheckTriageThread(a4, v15, v14);
    if ( a2 != 1561 )
      goto LABEL_87;
    result = IopAddBugcheckTriageDeviceNode(*(_QWORD *)(a3 + 48), v15, v14);
    if ( !a5 )
      goto LABEL_87;
    result = IopAddBugcheckTriageDeviceNode(a5, v35, v36);
  }
  if ( a1 == 257 )
  {
    if ( a3 )
      goto LABEL_87;
    v37 = *(_QWORD *)(a4 + 8);
    IoAddTriageDumpDataBlock(a4, 32448);
    IoAddTriageDumpDataBlock(*(_QWORD *)(a4 + 25280), 1232);
    v40 = *(_QWORD *)(v37 + 88);
    v41 = *(_QWORD *)(*(_QWORD *)(a4 + 25280) + 152LL) - 4096LL;
    if ( v41 < *(_QWORD *)(v37 + 48) )
      v41 = *(_QWORD *)(v37 + 48);
    *(_QWORD *)(v37 + 88) = v41;
    result = IopAddBugcheckTriageThread(*(_QWORD *)(a4 + 8), v38, v39);
    *(_QWORD *)(v37 + 88) = v40;
  }
  if ( a1 == 416 )
  {
    IopAddBugcheckTriageThread(a4, v15, v14);
    result = PopInternalAddToDumpFile(0LL, 0LL, 0LL);
  }
  if ( a1 == 292 && a3 )
  {
    v42 = 72 * *(unsigned __int16 *)(a3 + 10) + 128;
    if ( *(_DWORD *)(a3 + 20) >= v42 )
      v42 = *(_DWORD *)(a3 + 20);
    result = IoAddTriageDumpDataBlock(a3, v42);
  }
LABEL_87:
  for ( i = (PVOID *)PopThermal; i != &PopThermal; i = (PVOID *)*i )
    result = IoAddTriageDumpDataBlock((int)i, 872);
  if ( v46 )
  {
    result = CrashdmpDumpBlock;
    if ( CrashdmpDumpBlock )
    {
      *(_DWORD *)(CrashdmpDumpBlock + 24) |= 0x10000000u;
      v44 = 9LL;
      result = CrashdmpDumpBlock + 64;
      do
      {
        *(_OWORD *)result = *(_OWORD *)v13;
        *(_OWORD *)(result + 16) = *(_OWORD *)(v13 + 16);
        *(_OWORD *)(result + 32) = *(_OWORD *)(v13 + 32);
        *(_OWORD *)(result + 48) = *(_OWORD *)(v13 + 48);
        *(_OWORD *)(result + 64) = *(_OWORD *)(v13 + 64);
        *(_OWORD *)(result + 80) = *(_OWORD *)(v13 + 80);
        *(_OWORD *)(result + 96) = *(_OWORD *)(v13 + 96);
        result += 128LL;
        v45 = *(_OWORD *)(v13 + 112);
        v13 += 128LL;
        *(_OWORD *)(result - 16) = v45;
        --v44;
      }
      while ( v44 );
      *(_OWORD *)result = *(_OWORD *)v13;
      *(_OWORD *)(result + 16) = *(_OWORD *)(v13 + 16);
      *(_OWORD *)(result + 32) = *(_OWORD *)(v13 + 32);
      *(_OWORD *)(result + 48) = *(_OWORD *)(v13 + 48);
      *(_OWORD *)(result + 64) = *(_OWORD *)(v13 + 64);
    }
  }
  return result;
}
