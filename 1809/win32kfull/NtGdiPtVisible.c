/*
 * XREFs of NtGdiPtVisible @ 0x1C02832D0
 * Callers:
 *     <none>
 * Callees:
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0055AF0 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0057424 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C009F614 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FAE64 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C0137840 (--0DCOBJ@@QEAA@XZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C015EF38 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

__int64 __fastcall NtGdiPtVisible(HDC a1, LONG a2, LONG a3)
{
  unsigned int v5; // edi
  unsigned __int16 v6; // ax
  unsigned int v7; // ebx
  char *v8; // rcx
  struct REGION *v10; // [rsp+30h] [rbp-79h] BYREF
  DC *v11[6]; // [rsp+38h] [rbp-71h] BYREF
  _BYTE v12[24]; // [rsp+68h] [rbp-41h] BYREF
  _BYTE v13[32]; // [rsp+80h] [rbp-29h] BYREF
  _BYTE v14[80]; // [rsp+A0h] [rbp-9h] BYREF
  struct _POINTL v15; // [rsp+128h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v11, a1);
  v5 = 0;
  if ( !v11[0] )
    goto LABEL_4;
  v6 = *((_WORD *)v11[0] + 6);
  v7 = 1;
  if ( v6 != 1 )
  {
    TraceLoggingWriteUnsupportedGdiUsage(21LL, 0LL, v6, 6LL, 0LL);
LABEL_4:
    EngSetLastError(6u);
    v7 = -1;
    goto LABEL_10;
  }
  DCOBJ::DCOBJ((DCOBJ *)v14);
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v13, (struct XDCOBJ *)v11, 1);
  if ( (v13[24] & 1) != 0 )
  {
    v10 = XDCOBJ::prgnEffRao(v11);
    v15.x = a2;
    v15.y = a3;
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v12, (struct XDCOBJ *)v11, -2147483132);
    EXFORMOBJ::bXform((EXFORMOBJ *)v12, &v15, 1LL);
    v8 = (char *)v11[0] + 1024;
    if ( (*((_DWORD *)v11[0] + 10) & 1) == 0 )
      v8 = (char *)v11[0] + 1016;
    v15.x += *(_DWORD *)v8;
    v15.y += *((_DWORD *)v8 + 1);
    LOBYTE(v5) = RGNOBJ::bInside((RGNOBJ *)&v10, &v15) == 2;
    v7 = v5;
  }
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v13);
LABEL_10:
  DCOBJ::~DCOBJ((DCOBJ *)v11);
  return v7;
}
