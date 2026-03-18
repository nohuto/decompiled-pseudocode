/*
 * XREFs of EtwpCompleteBuffer @ 0x1406DBB80
 * Callers:
 *     EtwpCompressPendingBuffers @ 0x140332D80 (EtwpCompressPendingBuffers.c)
 *     EtwpFlushActiveBuffers @ 0x1405C5518 (EtwpFlushActiveBuffers.c)
 * Callees:
 *     EtwpEnqueueAvailableBuffer @ 0x1400039AC (EtwpEnqueueAvailableBuffer.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 __fastcall EtwpCompleteBuffer(__int64 a1, __int64 a2, unsigned int a3)
{
  bool v3; // zf

  v3 = *(_WORD *)(a2 + 54) == 5;
  *(_WORD *)(a2 + 52) = 0;
  if ( v3 )
    return (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(a2 + 56))(a3, a2, *(_QWORD *)(a2 + 64));
  else
    return EtwpEnqueueAvailableBuffer(a1, (unsigned int *)a2, 0);
}
