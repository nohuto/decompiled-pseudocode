/*
 * XREFs of GreForceUFIMapping @ 0x1C010B16C
 * Callers:
 *     NtGdiForceUFIMapping @ 0x1C010B120 (NtGdiForceUFIMapping.c)
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0062380 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
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
