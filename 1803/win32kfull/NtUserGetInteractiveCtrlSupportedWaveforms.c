/*
 * XREFs of NtUserGetInteractiveCtrlSupportedWaveforms @ 0x1C01EEDE0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0103948 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     ?GetDeviceSupportedWaveforms@InteractiveControlManager@@QEAAJKPEAPEAU_WAVEFORM_INFO@@PEAJ@Z @ 0x1C020C004 (-GetDeviceSupportedWaveforms@InteractiveControlManager@@QEAAJKPEAPEAU_WAVEFORM_INFO@@PEAJ@Z.c)
 */

__int64 __fastcall NtUserGetInteractiveCtrlSupportedWaveforms(unsigned __int16 a1, volatile void *a2, int *a3)
{
  _DWORD *v6; // rdx
  int v7; // edi
  __int64 v8; // rcx
  ULONG64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  SIZE_T v16; // r14
  __int64 CurrentProcessWow64Process; // rax
  InteractiveControlManager *v18; // rax
  int v20; // [rsp+20h] [rbp-48h]
  int v21; // [rsp+80h] [rbp+18h] BYREF
  void *Src; // [rsp+88h] [rbp+20h] BYREF

  EnterSharedCrit(0LL, 1LL);
  v7 = 0;
  v21 = 0;
  Src = 0LL;
  if ( !a3 )
  {
    v8 = 87LL;
LABEL_3:
    UserSetLastError(v8, (__int64)v6);
    goto LABEL_21;
  }
  ProbeForRead(a3, 4uLL, 4u);
  v16 = *a3;
  v20 = *a3;
  if ( a2 && (int)v16 > 0 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v13, v12, v14, v15);
    ProbeForWrite(a2, v16, CurrentProcessWow64Process != 0 ? 1 : 4);
  }
  v18 = InteractiveControlManager::Instance();
  if ( (int)InteractiveControlManager::GetDeviceSupportedWaveforms(v18, a1, (struct _WAVEFORM_INFO **)&Src, &v21) >= 0 )
  {
    if ( (unsigned __int64)v21 >= 0xFFFFFFF )
    {
      v8 = 534LL;
      goto LABEL_3;
    }
    v10 = (unsigned int)(8 * v21);
    if ( (int)v16 > 0 && (int)v16 < (int)v10 )
    {
      v8 = 122LL;
      goto LABEL_3;
    }
    v9 = MmUserProbeAddress;
    v6 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v6 = (_DWORD *)MmUserProbeAddress;
    *v6 = *v6;
    if ( a2 && (v6 = Src) != 0LL && v20 >= (int)v10 )
    {
      *a3 = v10;
      memmove((void *)a2, v6, (int)v10);
    }
    else
    {
      *a3 = v10;
    }
    v7 = 1;
  }
LABEL_21:
  UserSessionSwitchLeaveCrit(v9, v6, v10, v11);
  return v7;
}
