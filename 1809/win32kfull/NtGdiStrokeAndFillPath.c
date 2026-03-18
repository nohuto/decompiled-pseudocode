/*
 * XREFs of NtGdiStrokeAndFillPath @ 0x1C0291100
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FAE64 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C013E3DC (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0140BAC (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C0140C0C (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bInactive@DC@@QEBAHXZ @ 0x1C0141314 (-bInactive@DC@@QEBAHXZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C015EF38 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

__int64 __fastcall NtGdiStrokeAndFillPath(HDC a1)
{
  unsigned int v1; // ebx
  unsigned __int16 v2; // dx
  __int64 v3; // rax
  unsigned int v4; // ecx
  ULONG v5; // ecx
  DC *v6; // r8
  __int64 v7; // rdx
  int v8; // edi
  DC *v9; // rcx
  DC *v11[6]; // [rsp+30h] [rbp-69h] BYREF
  struct _XFORMOBJ v12; // [rsp+60h] [rbp-39h] BYREF
  PATHOBJ v13[16]; // [rsp+70h] [rbp-29h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v11, a1);
  v1 = 0;
  if ( !v11[0] )
    goto LABEL_8;
  v2 = *((_WORD *)v11[0] + 6);
  if ( v2 != 1 )
  {
    v3 = *((_QWORD *)v11[0] + 6);
    if ( v3 )
      v4 = *(_DWORD *)(v3 + 40);
    else
      v4 = 0;
    TraceLoggingWriteUnsupportedGdiUsage(19LL, v4, v2);
    goto LABEL_8;
  }
  if ( (*((_DWORD *)v11[0] + 9) & 0x10000) != 0 )
  {
LABEL_8:
    v5 = 87;
LABEL_11:
    EngSetLastError(v5);
    goto LABEL_20;
  }
  if ( !(unsigned int)DC::bInactive(v11[0]) )
  {
    v5 = 1003;
    goto LABEL_11;
  }
  v7 = *((_QWORD *)v6 + 122);
  v8 = *(_DWORD *)(v7 + 152);
  if ( (v8 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v6, *(_QWORD *)(v7 + 160));
    v6 = v11[0];
  }
  if ( (v8 & 0x2000) != 0 )
    GreDCSelectPen(v6, *(_QWORD *)(*((_QWORD *)v6 + 122) + 168LL));
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v13, v11);
  if ( v13[1] )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v12, (struct XDCOBJ *)v11, 516);
    EPATHOBJ::vCloseAllFigures((EPATHOBJ *)v13);
    v1 = EPATHOBJ::bStrokeAndOrFill(v13, (POINTL **)v11, (LINEATTRS *)((char *)v11[0] + 208), &v12, 3u);
  }
  else
  {
    EngSetLastError(8u);
  }
  v9 = v11[0];
  *((_DWORD *)v11[0] + 62) &= ~1u;
  DC::hpath(v9, 0LL);
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v13);
LABEL_20:
  DCOBJ::~DCOBJ((DCOBJ *)v11);
  return v1;
}
