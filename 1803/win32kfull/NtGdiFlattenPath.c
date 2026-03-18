/*
 * XREFs of NtGdiFlattenPath @ 0x1C027DB90
 * Callers:
 *     <none>
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C011CF20 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C011CF50 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bInactive@DC@@QEBAHXZ @ 0x1C011D5AC (-bInactive@DC@@QEBAHXZ.c)
 */

__int64 __fastcall NtGdiFlattenPath(HDC a1)
{
  ULONG v1; // ecx
  unsigned int v2; // ebx
  DC *v4[2]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v5[8]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v6; // [rsp+38h] [rbp-80h]

  MDCOBJ::MDCOBJ((MDCOBJ *)v4, a1);
  if ( !v4[0] )
  {
    v1 = 6;
LABEL_5:
    EngSetLastError(v1);
    v2 = 0;
    goto LABEL_11;
  }
  if ( !(unsigned int)DC::bInactive(v4[0]) )
  {
    v1 = 1003;
    goto LABEL_5;
  }
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v5, v4);
  if ( v6 && EPATHOBJ::bFlatten((EPATHOBJ *)v5) )
  {
    v2 = 1;
  }
  else
  {
    EngSetLastError(8u);
    v2 = 0;
  }
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v5);
LABEL_11:
  if ( v4[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v4);
  return v2;
}
