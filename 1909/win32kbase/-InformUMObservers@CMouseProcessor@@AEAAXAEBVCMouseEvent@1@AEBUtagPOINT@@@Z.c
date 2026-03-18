/*
 * XREFs of ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@@Z @ 0x1C004A4AC
 * Callers:
 *     ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@PEBUtagPOINT@@@Z @ 0x1C0030C8C (-QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_I.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C004B908 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C0190550 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C004B0F0 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     ?GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ @ 0x1C004C258 (-GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     ?GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ @ 0x1C004C280 (-GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ.c)
 *     ?GetExtraInfoForHook@CMouseEvent@CMouseProcessor@@QEBA_KXZ @ 0x1C004C2BC (-GetExtraInfoForHook@CMouseEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     ?IsInputThreadDesktopActive@CInputThread@@QEBA_NXZ @ 0x1C0093980 (-IsInputThreadDesktopActive@CInputThread@@QEBA_NXZ.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     ?GetWheelMessage@CWheelEvent@CMouseProcessor@@QEBAKXZ @ 0x1C018F6DC (-GetWheelMessage@CWheelEvent@CMouseProcessor@@QEBAKXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::InformUMObservers(
        CMouseProcessor *this,
        const struct CMouseProcessor::CMouseEvent *a2,
        const struct tagPOINT *a3)
{
  CInputThread *v3; // rdi
  int v6; // ebx
  __int64 v7; // r8
  unsigned __int64 ExtraInfoForHook; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // ecx
  int v12; // edi
  CInputThread *v13; // rcx
  __int64 v14; // rcx
  unsigned int WheelMessage; // eax
  int v16; // ebx
  bool IsInputThreadDesktopActive; // al
  _QWORD v18[8]; // [rsp+20h] [rbp-40h] BYREF

  v3 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v3, 0LL);
  v6 = *((_DWORD *)v3 + 4);
  ExReleasePushLockSharedEx(v3, 0LL);
  KeLeaveCriticalRegion();
  if ( v6 == 2 )
  {
    memset(v18, 0, sizeof(v18));
    v7 = *((_QWORD *)a2 + 1);
    LODWORD(v18[0]) = 64;
    v18[1] = *(_QWORD *)(v7 + 80);
    v18[3] = *a3;
    ExtraInfoForHook = CMouseProcessor::CMouseEvent::GetExtraInfoForHook(a2);
    v11 = *((_DWORD *)a2 + 4);
    v12 = 0;
    v18[5] = ExtraInfoForHook;
    LODWORD(v18[6]) = 4;
    v13 = (CInputThread *)(unsigned int)(v11 - 1);
    if ( (_DWORD)v13 )
    {
      v14 = (unsigned int)((_DWORD)v13 - 1);
      if ( (_DWORD)v14 )
      {
        if ( (_DWORD)v14 != 1 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v9, v10);
          goto LABEL_6;
        }
        LODWORD(v18[7]) = *(unsigned __int16 *)(v10 + 30) << 16;
        WheelMessage = CMouseProcessor::CWheelEvent::GetWheelMessage(a2);
      }
      else
      {
        LODWORD(v18[7]) = CMouseProcessor::CButtonEvent::GetMessageWParamInfo(a2);
        WheelMessage = CMouseProcessor::CButtonEvent::GetButtonMessage(a2);
      }
      LODWORD(v18[4]) = WheelMessage;
    }
    else
    {
      LODWORD(v18[7]) = 0;
      LODWORD(v18[4]) = 512;
    }
LABEL_6:
    v16 = *(_DWORD *)(*((_QWORD *)a2 + 1) + 104LL);
    IsInputThreadDesktopActive = CInputThread::IsInputThreadDesktopActive(v13);
    LOBYTE(v12) = (v16 & 0x80) != 0;
    LODWORD(v18[2]) = v18[2] & 0xFFFFFFFC | v12 | (2 * IsInputThreadDesktopActive);
    ((void (__fastcall *)(_QWORD, __int64, _QWORD *, __int64))InputExtensibilityCallout::CoreMsgSendMessage)(
      LODWORD(v18[2]),
      12LL,
      v18,
      64LL);
  }
}
