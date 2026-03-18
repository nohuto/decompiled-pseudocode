/*
 * XREFs of MiScrubMemoryWorker @ 0x14089CAA0
 * Callers:
 *     <none>
 * Callees:
 *     KeSignalGate @ 0x140131560 (KeSignalGate.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiScrubNode @ 0x1402EC820 (MiScrubNode.c)
 *     MiInitializeScrubPacket @ 0x14089C92C (MiInitializeScrubPacket.c)
 *     MiReleaseScrubPacket @ 0x14089CA50 (MiReleaseScrubPacket.c)
 */

__int64 __fastcall MiScrubMemoryWorker(unsigned int *a1)
{
  __int64 v2; // rdx
  unsigned int *v3; // rbx
  int v4; // esi
  unsigned __int64 v5; // rax
  __int64 result; // rax
  _QWORD v7[24]; // [rsp+20h] [rbp-D8h] BYREF

  memset(v7, 0, sizeof(v7));
  v2 = *a1;
  v3 = &a1[-10 * v2];
  v4 = MiInitializeScrubPacket(*((_QWORD *)v3 - 1), v2, *((_QWORD *)v3 - 3), (__int64)v7);
  if ( v4 >= 0 )
  {
    MiScrubNode(*((__int16 **)v3 - 1), (__int64)v7);
    MiReleaseScrubPacket((__int64)v7);
  }
  v5 = v7[21];
  a1[1] = v4;
  _InterlockedExchangeAdd64((volatile signed __int64 *)v3 - 2, v5);
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)v3 - 14, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return KeSignalGate((__int64)(v3 - 12), 1u);
  return result;
}
