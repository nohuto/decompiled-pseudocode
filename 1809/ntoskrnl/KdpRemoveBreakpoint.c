/*
 * XREFs of KdpRemoveBreakpoint @ 0x14091A04C
 * Callers:
 *     KdpLowWriteContent @ 0x140919F7C (KdpLowWriteContent.c)
 *     KdpSetOwedBreakpoints @ 0x14091A10C (KdpSetOwedBreakpoints.c)
 * Callees:
 *     KdpWriteInstructionBuffer @ 0x14028D260 (KdpWriteInstructionBuffer.c)
 *     KdpCopyCodeStream @ 0x1409198A8 (KdpCopyCodeStream.c)
 */

__int64 __fastcall KdpRemoveBreakpoint(__int64 a1, _BYTE *a2)
{
  __int64 v3; // rax
  __int64 v4; // r10
  int v5; // ecx
  int v7; // eax
  int v8; // eax

  KdpWriteInstructionBuffer(a2, *(_QWORD *)(a1 + 24), *(_BYTE *)(a1 + 36));
  v5 = KdpCopyCodeStream(
         (PVOID)(v3 & ~(unsigned __int64)*(unsigned __int8 *)(a1 + 37)),
         v4,
         *(unsigned __int8 *)(a1 + 36),
         5);
  if ( v5 < 0 )
    return 0LL;
  v7 = *(_DWORD *)(a1 + 32);
  if ( (v7 & 4) != 0 )
    v8 = v7 | 5;
  else
    v8 = 0;
  *(_DWORD *)(a1 + 32) = v8;
  if ( v5 == 259 )
    *(_DWORD *)(a1 + 32) = v8 | 9;
  return 1LL;
}
