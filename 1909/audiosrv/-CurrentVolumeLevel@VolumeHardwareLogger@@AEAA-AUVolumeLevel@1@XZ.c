/*
 * XREFs of ?CurrentVolumeLevel@VolumeHardwareLogger@@AEAA?AUVolumeLevel@1@XZ @ 0x18005AE80
 * Callers:
 *     ?Initialize@VolumeHardwareLogger@@QEAAXPEAVCVolumeHardware@@@Z @ 0x18005ADD0 (-Initialize@VolumeHardwareLogger@@QEAAXPEAVCVolumeHardware@@@Z.c)
 *     ?HardwareInitiatedChange@VolumeHardwareLogger@@QEAAXXZ @ 0x1800C5624 (-HardwareInitiatedChange@VolumeHardwareLogger@@QEAAXXZ.c)
 *     ?LogBurst@VolumeHardwareLogger@@QEAAXXZ @ 0x1800C63E8 (-LogBurst@VolumeHardwareLogger@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
float *__fastcall VolumeHardwareLogger::CurrentVolumeLevel(__int64 a1, float *a2)
{
  __int64 v4; // rcx

  *a2 = 0.0;
  a2[1] = 0.0;
  a2[2] = 0.0;
  EnterCriticalSection((LPCRITICAL_SECTION)a1);
  v4 = *(_QWORD *)(a1 + 64);
  if ( v4 && *(float *)(a1 + 80) != 0.0 )
  {
    (*(void (__fastcall **)(__int64, float *))(*(_QWORD *)v4 + 104LL))(v4, a2);
    (*(void (__fastcall **)(_QWORD, _DWORD *))(**(_QWORD **)(a1 + 64) + 112LL))(*(_QWORD *)(a1 + 64), (_DWORD *)a2 + 1);
    *((_DWORD *)a2 + 2) = (int)(float)((float)((float)(*a2 - *(float *)(a1 + 72)) / *(float *)(a1 + 80)) + 0.5);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)a1);
  return a2;
}
