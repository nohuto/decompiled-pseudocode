/*
 * XREFs of TtmpInitializeWatchdogTimeouts @ 0x14087F434
 * Callers:
 *     TtmpStartCallout @ 0x14087F840 (TtmpStartCallout.c)
 * Callees:
 *     TtmpGetConfigOverride @ 0x14087F33C (TtmpGetConfigOverride.c)
 */

char __fastcall TtmpInitializeWatchdogTimeouts(__int64 a1)
{
  _DWORD *v1; // rbx
  __int64 v2; // rdi
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = &unk_140402A50;
  v2 = 6LL;
  do
  {
    if ( TtmpGetConfigOverride(a1, *((const WCHAR **)v1 - 1), &v4) == 1 )
      *v1 = v4;
    v1 += 6;
    --v2;
  }
  while ( v2 );
  if ( TtmpGetConfigOverride(a1, L"TtmDeviceCalloutCrashEnabled", &v4) == 1 && v4 )
    TtmpDeviceCalloutCrashDumpEnabled = 1;
  return 1;
}
