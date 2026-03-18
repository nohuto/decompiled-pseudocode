/*
 * XREFs of ?DeliverKeyboardInputToRim@@YAXPEAU_IVKeyboardInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV@@@Z @ 0x1C0186328
 * Callers:
 *     ?ivHandleKeyboardInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C018A3F0 (-ivHandleKeyboardInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0031380 (RIMLockExclusive.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C01513BC (rimProcessDeviceBufferAndStartRead.c)
 */

void __fastcall DeliverKeyboardInputToRim(
        struct _IVKeyboardInputPacket *a1,
        struct RawInputManagerObject *a2,
        struct RIMDEV *a3)
{
  char *v3; // rbp

  v3 = (char *)a2 + 568;
  RIMLockExclusive((__int64)a2 + 568);
  *((_WORD *)a3 + 252) = *((_WORD *)a1 + 8);
  *((_WORD *)a3 + 253) = *((_WORD *)a1 + 10);
  *((_WORD *)a3 + 254) = *((_WORD *)a1 + 12);
  *((_WORD *)a3 + 255) = *((_WORD *)a1 + 14);
  *((_DWORD *)a3 + 128) = *((_DWORD *)a1 + 8);
  *((_DWORD *)a3 + 64) = 0;
  *((_DWORD *)a3 + 174) = 1;
  *((_QWORD *)a3 + 33) = 12LL;
  rimProcessDeviceBufferAndStartRead(a2, a3, 1);
  *((_QWORD *)v3 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
}
