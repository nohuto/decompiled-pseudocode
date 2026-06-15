/*
 * XREFs of ?GetSpatialUtilization@CAudioDeviceGraph@@UEAAJPEAI00@Z @ 0x1400385F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAdaptiveSpatialAudioRenderer@CPipeInstance@@QEBAJPEAPEAUIAdaptiveSpatialAudioRenderer@@@Z @ 0x14000B744 (-GetAdaptiveSpatialAudioRenderer@CPipeInstance@@QEBAJPEAPEAUIAdaptiveSpatialAudioRenderer@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetSpatialUtilization(
        CAudioDeviceGraph *this,
        unsigned int *a2,
        unsigned int *a3,
        unsigned int *a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  CPipeInstance *v9; // rcx
  unsigned int v10; // esi
  struct IAdaptiveSpatialAudioRenderer *v12; // [rsp+50h] [rbp+8h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  v9 = (CPipeInstance *)*((_QWORD *)this + 20);
  v12 = 0LL;
  v10 = -2147467262;
  if ( (int)CPipeInstance::GetAdaptiveSpatialAudioRenderer(v9, &v12) >= 0 )
    v10 = (*(__int64 (__fastcall **)(struct IAdaptiveSpatialAudioRenderer *, unsigned int *, unsigned int *, unsigned int *))(*(_QWORD *)v12 + 72LL))(
            v12,
            a2,
            a3,
            a4);
  if ( v12 )
    (*(void (__fastcall **)(struct IAdaptiveSpatialAudioRenderer *))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v4 )
    LeaveCriticalSection(v4);
  return v10;
}
