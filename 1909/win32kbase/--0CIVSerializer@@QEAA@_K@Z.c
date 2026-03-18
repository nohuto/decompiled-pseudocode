/*
 * XREFs of ??0CIVSerializer@@QEAA@_K@Z @ 0x1C0186198
 * Callers:
 *     ?ivRootDeliverPTPInertiaInput@CHidInput@@QEAAJPEAX_KHAEBUCONTAINER_ID@@@Z @ 0x1C017DA7C (-ivRootDeliverPTPInertiaInput@CHidInput@@QEAAJPEAX_KHAEBUCONTAINER_ID@@@Z.c)
 *     ?ivRootDeliverTouchInput@CHidInput@@MEAAJPEAX@Z @ 0x1C017DE10 (-ivRootDeliverTouchInput@CHidInput@@MEAAJPEAX@Z.c)
 *     ?ivRootBroadcastAsyncKeyState@CKeyboardSensor@@AEAAJAEBUCONTAINER_ID@@GH@Z @ 0x1C017ED10 (-ivRootBroadcastAsyncKeyState@CKeyboardSensor@@AEAAJAEBUCONTAINER_ID@@GH@Z.c)
 *     ?ivRootDeliverFullKeyboardStates@CKeyboardSensor@@AEAAJAEBUCONTAINER_ID@@@Z @ 0x1C017EE94 (-ivRootDeliverFullKeyboardStates@CKeyboardSensor@@AEAAJAEBUCONTAINER_ID@@@Z.c)
 *     ?ivRootDeliverKeyboardInput@CKeyboardSensor@@MEAAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x1C017F010 (-ivRootDeliverKeyboardInput@CKeyboardSensor@@MEAAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PE.c)
 *     ?SendMouseInputToContainer@CMouseSensor@@AEAAJAEBUCONTAINER_ID@@PEAXAEBUContainerMouseInput@@@Z @ 0x1C0185188 (-SendMouseInputToContainer@CMouseSensor@@AEAAJAEBUCONTAINER_ID@@PEAXAEBUContainerMouseInput@@@Z.c)
 *     ?ivSendSettingsUpdateToContainer@@YAXAEBUCONTAINER_ID@@@Z @ 0x1C018586C (-ivSendSettingsUpdateToContainer@@YAXAEBUCONTAINER_ID@@@Z.c)
 *     ?ivRootPnp@CBaseInput@@AEAAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x1C018CC90 (-ivRootPnp@CBaseInput@@AEAAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?ivRootPnpCreated@CBaseInput@@AEAAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x1C018CF3C (-ivRootPnpCreated@CBaseInput@@AEAAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0012FC0 (Win32AllocPoolZInit.c)
 */

CIVSerializer *__fastcall CIVSerializer::CIVSerializer(CIVSerializer *this, __int64 a2)
{
  char *v4; // rax

  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_BYTE *)this + 48) = 0;
  *((_QWORD *)this + 1) = a2 + 16;
  v4 = (char *)Win32AllocPoolZInit(a2 + 16, 1702057545LL);
  *(_QWORD *)this = v4;
  if ( v4 )
  {
    *((_QWORD *)this + 5) = a2;
    *((_QWORD *)this + 2) = v4 + 16;
    *((_QWORD *)this + 3) = a2;
  }
  return this;
}
