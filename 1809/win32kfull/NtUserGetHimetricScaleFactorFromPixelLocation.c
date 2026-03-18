/*
 * XREFs of NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C0214D70
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     _MonitorFromPoint @ 0x1C007AE20 (_MonitorFromPoint.c)
 *     GetScreenRect @ 0x1C00B9150 (GetScreenRect.c)
 *     _GetPointerDeviceRects @ 0x1C00B9184 (_GetPointerDeviceRects.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     GetHimetricScaleForMonitor @ 0x1C01D2320 (GetHimetricScaleForMonitor.c)
 *     _FindPointerDevice @ 0x1C01DAB38 (_FindPointerDevice.c)
 */

__int64 __fastcall NtUserGetHimetricScaleFactorFromPixelLocation(
        unsigned __int64 a1,
        unsigned __int64 a2,
        _DWORD *a3,
        _DWORD *a4)
{
  int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // esi
  int v13; // r14d
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v21; // [rsp+20h] [rbp-A8h] BYREF
  unsigned int v22[5]; // [rsp+24h] [rbp-A4h] BYREF
  __int64 v23; // [rsp+38h] [rbp-90h] BYREF
  struct DEVICEINFO *v24; // [rsp+48h] [rbp-80h] BYREF
  _BYTE v25[16]; // [rsp+50h] [rbp-78h] BYREF
  __m128i v26; // [rsp+60h] [rbp-68h] BYREF
  __m128i v27; // [rsp+70h] [rbp-58h] BYREF
  __m128i v28; // [rsp+80h] [rbp-48h]

  v8 = 1;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v25);
  v24 = 0LL;
  v23 = 0LL;
  if ( !a1 || !a3 || !a4 )
    goto LABEL_19;
  if ( !(unsigned int)FindPointerDevice(a1, &v23, &v24) || !v23 || *(_DWORD *)(v23 + 24) != 7 )
  {
    if ( (unsigned int)GetPointerDeviceRects(a1, 0LL, &v27) )
    {
      v12 = 1;
      v22[0] = 1;
      v13 = 1;
      v21 = 1;
      if ( *(_DWORD *)*gpDispInfo > 1u )
      {
        v28 = *GetScreenRect(&v26, v9);
        v14 = v27.m128i_i64[0] - v28.m128i_i64[0];
        if ( v27.m128i_i64[0] == v28.m128i_i64[0] )
          v14 = v27.m128i_i64[1] - v28.m128i_i64[1];
        if ( !v14 )
        {
          v15 = MonitorFromPoint(a2, 2LL, 0);
          GetHimetricScaleForMonitor(v15, &v21, v22);
          v13 = v21;
          v12 = v22[0];
        }
      }
      goto LABEL_14;
    }
LABEL_19:
    v8 = 0;
    UserSetLastError(87LL, v9, v10, v11);
    goto LABEL_20;
  }
  v12 = 1;
  v22[0] = 1;
  v13 = 1;
  v21 = 1;
LABEL_14:
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (_DWORD *)MmUserProbeAddress;
  *a3 = v13;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    a4 = (_DWORD *)MmUserProbeAddress;
  *a4 = v12;
  v22[3] = 1;
LABEL_20:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v25);
  UserSessionSwitchLeaveCrit(v17, v16, v18, v19);
  return v8;
}
