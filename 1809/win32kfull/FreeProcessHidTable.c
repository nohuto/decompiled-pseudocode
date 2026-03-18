/*
 * XREFs of FreeProcessHidTable @ 0x1C01332A8
 * Callers:
 *     DestroyProcessHidRequests @ 0x1C0133280 (DestroyProcessHidRequests.c)
 * Callees:
 *     FreeHidProcessRequest @ 0x1C0102E38 (FreeHidProcessRequest.c)
 */

void __fastcall FreeProcessHidTable(__int64 *a1)
{
  struct tagPROCESS_HID_REQUEST **v1; // rdi
  BOOL v3; // esi
  struct tagPROCESS_HID_REQUEST **i; // rdi
  struct tagPROCESS_HID_REQUEST **j; // rdi
  __int64 *v6; // rax
  __int64 **v7; // rcx

  v1 = (struct tagPROCESS_HID_REQUEST **)(a1 + 2);
  v3 = *v1 != (struct tagPROCESS_HID_REQUEST *)v1 || (__int64 *)a1[4] != a1 + 4 || (__int64 *)a1[6] != a1 + 6;
  HMAssignmentUnlock(a1 + 9);
  HMAssignmentUnlock(a1 + 8);
  while ( *v1 != (struct tagPROCESS_HID_REQUEST *)v1 )
    FreeHidProcessRequest(*v1, 1, (struct tagPROCESS_HID_TABLE *)a1);
  for ( i = (struct tagPROCESS_HID_REQUEST **)(a1 + 4);
        *i != (struct tagPROCESS_HID_REQUEST *)i;
        FreeHidProcessRequest(*i, 2, (struct tagPROCESS_HID_TABLE *)a1) )
  {
    ;
  }
  for ( j = (struct tagPROCESS_HID_REQUEST **)(a1 + 6);
        *j != (struct tagPROCESS_HID_REQUEST *)j;
        FreeHidProcessRequest(*j, 3, (struct tagPROCESS_HID_TABLE *)a1) )
  {
    ;
  }
  v6 = (__int64 *)*a1;
  if ( *(__int64 **)(*a1 + 8) != a1 || (v7 = (__int64 **)a1[1], *v7 != a1) )
    __fastfail(3u);
  *v7 = v6;
  v6[1] = (__int64)v7;
  Win32FreePool(a1);
  --gnHidProcess;
  if ( v3 )
    CHidInput::HandleDirectStartStopDeviceReadRequest(gpHidInput);
}
