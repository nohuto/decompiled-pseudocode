/*
 * XREFs of NtGdiSetColorSpace @ 0x1C0133A80
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C008FB20 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiSetColorSpace(HDC a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v7; // rbx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  v8[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v8, a1);
  v5 = v8[0];
  if ( v8[0] )
  {
    if ( a2 == *(_QWORD *)(*(_QWORD *)(v8[0] + 80LL) + 120LL) )
    {
      v3 = 1;
    }
    else
    {
      LOBYTE(v4) = 9;
      v7 = HmgShareLockCheck(a2, v4);
      if ( v7 )
      {
        DEC_SHARE_REF_CNT(*(_QWORD *)(v5 + 104));
        *(_QWORD *)(*(_QWORD *)(v5 + 80) + 120LL) = a2;
        *(_QWORD *)(v5 + 104) = v7;
        INC_SHARE_REF_CNT(v7);
        v3 = 1;
        DEC_SHARE_REF_CNT(v7);
      }
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)v8);
  }
  return v3;
}
