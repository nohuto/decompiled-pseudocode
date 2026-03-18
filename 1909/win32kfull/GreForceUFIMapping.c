/*
 * XREFs of GreForceUFIMapping @ 0x1C00E570C
 * Callers:
 *     NtGdiForceUFIMapping @ 0x1C00E56C0 (NtGdiForceUFIMapping.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00AB3B0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00AD68C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreForceUFIMapping(HDC a1, __int64 *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rax
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  v7[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v7, a1);
  v4 = v7[0];
  if ( v7[0] )
  {
    v5 = *a2;
    *(_DWORD *)(v7[0] + 252LL) |= 4u;
    *(_QWORD *)(v4 + 256) = v5;
    XDCOBJ::vUnlockFast((XDCOBJ *)v7);
    return 1;
  }
  return v3;
}
