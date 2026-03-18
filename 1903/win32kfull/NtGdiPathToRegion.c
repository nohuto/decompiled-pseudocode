/*
 * XREFs of NtGdiPathToRegion @ 0x1C02A6BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C002A4D0 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0061358 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0149454 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C0149490 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bInactive@DC@@QEBAHXZ @ 0x1C01495F4 (-bInactive@DC@@QEBAHXZ.c)
 */

struct HOBJ__ *__fastcall NtGdiPathToRegion(HDC a1)
{
  ULONG v1; // ecx
  struct HOBJ__ *v2; // rbx
  DC *v3; // rcx
  unsigned int v4; // r8d
  DC *v5; // rcx
  DC *v7[2]; // [rsp+20h] [rbp-49h] BYREF
  void *v8; // [rsp+30h] [rbp-39h] BYREF
  int v9; // [rsp+38h] [rbp-31h]
  _BYTE v10[8]; // [rsp+40h] [rbp-29h] BYREF
  __int64 v11; // [rsp+48h] [rbp-21h]

  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  if ( !v7[0] )
  {
    v1 = 87;
LABEL_5:
    EngSetLastError(v1);
    v2 = 0LL;
    goto LABEL_15;
  }
  if ( !(unsigned int)DC::bInactive(v7[0]) )
  {
    v1 = 1003;
    goto LABEL_5;
  }
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v10, v7);
  if ( v11 )
  {
    v4 = *(unsigned __int8 *)(*((_QWORD *)v7[0] + 122) + 214LL);
    v9 = 0;
    RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v8, (struct EPATHOBJ *)v10, v4, 0LL);
    if ( v8 )
    {
      v2 = RGNOBJ::hrgnAssociate(&v8);
      if ( !v2 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v8);
    }
    else
    {
      v2 = 0LL;
    }
    v5 = v7[0];
    *((_DWORD *)v7[0] + 62) &= ~1u;
    DC::hpath(v5, 0LL);
    if ( v9 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v8);
  }
  else
  {
    EngSetLastError(8u);
    v3 = v7[0];
    *((_DWORD *)v7[0] + 62) &= ~1u;
    DC::hpath(v3, 0LL);
    v2 = 0LL;
  }
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v10);
LABEL_15:
  if ( v7[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v7);
  return v2;
}
