/*
 * XREFs of GreSetStretchBltMode @ 0x1C001336C
 * Callers:
 *     BltIcon @ 0x1C001316C (BltIcon.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C008FB20 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreSetStretchBltMode(HDC a1, int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rcx
  char v6; // dl
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  v8[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v8, a1);
  v4 = v8[0];
  if ( v8[0] )
  {
    v5 = *(_QWORD *)(v8[0] + 80LL);
    v6 = 2;
    v3 = *(_DWORD *)(v5 + 100);
    *(_DWORD *)(v5 + 100) = a2;
    if ( a2 <= 4 )
      v6 = a2;
    *(_BYTE *)(*(_QWORD *)(v4 + 80) + 75LL) = v6;
    XDCOBJ::vUnlockFast((XDCOBJ *)v8);
  }
  return v3;
}
