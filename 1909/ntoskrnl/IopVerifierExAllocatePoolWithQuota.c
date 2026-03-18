/*
 * XREFs of IopVerifierExAllocatePoolWithQuota @ 0x140037A20
 * Callers:
 *     IopXxxControlFile @ 0x1405F25A0 (IopXxxControlFile.c)
 *     IopTrackLink @ 0x1406B19B0 (IopTrackLink.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140854290 (IopSetEaOrQuotaInformationFile.c)
 *     IopValidateJunctionTarget @ 0x140854DCC (IopValidateJunctionTarget.c)
 * Callees:
 *     ExGetHeapFromVA @ 0x14000331C (ExGetHeapFromVA.c)
 *     RtlRaiseStatus @ 0x140015E00 (RtlRaiseStatus.c)
 *     ExAllocatePoolWithTagPriority @ 0x140037BB0 (ExAllocatePoolWithTagPriority.c)
 *     PspChargeQuota @ 0x14003A840 (PspChargeQuota.c)
 *     ExpHpIsSpecialPoolHeap @ 0x14019D65C (ExpHpIsSpecialPoolHeap.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1402ED44C (ObpPushStackInfo.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

_WORD *__fastcall IopVerifierExAllocatePoolWithQuota(POOL_TYPE a1, SIZE_T a2)
{
  unsigned int v2; // ebx
  int v3; // r12d
  POOL_TYPE v4; // ecx
  POOL_TYPE v5; // ebx
  PEPROCESS Process; // rsi
  ULONG_PTR PoolWithTag; // rax
  _WORD *v8; // r14
  __int16 v9; // cx
  unsigned __int64 v10; // r15
  __int64 v11; // rdx
  char *v12; // rbp
  __int64 v13; // r9
  NTSTATUS v14; // ebx
  __int64 v15; // rcx
  signed __int64 BugCheckParameter4; // rdi
  _WORD *result; // rax
  __int64 HeapFromVA; // rax

  v2 = a1;
  if ( !ViVerifierDriverAddedThunkListHead )
  {
    v3 = 1;
    if ( (a1 & 8) != 0 )
    {
      v3 = 0;
      v2 = a1 & 0xFFFFFFF7;
    }
    v4 = v2;
    v5 = v2 + 8;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process == PsInitialSystemProcess )
      v5 = v4;
    PoolWithTag = (ULONG_PTR)ExAllocatePoolWithTag(v5, a2, 0x20206F49u);
    v8 = (_WORD *)PoolWithTag;
    if ( (PoolWithTag & 0xFFF) != 0 )
    {
      if ( !ExpSpecialAllocations
        || (HeapFromVA = ExGetHeapFromVA(PoolWithTag), !(unsigned int)ExpHpIsSpecialPoolHeap(HeapFromVA)) )
      {
        if ( (v5 & 8) != 0 )
        {
          v9 = *(v8 - 7);
          v10 = (unsigned __int64)(v8 - 8);
          v11 = ExpPoolQuotaCookie;
          v12 = 0LL;
          v13 = (unsigned __int8)v9;
          *((_QWORD *)v8 - 1) = (unsigned __int64)(v8 - 8) ^ ExpPoolQuotaCookie;
          if ( (v9 & 0x400) != 0 )
          {
            v12 = (char *)(v10 - 16LL * (unsigned __int8)*(_WORD *)v10);
            v13 = (unsigned __int8)*((_WORD *)v12 + 1);
            *((_QWORD *)v12 + 1) = (unsigned __int64)v12 ^ v11;
          }
          if ( Process == PsInitialSystemProcess
            || (v14 = PspChargeQuota(Process[1].ActiveProcessors.Bitmap[3], Process, v5 & 1, 16 * v13), v14 >= 0) )
          {
            v15 = ExpPoolQuotaCookie;
            *(_QWORD *)(v10 + 8) = (unsigned __int64)Process ^ v10 ^ ExpPoolQuotaCookie;
            if ( v12 )
              *((_QWORD *)v12 + 1) = (unsigned __int64)Process ^ (unsigned __int64)v12 ^ v15;
            if ( ObpTraceFlags )
              ObpPushStackInfo((_DWORD)Process - 48);
            BugCheckParameter4 = _InterlockedIncrement64((volatile signed __int64 *)&Process[-1].Spare2[39]);
            if ( BugCheckParameter4 <= 1 )
              KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Process, 0x10uLL, BugCheckParameter4);
          }
          else
          {
            ExFreePoolWithTag(v8, 0x20206F49u);
            if ( v3 )
              RtlRaiseStatus(v14);
            return 0LL;
          }
        }
      }
      return v8;
    }
    if ( PoolWithTag || !v3 )
      return v8;
LABEL_31:
    RtlRaiseStatus(-1073741670);
  }
  result = ExAllocatePoolWithTagPriority(a1, a2, 0x20206F49u, (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  if ( !result )
    goto LABEL_31;
  return result;
}
