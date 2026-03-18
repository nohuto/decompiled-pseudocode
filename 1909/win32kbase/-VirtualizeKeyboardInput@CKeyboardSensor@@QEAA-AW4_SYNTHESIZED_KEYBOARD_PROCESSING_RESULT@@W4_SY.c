/*
 * XREFs of ?VirtualizeKeyboardInput@CKeyboardSensor@@QEAA?AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@W4_SYNTHESIZE_KEYBOARD_OPTIONS@@AEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x1C017EBD4
 * Callers:
 *     VirtualizeKeyboardInput @ 0x1C0182B34 (VirtualizeKeyboardInput.c)
 * Callees:
 *     IsKeyStateCached @ 0x1C002E8D0 (IsKeyStateCached.c)
 *     isRootPartition @ 0x1C0031CA8 (isRootPartition.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     ?ivRootBroadcastAsyncKeyState@CKeyboardSensor@@AEAAJAEBUCONTAINER_ID@@GH@Z @ 0x1C017ED10 (-ivRootBroadcastAsyncKeyState@CKeyboardSensor@@AEAAJAEBUCONTAINER_ID@@GH@Z.c)
 *     ?ivRootDeliverKeyboardInput@CKeyboardSensor@@MEAAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x1C017F010 (-ivRootDeliverKeyboardInput@CKeyboardSensor@@MEAAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PE.c)
 *     VKFromVSC @ 0x1C0184900 (VKFromVSC.c)
 *     IsKeyboardIVEnabled @ 0x1C018BF6C (IsKeyboardIVEnabled.c)
 */

_BOOL8 __fastcall CKeyboardSensor::VirtualizeKeyboardInput(
        CKeyboardSensor *a1,
        char a2,
        __int64 a3,
        __int64 *a4,
        void *a5)
{
  __int16 v9; // ax
  unsigned __int8 v10; // di
  char v11; // di
  __int64 v12; // xmm0_8
  __int64 v13; // rdx
  _QWORD v15[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !(unsigned __int8)IsKeyboardIVEnabled() || !isRootPartition() || !*((_DWORD *)a1 + 298) )
    return 1LL;
  if ( (*(_WORD *)a3 || *(_WORD *)(a3 + 2))
    && (a2 & 2) != 0
    && (unsigned int)CKeyboardSensor::ivRootDeliverKeyboardInput(
                       a1,
                       (const struct CONTAINER_ID *)a3,
                       (const struct _KEYBOARD_INPUT_DATA *)a4,
                       a5) )
  {
    return 0LL;
  }
  if ( (a2 & 1) == 0 )
    return 1LL;
  v9 = *((_WORD *)a4 + 2);
  if ( (v9 & 0x40) != 0 )
  {
    v10 = *((_BYTE *)a4 + 2);
  }
  else
  {
    if ( (v9 & 2) != 0 )
    {
      v11 = -32;
    }
    else
    {
      v11 = 0;
      if ( (v9 & 4) != 0 )
        v11 = -31;
    }
    memset(v15, 0, 0x20uLL);
    v12 = *a4;
    LOBYTE(v15[0]) = *((_BYTE *)a4 + 2) & 0x7F;
    LOBYTE(v13) = v11;
    LODWORD(v15[3]) = *((_DWORD *)a4 + 2);
    v15[2] = v12;
    v10 = VKFromVSC(v15, v13, 0LL);
  }
  return !IsKeyStateCached(v10)
      || !(unsigned int)CKeyboardSensor::ivRootBroadcastAsyncKeyState(
                          a1,
                          (const struct CONTAINER_ID *)a3,
                          v10,
                          *((_WORD *)a4 + 2) & 1);
}
