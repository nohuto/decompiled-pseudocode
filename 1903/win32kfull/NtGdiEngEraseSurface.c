/*
 * XREFs of NtGdiEngEraseSurface @ 0x1C02AB810
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0057988 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C0057F68 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     EngEraseSurface @ 0x1C00FBD70 (EngEraseSurface.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C0112580 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C014A3A8 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiEngEraseSurface(struct _SURFOBJ *a1, RECTL *a2, __int64 a3, __int64 a4)
{
  ULONG v4; // r14d
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v8; // rbx
  SURFOBJ *v10; // rsi
  unsigned int v11; // edi
  RECTL *prcl; // [rsp+20h] [rbp-58h] BYREF
  int v13; // [rsp+28h] [rbp-50h]
  SURFOBJ *pso; // [rsp+30h] [rbp-48h] BYREF
  int v15; // [rsp+38h] [rbp-40h]
  struct UMPDOBJ *v16; // [rsp+40h] [rbp-38h]
  struct _RECTL v17; // [rsp+48h] [rbp-30h] BYREF

  v4 = a3;
  prcl = a2;
  v13 = a3;
  *(_QWORD *)&v17.left = 0LL;
  *(_QWORD *)&v17.right = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2, a3, a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v8 = ThreadCurrentObj;
  v16 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&pso, a1, ThreadCurrentObj);
  v10 = pso;
  if ( pso )
  {
    CaptureRECTL(&prcl, &v17);
    if ( (*((_DWORD *)v8 + 103) & 0x100) != 0 && !prcl )
    {
      if ( gfUMPDDebug )
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiEngEraseSurface:prcl == NULL\n", 2494);
      if ( v15 )
        EngUnlockSurface(v10);
      --*((_DWORD *)v8 + 105);
      return 0LL;
    }
    v11 = bCheckSurfaceRect(v10, prcl, 0LL);
    if ( v11 )
      v11 = EngEraseSurface(v10, prcl, v4);
  }
  else
  {
    v11 = 0;
  }
  if ( v15 )
    EngUnlockSurface(v10);
  --*((_DWORD *)v8 + 105);
  return v11;
}
