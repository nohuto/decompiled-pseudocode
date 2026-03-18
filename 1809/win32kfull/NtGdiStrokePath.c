/*
 * XREFs of NtGdiStrokePath @ 0x1C02912A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FAE64 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C013E3DC (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0140BAC (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C0140C0C (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bInactive@DC@@QEBAHXZ @ 0x1C0141314 (-bInactive@DC@@QEBAHXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiStrokePath(HDC a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r8
  ULONG v3; // ecx
  __int64 v4; // rdx
  DC *v5; // rcx
  DC *v7[2]; // [rsp+30h] [rbp-69h] BYREF
  _BYTE v8[32]; // [rsp+40h] [rbp-59h] BYREF
  struct _XFORMOBJ v9; // [rsp+60h] [rbp-39h] BYREF
  PATHOBJ v10[16]; // [rsp+70h] [rbp-29h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  v1 = 0;
  if ( !v7[0] || (*((_DWORD *)v7[0] + 9) & 0x10000) != 0 )
  {
    v3 = 87;
    goto LABEL_12;
  }
  if ( !(unsigned int)DC::bInactive(v7[0]) )
  {
    v3 = 1003;
LABEL_12:
    EngSetLastError(v3);
    goto LABEL_13;
  }
  v4 = *(_QWORD *)(v2 + 976);
  if ( (*(_DWORD *)(v4 + 152) & 0x2000) != 0 )
    GreDCSelectPen(v2, *(_QWORD *)(v4 + 168));
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v10, v7);
  if ( v10[1] )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v9, (struct XDCOBJ *)v7, 516);
    v1 = EPATHOBJ::bStrokeAndOrFill(v10, (POINTL **)v7, (LINEATTRS *)((char *)v7[0] + 208), &v9, 1u);
  }
  else
  {
    EngSetLastError(8u);
  }
  v5 = v7[0];
  *((_DWORD *)v7[0] + 62) &= ~1u;
  DC::hpath(v5, 0LL);
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v10);
LABEL_13:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v7);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v8);
  return v1;
}
