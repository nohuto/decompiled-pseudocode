/*
 * XREFs of ?PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C0254164
 * Callers:
 *     ?QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z @ 0x1C0254334 (-QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C00D8DC8 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     GetUserHandedness @ 0x1C01EF790 (GetUserHandedness.c)
 *     ?CreateDeadzone@InteractiveControlDevice@@QEAAJXZ @ 0x1C0253394 (-CreateDeadzone@InteractiveControlDevice@@QEAAJXZ.c)
 *     ?DestroyDeadzone@InteractiveControlDevice@@QEAAJXZ @ 0x1C0253750 (-DestroyDeadzone@InteractiveControlDevice@@QEAAJXZ.c)
 *     ?DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C02537A8 (-DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 *     ?SendHapticFeedbackOutput@InteractiveControlDevice@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1C02545E4 (-SendHapticFeedbackOutput@InteractiveControlDevice@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z.c)
 */

void __fastcall InteractiveControlDevice::PerformInputActions(
        InteractiveControlDevice *this,
        struct InteractiveControlInput *a2,
        unsigned int a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  _WORD v16[2]; // [rsp+30h] [rbp-30h] BYREF
  int v17; // [rsp+34h] [rbp-2Ch]
  __int64 v18; // [rsp+38h] [rbp-28h]
  _WORD v19[2]; // [rsp+40h] [rbp-20h] BYREF
  int v20; // [rsp+44h] [rbp-1Ch]
  __int64 v21; // [rsp+48h] [rbp-18h]

  v3 = 0;
  if ( (a3 & 0x240) != 0 )
    CInputGlobals::UpdateInputGlobals(
      gpInputGlobals,
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
      3LL);
  InteractiveControlDevice::DetectPressAndHoldGesture(this, a2, a3);
  if ( (a3 & 0x40) != 0 )
  {
    v16[0] = *((_WORD *)this + 196);
    v16[1] = 0;
    v17 = 0;
    v18 = 1LL;
    InteractiveControlDevice::SendHapticFeedbackOutput(this, (const struct _SIMPLEHAPTICCTRL_FEEDBACK_DATA *)v16);
  }
  if ( (a3 & 0x80u) != 0
    && !*((_DWORD *)this + 15)
    && *((_DWORD *)InteractiveControlManager::Instance() + 21)
    && !*((_DWORD *)this + 16) )
  {
    v19[0] = *((_WORD *)this + 197);
    v19[1] = 0;
    v20 = 0;
    v21 = 1LL;
    InteractiveControlDevice::SendHapticFeedbackOutput(this, (const struct _SIMPLEHAPTICCTRL_FEEDBACK_DATA *)v19);
  }
  if ( *((_QWORD *)this + 43) != -1LL )
  {
    if ( (unsigned int)GetUserHandedness(v8, v7, v9) != *((_DWORD *)this + 84) )
    {
      InteractiveControlDevice::DestroyDeadzone(this);
      InteractiveControlDevice::CreateDeadzone(this, v10, v11);
    }
    if ( (a3 & 0x400) != 0 || (a3 & 0x1000) != 0 )
    {
      v12 = *((_QWORD *)this + 30);
      if ( v12 )
      {
        v13 = *((_QWORD *)this + 43);
        if ( v13 != -1 )
          RIMUpdatePointerDeviceDeadzoneOrigin(v12 + 88, v13, *((_QWORD *)a2 + 8));
      }
      if ( (a3 & 0x400) != 0 )
        goto LABEL_20;
    }
    if ( (a3 & 0x800) != 0 )
    {
LABEL_20:
      v14 = *((_QWORD *)this + 30);
      if ( v14 )
      {
        v15 = *((_QWORD *)this + 43);
        if ( v15 != -1 )
        {
          LOBYTE(v3) = (*((_DWORD *)a2 + 18) & 2) != 0;
          RIMActivatePointerDeviceDeadzone(v14 + 88, v15, v3);
        }
      }
    }
  }
}
