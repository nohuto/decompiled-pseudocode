/*
 * XREFs of PipDmgDestroyIommuExtension @ 0x1406F92C4
 * Callers:
 *     PiDmaGuardProcessPostRemove @ 0x1406ED62C (PiDmaGuardProcessPostRemove.c)
 *     PiDmaGuardProcessNewDeviceNode @ 0x1406F8A00 (PiDmaGuardProcessNewDeviceNode.c)
 * Callees:
 *     PiIommuFreeExtension @ 0x140763A00 (PiIommuFreeExtension.c)
 */

__int64 __fastcall PipDmgDestroyIommuExtension(__int64 a1)
{
  ULONG_PTR v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 720);
  if ( v2 )
  {
    result = PiIommuFreeExtension(v2);
    *(_QWORD *)(a1 + 720) = 0LL;
  }
  return result;
}
