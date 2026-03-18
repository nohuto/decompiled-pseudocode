/*
 * XREFs of NtGdiPATHOBJ_vGetBounds @ 0x1C02ADA50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00A1218 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1C02AA190 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 */

__int64 __fastcall NtGdiPATHOBJ_vGetBounds(__int64 a1, __int64 a2, __int64 a3)
{
  struct _RECTFX *v3; // rdi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v7; // rbx
  PATHOBJ *v9; // rax
  struct _RECTFX prectfx; // [rsp+28h] [rbp-20h] BYREF

  v3 = (struct _RECTFX *)a2;
  *(_QWORD *)&prectfx.xLeft = 0LL;
  *(_QWORD *)&prectfx.xRight = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v7 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 3221225485LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  v9 = (PATHOBJ *)UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)ThreadCurrentObj, a1);
  if ( v9 )
  {
    PATHOBJ_vGetBounds(v9, &prectfx);
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (struct _RECTFX *)MmUserProbeAddress;
    *v3 = prectfx;
  }
  if ( v7 )
    --*((_DWORD *)v7 + 105);
  return 0LL;
}
