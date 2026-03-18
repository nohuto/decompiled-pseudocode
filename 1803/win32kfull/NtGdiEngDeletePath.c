/*
 * XREFs of NtGdiEngDeletePath @ 0x1C02830E0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00B13A0 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     EngDeletePath @ 0x1C0257A90 (EngDeletePath.c)
 */

__int64 __fastcall NtGdiEngDeletePath(__int64 a1, __int64 a2)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v5; // rbx
  __int64 result; // rax

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v5 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 105);
    if ( a1 && a1 == *((_QWORD *)ThreadCurrentObj + 31) )
    {
      EngDeletePath(*((PATHOBJ **)ThreadCurrentObj + 30));
      *((_QWORD *)v5 + 30) = 0LL;
      *((_QWORD *)v5 + 31) = 0LL;
    }
    result = 0LL;
  }
  else
  {
    result = 3221225485LL;
  }
  if ( v5 )
    --*((_DWORD *)v5 + 105);
  return result;
}
