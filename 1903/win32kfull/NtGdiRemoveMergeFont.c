/*
 * XREFs of NtGdiRemoveMergeFont @ 0x1C027A570
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0062380 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?bRemoveMergeFont@XDCOBJ@@QEAAHU_UNIVERSAL_FONT_ID@@@Z @ 0x1C02A6678 (-bRemoveMergeFont@XDCOBJ@@QEAAHU_UNIVERSAL_FONT_ID@@@Z.c)
 */

__int64 __fastcall NtGdiRemoveMergeFont(HDC a1, char a2)
{
  __int64 result; // rax
  unsigned int v4; // ebx
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]
  int v7; // [rsp+2Ch] [rbp-Ch]

  v6 = 0;
  v7 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v5, a1);
  result = v5;
  if ( v5 )
  {
    if ( (*(_DWORD *)(v5 + 36) & 1) != 0 )
    {
      v4 = 0;
    }
    else
    {
      if ( (a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v4 = XDCOBJ::bRemoveMergeFont(&v5);
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)&v5);
    return v4;
  }
  return result;
}
