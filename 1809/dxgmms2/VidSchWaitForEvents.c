/*
 * XREFs of VidSchWaitForEvents @ 0x1C0002AC0
 * Callers:
 *     VidSchSuspendResumeDevice @ 0x1C0011040 (VidSchSuspendResumeDevice.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0066B38 (VidSchWaitForCompletionEvent.c)
 *     VidSchiSwitchNodeFromContext @ 0x1C007A720 (VidSchiSwitchNodeFromContext.c)
 *     VidSchSuspendAdapter @ 0x1C007E2A0 (VidSchSuspendAdapter.c)
 *     VidSchSwitchFromContext @ 0x1C007E390 (VidSchSwitchFromContext.c)
 *     VidSchSwitchFromDevice @ 0x1C00C99B0 (VidSchSwitchFromDevice.c)
 * Callees:
 *     VidSchiCheckHwProgress @ 0x1C0069B20 (VidSchiCheckHwProgress.c)
 */

__int64 __fastcall VidSchWaitForEvents(__int64 a1, ULONG a2, PVOID *a3, union _LARGE_INTEGER *a4, BOOLEAN a5)
{
  union _LARGE_INTEGER *Timeout; // r14
  bool v9; // di
  char v10; // bp
  unsigned int v11; // r8d
  unsigned int v12; // edx
  __int64 v13; // rcx
  BOOLEAN Alertable; // di
  unsigned int v15; // ebx
  char v17; // bp
  ULONG v18; // esi
  NTSTATUS v19; // eax
  unsigned int v20; // edi
  __int64 v21; // rax
  __int64 v22; // [rsp+40h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-40h] BYREF
  char v24; // [rsp+90h] [rbp+8h] BYREF

  Timeout = a4;
  if ( KeGetCurrentThread() == *(struct _KTHREAD **)(a1 + 152) )
  {
    v17 = 0;
    if ( !a4 )
    {
      Timeout = (union _LARGE_INTEGER *)&v22;
      v17 = 1;
      v22 = -(__int64)((10000000 * (unsigned __int64)g_TdrConfig[1]) >> 1);
    }
    v24 = 0;
    v18 = 0;
    do
    {
      v19 = KeWaitForMultipleObjects(a2, a3, WaitAny, Executive, 0, 0, Timeout, 0LL);
      v20 = v19;
      if ( !v17 || v19 != 258 )
        return v20;
    }
    while ( (unsigned int)VidSchiCheckHwProgress(a1, &v24) );
    if ( !*(_DWORD *)(a1 + 2404) || !a2 )
      return v20;
    while ( !KeReadStateEvent((PRKEVENT)*a3) )
    {
      ++v18;
      ++a3;
      if ( v18 >= a2 )
        return v20;
    }
    return v18;
  }
  else
  {
    v9 = *(_DWORD *)(a1 + 712) || *(_DWORD *)(a1 + 60);
    v10 = 0;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1648), &LockHandle);
    v11 = *(_DWORD *)(a1 + 40);
    v12 = 0;
    if ( v11 )
    {
      while ( 1 )
      {
        v13 = *(_QWORD *)(a1 + 8LL * v12 + 2576);
        if ( v13 )
        {
          if ( *(_DWORD *)(v13 + 2336) )
            break;
        }
        if ( ++v12 >= v11 )
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
    v21 = WdLogNewEntry5_WdWarning();
    WdLogEvent5_WdWarning(v21);
    return 3221226166LL;
  }
}
