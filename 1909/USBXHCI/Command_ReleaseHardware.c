/*
 * XREFs of Command_ReleaseHardware @ 0x1C005E5E0
 * Callers:
 *     Controller_WdfEvtDeviceReleaseHardware @ 0x1C0063E20 (Controller_WdfEvtDeviceReleaseHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     XilCommand_FreeResources @ 0x1C000C074 (XilCommand_FreeResources.c)
 */

void __fastcall Command_ReleaseHardware(__int64 a1)
{
  __int64 v2; // rdx
  void *v3; // rcx

  if ( *(_DWORD *)(a1 + 32) == 1 )
  {
    XilCommand_FreeResources(a1);
    if ( *(_QWORD *)(a1 + 96) != a1 + 96 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        3u,
        7u,
        0xEu,
        (__int64)&WPP_6807f6924beb3ee6c5fb59b3efd77224_Traceguids);
    if ( *(_QWORD *)(a1 + 80) != a1 + 80 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        3u,
        7u,
        0xFu,
        (__int64)&WPP_6807f6924beb3ee6c5fb59b3efd77224_Traceguids);
    v2 = *(_QWORD *)(a1 + 16);
    if ( v2 && v2 != *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL) )
    {
      imp_WppRecorderLogDelete(WPP_GLOBAL_Control, v2);
      *(_QWORD *)(a1 + 16) = 0LL;
    }
    v3 = *(void **)(a1 + 72);
    if ( v3 )
    {
      ExFreePoolWithTag(v3, 0x49434858u);
      *(_QWORD *)(a1 + 72) = 0LL;
    }
  }
  *(_DWORD *)(a1 + 32) = 2;
}
