/*
 * XREFs of NtGdiXFORMOBJ_iGetXform @ 0x1C011EAB0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     XFORMOBJ_iGetXform @ 0x1C007F260 (XFORMOBJ_iGetXform.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00B13A0 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z @ 0x1C011F92C (--$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiXFORMOBJ_iGetXform(__int64 a1, __int64 a2)
{
  ULONG64 v2; // rsi
  ULONG Xform; // r14d
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v7; // rbx
  XFORMOBJ *v8; // rax
  __int128 v10; // [rsp+28h] [rbp-40h] BYREF
  __int64 v11; // [rsp+38h] [rbp-30h]

  v2 = a2;
  Xform = -1;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v7 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0xFFFFFFFFLL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  v8 = (XFORMOBJ *)UMPDOBJ::GetDDIOBJ<_XFORMOBJ>(ThreadCurrentObj, a1);
  if ( v8 )
  {
    Xform = XFORMOBJ_iGetXform(v8, (XFORML *)((unsigned __int64)&v10 & -(__int64)(v2 != 0)));
    if ( Xform != -1 )
    {
      if ( v2 )
      {
        if ( v2 >= MmUserProbeAddress )
          v2 = MmUserProbeAddress;
        *(_OWORD *)v2 = v10;
        *(_QWORD *)(v2 + 16) = v11;
      }
    }
  }
  if ( v7 )
    --*((_DWORD *)v7 + 105);
  return Xform;
}
