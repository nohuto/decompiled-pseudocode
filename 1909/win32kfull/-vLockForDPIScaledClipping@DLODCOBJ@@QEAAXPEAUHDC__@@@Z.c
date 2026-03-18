/*
 * XREFs of ?vLockForDPIScaledClipping@DLODCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00F9774
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0031A18 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00AB3B0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
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
