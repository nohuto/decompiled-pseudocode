/*
 * XREFs of NtGdiEngEraseSurface @ 0x1C0283170
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00B13A0 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     EngEraseSurface @ 0x1C00DD4B0 (EngEraseSurface.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C011EED0 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C011F4AC (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C01205CC (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiEngEraseSurface(struct _SURFOBJ *a1, RECTL *a2, ULONG a3)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v7; // rbx
  SURFOBJ *v9; // rsi
  unsigned int v10; // edi
  RECTL *prcl; // [rsp+20h] [rbp-58h] BYREF
  ULONG v12; // [rsp+28h] [rbp-50h]
  SURFOBJ *pso; // [rsp+30h] [rbp-48h] BYREF
  int v14; // [rsp+38h] [rbp-40h]
  struct UMPDOBJ *v15; // [rsp+40h] [rbp-38h]
  struct _RECTL v16; // [rsp+48h] [rbp-30h] BYREF

  prcl = a2;
  v12 = a3;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v7 = ThreadCurrentObj;
  v15 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&pso, a1, ThreadCurrentObj);
  v9 = pso;
  if ( pso )
  {
    CaptureRECTL(&prcl, &v16);
    if ( (*((_DWORD *)v7 + 103) & 0x100) != 0 && !prcl )
    {
      if ( gfUMPDDebug )
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiEngEraseSurface:prcl == NULL\n", 2494);
      if ( v14 )
        EngUnlockSurface(v9);
      --*((_DWORD *)v7 + 105);
      return 0LL;
    }
    v10 = bCheckSurfaceRect(v9, prcl, 0LL);
    if ( v10 )
      v10 = EngEraseSurface(v9, prcl, a3);
  }
  else
  {
    v10 = 0;
  }
  if ( v14 )
    EngUnlockSurface(v9);
  --*((_DWORD *)v7 + 105);
  return v10;
}
