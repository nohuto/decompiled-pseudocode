/*
 * XREFs of PsGetEffectiveContainerId @ 0x140122B60
 * Callers:
 *     NtQueryInformationThread @ 0x1405E5C60 (NtQueryInformationThread.c)
 * Callees:
 *     PsGetWorkOnBehalfThread @ 0x14000D5BC (PsGetWorkOnBehalfThread.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 */

__int64 __fastcall PsGetEffectiveContainerId(int a1, struct _KTHREAD *a2, __int64 a3)
{
  struct _KTHREAD *WorkOnBehalfThread; // rax
  struct _KTHREAD *v8; // r8
  unsigned __int64 v9; // rdx
  int v10; // ebx
  __int64 v11; // rax
  int v12; // ebx
  __int128 v13; // xmm0
  int v14; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 >= 5 )
    return 3221225711LL;
  if ( a2 )
  {
    *(_QWORD *)a3 = 0LL;
    *(_QWORD *)(a3 + 8) = 0LL;
    *(_DWORD *)(a3 + 16) = 0;
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 && a2 == KeGetCurrentThread() )
      return 0LL;
    WorkOnBehalfThread = PsGetWorkOnBehalfThread(a2, &v14);
    v8 = WorkOnBehalfThread;
    if ( WorkOnBehalfThread )
    {
      v9 = WorkOnBehalfThread->Process[1].Affinity.Bitmap[16];
      *(_DWORD *)(a3 + 16) |= 1u;
    }
    else
    {
      v9 = a2->Process[1].Affinity.Bitmap[16];
    }
    if ( !v9 )
    {
LABEL_13:
      if ( v14 )
        ObfDereferenceObjectWithTag(v8, 0x746C6644u);
      return 0LL;
    }
    if ( a1 )
    {
      v10 = a1 - 2;
      if ( !v10 )
      {
        v11 = *(_QWORD *)(v9 + 832);
LABEL_12:
        if ( !v11 )
          goto LABEL_13;
        v13 = *(_OWORD *)(v11 + 1224);
        goto LABEL_21;
      }
      v12 = v10 - 1;
      if ( !v12 )
      {
        v11 = *(_QWORD *)(v9 + 840);
        goto LABEL_12;
      }
      if ( v12 != 1 )
        goto LABEL_13;
    }
    v13 = *(_OWORD *)(v9 + 1224);
LABEL_21:
    *(_OWORD *)a3 = v13;
    goto LABEL_13;
  }
  return 3221225712LL;
}
