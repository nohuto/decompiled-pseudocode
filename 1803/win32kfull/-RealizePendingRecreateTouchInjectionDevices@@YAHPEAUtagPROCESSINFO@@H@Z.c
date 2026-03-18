/*
 * XREFs of ?RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z @ 0x1C01A8798
 * Callers:
 *     ?CheckCurrentInjectionConfiguration@@YAXXZ @ 0x1C01A8428 (-CheckCurrentInjectionConfiguration@@YAXXZ.c)
 * Callees:
 *     ForceUpdatePointerDeviceSystemMetricKeys @ 0x1C00BAFC0 (ForceUpdatePointerDeviceSystemMetricKeys.c)
 *     _InitializeTouchInjectionWorker @ 0x1C01A9298 (_InitializeTouchInjectionWorker.c)
 */

__int64 __fastcall RealizePendingRecreateTouchInjectionDevices(struct tagPROCESSINFO *a1, int a2)
{
  __int64 v2; // rdi
  unsigned int v5; // ebp
  _QWORD *v6; // rcx
  __int64 v7; // rax
  _QWORD *v8; // rdx

  v2 = *((_QWORD *)a1 + 111);
  v5 = 1;
  ForceUpdatePointerDeviceSystemMetricKeys();
  if ( gpTouchInjectorProcesses )
  {
    if ( v2 )
    {
      if ( !a2 && !*(_DWORD *)(v2 + 52) )
        return v5;
      v5 = InitializeTouchInjectionWorker(
             *(unsigned int *)(*((_QWORD *)a1 + 111) + 28LL),
             *(unsigned int *)(*((_QWORD *)a1 + 111) + 24LL),
             a1);
    }
    if ( a2 )
    {
      v6 = (_QWORD *)gpTouchInjectorProcesses;
      if ( gpTouchInjectorProcesses )
      {
        do
        {
          v7 = v6[1];
          v8 = (_QWORD *)*v6;
          if ( (struct tagPROCESSINFO *)v7 != a1 )
            *(_DWORD *)(*(_QWORD *)(v7 + 888) + 52LL) = 1;
          v6 = v8;
        }
        while ( v8 );
      }
    }
  }
  return v5;
}
