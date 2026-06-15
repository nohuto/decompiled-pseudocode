/*
 * XREFs of ?OnVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@UEAAJKPEBG@Z @ 0x180114C30
 * Callers:
 *     <none>
 * Callees:
 *     ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x18011566C (-ScheduleWorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?LogVolumePolicyChange@CSpatialAudioResourceManagerTraceLogger@@QEAAXKPEBG@Z @ 0x180116EA4 (-LogVolumePolicyChange@CSpatialAudioResourceManagerTraceLogger@@QEAAXKPEBG@Z.c)
 */

__int64 __fastcall Sarm::CSpatialAudioResourceManager::OnVolumePolicyChange(
        Sarm::CSpatialAudioResourceManager *this,
        unsigned int a2,
        const unsigned __int16 *a3)
{
  __int128 v6; // [rsp+20h] [rbp-58h]
  __int64 (__fastcall **v7)(); // [rsp+30h] [rbp-48h] BYREF
  __int128 v8; // [rsp+38h] [rbp-40h]
  __int64 (__fastcall ***v9)(); // [rsp+68h] [rbp-10h]

  CSpatialAudioResourceManagerTraceLogger::LogVolumePolicyChange(this, a2, a3);
  DWORD2(v6) = a2;
  *(_QWORD *)&v6 = (char *)this - 8;
  v7 = off_1801589F8;
  v9 = &v7;
  v8 = v6;
  return CWorkFifo::ScheduleWorkItem((Sarm::CSpatialAudioResourceManager *)((char *)this + 336));
}
