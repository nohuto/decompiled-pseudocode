/*
 * XREFs of GreGetTextCharsetInfo @ 0x1C0081284
 * Callers:
 *     NtGdiGetTextCharsetInfo @ 0x1C00811F0 (NtGdiGetTextCharsetInfo.c)
 *     ?DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z @ 0x1C022C114 (-DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z.c)
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GreGetCharSet @ 0x1C008138C (GreGetCharSet.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00877F0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088BE8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetTextCharsetInfo(HDC a1, __int64 a2)
{
  unsigned int v4; // ebx
  int v6; // eax
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+28h] [rbp-20h]
  _QWORD v13[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = (unsigned int)GreGetCharSet(a1) >> 16;
  if ( !a2 )
    return v4;
  MDCOBJ::MDCOBJ((MDCOBJ *)v13, a1);
  if ( v13[0] )
  {
    v12 = 0;
    v11 = 0LL;
    v6 = RFONTOBJ::bInit((RFONTOBJ *)&v11, (struct XDCOBJ *)v13, 0, 2u);
    v7 = v11;
    if ( v6 )
      GreAcquireSemaphore(*(_QWORD *)(v11 + 496));
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 104);
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
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v11);
    goto LABEL_12;
  }
  EngSetLastError(6u);
  v4 = 1;
LABEL_12:
  if ( v13[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v13);
  return v4;
}
