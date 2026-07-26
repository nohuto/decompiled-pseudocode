/*
 * XREFs of NdisMapFile @ 0x1C0136820
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0032368 (WPP_RECORDER_SF_D.c)
 */

void __stdcall NdisMapFile(PNDIS_STATUS Status, PVOID *MappedBuffer, NDIS_HANDLE FileHandle)
{
  PVOID *v4; // rsi
  int v6; // eax
  void *v7; // rax

  v4 = MappedBuffer;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(MappedBuffer) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)MappedBuffer,
      1,
      24,
      (struct _GUID *)&WPP_34c34292621439c17f3df840409c7e2a_Traceguids);
  }
  if ( *((_BYTE *)FileHandle + 16) == 1 )
  {
    v6 = -1073676259;
  }
  else
  {
    v7 = *(void **)FileHandle;
    *((_BYTE *)FileHandle + 16) = 1;
    *v4 = v7;
    v6 = 0;
  }
  *Status = v6;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(MappedBuffer) = 4;
    WPP_RECORDER_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)MappedBuffer,
      1,
      25,
      (struct _GUID *)&WPP_34c34292621439c17f3df840409c7e2a_Traceguids,
      v6);
  }
}
