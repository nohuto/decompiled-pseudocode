/*
 * XREFs of IsCapturedByThread @ 0x1C0151390
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C002F22C (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall IsCapturedByThread(struct tagTHREADINFO **a1)
{
  __int64 v2; // rax
  char v3; // dl

  v2 = (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C01C3018 + 8LL))(qword_1C01C3018);
  v3 = 0;
  if ( v2 )
    return CInputDest::GetThreadInfo((CInputDest *)(v2 + 2552)) == *a1;
  return v3;
}
