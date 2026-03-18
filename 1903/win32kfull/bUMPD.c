/*
 * XREFs of bUMPD @ 0x1C007F280
 * Callers:
 *     NtGdiExtEscape @ 0x1C007CCD0 (NtGdiExtEscape.c)
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0062380 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 */

__int64 __fastcall bUMPD(HDC a1)
{
  unsigned int v1; // ebx
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  v3[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v3, a1);
  if ( v3[0] )
  {
    v1 = *(_DWORD *)(*(_QWORD *)(v3[0] + 48LL) + 40LL) & 0x8000;
    XDCOBJ::vUnlockFast((XDCOBJ *)v3);
  }
  return v1;
}
