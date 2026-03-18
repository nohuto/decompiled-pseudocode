/*
 * XREFs of ?vLockForDPIScaledClipping@DLODCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C011EB94
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C002B5A8 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0062380 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 */

void __fastcall DLODCOBJ::vLockForDPIScaledClipping(DLODCOBJ *this, HDC a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
    goto LABEL_2;
  XDCOBJ::vLock(this, a2);
  v2 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    *((_BYTE *)this + 17) = 0;
LABEL_2:
    *(_DWORD *)(v2 + 40) |= 2u;
    *((_BYTE *)this + 16) = 1;
  }
}
