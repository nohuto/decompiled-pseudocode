/*
 * XREFs of ?VidSchiWorkerThreadTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1C0013BC0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiCheckYieldExitCondition @ 0x1C0013CE4 (VidSchiCheckYieldExitCondition.c)
 *     McTemplateK0p @ 0x1C0025AA4 (McTemplateK0p.c)
 */

void __fastcall VidSchiWorkerThreadTimerCallback(struct _EX_TIMER *a1, char *a2)
{
  LARGE_INTEGER v3; // rbp
  char v4; // si
  __int64 v5; // rdi
  _QWORD *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  char v10; // [rsp+68h] [rbp+10h] BYREF
  union _LARGE_INTEGER v11; // [rsp+70h] [rbp+18h] BYREF

  v11.QuadPart = 0LL;
  v3 = KeQueryPerformanceCounter(&v11);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)a2 + 206, &LockHandle);
  if ( v3.QuadPart >= *((_QWORD *)a2 + 22) )
  {
    ExCancelTimer(*((_QWORD *)a2 + 21), 0LL);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0p(v7, &EventYieldCancelExpirationTimer, v8, *((_QWORD *)a2 + 2));
    *((_QWORD *)a2 + 22) = 0LL;
  }
  else
  {
    v4 = 0;
    v5 = 0LL;
    if ( *((_DWORD *)a2 + 17) )
    {
      do
      {
        v6 = (_QWORD *)*((_QWORD *)a2 + 77);
        if ( (unsigned int)v5 < *((_DWORD *)a2 + 172) )
          v6 += v5;
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))VidSchiCheckYieldExitCondition)(
          *v6,
          (LARGE_INTEGER)v3.QuadPart,
          &v10);
        if ( v10 )
          v4 = 1;
        v5 = (unsigned int)(v5 + 1);
      }
      while ( (unsigned int)v5 < *((_DWORD *)a2 + 17) );
      if ( v4 )
      {
        *((_QWORD *)a2 + 143) = MEMORY[0xFFFFF78000000320];
        KeSetEvent((PRKEVENT)(a2 + 1112), 0, 0);
      }
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}
