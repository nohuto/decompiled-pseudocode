/*
 * XREFs of NtGdiEngUnlockSurface @ 0x1C0112170
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00A1218 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?UnlockSurface@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C01121D4 (-UnlockSurface@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiEngUnlockSurface(struct _SURFOBJ *a1, __int64 a2, __int64 a3)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  UMPDOBJ *v6; // rcx
  struct UMPDOBJ *v7; // rbx
  __int64 result; // rax

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v7 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 105);
    UMPDOBJ::UnlockSurface(v6, a1);
    result = 0LL;
  }
  else
  {
    result = 3221225485LL;
  }
  if ( v7 )
    --*((_DWORD *)v7 + 105);
  return result;
}
