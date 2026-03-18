/*
 * XREFs of NtGdiFillPath @ 0x1C01491B0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0061358 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0075DA0 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0149454 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C0149490 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bInactive@DC@@QEBAHXZ @ 0x1C01495F4 (-bInactive@DC@@QEBAHXZ.c)
 */

__int64 __fastcall NtGdiFillPath(HDC a1)
{
  __int64 v1; // r8
  __int64 v2; // rdx
  unsigned int v3; // eax
  DC *v4; // rcx
  unsigned int v5; // ebx
  ULONG v7; // ecx
  DC *v8; // rcx
  DC *v9[2]; // [rsp+30h] [rbp-39h] BYREF
  PATHOBJ ppo; // [rsp+40h] [rbp-29h] BYREF
  __int64 v11; // [rsp+48h] [rbp-21h]

  DCOBJ::DCOBJ((DCOBJ *)v9, a1);
  if ( !v9[0] || (*((_DWORD *)v9[0] + 9) & 0x10000) != 0 )
  {
    v7 = 87;
    goto LABEL_15;
  }
  if ( !(unsigned int)DC::bInactive(v9[0]) )
  {
    v7 = 1003;
LABEL_15:
    EngSetLastError(v7);
    v5 = 0;
    goto LABEL_9;
  }
  v2 = *(_QWORD *)(v1 + 976);
  if ( (*(_DWORD *)(v2 + 152) & 0x1000) != 0 )
    GreDCSelectBrush(v1, *(_QWORD *)(v2 + 160));
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)&ppo, (struct XDCOBJ *)v9);
  if ( v11 )
  {
    EPATHOBJ::vCloseAllFigures((EPATHOBJ *)&ppo);
    v3 = EPATHOBJ::bStrokeAndOrFill(&ppo, (POINTL **)v9, 0LL, 0LL, 2u);
    v4 = v9[0];
    v5 = v3;
    *((_DWORD *)v9[0] + 62) &= ~1u;
    DC::hpath(v4, 0LL);
  }
  else
  {
    EngSetLastError(8u);
    v8 = v9[0];
    *((_DWORD *)v9[0] + 62) &= ~1u;
    DC::hpath(v8, 0LL);
    v5 = 0;
  }
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
LABEL_9:
  if ( v9[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v9);
  return v5;
}
