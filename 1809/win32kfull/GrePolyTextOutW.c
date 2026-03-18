/*
 * XREFs of GrePolyTextOutW @ 0x1C009B4AC
 * Callers:
 *     NtGdiPolyTextOutW @ 0x1C009B100 (NtGdiPolyTextOutW.c)
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0057450 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C005C640 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00A4AD4 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C0137840 (--0DCOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C015E848 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C015E92C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GrePolyTextOutW(HDC a1, unsigned __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // r14
  unsigned int v8; // edi
  unsigned __int64 v9; // r14
  int **v10; // rbx
  unsigned int v11; // r8d
  ERECTL *v12; // rcx
  _QWORD v14[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v15[32]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v16; // [rsp+90h] [rbp-70h] BYREF
  __int64 v17; // [rsp+A0h] [rbp-60h]
  int v18; // [rsp+A8h] [rbp-58h]
  _QWORD v19[10]; // [rsp+B0h] [rbp-50h] BYREF
  char v20; // [rsp+100h] [rbp+0h] BYREF

  v5 = a3;
  v14[0] = 0LL;
  v14[1] = 0LL;
  v8 = 1;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v15);
  XDCOBJ::vLock((XDCOBJ *)v14, a1);
  if ( !v14[0] || (*(_DWORD *)(v14[0] + 36LL) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v8 = 0;
  }
  else
  {
    DCOBJ::DCOBJ((DCOBJ *)v19);
    v17 = 0LL;
    v16 = 0LL;
    v18 = 0;
    v19[0] = 0LL;
    memset(&v19[6], 0, 24);
    if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v16, (struct XDCOBJ *)v14, 0) )
    {
      v9 = a2 + 56 * v5;
      if ( a2 < v9 )
      {
        v10 = (int **)(a2 + 48);
        while ( 1 )
        {
          v11 = *((_DWORD *)v10 - 10);
          v12 = (ERECTL *)&v20;
          if ( ((30 * v11 + 7) & 0xFFFFFFF8) > 0xC0 )
            v12 = 0LL;
          if ( !(unsigned int)GreExtTextOutWLocked(
                                (struct XDCOBJ *)v14,
                                *((_DWORD *)v10 - 12),
                                *((_DWORD *)v10 - 11),
                                *((_DWORD *)v10 - 6),
                                (struct tagRECT *)((char *)v10 - 20),
                                (unsigned __int16 *)*(v10 - 4),
                                v11,
                                *v10,
                                *(unsigned __int8 *)(*(_QWORD *)(v14[0] + 976LL) + 213LL),
                                v12,
                                a4) )
            break;
          v10 += 7;
          if ( (unsigned __int64)(v10 - 6) >= v9 )
            goto LABEL_13;
        }
        v8 = 0;
      }
    }
    else
    {
      v8 = XDCOBJ::bFullScreen((XDCOBJ *)v14);
    }
LABEL_13:
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v16);
    DCOBJ::~DCOBJ((DCOBJ *)v19);
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v14);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v15);
  return v8;
}
