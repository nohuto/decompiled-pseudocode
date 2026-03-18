/*
 * XREFs of NtGdiEngLockSurface @ 0x1C010ECC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00A1218 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?LockSurface@UMPDOBJ@@QEAAPEAU_SURFOBJ@@PEAUHSURF__@@@Z @ 0x1C010ED20 (-LockSurface@UMPDOBJ@@QEAAPEAU_SURFOBJ@@PEAUHSURF__@@@Z.c)
 */

struct _SURFOBJ *__fastcall NtGdiEngLockSurface(HSURF a1, __int64 a2, __int64 a3)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  UMPDOBJ *v6; // rcx
  struct UMPDOBJ *v7; // rbx
  struct _SURFOBJ *result; // rax

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v7 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 105);
    result = UMPDOBJ::LockSurface(v6, a1);
  }
  else
  {
    result = 0LL;
  }
  if ( v7 )
    --*((_DWORD *)v7 + 105);
  return result;
}
