/*
 * XREFs of ??1?$ActivityData@VMobilityExperienceLogging@Telemetry@MobilityExperience@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VMobilityExperienceLogging@Telemetry@MobilityExperience@@$00$0IAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180046004
 * Callers:
 *     ??1HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@QEAA@XZ @ 0x1800457C8 (--1HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExperie.c)
 * Callees:
 *     ?Provider@MobilityExperienceLogging@Telemetry@MobilityExperience@@SAQEBU_TlgProvider_t@@XZ @ 0x18000A6F0 (-Provider@MobilityExperienceLogging@Telemetry@MobilityExperience@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ??$_TlgWriteActivityAutoStop@$0IAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x18004B488 (--$_TlgWriteActivityAutoStop@$0IAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 */

void __fastcall wil::ActivityBase<MobilityExperience::Telemetry::MobilityExperienceLogging,1,140737488355328,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<MobilityExperience::Telemetry::MobilityExperienceLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<MobilityExperience::Telemetry::MobilityExperienceLogging,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  volatile signed __int32 *v2; // rcx
  HANDLE ProcessHeap; // rax
  HANDLE v4; // rax
  const struct _TlgProvider_t *v5; // rax

  v2 = *(volatile signed __int32 **)(a1 + 224);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, *(LPVOID *)(a1 + 224));
    }
    *(_QWORD *)(a1 + 224) = 0LL;
    *(_QWORD *)(a1 + 232) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 64) )
  {
    v4 = GetProcessHeap();
    HeapFree(v4, 0, *(LPVOID *)(a1 + 56));
    *(_BYTE *)(a1 + 64) = 0;
  }
  *(_QWORD *)(a1 + 56) = 0LL;
  if ( *(_DWORD *)a1 == 1 )
  {
    *(_DWORD *)a1 = 2;
    v5 = MobilityExperience::Telemetry::MobilityExperienceLogging::Provider();
    _TlgWriteActivityAutoStop<140737488355328,5>(v5, a1 + 8);
  }
  *(_DWORD *)a1 = 3;
}
