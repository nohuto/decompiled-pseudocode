/*
 * XREFs of NtGdiSelectClipPath @ 0x1C014A0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C00AAA98 (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AB2B4 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00AD68C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00CF1C8 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C014A204 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C014A240 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bInactive@DC@@QEBAHXZ @ 0x1C014A3A4 (-bInactive@DC@@QEBAHXZ.c)
 */

_BOOL8 __fastcall NtGdiSelectClipPath(HDC a1, int a2)
{
  unsigned int v3; // r8d
  BOOL v4; // ebx
  DC *v5; // rcx
  ULONG v7; // ecx
  DC *v8; // rcx
  DC *v9[2]; // [rsp+20h] [rbp-49h] BYREF
  struct REGION *v10; // [rsp+30h] [rbp-39h] BYREF
  int v11; // [rsp+38h] [rbp-31h]
  _BYTE v12[8]; // [rsp+40h] [rbp-29h] BYREF
  __int64 v13; // [rsp+48h] [rbp-21h]

  DCOBJ::DCOBJ((DCOBJ *)v9, a1);
  if ( !v9[0] || (unsigned int)(a2 - 1) > 4 )
  {
    v7 = 87;
    goto LABEL_17;
  }
  if ( !(unsigned int)DC::bInactive(v9[0]) )
  {
    v7 = 1003;
LABEL_17:
    EngSetLastError(v7);
    v4 = 0;
    goto LABEL_10;
  }
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v12, (struct XDCOBJ *)v9);
  if ( v13 )
  {
    v3 = *(unsigned __int8 *)(*((_QWORD *)v9[0] + 122) + 214LL);
    v11 = 0;
    RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v10, (struct EPATHOBJ *)v12, v3, 0LL);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v10);
    v4 = v10 && (unsigned int)DC::iSelect(v9[0], v10, a2);
    v5 = v9[0];
    *((_DWORD *)v9[0] + 62) &= ~1u;
    DC::hpath(v5, 0LL);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v10);
  }
  else
  {
    EngSetLastError(8u);
    v8 = v9[0];
    *((_DWORD *)v9[0] + 62) &= ~1u;
    DC::hpath(v8, 0LL);
    v4 = 0;
  }
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v12);
LABEL_10:
  if ( v9[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v9);
  return v4;
}
