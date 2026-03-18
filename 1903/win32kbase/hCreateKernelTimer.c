/*
 * XREFs of hCreateKernelTimer @ 0x1C0106F30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 */

void *__fastcall hCreateKernelTimer(TIMER_TYPE TimerType)
{
  NTSTATUS v1; // eax
  int v2; // edx
  struct _OBJECT_ATTRIBUTES v4; // [rsp+30h] [rbp-38h] BYREF
  void *v5; // [rsp+78h] [rbp+10h] BYREF

  memset(&v4.Length + 1, 0, 20);
  memset(&v4.Attributes + 1, 0, 20);
  v5 = 0LL;
  v4.Length = 48;
  v4.Attributes = 512;
  v1 = ZwCreateTimer(&v5, 0x1F0003u, &v4, TimerType);
  if ( v1 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_D((_DWORD)gBaseLog, v2, 17, 11, (__int64)&WPP_94568d5f27b1311edceb637cdcfb42af_Traceguids, v1);
  }
  return v5;
}
