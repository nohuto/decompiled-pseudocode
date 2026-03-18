/*
 * XREFs of NtGdiFlattenPath @ 0x1C0290C20
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0140BAC (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C0140C0C (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bInactive@DC@@QEBAHXZ @ 0x1C0141314 (-bInactive@DC@@QEBAHXZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C015EF38 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

__int64 __fastcall NtGdiFlattenPath(HDC a1)
{
  unsigned int v1; // ebx
  ULONG v2; // ecx
  __int64 v3; // rdx
  unsigned __int16 v4; // r8
  __int64 v5; // rax
  unsigned int v6; // ecx
  DC *v8[6]; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v9[8]; // [rsp+60h] [rbp-88h] BYREF
  __int64 v10; // [rsp+68h] [rbp-80h]

  DCOBJ::DCOBJ((DCOBJ *)v8, a1);
  v1 = 0;
  if ( !v8[0] )
  {
    v2 = 6;
LABEL_10:
    EngSetLastError(v2);
    goto LABEL_16;
  }
  if ( !(unsigned int)DC::bInactive(v8[0]) )
  {
LABEL_9:
    v2 = 1003;
    goto LABEL_10;
  }
  v4 = *(_WORD *)(v3 + 12);
  if ( v4 > 1u )
  {
    v5 = *(_QWORD *)(v3 + 48);
    if ( v5 )
      v6 = *(_DWORD *)(v5 + 40);
    else
      v6 = 0;
    TraceLoggingWriteUnsupportedGdiUsage(6LL, v6, v4);
    goto LABEL_9;
  }
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v9, v8);
  if ( v10 && EPATHOBJ::bFlatten((EPATHOBJ *)v9) )
    v1 = 1;
  else
    EngSetLastError(8u);
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v9);
LABEL_16:
  DCOBJ::~DCOBJ((DCOBJ *)v8);
  return v1;
}
