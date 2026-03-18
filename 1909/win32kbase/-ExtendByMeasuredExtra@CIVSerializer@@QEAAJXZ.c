/*
 * XREFs of ?ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ @ 0x1C0187044
 * Callers:
 *     ?ivRootDeliverPTPInertiaInput@CHidInput@@QEAAJPEAX_KHAEBUCONTAINER_ID@@@Z @ 0x1C017DA7C (-ivRootDeliverPTPInertiaInput@CHidInput@@QEAAJPEAX_KHAEBUCONTAINER_ID@@@Z.c)
 *     ?ivRootDeliverTouchInput@CHidInput@@MEAAJPEAX@Z @ 0x1C017DE10 (-ivRootDeliverTouchInput@CHidInput@@MEAAJPEAX@Z.c)
 *     ?SerializeFullKeyboardStatesForContainer@CKeyboardSensor@@AEAAJAEAUCIVSerializer@@@Z @ 0x1C017E8A4 (-SerializeFullKeyboardStatesForContainer@CKeyboardSensor@@AEAAJAEAUCIVSerializer@@@Z.c)
 *     ?SerializeKeyboardInputForContainer@CKeyboardSensor@@AEAAJAEAUCIVSerializer@@AEBU_UNICODE_STRING@@AEBU_KEYBOARD_INPUT_DATA@@@Z @ 0x1C017E9C8 (-SerializeKeyboardInputForContainer@CKeyboardSensor@@AEAAJAEAUCIVSerializer@@AEBU_UNICODE_STRING.c)
 *     ?SerializeContainerMouseInput@CMouseSensor@@AEAAJAEAUCIVSerializer@@AEBU_UNICODE_STRING@@_NAEBUContainerMouseInput@@@Z @ 0x1C0185480 (-SerializeContainerMouseInput@CMouseSensor@@AEAAJAEAUCIVSerializer@@AEBU_UNICODE_STRING@@_NAEBUC.c)
 *     ?ivRootPnp@CBaseInput@@AEAAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x1C018CC90 (-ivRootPnp@CBaseInput@@AEAAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?ivRootPnpCreated@CBaseInput@@AEAAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x1C018CF3C (-ivRootPnpCreated@CBaseInput@@AEAAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z.c)
 * Callees:
 *     UserReAllocPoolZInit @ 0x1C0091380 (UserReAllocPoolZInit.c)
 */

__int64 __fastcall CIVSerializer::ExtendByMeasuredExtra(CIVSerializer *this)
{
  __int64 v1; // rax
  size_t v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rax

  v1 = *((_QWORD *)this + 4);
  if ( !v1 )
    return 0LL;
  v3 = *((_QWORD *)this + 1);
  if ( v1 + v3 >= v3 )
  {
    v4 = UserReAllocPoolZInit(*(void **)this, v3, v1 + v3);
    *(_QWORD *)this = v4;
    if ( v4 )
    {
      *((_QWORD *)this + 2) = v4 + 16;
      v5 = *((_QWORD *)this + 4);
      *((_QWORD *)this + 1) += v5;
      *((_QWORD *)this + 3) += v5;
      return 0LL;
    }
  }
  return 3221225495LL;
}
