/*
 * XREFs of ?EnableDxgkrnlTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C01504A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C010287C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

void __fastcall EnableDxgkrnlTelemetryProviderCallback(
        __int64 SourceId,
        __int64 ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  struct DXGGLOBAL *Global; // rax

  if ( (_DWORD)ControlCode == 1 )
  {
    if ( (unsigned int)++dword_1C00A2DBC <= 4 )
    {
LABEL_3:
      Global = DXGGLOBAL::GetGlobal(SourceId, ControlCode);
      DXGGLOBAL::IterateAdaptersWithCallback((__int64)Global, (__int64)AdapterTelemetryEnabledCallback, 0LL, 0);
      return;
    }
    ControlCode = 864000000000LL;
    SourceId = MEMORY[0xFFFFF78000000014] - qword_1C00A2DC0;
    if ( (unsigned __int64)(MEMORY[0xFFFFF78000000014] - qword_1C00A2DC0) > 0xC92A69C000LL )
    {
      qword_1C00A2DC0 = MEMORY[0xFFFFF78000000014];
      goto LABEL_3;
    }
  }
}
