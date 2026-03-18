/*
 * XREFs of NtGdiEngCheckAbort @ 0x1C02AB020
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00A1218 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C00A17F8 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     EngCheckAbort @ 0x1C02792B0 (EngCheckAbort.c)
 */

__int64 __fastcall NtGdiEngCheckAbort(struct _SURFOBJ *a1, __int64 a2, __int64 a3)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v6; // rbx
  unsigned int v7; // edi
  SURFOBJ *v8; // rsi
  SURFOBJ *pso; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+28h] [rbp-10h]

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v6 = ThreadCurrentObj;
  v7 = 1;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 105);
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&pso, a1, ThreadCurrentObj);
    v8 = pso;
    if ( pso )
      v7 = EngCheckAbort(pso);
    if ( v11 )
      EngUnlockSurface(v8);
    if ( v6 )
      --*((_DWORD *)v6 + 105);
  }
  return v7;
}
