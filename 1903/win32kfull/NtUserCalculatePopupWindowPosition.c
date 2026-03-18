/*
 * XREFs of NtUserCalculatePopupWindowPosition @ 0x1C0229E20
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     _MonitorFromPoint @ 0x1C0091B40 (_MonitorFromPoint.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ??0?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@PEAUtagPOPUPMENU@@@Z @ 0x1C0164244 (--0-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@PEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C0164264 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     FindBestPos @ 0x1C024C674 (FindBestPos.c)
 */

__int64 __fastcall NtUserCalculatePopupWindowPosition(
        unsigned __int64 *a1,
        _QWORD *a2,
        int a3,
        __int128 *a4,
        _DWORD *a5)
{
  int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rsi
  __int64 v17; // r13
  int BestPos; // ebx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  _OWORD *v22; // rcx
  int v24[2]; // [rsp+50h] [rbp-98h]
  __int64 v25; // [rsp+60h] [rbp-88h]
  __int64 v26[5]; // [rsp+68h] [rbp-80h] BYREF
  __int128 v27; // [rsp+90h] [rbp-58h] BYREF

  v27 = 0uLL;
  v9 = 0;
  EnterCrit(0LL, 1LL);
  if ( (a3 & 0xFFFE0200) != 0 )
  {
    v13 = 1004LL;
LABEL_3:
    UserSetLastError(v13, v10, v11, v12);
    goto LABEL_28;
  }
  if ( !a5 )
  {
    v13 = 87LL;
    goto LABEL_3;
  }
  if ( a4 )
  {
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (__int128 *)MmUserProbeAddress;
    v27 = *a4;
    a4 = &v27;
    v26[2] = (__int64)&v27;
  }
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (_QWORD *)MmUserProbeAddress;
  *(_QWORD *)v24 = *a2;
  if ( (int)*a2 < 0 || (HIDWORD(*a2) & 0x80000000) != 0 )
  {
    UserSetLastError(87LL, v10, v11, v12);
  }
  else
  {
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (unsigned __int64 *)MmUserProbeAddress;
    v15 = *a1;
    v25 = v15;
    v16 = HIDWORD(v15);
    v17 = MonitorFromPoint(v15, 2u, 0);
    if ( (a3 & 4) != 0 )
    {
      LODWORD(v15) = v15 - v24[0] / 2;
    }
    else if ( (a3 & 8) != 0 )
    {
      LODWORD(v15) = v15 - v24[0];
    }
    if ( (a3 & 0x10) != 0 )
    {
      LODWORD(v16) = v24[1] / -2 + v16;
    }
    else if ( (a3 & 0x20) != 0 )
    {
      LODWORD(v16) = v16 - v24[1];
    }
    v9 = 1;
    SmartObjStackRef<tagPOPUPMENU>::SmartObjStackRef<tagPOPUPMENU>(v26, 0LL);
    BestPos = FindBestPos(v15, v16, v24[0], v24[1], (__int64)a4, a3 | 0x20000u, (__int64)v26, v17, v25);
    SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v26, v19, v20, v21);
    v22 = a5;
    if ( (unsigned __int64)a5 >= MmUserProbeAddress )
      v22 = (_OWORD *)MmUserProbeAddress;
    *v22 = *v22;
    *a5 = (__int16)BestPos;
    a5[1] = SHIWORD(BestPos);
    a5[2] = v24[0] + (__int16)BestPos;
    v14 = (unsigned int)(SHIWORD(BestPos) + v24[1]);
    a5[3] = v14;
  }
LABEL_28:
  UserSessionSwitchLeaveCrit(v14);
  return v9;
}
