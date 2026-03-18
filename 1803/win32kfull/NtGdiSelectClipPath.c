/*
 * XREFs of NtGdiSelectClipPath @ 0x1C011CE20
 * Callers:
 *     <none>
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C007A080 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C008B24C (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C011CF20 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C011CF50 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bInactive@DC@@QEBAHXZ @ 0x1C011D5AC (-bInactive@DC@@QEBAHXZ.c)
 */

_BOOL8 __fastcall NtGdiSelectClipPath(HDC a1, int a2)
{
  DC *v3; // rbx
  unsigned int v4; // r8d
  BOOL v5; // edi
  ULONG v7; // ecx
  struct REGION *v8; // [rsp+20h] [rbp-49h] BYREF
  int v9; // [rsp+28h] [rbp-41h]
  DC *v10[2]; // [rsp+30h] [rbp-39h] BYREF
  _BYTE v11[8]; // [rsp+40h] [rbp-29h] BYREF
  __int64 v12; // [rsp+48h] [rbp-21h]

  MDCOBJ::MDCOBJ((MDCOBJ *)v10, a1);
  v3 = v10[0];
  if ( !v10[0] || (unsigned int)(a2 - 1) > 4 )
  {
    v7 = 87;
    goto LABEL_17;
  }
  if ( !(unsigned int)DC::bInactive(v10[0]) )
  {
    v7 = 1003;
LABEL_17:
    EngSetLastError(v7);
    v5 = 0;
    goto LABEL_10;
  }
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v11, (struct XDCOBJ *)v10);
  if ( v12 )
  {
    v4 = *(unsigned __int8 *)(*((_QWORD *)v3 + 10) + 74LL);
    v9 = 0;
    RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v8, (struct EPATHOBJ *)v11, v4, 0LL);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v8);
    v5 = v8 && (unsigned int)DC::iSelect(v3, v8, a2);
    *((_DWORD *)v3 + 64) &= ~1u;
    DC::hpath(v3, 0LL);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v8);
  }
  else
  {
    EngSetLastError(8u);
    *((_DWORD *)v3 + 64) &= ~1u;
    DC::hpath(v3, 0LL);
    v5 = 0;
  }
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v11);
LABEL_10:
  if ( v3 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v10);
  return v5;
}
