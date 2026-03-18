/*
 * XREFs of NtGdiFillPath @ 0x1C0140390
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C013E3DC (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0140BAC (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C0140C0C (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bInactive@DC@@QEBAHXZ @ 0x1C0141314 (-bInactive@DC@@QEBAHXZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C015EF38 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

__int64 __fastcall NtGdiFillPath(HDC a1)
{
  unsigned int v1; // ebx
  unsigned __int16 v2; // dx
  __int64 v3; // rax
  unsigned int v4; // ecx
  ULONG v5; // ecx
  __int64 v6; // r8
  __int64 v7; // rdx
  DC *v8; // rcx
  DC *v10[6]; // [rsp+30h] [rbp-59h] BYREF
  PATHOBJ v11[16]; // [rsp+60h] [rbp-29h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v10, a1);
  v1 = 0;
  if ( !v10[0] )
    goto LABEL_8;
  v2 = *((_WORD *)v10[0] + 6);
  if ( v2 != 1 )
  {
    v3 = *((_QWORD *)v10[0] + 6);
    if ( v3 )
      v4 = *(_DWORD *)(v3 + 40);
    else
      v4 = 0;
    TraceLoggingWriteUnsupportedGdiUsage(18LL, v4, v2);
    goto LABEL_8;
  }
  if ( (*((_DWORD *)v10[0] + 9) & 0x10000) != 0 )
  {
LABEL_8:
    v5 = 87;
LABEL_11:
    EngSetLastError(v5);
    goto LABEL_18;
  }
  if ( !(unsigned int)DC::bInactive(v10[0]) )
  {
    v5 = 1003;
    goto LABEL_11;
  }
  v7 = *(_QWORD *)(v6 + 976);
  if ( (*(_DWORD *)(v7 + 152) & 0x1000) != 0 )
    GreDCSelectBrush(v6, *(_QWORD *)(v7 + 160));
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v11, (struct XDCOBJ *)v10);
  if ( v11[1] )
  {
    EPATHOBJ::vCloseAllFigures((EPATHOBJ *)v11);
    v1 = EPATHOBJ::bStrokeAndOrFill(v11, (POINTL **)v10, 0LL, 0LL, 2u);
  }
  else
  {
    EngSetLastError(8u);
  }
  v8 = v10[0];
  *((_DWORD *)v10[0] + 62) &= ~1u;
  DC::hpath(v8, 0LL);
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v11);
LABEL_18:
  DCOBJ::~DCOBJ((DCOBJ *)v10);
  return v1;
}
