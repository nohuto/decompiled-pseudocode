/*
 * XREFs of ?VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z @ 0x1C0039380
 * Callers:
 *     <none>
 * Callees:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000A2E0 (VidSchDdiNotifyInterruptWorker.c)
 *     VidSchiLogInterrupt @ 0x1C000A5D0 (VidSchiLogInterrupt.c)
 *     McTemplateK0q @ 0x1C0019440 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 */

unsigned __int8 __fastcall VidSchiCallNotifyInterruptAtISR(int **a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // rcx
  const GUID *v5; // r8
  int v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  char v9; // [rsp+30h] [rbp-18h]

  v7 = -1;
  v8 = 0LL;
  if ( (qword_1C004D010 & 2) != 0 )
  {
    v9 = 1;
    v7 = 4016;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 4016);
  }
  else
  {
    v9 = 0;
  }
  DxgCoreInterface[73]((__int64)&v7, 4016LL);
  VidSchiLogInterrupt(*((_QWORD *)*a1 + 66), a1[1], 0);
  VidSchDdiNotifyInterruptWorker((__int64)*a1, (__int64)a1[1], 0LL);
  ((void (__fastcall *)(int *))DxgCoreInterface[74])(&v7);
  if ( v9 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v4, &EventProfilerExit, v5, v7);
  return 1;
}
