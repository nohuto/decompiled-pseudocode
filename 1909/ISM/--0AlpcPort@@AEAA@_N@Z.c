/*
 * XREFs of ??0AlpcPort@@AEAA@_N@Z @ 0x1800224DC
 * Callers:
 *     ?CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXAEAPEAVSipcPort@@@Z @ 0x180022190 (-CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXAEAPEAVSipcPort@@@Z.c)
 *     ?AcceptClientConnection@AlpcPort@@UEAAJIPEAXAEAPEAX1AEAPEAVSipcPort@@@Z @ 0x1800D4500 (-AcceptClientConnection@AlpcPort@@UEAAJIPEAXAEAPEAX1AEAPEAVSipcPort@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18002C06E (memset_0.c)
 */

AlpcPort *__fastcall AlpcPort::AlpcPort(AlpcPort *this, char a2)
{
  AlpcPort *result; // rax

  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 3) = (char *)this + 16;
  *((_QWORD *)this + 2) = (char *)this + 16;
  *(_QWORD *)this = &AlpcPort::`vftable';
  *((_QWORD *)this + 5) = 0LL;
  *((_BYTE *)this + 48) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 9) = (char *)this + 64;
  *((_QWORD *)this + 8) = (char *)this + 64;
  memset_0((char *)this + 88, 0, 0x28uLL);
  *((_QWORD *)this + 53) = 0LL;
  result = this;
  *((_WORD *)this + 45) = 40;
  *((_DWORD *)this + 106) = 1610612736;
  *((_BYTE *)this + 496) = a2;
  return result;
}
