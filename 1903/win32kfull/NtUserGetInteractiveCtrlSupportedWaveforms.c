/*
 * XREFs of NtUserGetInteractiveCtrlSupportedWaveforms @ 0x1C022D1C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C00D8DC8 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     ?GetDeviceSupportedWaveforms@InteractiveControlManager@@QEAAJKPEAPEAU_WAVEFORM_INFO@@PEAJ@Z @ 0x1C024DFC4 (-GetDeviceSupportedWaveforms@InteractiveControlManager@@QEAAJKPEAPEAU_WAVEFORM_INFO@@PEAJ@Z.c)
 */

__int64 __fastcall NtUserGetInteractiveCtrlSupportedWaveforms(unsigned __int16 a1, volatile void *a2, int *a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // edi
  __int64 v10; // rcx
  ULONG64 v11; // rcx
  __int64 v12; // rcx
  SIZE_T v13; // r14
  __int64 CurrentProcessWow64Process; // rax
  InteractiveControlManager *v15; // rax
  _DWORD *v16; // rdx
  void *v17; // rdx
  int v19; // [rsp+20h] [rbp-48h]
  int v20; // [rsp+80h] [rbp+18h] BYREF
  void *Src; // [rsp+88h] [rbp+20h] BYREF

  EnterSharedCrit(0LL, 1LL);
  v9 = 0;
  v20 = 0;
  Src = 0LL;
  if ( !a3 )
  {
    v10 = 87LL;
LABEL_3:
    UserSetLastError(v10, v6, v7, v8);
    goto LABEL_21;
  }
  ProbeForRead(a3, 4uLL, 4u);
  v13 = *a3;
  v19 = *a3;
  if ( a2 && (int)v13 > 0 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v12);
    ProbeForWrite(a2, v13, CurrentProcessWow64Process != 0 ? 1 : 4);
  }
  v15 = InteractiveControlManager::Instance();
  if ( (int)InteractiveControlManager::GetDeviceSupportedWaveforms(v15, a1, (struct _WAVEFORM_INFO **)&Src, &v20) >= 0 )
  {
    v7 = v20;
    if ( (unsigned __int64)v20 >= 0xFFFFFFF )
    {
      v10 = 534LL;
      goto LABEL_3;
    }
    v7 = (unsigned int)(8 * v20);
    if ( (int)v13 > 0 && (int)v13 < (int)v7 )
    {
      v10 = 122LL;
      goto LABEL_3;
    }
    v11 = MmUserProbeAddress;
    v16 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v16 = (_DWORD *)MmUserProbeAddress;
    *v16 = *v16;
    if ( a2 && (v17 = Src) != 0LL && v19 >= (int)v7 )
    {
      *a3 = v7;
      memmove((void *)a2, v17, (int)v7);
    }
    else
    {
      *a3 = v7;
    }
    v9 = 1;
  }
LABEL_21:
  UserSessionSwitchLeaveCrit(v11);
  return v9;
}
