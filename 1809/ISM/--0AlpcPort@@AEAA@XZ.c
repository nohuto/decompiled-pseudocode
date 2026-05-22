/*
 * XREFs of ??0AlpcPort@@AEAA@XZ @ 0x18009FE48
 * Callers:
 *     ?CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@_NPEAXAEAPEAVSipcPort@@@Z @ 0x18009FFE0 (-CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@_NPEAXAEAPEAVSipcPort@@@Z.c)
 *     ?AcceptClientConnection@AlpcPort@@UEAAJPEAXAEAPEAX1AEAPEAVSipcPort@@@Z @ 0x1800A01D0 (-AcceptClientConnection@AlpcPort@@UEAAJPEAXAEAPEAX1AEAPEAVSipcPort@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 */

AlpcPort *__fastcall AlpcPort::AlpcPort(AlpcPort *this)
{
  AlpcPort *result; // rax

  *(_QWORD *)this = &AlpcPort::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 4) = (char *)this + 24;
  *((_QWORD *)this + 3) = (char *)this + 24;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 7) = (char *)this + 48;
  *((_QWORD *)this + 6) = (char *)this + 48;
  memset_0((char *)this + 72, 0, 0x28uLL);
  *((_QWORD *)this + 49) = 0LL;
  result = this;
  *((_WORD *)this + 37) = 40;
  *((_DWORD *)this + 98) = 1610612736;
  return result;
}
