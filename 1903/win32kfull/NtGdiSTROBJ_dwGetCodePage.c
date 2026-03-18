/*
 * XREFs of NtGdiSTROBJ_dwGetCodePage @ 0x1C02AE140
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0057988 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ??$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z @ 0x1C011433C (--$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z.c)
 */

__int64 __fastcall NtGdiSTROBJ_dwGetCodePage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v7; // rbx
  unsigned __int64 v8; // rax
  __int64 result; // rax

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v7 = ThreadCurrentObj;
  if ( ThreadCurrentObj
    && (++*((_DWORD *)ThreadCurrentObj + 105), (v8 = UMPDOBJ::GetDDIOBJ<_STROBJ>((__int64)ThreadCurrentObj, a1)) != 0) )
  {
    result = *(unsigned int *)(v8 + 124);
  }
  else
  {
    result = 0LL;
  }
  if ( v7 )
    --*((_DWORD *)v7 + 105);
  return result;
}
