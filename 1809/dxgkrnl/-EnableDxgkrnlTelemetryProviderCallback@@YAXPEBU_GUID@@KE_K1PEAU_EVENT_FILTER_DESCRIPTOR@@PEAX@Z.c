/*
 * XREFs of ?EnableDxgkrnlTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C013BC60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00E0E98 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

void __fastcall EnableDxgkrnlTelemetryProviderCallback(
        __int64 SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  struct DXGGLOBAL *Global; // rax

  if ( ControlCode == 1 )
  {
    if ( (unsigned int)++dword_1C008E724 <= 4 )
    {
LABEL_3:
      Global = DXGGLOBAL::GetGlobal(SourceId);
      DXGGLOBAL::IterateAdaptersWithCallback(
        (__int64)Global,
        (__int64 (__fastcall *)(_QWORD *, __int64))AdapterTelemetryEnabledCallback,
        0LL,
        0);
      return;
    }
    SourceId = MEMORY[0xFFFFF78000000014] - qword_1C008E728;
    if ( (unsigned __int64)(MEMORY[0xFFFFF78000000014] - qword_1C008E728) > 0xC92A69C000LL )
    {
      qword_1C008E728 = MEMORY[0xFFFFF78000000014];
      goto LABEL_3;
    }
  }
}
