/*
 * XREFs of GreGetTextCharsetInfo @ 0x1C00E0F34
 * Callers:
 *     NtGdiGetTextCharsetInfo @ 0x1C00E0EA0 (NtGdiGetTextCharsetInfo.c)
 *     ?DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z @ 0x1C025A6F4 (-DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009C5D4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     GreGetCharSet @ 0x1C00A8858 (GreGetCharSet.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AB2B4 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00AD68C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00B1A70 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 */

__int64 __fastcall GreGetTextCharsetInfo(HDC a1, __int64 a2)
{
  unsigned int v4; // edi
  int v6; // eax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v4 = (unsigned int)GreGetCharSet(a1) >> 16;
  if ( !a2 )
    return v4;
  DCOBJ::DCOBJ((DCOBJ *)v11, a1);
  if ( v11[0] )
  {
    v12 = 0LL;
    v6 = RFONTOBJ::bInit((RFONTOBJ *)&v12, (struct XDCOBJ *)v11, 0, 2u);
    v7 = v12;
    if ( v6 )
      GreAcquireSemaphore(*(_QWORD *)(v12 + 504));
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 120);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 32);
        if ( *(_DWORD *)(v9 + 4) > 4u && (v10 = *(int *)(v9 + 196), (_DWORD)v10) )
        {
          *(_OWORD *)a2 = *(_OWORD *)(v10 + v9);
          *(_QWORD *)(a2 + 16) = *(_QWORD *)(v10 + v9 + 16);
        }
        else
        {
          *(_QWORD *)a2 = 0LL;
          *(_QWORD *)(a2 + 8) = 0LL;
          *(_DWORD *)(a2 + 16) = 0;
          *(_DWORD *)(a2 + 20) = 0;
        }
        goto LABEL_11;
      }
      EngSetLastError(6u);
    }
    v4 = 1;
LABEL_11:
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v12);
    goto LABEL_12;
  }
  EngSetLastError(6u);
  v4 = 1;
LABEL_12:
  if ( v11[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v11);
  return v4;
}
