/*
 * XREFs of GreGetTextCharsetInfo @ 0x1C0024074
 * Callers:
 *     NtGdiGetTextCharsetInfo @ 0x1C0023FE0 (NtGdiGetTextCharsetInfo.c)
 *     ?DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z @ 0x1C024203C (-DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z.c)
 * Callees:
 *     GreGetCharSet @ 0x1C00241A4 (GreGetCharSet.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C005FD30 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetTextCharsetInfo(HDC a1, __int64 a2)
{
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v11; // [rsp+20h] [rbp-48h] BYREF
  int v12; // [rsp+28h] [rbp-40h]
  _QWORD v13[2]; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v14[40]; // [rsp+40h] [rbp-28h] BYREF

  v4 = (unsigned int)GreGetCharSet(a1) >> 16;
  if ( a2 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v13, a1);
    if ( !v13[0] )
    {
      EngSetLastError(6u);
      v4 = 1;
      goto LABEL_15;
    }
    v12 = 0;
    v11 = 0LL;
    v5 = RFONTOBJ::bInit((RFONTOBJ *)&v11, (struct XDCOBJ *)v13, 0, 2u);
    v6 = v11;
    if ( v5 )
      GreAcquireSemaphore(*(_QWORD *)(v11 + 504));
    if ( v6 )
    {
      v7 = *(_QWORD *)(v6 + 120);
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 32);
        if ( *(_DWORD *)(v8 + 4) > 4u && (v9 = *(int *)(v8 + 196), (_DWORD)v9) )
        {
          *(_OWORD *)a2 = *(_OWORD *)(v9 + v8);
          *(_QWORD *)(a2 + 16) = *(_QWORD *)(v9 + v8 + 16);
        }
        else
        {
          *(_QWORD *)a2 = 0LL;
          *(_QWORD *)(a2 + 8) = 0LL;
          *(_DWORD *)(a2 + 16) = 0;
          *(_DWORD *)(a2 + 20) = 0;
        }
        goto LABEL_13;
      }
      EngSetLastError(6u);
    }
    v4 = 1;
LABEL_13:
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v11);
LABEL_15:
    MDCOBJ::~MDCOBJ((MDCOBJ *)v13);
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v14);
  }
  return v4;
}
