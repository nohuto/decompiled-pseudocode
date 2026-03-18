/*
 * XREFs of NtGdiPATHOBJ_vGetBounds @ 0x1C02ADF00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0057988 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1C02AA640 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 */

__int64 __fastcall NtGdiPATHOBJ_vGetBounds(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _RECTFX *v4; // rdi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v8; // rbx
  PATHOBJ *v10; // rax
  struct _RECTFX prectfx; // [rsp+28h] [rbp-20h] BYREF

  v4 = (struct _RECTFX *)a2;
  *(_QWORD *)&prectfx.xLeft = 0LL;
  *(_QWORD *)&prectfx.xRight = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v8 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 3221225485LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  v10 = (PATHOBJ *)UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)ThreadCurrentObj, a1);
  if ( v10 )
  {
    PATHOBJ_vGetBounds(v10, &prectfx);
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (struct _RECTFX *)MmUserProbeAddress;
    *v4 = prectfx;
  }
  if ( v8 )
    --*((_DWORD *)v8 + 105);
  return 0LL;
}
