/*
 * XREFs of MiScrubMemoryWorker @ 0x140860D50
 * Callers:
 *     <none>
 * Callees:
 *     KeSignalGate @ 0x140127780 (KeSignalGate.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiScrubNode @ 0x1402CF8B8 (MiScrubNode.c)
 *     MiInitializeScrubPacket @ 0x140860BE8 (MiInitializeScrubPacket.c)
 *     MiReleaseScrubPacket @ 0x140860D04 (MiReleaseScrubPacket.c)
 */

__int64 __fastcall MiScrubMemoryWorker(unsigned int *a1)
{
  __int64 v2; // rdx
  unsigned int *v3; // rbx
  int v4; // esi
  __int64 v5; // r8
  __int64 result; // rax
  unsigned __int64 v7[24]; // [rsp+20h] [rbp-D8h] BYREF

  memset(v7, 0, sizeof(v7));
  v2 = *a1;
  v3 = &a1[-10 * v2];
  v4 = MiInitializeScrubPacket(*((_QWORD *)v3 - 1), v2, *((_QWORD *)v3 - 3), (__int64)v7);
  if ( v4 >= 0 )
  {
    MiScrubNode(*((ULONG_PTR **)v3 - 1), (__int64)v7);
    MiReleaseScrubPacket((__int64)v7);
  }
  a1[1] = v4;
  _InterlockedExchangeAdd64((volatile signed __int64 *)v3 - 2, v7[21]);
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)v3 - 14, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return KeSignalGate((__int64)(v3 - 12), 1LL, v5);
  return result;
}
