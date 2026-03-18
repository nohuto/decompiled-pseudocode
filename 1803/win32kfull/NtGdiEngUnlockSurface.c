/*
 * XREFs of NtGdiEngUnlockSurface @ 0x1C01226F0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00B13A0 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?UnlockSurface@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C011FAE4 (-UnlockSurface@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiEngUnlockSurface(struct _SURFOBJ *a1, __int64 a2)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  UMPDOBJ *v5; // rcx
  struct UMPDOBJ *v6; // rbx
  __int64 result; // rax

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v6 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 105);
    UMPDOBJ::UnlockSurface(v5, a1);
  }
  result = v6 == 0LL ? 0xC000000D : 0;
  if ( v6 )
    --*((_DWORD *)v6 + 105);
  return result;
}
