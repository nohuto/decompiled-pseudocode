/*
 * XREFs of NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C022C520
 * Callers:
 *     <none>
 * Callees:
 *     _MonitorFromPoint @ 0x1C00149A0 (_MonitorFromPoint.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _GetPointerDeviceRects @ 0x1C01081CC (_GetPointerDeviceRects.c)
 *     GetScreenRect @ 0x1C01082C4 (GetScreenRect.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     GetHimetricScaleForMonitor @ 0x1C01E6D84 (GetHimetricScaleForMonitor.c)
 */

__int64 __fastcall NtUserGetHimetricScaleFactorFromPixelLocation(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // esi
  int v13; // r14d
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  int v18; // [rsp+20h] [rbp-98h] BYREF
  unsigned int v19[5]; // [rsp+24h] [rbp-94h] BYREF
  __int64 v20; // [rsp+38h] [rbp-80h] BYREF
  _BYTE v21[16]; // [rsp+48h] [rbp-70h] BYREF
  __int128 v22; // [rsp+58h] [rbp-60h] BYREF
  __int128 v23; // [rsp+68h] [rbp-50h] BYREF
  __int128 v24; // [rsp+78h] [rbp-40h]

  v8 = 1;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v21);
  v23 = 0uLL;
  v20 = 0LL;
  if ( !a1 || !a3 || !a4 )
    goto LABEL_18;
  if ( !(unsigned int)ResolveMouseOrPointerDevice(a1, &v20, 0LL) || *(_DWORD *)(v20 + 24) != 7 )
  {
    if ( (unsigned int)GetPointerDeviceRects(a1, 0LL, &v23) )
    {
      v12 = 1;
      v19[0] = 1;
      v13 = 1;
      v18 = 1;
      if ( *(_DWORD *)*gpDispInfo > 1u )
      {
        v24 = *GetScreenRect(&v22, v9, v10);
        v14 = v23 - v24;
        if ( (_QWORD)v23 == (_QWORD)v24 )
          v14 = *((_QWORD *)&v23 + 1) - *((_QWORD *)&v24 + 1);
        if ( !v14 )
        {
          v15 = MonitorFromPoint(a2, 2u, 0);
          GetHimetricScaleForMonitor(v15, &v18, v19);
          v13 = v18;
          v12 = v19[0];
        }
      }
      goto LABEL_13;
    }
LABEL_18:
    v8 = 0;
    UserSetLastError(87LL, v9, v10, v11);
    goto LABEL_19;
  }
  v12 = 1;
  v19[0] = 1;
  v13 = 1;
  v18 = 1;
LABEL_13:
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (_DWORD *)MmUserProbeAddress;
  *a3 = v13;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    a4 = (_DWORD *)MmUserProbeAddress;
  *a4 = v12;
  v19[3] = 1;
LABEL_19:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v21);
  UserSessionSwitchLeaveCrit(v16);
  return v8;
}
