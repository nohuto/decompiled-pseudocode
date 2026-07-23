/*
 * XREFs of PsQueryProcessExceptionFlags @ 0x140889620
 * Callers:
 *     <none>
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 __fastcall PsQueryProcessExceptionFlags(ULONG_PTR BugCheckParameter1, int a2, int *a3)
{
  int v6; // ebx
  int v7; // r15d
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v9; // r14d
  _WORD *v10; // rax
  int *v11; // rax
  __int64 v12; // rcx
  int v13; // r15d
  char v14; // [rsp+20h] [rbp-88h]
  _BYTE v15[48]; // [rsp+48h] [rbp-60h] BYREF

  v14 = 0;
  if ( (a2 & 0xFFFFFFFE) != 0 )
    return 3221225712LL;
  v6 = 0;
  if ( !*(_QWORD *)(BugCheckParameter1 + 1016) )
    return 3221225711LL;
  v7 = a2 & 1;
  if ( (a2 & 1) != 0 && !*(_QWORD *)(BugCheckParameter1 + 1064) )
    return 3221225711LL;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcState.Process != (_KPROCESS *)BugCheckParameter1 )
  {
    LOBYTE(v9) = 3;
    v14 = 3;
    goto LABEL_11;
  }
  v9 = 0;
  if ( CurrentThread->Process != (_KPROCESS *)BugCheckParameter1 )
  {
    v14 = 2;
    v9 = 2;
  }
  if ( v9 >= 2 )
  {
LABEL_11:
    --CurrentThread->KernelApcDisable;
    if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760)) )
    {
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
      return 3221225738LL;
    }
  }
  if ( (v9 & 1) != 0 )
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v15);
  if ( v7 )
  {
    v10 = *(_WORD **)(BugCheckParameter1 + 1064);
    if ( v10 && v10[4] == 0x8664 )
    {
      v11 = (int *)(*(_QWORD *)v10 + 80LL);
    }
    else
    {
      v12 = 0LL;
      if ( v10 )
        v12 = *(_QWORD *)v10;
      v11 = (int *)(v12 + 40);
    }
  }
  else
  {
    v11 = (int *)(*(_QWORD *)(BugCheckParameter1 + 1016) + 80LL);
  }
  v13 = *v11;
  if ( (v14 & 1) != 0 )
    KiUnstackDetachProcess((__int64)v15, 0LL);
  if ( (v14 & 2) != 0 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760));
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  }
  *a3 = 0;
  if ( (v13 & 4) != 0 )
  {
    *a3 = 1;
    v6 = 1;
  }
  if ( (v13 & 8) != 0 )
    *a3 = v6 | 2;
  return 0LL;
}
