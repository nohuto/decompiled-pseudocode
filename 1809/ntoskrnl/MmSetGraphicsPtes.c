/*
 * XREFs of MmSetGraphicsPtes @ 0x140851710
 * Callers:
 *     <none>
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x140074540 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1400747D0 (MiObtainReferencedVadEx.c)
 *     ExGetCallBackBlockRoutine @ 0x140088BA0 (ExGetCallBackBlockRoutine.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiGetAweNode @ 0x1402B0F08 (MiGetAweNode.c)
 *     MiLockAweVadsExclusive @ 0x1402B14CC (MiLockAweVadsExclusive.c)
 *     MiSetGraphicsPtes @ 0x1402B2094 (MiSetGraphicsPtes.c)
 *     MiUnlockAweVadsExclusive @ 0x1402B22FC (MiUnlockAweVadsExclusive.c)
 */

__int64 __fastcall MmSetGraphicsPtes(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        __int64 *a3,
        unsigned __int64 a4,
        int a5,
        int a6)
{
  unsigned __int64 v10; // rsi
  struct _KTHREAD *CurrentThread; // r12
  __int64 v12; // rbx
  __int64 v13; // rax
  char *v14; // r14
  int v16; // edx
  unsigned int v17; // ebx
  _QWORD *AweNode; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r8
  ULONG_PTR v21; // rax
  int BugCheckParameter4; // [rsp+20h] [rbp-38h]
  unsigned int v23; // [rsp+60h] [rbp+8h] BYREF

  if ( BugCheckParameter2 >= 0xFFFF800000000000uLL
    || (v10 = BugCheckParameter2 + BugCheckParameter3, BugCheckParameter2 + BugCheckParameter3 <= BugCheckParameter2)
    || v10 >= 0xFFFF800000000000uLL )
  {
    KeBugCheckEx(0x1Au, 0xA000uLL, BugCheckParameter2, BugCheckParameter3, 0LL);
  }
  CurrentThread = KeGetCurrentThread();
  v12 = 0LL;
  v23 = 0;
  v13 = MiObtainReferencedVadEx(BugCheckParameter2, 0, (int *)&v23);
  v14 = (char *)v13;
  if ( !v13 )
    return v23;
  v16 = *(_DWORD *)(v13 + 48);
  if ( (v16 & 0x10000) == 0 )
    goto LABEL_29;
  if ( v10 - 1 <= (((*(unsigned int *)(v13 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v13 + 33) << 32)) << 12) | 0xFFF) )
  {
    if ( (v16 & 7) == 3 )
    {
      MiLockAweVadsExclusive((__int64)CurrentThread);
      AweNode = MiGetAweNode(BugCheckParameter2);
      if ( AweNode )
      {
        v19 = ExGetCallBackBlockRoutine(AweNode[4]) << 12;
        if ( a4 != v19 )
        {
          v17 = -1073741582;
          goto LABEL_27;
        }
        if ( (a6 & 0xFFFFFFFE) != 0 )
        {
          v17 = -1073741580;
          goto LABEL_27;
        }
        if ( a5 )
        {
          v17 = -1073741581;
          goto LABEL_27;
        }
        v20 = v19 - 1;
        if ( ((v19 - 1) & BugCheckParameter2) == 0 && (v20 & BugCheckParameter3) == 0 )
        {
          if ( !a3 )
            goto LABEL_26;
          if ( (a6 & 1) != 0 )
          {
            v21 = 1LL;
            goto LABEL_24;
          }
          v21 = BugCheckParameter3 / v19;
          if ( BugCheckParameter3 / v19 )
          {
LABEL_24:
            while ( (v20 & a3[v12]) == 0 )
            {
              if ( ++v12 >= v21 )
                goto LABEL_26;
            }
            v17 = -1073741583;
          }
          else
          {
LABEL_26:
            v17 = MiSetGraphicsPtes(BugCheckParameter2, BugCheckParameter3, a3, a4, BugCheckParameter4, a6);
          }
          goto LABEL_27;
        }
      }
      v17 = -1073741585;
LABEL_27:
      MiUnlockAweVadsExclusive((__int64)CurrentThread);
      goto LABEL_30;
    }
LABEL_29:
    v17 = -1073741585;
    goto LABEL_30;
  }
  v17 = -1073741584;
LABEL_30:
  MiUnlockAndDereferenceVad(v14);
  return v17;
}
