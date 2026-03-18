/*
 * XREFs of NtGdiCloseFigure @ 0x1C014A050
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AB2B4 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00AD68C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C014A204 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C014A240 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiCloseFigure(HDC a1)
{
  unsigned int v1; // ebx
  ULONG v3; // ecx
  _QWORD v4[2]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v5[8]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v6; // [rsp+38h] [rbp-80h]

  DCOBJ::DCOBJ((DCOBJ *)v4, a1);
  if ( !v4[0] )
  {
    v3 = 87;
LABEL_11:
    EngSetLastError(v3);
    v1 = 0;
    goto LABEL_6;
  }
  v1 = 1;
  if ( (*(_DWORD *)(v4[0] + 248LL) & 1) == 0 )
  {
    v3 = 1003;
    goto LABEL_11;
  }
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v5, (struct XDCOBJ *)v4);
  if ( !v6 || !EPATHOBJ::bCloseFigure((EPATHOBJ *)v5) )
  {
    EngSetLastError(8u);
    v1 = 0;
  }
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v5);
LABEL_6:
  if ( v4[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v4);
  return v1;
}
