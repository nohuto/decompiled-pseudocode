/*
 * XREFs of ViGetMapRegisterFile @ 0x14096C26C
 * Callers:
 *     VfFlushAdapterBuffers @ 0x140969220 (VfFlushAdapterBuffers.c)
 *     VfMapTransfer @ 0x14096A320 (VfMapTransfer.c)
 *     ViSwap @ 0x14096D2B8 (ViSwap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ViGetMapRegisterFile(__int64 a1)
{
  BOOL v1; // eax
  unsigned __int64 v2; // rcx

  v1 = 0;
  v2 = a1 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v2 )
    v1 = *(_DWORD *)v2 == -1393569779;
  return v2 & -(__int64)v1;
}
