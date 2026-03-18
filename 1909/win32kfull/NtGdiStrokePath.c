/*
 * XREFs of NtGdiStrokePath @ 0x1C02A69E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AB2B4 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00AD68C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00CD910 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00DE2F0 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C014A204 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C014A240 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bInactive@DC@@QEBAHXZ @ 0x1C014A3A4 (-bInactive@DC@@QEBAHXZ.c)
 */

__int64 __fastcall NtGdiStrokePath(HDC a1)
{
  __int64 v1; // r8
  ULONG v2; // ecx
  __int64 v3; // rdx
  DC *v4; // rcx
  unsigned int v5; // ebx
  unsigned int v6; // eax
  DC *v7; // rcx
  DC *v9[2]; // [rsp+30h] [rbp-49h] BYREF
  struct _XFORMOBJ v10; // [rsp+40h] [rbp-39h] BYREF
  PATHOBJ ppo; // [rsp+50h] [rbp-29h] BYREF
  __int64 v12; // [rsp+58h] [rbp-21h]

  DCOBJ::DCOBJ((DCOBJ *)v9, a1);
  if ( !v9[0] || (*((_DWORD *)v9[0] + 9) & 0x10000) != 0 )
  {
    v2 = 87;
    goto LABEL_12;
  }
  if ( !(unsigned int)DC::bInactive(v9[0]) )
  {
    v2 = 1003;
LABEL_12:
    EngSetLastError(v2);
    v5 = 0;
    goto LABEL_13;
  }
  v3 = *(_QWORD *)(v1 + 976);
  if ( (*(_DWORD *)(v3 + 152) & 0x2000) != 0 )
    GreDCSelectPen(v1, *(_QWORD *)(v3 + 168));
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)&ppo, v9);
  if ( v12 )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v10, (struct XDCOBJ *)v9, 516);
    v6 = EPATHOBJ::bStrokeAndOrFill(&ppo, (POINTL **)v9, (LINEATTRS *)((char *)v9[0] + 208), &v10, 1u);
    v7 = v9[0];
    v5 = v6;
    *((_DWORD *)v9[0] + 62) &= ~1u;
    DC::hpath(v7, 0LL);
  }
  else
  {
    EngSetLastError(8u);
    v4 = v9[0];
    *((_DWORD *)v9[0] + 62) &= ~1u;
    DC::hpath(v4, 0LL);
    v5 = 0;
  }
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
LABEL_13:
  if ( v9[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v9);
  return v5;
}
