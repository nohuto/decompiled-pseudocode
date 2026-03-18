/*
 * XREFs of hCreateKernelEvent @ 0x1C00A7680
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 */

void *__fastcall hCreateKernelEvent(EVENT_TYPE EventType, BOOLEAN a2)
{
  NTSTATUS v2; // eax
  int v3; // edx
  struct _OBJECT_ATTRIBUTES v5; // [rsp+30h] [rbp-38h] BYREF
  void *v6; // [rsp+80h] [rbp+18h] BYREF

  memset(&v5.Length + 1, 0, 20);
  memset(&v5.Attributes + 1, 0, 20);
  v6 = 0LL;
  v5.Length = 48;
  v5.Attributes = 512;
  v2 = ZwCreateEvent(&v6, 0x1F0003u, &v5, EventType, a2);
  if ( v2 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 4;
    WPP_RECORDER_SF_D((_DWORD)gBaseLog, v3, 17, 10, (__int64)&WPP_94568d5f27b1311edceb637cdcfb42af_Traceguids, v2);
  }
  return v6;
}
