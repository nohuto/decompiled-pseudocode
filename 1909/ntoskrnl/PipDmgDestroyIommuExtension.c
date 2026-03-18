/*
 * XREFs of PipDmgDestroyIommuExtension @ 0x140716614
 * Callers:
 *     PiDmaGuardProcessNewDeviceNode @ 0x140715D20 (PiDmaGuardProcessNewDeviceNode.c)
 *     PiDmaGuardProcessPostRemove @ 0x1407329F8 (PiDmaGuardProcessPostRemove.c)
 * Callees:
 *     PiIommuFreeExtension @ 0x14078C840 (PiIommuFreeExtension.c)
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
