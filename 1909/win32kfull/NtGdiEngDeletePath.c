/*
 * XREFs of NtGdiEngDeletePath @ 0x1C02AB2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00A1218 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     EngDeletePath @ 0x1C0283180 (EngDeletePath.c)
 */

__int64 __fastcall NtGdiEngDeletePath(__int64 a1, __int64 a2, __int64 a3)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v6; // rbx
  __int64 result; // rax

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v6 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 105);
    if ( a1 && a1 == *((_QWORD *)ThreadCurrentObj + 31) )
    {
      EngDeletePath(*((PATHOBJ **)ThreadCurrentObj + 30));
      *((_QWORD *)v6 + 30) = 0LL;
      *((_QWORD *)v6 + 31) = 0LL;
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
