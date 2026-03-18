/*
 * XREFs of ?DxgKrnlTelemetryGlobal_LogTelemetryEvent@@YA_NXZ @ 0x1C00014D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool DxgKrnlTelemetryGlobal_LogTelemetryEvent(void)
{
  bool v0; // di
  __int64 v1; // rbx
  unsigned int v2; // ecx
  unsigned int v4; // eax
  _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v0 = 0;
  v1 = MEMORY[0xFFFFF78000000014];
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  v2 = dword_1C008E720;
  if ( v1 - g_DxgKrnlTelemetryProviderGlobal > 600000000 )
  {
    if ( !dword_1C008E720 )
      goto LABEL_5;
    v4 = 10000000 * ((v1 - g_DxgKrnlTelemetryProviderGlobal) / 60);
    if ( dword_1C008E720 <= v4 )
      v2 = 0;
    else
      v2 = dword_1C008E720 - v4;
LABEL_4:
    dword_1C008E720 = v2;
LABEL_5:
    v0 = v2 < 0x3E8;
    goto LABEL_6;
  }
  if ( (unsigned int)dword_1C008E720 < 0x3E8 )
  {
    v2 = dword_1C008E720 + 1;
    goto LABEL_4;
  }
LABEL_6:
  g_DxgKrnlTelemetryProviderGlobal = v1;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v0;
}
