/*
 * XREFs of GreGetHFONT @ 0x1C0299444
 * Callers:
 *     xxxDrawState @ 0x1C0248824 (xxxDrawState.c)
 *     IsSysFontAndDefaultMode @ 0x1C025ADBC (IsSysFontAndDefaultMode.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00AB3B0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00AD68C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetHFONT(HDC a1)
{
  __int64 v1; // rbx
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0LL;
  v3[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v3, a1);
  if ( v3[0] )
  {
    v1 = *(_QWORD *)(*(_QWORD *)(v3[0] + 976LL) + 296LL);
    XDCOBJ::vUnlockFast((XDCOBJ *)v3);
  }
  return v1;
}
