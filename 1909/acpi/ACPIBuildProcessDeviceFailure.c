/*
 * XREFs of ACPIBuildProcessDeviceFailure @ 0x1C004B970
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_LLqss @ 0x1C00174D8 (WPP_RECORDER_SF_LLqss.c)
 *     ACPIBuildProcessGenericComplete @ 0x1C001CEA0 (ACPIBuildProcessGenericComplete.c)
 */

__int64 __fastcall ACPIBuildProcessDeviceFailure(PSLIST_ENTRY ListEntry)
{
  __int64 v1; // rbx
  int Next; // r10d
  char v4; // al
  void *v5; // rcx
  void *v6; // r8
  __int64 v7; // rdx
  int v9; // [rsp+20h] [rbp-38h]

  v1 = *((_QWORD *)&ListEntry[2].Next + 1);
  Next = (int)ListEntry[3].Next;
  v4 = 0;
  v5 = &unk_1C006FE7D;
  v6 = &unk_1C006FE7D;
  if ( v1 )
  {
    v7 = *(_QWORD *)(v1 + 8);
    v4 = v1;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v5 = *(void **)(v1 + 560);
      if ( (v7 & 0x400000000000LL) != 0 )
        v6 = *(void **)(v1 + 568);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_LLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      (__int64)v6,
      0x1Au,
      v9,
      (char)ListEntry[2].Next,
      Next,
      v4,
      (__int64)v5,
      (__int64)v6);
  _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x2000000000000uLL);
  return ACPIBuildProcessGenericComplete(ListEntry);
}
