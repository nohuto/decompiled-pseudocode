/*
 * XREFs of NtGdiSetMetaRgn @ 0x1C00FEBB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?iSetMetaRgn@DC@@QEAAHXZ @ 0x1C00FEC34 (-iSetMetaRgn@DC@@QEAAHXZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C015E848 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C015E92C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiSetMetaRgn(HDC a1)
{
  unsigned int v2; // edi
  DC *v4[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v5[40]; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  v4[0] = 0LL;
  v4[1] = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v5);
  XDCOBJ::vLock((XDCOBJ *)v4, a1);
  if ( v4[0] )
  {
    v2 = DC::iSetMetaRgn(v4[0]);
    MDCOBJ::~MDCOBJ((MDCOBJ *)v4);
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v5);
  }
  else
  {
    EngSetLastError(0x57u);
    DCOBJ::~DCOBJ((DCOBJ *)v4);
  }
  return v2;
}
