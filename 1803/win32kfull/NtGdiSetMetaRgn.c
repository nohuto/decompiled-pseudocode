/*
 * XREFs of NtGdiSetMetaRgn @ 0x1C00E56D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0078C80 (--1DCOBJ@@QEAA@XZ.c)
 *     ?iSetMetaRgn@DC@@QEAAHXZ @ 0x1C008B568 (-iSetMetaRgn@DC@@QEAAHXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C008FB20 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C008FCD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 */

__int64 __fastcall NtGdiSetMetaRgn(HDC a1)
{
  unsigned int v1; // ebx
  unsigned int v2; // edi
  __int64 v3; // rsi
  DC *v5; // [rsp+20h] [rbp-10h] BYREF
  __int64 v6; // [rsp+28h] [rbp-8h]
  int v7; // [rsp+48h] [rbp+18h] BYREF

  v1 = 0;
  v5 = 0LL;
  v6 = 0LL;
  XDCOBJ::vLock((XDCOBJ *)&v5, a1);
  if ( v5 )
  {
    v2 = DC::iSetMetaRgn(v5);
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v5);
    v7 = 0;
    v3 = *(_QWORD *)v5;
    HmgDecrementExclusiveReferenceCountEx(v5, HIDWORD(v6), &v7);
    if ( v7 )
      bDeleteDCInternalEx(v3, 0LL);
    return v2;
  }
  else
  {
    EngSetLastError(0x57u);
    DCOBJ::~DCOBJ((DCOBJ *)&v5);
  }
  return v1;
}
