/*
 * XREFs of ?VidSchiRemoveContextFromSyncPoints@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0010E44
 * Callers:
 *     VidSchTerminateContext @ 0x1C007AB50 (VidSchTerminateContext.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiRemoveContextFromSyncPoints(struct _VIDSCH_CONTEXT *a1)
{
  __int64 v1; // rbx
  __int64 **v3; // rbx
  __int64 *i; // rax
  unsigned int v5; // r8d
  unsigned int v6; // edx
  __int64 v7; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_QWORD *)a1 + 13);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v1 + 32) + 1648LL), &LockHandle);
  v3 = (__int64 **)(v1 + 1304);
  for ( i = *v3; i != (__int64 *)v3; i = (__int64 *)*i )
  {
    v5 = *((_DWORD *)i + 16);
    v6 = 0;
    if ( v5 )
    {
      v7 = i[3];
      while ( *(struct _VIDSCH_CONTEXT **)(v7 + 16LL * v6) != a1 )
      {
        if ( ++v6 >= v5 )
          goto LABEL_10;
      }
      *(_QWORD *)(v7 + 16LL * v6) = 0LL;
    }
LABEL_10:
    ;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
