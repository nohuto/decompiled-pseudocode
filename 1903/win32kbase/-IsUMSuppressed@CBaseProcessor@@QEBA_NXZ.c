/*
 * XREFs of ?IsUMSuppressed@CBaseProcessor@@QEBA_NXZ @ 0x1C018EC80
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0041208 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@UtagPOINT@@@Z @ 0x1C00949BC (-CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@UtagPOINT@@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C0192750 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     ?IsInputThreadDesktopActive@CInputThread@@QEBA_NXZ @ 0x1C0094FB0 (-IsInputThreadDesktopActive@CInputThread@@QEBA_NXZ.c)
 */

char __fastcall CBaseProcessor::IsUMSuppressed(CBaseProcessor *this)
{
  bool IsInputThreadDesktopActive; // al
  char v3; // dl

  IsInputThreadDesktopActive = CInputThread::IsInputThreadDesktopActive(this);
  v3 = 0;
  if ( IsInputThreadDesktopActive )
    return *((_DWORD *)this + 3) == 0;
  return v3;
}
