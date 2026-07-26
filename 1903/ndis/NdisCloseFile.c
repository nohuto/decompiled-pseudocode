/*
 * XREFs of NdisCloseFile @ 0x1C0080B20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 */

void __stdcall NdisCloseFile(NDIS_HANDLE FileHandle)
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      22,
      (struct _GUID *)&WPP_34c34292621439c17f3df840409c7e2a_Traceguids);
  ExFreePoolWithTag(*(PVOID *)FileHandle, 0);
  ExFreePoolWithTag(FileHandle, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      23,
      (struct _GUID *)&WPP_34c34292621439c17f3df840409c7e2a_Traceguids);
}
