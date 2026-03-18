/*
 * XREFs of NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C01EE7E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     _MonitorFromPoint @ 0x1C00723A0 (_MonitorFromPoint.c)
 *     _GetPointerDeviceRects @ 0x1C00E05F0 (_GetPointerDeviceRects.c)
 *     _FindPointerDevice @ 0x1C00E0E14 (_FindPointerDevice.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     GetHimetricScaleForMonitor @ 0x1C01AF4C4 (GetHimetricScaleForMonitor.c)
 *     GetScreenRect @ 0x1C022B0B4 (GetScreenRect.c)
 */

__int64 __fastcall NtUserGetHimetricScaleFactorFromPixelLocation(
        unsigned __int64 a1,
        __int64 a2,
        _DWORD *a3,
        _DWORD *a4)
{
  int v8; // edi
  __int64 v9; // rdx
  unsigned int v10; // esi
  int v11; // r14d
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v20; // [rsp+20h] [rbp-A8h] BYREF
  unsigned int v21[5]; // [rsp+24h] [rbp-A4h] BYREF
  __int64 v22; // [rsp+38h] [rbp-90h] BYREF
  __int64 v23; // [rsp+48h] [rbp-80h] BYREF
  _BYTE v24[16]; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v25[16]; // [rsp+60h] [rbp-68h] BYREF
  __int128 v26; // [rsp+70h] [rbp-58h] BYREF
  __int128 v27; // [rsp+80h] [rbp-48h]

  v8 = 1;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v24);
  v23 = 0LL;
  v22 = 0LL;
  if ( !a1 || !a3 || !a4 )
    goto LABEL_19;
  if ( !(unsigned int)FindPointerDevice(a1, &v22, &v23) || !v22 || *(_DWORD *)(v22 + 24) != 7 )
  {
    if ( (unsigned int)GetPointerDeviceRects(a1, 0LL, &v26) )
    {
      v10 = 1;
      v21[0] = 1;
      v11 = 1;
      v20 = 1;
      if ( *(_DWORD *)*gpDispInfo > 1u )
      {
        v27 = *(_OWORD *)GetScreenRect(v25);
        v13 = v26 - v27;
        if ( (_QWORD)v26 == (_QWORD)v27 )
          v13 = *((_QWORD *)&v26 + 1) - *((_QWORD *)&v27 + 1);
        if ( !v13 )
        {
          v14 = MonitorFromPoint(a2, 2LL, 0LL, v12);
          GetHimetricScaleForMonitor(v14, &v20, v21);
          v11 = v20;
          v10 = v21[0];
        }
      }
      goto LABEL_14;
    }
LABEL_19:
    v8 = 0;
    UserSetLastError(87LL, v9);
    goto LABEL_20;
  }
  v10 = 1;
  v21[0] = 1;
  v11 = 1;
  v20 = 1;
LABEL_14:
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (_DWORD *)MmUserProbeAddress;
  *a3 = v11;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    a4 = (_DWORD *)MmUserProbeAddress;
  *a4 = v10;
  v21[3] = 1;
LABEL_20:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v24);
  UserSessionSwitchLeaveCrit(v16, v15, v17, v18);
  return v8;
}
