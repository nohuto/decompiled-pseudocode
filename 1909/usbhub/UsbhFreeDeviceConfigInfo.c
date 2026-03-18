/*
 * XREFs of UsbhFreeDeviceConfigInfo @ 0x1C001F598
 * Callers:
 *     UsbhQueryParentHubConfig @ 0x1C001F44C (UsbhQueryParentHubConfig.c)
 * Callees:
 *     <none>
 */

void __fastcall UsbhFreeDeviceConfigInfo(char *P)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = *(void **)(P + 36);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(P + 36) = 0LL;
    *((_DWORD *)P + 8) = 0;
  }
  v3 = *(void **)(P + 20);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    *(_QWORD *)(P + 20) = 0LL;
    *((_DWORD *)P + 4) = 0;
  }
  v4 = *(void **)(P + 52);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    *(_QWORD *)(P + 52) = 0LL;
    *((_DWORD *)P + 12) = 0;
  }
  ExFreePoolWithTag(P, 0);
}
