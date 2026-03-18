/*
 * XREFs of NtUserCalculatePopupWindowPosition @ 0x1C01EBDB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C00262E4 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     _MonitorFromPoint @ 0x1C00723A0 (_MonitorFromPoint.c)
 *     ??0?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@PEAUtagPOPUPMENU@@@Z @ 0x1C0138F90 (--0-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@PEAUtagPOPUPMENU@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     FindBestPos @ 0x1C020A72C (FindBestPos.c)
 */

__int64 __fastcall NtUserCalculatePopupWindowPosition(__int64 *a1, _QWORD *a2, int a3, __int128 *a4, _DWORD *a5)
{
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // edi
  __int64 v16; // rbx
  unsigned __int64 v17; // rsi
  __int64 v18; // r13
  int BestPos; // ebx
  __int64 v20; // rdx
  _OWORD *v21; // rcx
  int v23[2]; // [rsp+50h] [rbp-98h]
  __int64 v24; // [rsp+60h] [rbp-88h]
  __int64 v25[5]; // [rsp+68h] [rbp-80h] BYREF
  __int128 v26; // [rsp+90h] [rbp-58h] BYREF

  EnterCrit(0LL, 1LL);
  if ( (a3 & 0xFFFE0200) != 0 )
  {
    UserSetLastError(1004LL, v9);
    v15 = 0;
  }
  else
  {
    v15 = 0;
    if ( a5 )
    {
      if ( a4 )
      {
        if ( (unsigned __int64)a4 >= MmUserProbeAddress )
          a4 = (__int128 *)MmUserProbeAddress;
        v26 = *a4;
        a4 = &v26;
        v25[2] = (__int64)&v26;
      }
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_QWORD *)MmUserProbeAddress;
      *(_QWORD *)v23 = *a2;
      if ( (int)*a2 < 0 || (HIDWORD(*a2) & 0x80000000) != 0 )
      {
        UserSetLastError(87LL, MmUserProbeAddress);
      }
      else
      {
        if ( (unsigned __int64)a1 >= MmUserProbeAddress )
          a1 = (__int64 *)MmUserProbeAddress;
        v16 = *a1;
        v24 = *a1;
        v17 = HIDWORD(*a1);
        v18 = MonitorFromPoint(v16, 2LL, 0LL, v10);
        if ( (a3 & 4) != 0 )
        {
          LODWORD(v16) = v16 - v23[0] / 2;
        }
        else if ( (a3 & 8) != 0 )
        {
          LODWORD(v16) = v16 - v23[0];
        }
        if ( (a3 & 0x10) != 0 )
        {
          LODWORD(v17) = v17 - v23[1] / 2;
        }
        else if ( (a3 & 0x20) != 0 )
        {
          LODWORD(v17) = v17 - v23[1];
        }
        v15 = 1;
        SmartObjStackRef<tagPOPUPMENU>::SmartObjStackRef<tagPOPUPMENU>(v25, 0LL);
        BestPos = FindBestPos(v16, v17, v23[0], v23[1], (__int64)a4, a3 | 0x20000u, (__int64)v25, v18, v24);
        SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v25, v20);
        v21 = a5;
        if ( (unsigned __int64)a5 >= MmUserProbeAddress )
          v21 = (_OWORD *)MmUserProbeAddress;
        *v21 = *v21;
        *a5 = (__int16)BestPos;
        v11 = (unsigned int)SHIWORD(BestPos);
        a5[1] = v11;
        a5[2] = v23[0] + (__int16)BestPos;
        v12 = (unsigned int)(v11 + v23[1]);
        a5[3] = v12;
      }
    }
    else
    {
      UserSetLastError(87LL, v9);
    }
  }
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return v15;
}
