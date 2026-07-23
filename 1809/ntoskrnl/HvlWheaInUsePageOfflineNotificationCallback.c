/*
 * XREFs of HvlWheaInUsePageOfflineNotificationCallback @ 0x140271460
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

bool __fastcall HvlWheaInUsePageOfflineNotificationCallback(
        PFN_NUMBER Page,
        __int64 PlatformDirected,
        BOOLEAN Poisoned,
        PVOID Context)
{
  char v4; // bl
  PFN_NUMBER v6; // [rsp+20h] [rbp-28h] BYREF
  char v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+2Ah] [rbp-1Eh]
  __int64 v9; // [rsp+30h] [rbp-18h]
  int v10; // [rsp+38h] [rbp-10h]

  v4 = 0;
  if ( !Poisoned )
  {
    v6 = Page << 12;
    v9 = 0LL;
    v10 = 0;
    v7 = 0;
    v8 = 0x1000000;
    return (int)((__int64 (__fastcall *)(PFN_NUMBER *, __int64, _QWORD, PVOID))HvlpWheaErrorNotificationCallback)(
                  &v6,
                  PlatformDirected,
                  0LL,
                  Context) >= 0;
  }
  return v4;
}
