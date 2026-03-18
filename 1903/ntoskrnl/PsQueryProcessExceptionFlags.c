/*
 * XREFs of PsQueryProcessExceptionFlags @ 0x1408C6310
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall PsQueryProcessExceptionFlags(ULONG_PTR BugCheckParameter1, int a2, int *a3)
{
  int v6; // ebx
  int v8; // r15d
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v10; // r14d
  _WORD *v11; // rax
  int *v12; // rax
  __int64 v13; // rcx
  int v14; // r15d
  char v15; // [rsp+20h] [rbp-88h]
  _BYTE v16[48]; // [rsp+48h] [rbp-60h] BYREF

  memset(v16, 0, sizeof(v16));
  v6 = 0;
  v15 = 0;
  if ( (a2 & 0xFFFFFFFE) != 0 )
    return 3221225712LL;
  if ( !*(_QWORD *)(BugCheckParameter1 + 1016) )
    return 3221225711LL;
  v8 = a2 & 1;
  if ( v8 )
  {
    if ( !*(_QWORD *)(BugCheckParameter1 + 1064) )
      return 3221225711LL;
  }
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcState.Process == (_KPROCESS *)BugCheckParameter1 )
  {
    v10 = 0;
    if ( CurrentThread->Process != (_KPROCESS *)BugCheckParameter1 )
    {
      v15 = 2;
      v10 = 2;
    }
    if ( v10 < 2 )
      goto LABEL_14;
  }
  else
  {
    LOBYTE(v10) = 3;
    v15 = 3;
  }
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 768)) )
  {
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    return 3221225738LL;
  }
LABEL_14:
  if ( (v10 & 1) != 0 )
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v16);
  if ( v8 )
  {
    v11 = *(_WORD **)(BugCheckParameter1 + 1064);
    if ( v11 && v11[4] == 0x8664 )
    {
      v12 = (int *)(*(_QWORD *)v11 + 80LL);
    }
    else
    {
      v13 = 0LL;
      if ( v11 )
        v13 = *(_QWORD *)v11;
      v12 = (int *)(v13 + 40);
    }
  }
  else
  {
    v12 = (int *)(*(_QWORD *)(BugCheckParameter1 + 1016) + 80LL);
  }
  v14 = *v12;
  if ( (v15 & 1) != 0 )
    KiUnstackDetachProcess((struct _KTHREAD *)v16, 0);
  if ( (v15 & 2) != 0 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 768));
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  *a3 = 0;
  if ( (v14 & 4) != 0 )
  {
    *a3 = 1;
    v6 = 1;
  }
  if ( (v14 & 8) != 0 )
    *a3 = v6 | 2;
  return 0LL;
}
