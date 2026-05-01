/*
 * XREFs of ?RmpGameModeUnapplyCpuSetAllocation@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18005FFC0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpSystemSetProcessDefaultCpuSets@@YAJPEAXPEA_K@Z @ 0x1800454F8 (-RmpSystemSetProcessDefaultCpuSets@@YAJPEAXPEA_K@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ?RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x18005D8C4 (-RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCE.c)
 *     ?RmpSystemSetProcessConstrainedCpuSets@@YAJPEAXE@Z @ 0x180066690 (-RmpSystemSetProcessConstrainedCpuSets@@YAJPEAXE@Z.c)
 */

void __fastcall RmpGameModeUnapplyCpuSetAllocation(
        struct _RM_GAME_MODE_CONTEXT *a1,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS *a2)
{
  int v2; // eax
  const struct _TlgProvider_t *v5; // rcx
  int v6; // eax
  int v7; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]
  int v11; // [rsp+64h] [rbp-14h]

  v2 = *((_DWORD *)a2 + 35);
  if ( (v2 & 0x10) != 0 )
  {
    RmpSystemSetProcessConstrainedCpuSets(*((HANDLE *)a2 + 5), 0);
    v2 = *((_DWORD *)a2 + 35);
  }
  if ( (v2 & 4) != 0 )
    RmpSystemSetProcessDefaultCpuSets(*((HANDLE *)a2 + 5), 0LL);
  RmpAcquireGlobalLock();
  RmpCpuSetManagerReleaseProcessRegistrationEx(
    (struct _RM_CPU_SET_MANAGER *)(*(_QWORD *)a1 + 680LL),
    *((struct _RM_CPU_SET_PROCESS_REGISTRATION **)a2 + 19),
    1);
  RmpReleaseGlobalLock();
  *((_QWORD *)a2 + 19) = 0LL;
  if ( dword_18009B0B0 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 1uLL) )
    {
      v6 = *((_DWORD *)a2 + 27);
      v11 = 0;
      v7 = v6;
      v9 = &v7;
      v10 = 4;
      TlgWrite(v5, &unk_180086D37, 0LL, 0LL, 3u, &pData);
    }
  }
}
