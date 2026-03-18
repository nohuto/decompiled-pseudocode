/*
 * XREFs of NtGdiSTROBJ_vEnumStart @ 0x1C02ADD00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00A1218 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ??$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z @ 0x1C00EE73C (--$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z.c)
 */

__int64 __fastcall NtGdiSTROBJ_vEnumStart(__int64 a1, __int64 a2, __int64 a3)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v6; // rbx
  __int64 result; // rax
  unsigned __int64 v8; // rax

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v6 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 105);
    v8 = UMPDOBJ::GetDDIOBJ<_STROBJ>((__int64)ThreadCurrentObj, a1);
    if ( v8 )
    {
      *(_DWORD *)(v8 + 48) = 0;
      *(_DWORD *)(v8 + 52) = 0;
    }
    result = 0LL;
  }
  else
  {
    result = 3221225485LL;
  }
  if ( v6 )
    --*((_DWORD *)v6 + 105);
  return result;
}
