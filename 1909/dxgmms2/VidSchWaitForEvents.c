/*
 * XREFs of VidSchWaitForEvents @ 0x1C0010DE8
 * Callers:
 *     VidSchSuspendResumeDevice @ 0x1C0010910 (VidSchSuspendResumeDevice.c)
 *     VidSchWaitForCompletionEvent @ 0x1C007C5B4 (VidSchWaitForCompletionEvent.c)
 *     VidSchiSwitchNodeFromContext @ 0x1C007CEE0 (VidSchiSwitchNodeFromContext.c)
 *     VidSchSwitchFromContext @ 0x1C007D1C0 (VidSchSwitchFromContext.c)
 *     VidSchSuspendAdapter @ 0x1C007E080 (VidSchSuspendAdapter.c)
 *     VidSchSwitchFromDevice @ 0x1C00CC440 (VidSchSwitchFromDevice.c)
 * Callees:
 *     VidSchiCheckHwProgress @ 0x1C007B3F0 (VidSchiCheckHwProgress.c)
 */

__int64 __fastcall VidSchWaitForEvents(__int64 a1, ULONG a2, PVOID *a3, union _LARGE_INTEGER *a4, BOOLEAN a5)
{
  union _LARGE_INTEGER *Timeout; // r12
  bool v9; // si
  char v10; // bp
  unsigned int v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // rdx
  BOOLEAN Alertable; // si
  unsigned int v15; // edi
  __int64 v16; // rdx
  __int64 v17; // rcx
  char v19; // bp
  NTSTATUS v20; // eax
  unsigned int v21; // esi
  __int64 v22; // rax
  __int64 v23; // [rsp+40h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-30h] BYREF
  char v25; // [rsp+80h] [rbp+8h] BYREF

  Timeout = a4;
  if ( KeGetCurrentThread() == *(struct _KTHREAD **)(a1 + 152) )
  {
    v23 = 0LL;
    v19 = 0;
    if ( !a4 )
    {
      Timeout = (union _LARGE_INTEGER *)&v23;
      v19 = 1;
      v23 = -(__int64)((10000000 * (unsigned __int64)g_TdrConfig[1]) >> 1);
    }
    v25 = 0;
    do
    {
      v20 = KeWaitForMultipleObjects(a2, a3, WaitAny, Executive, 0, 0, Timeout, 0LL);
      v21 = v20;
      if ( !v19 || v20 != 258 )
        return v21;
    }
    while ( (unsigned int)VidSchiCheckHwProgress(a1, &v25) );
    if ( !*(_DWORD *)(a1 + 2404) )
      return v21;
    v15 = 0;
    if ( !a2 )
      return v21;
    while ( !KeReadStateEvent((PRKEVENT)*a3) )
    {
      ++v15;
      ++a3;
      if ( v15 >= a2 )
        return v21;
    }
    return v15;
  }
  else
  {
    v9 = *(_DWORD *)(a1 + 712) || *(_DWORD *)(a1 + 60);
    v10 = 0;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1648), &LockHandle);
    v11 = *(_DWORD *)(a1 + 40);
    v12 = 0LL;
    if ( v11 )
    {
      while ( 1 )
      {
        v13 = *(_QWORD *)(a1 + 8 * v12 + 2576);
        if ( v13 )
        {
          if ( *(_DWORD *)(v13 + 2344) )
            break;
        }
        v12 = (unsigned int)(v12 + 1);
        if ( (unsigned int)v12 >= v11 )
          goto LABEL_8;
      }
      v10 = 1;
    }
LABEL_8:
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v9 || v10 )
    {
      if ( *(_BYTE *)(a1 + 700) )
      {
        *(_QWORD *)(a1 + 1312) = MEMORY[0xFFFFF78000000320];
        KeSetEvent((PRKEVENT)(a1 + 1280), 0, 1u);
      }
    }
    Alertable = a5;
    while ( 1 )
    {
      v15 = KeWaitForMultipleObjects(a2, a3, WaitAny, Executive, 0, Alertable, Timeout, 0LL);
      if ( Alertable )
      {
        if ( PsIsThreadTerminating(KeGetCurrentThread()) )
          break;
      }
      if ( v15 != 257 )
        return v15;
    }
    v22 = WdLogNewEntry5_WdWarning(v17, v16);
    WdLogEvent5_WdWarning(v22);
    return 3221226166LL;
  }
}
