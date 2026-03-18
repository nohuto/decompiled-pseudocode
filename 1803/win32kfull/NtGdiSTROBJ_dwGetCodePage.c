/*
 * XREFs of NtGdiSTROBJ_dwGetCodePage @ 0x1C02858D0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00B13A0 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z @ 0x1C011F85C (--$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z.c)
 */

__int64 __fastcall NtGdiSTROBJ_dwGetCodePage(__int64 a1, __int64 a2)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v5; // rbx
  unsigned __int64 v6; // rax
  __int64 result; // rax

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v5 = ThreadCurrentObj;
  if ( ThreadCurrentObj
    && (++*((_DWORD *)ThreadCurrentObj + 105), (v6 = UMPDOBJ::GetDDIOBJ<_STROBJ>((__int64)ThreadCurrentObj, a1)) != 0) )
  {
    result = *(unsigned int *)(v6 + 124);
  }
  else
  {
    result = 0LL;
  }
  if ( v5 )
    --*((_DWORD *)v5 + 105);
  return result;
}
