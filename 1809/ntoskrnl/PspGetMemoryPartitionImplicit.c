/*
 * XREFs of PspGetMemoryPartitionImplicit @ 0x1406044D0
 * Callers:
 *     PspGetMemoryPartitionContext @ 0x14060E560 (PspGetMemoryPartitionContext.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x14008FC70 (PsGetEffectiveServerSilo.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     PspLockJobChain @ 0x1406017CC (PspLockJobChain.c)
 *     PspUnlockJobChain @ 0x140601864 (PspUnlockJobChain.c)
 */

__int64 __fastcall PspGetMemoryPartitionImplicit(__int64 a1, __int16 a2, _QWORD *a3)
{
  unsigned int v5; // edi
  struct _KTHREAD *CurrentThread; // r15
  __int64 EffectiveServerSilo; // rbx
  __int64 v9; // rax

  v5 = 0;
  *a3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PspLockJobChain(a1, (__int64)CurrentThread, 0);
  if ( (a2 & 0x400) != 0 )
  {
    EffectiveServerSilo = PsGetEffectiveServerSilo(a1);
  }
  else
  {
    for ( EffectiveServerSilo = a1; EffectiveServerSilo; EffectiveServerSilo = *(_QWORD *)(EffectiveServerSilo + 1072) )
    {
      if ( (*(_DWORD *)(EffectiveServerSilo + 256) & 0x1000) == 0
        && ((*(_DWORD *)(EffectiveServerSilo + 256) & 0x800) == 0 || (a2 & 1) == 0) )
      {
        break;
      }
    }
    if ( (a2 & 1) != 0 && EffectiveServerSilo == a1 && (*(_DWORD *)(EffectiveServerSilo + 1304) & 0x40000000) == 0 )
    {
      v5 = -1073741790;
      goto LABEL_11;
    }
  }
  if ( EffectiveServerSilo )
  {
    v9 = *(_QWORD *)(EffectiveServerSilo + 1544);
    if ( v9 == -1 )
    {
      v5 = -1073740682;
    }
    else
    {
      if ( v9 )
      {
        ObfReferenceObjectWithTag(*(PVOID *)(EffectiveServerSilo + 1544), 0x624A7350u);
        v9 = *(_QWORD *)(EffectiveServerSilo + 1544);
      }
      *a3 = v9;
    }
  }
LABEL_11:
  PspUnlockJobChain(a1, (__int64)CurrentThread, 0);
  return v5;
}
