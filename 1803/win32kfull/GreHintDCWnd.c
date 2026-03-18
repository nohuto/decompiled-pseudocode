/*
 * XREFs of GreHintDCWnd @ 0x1C008C360
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00281E0 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     UpdateRedirectedDCE @ 0x1C00EC310 (UpdateRedirectedDCE.c)
 * Callees:
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C008FCD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C023FEBC (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1C023FF0C (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreHintDCWnd(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 v6; // rsi
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  __m128 v17; // xmm0
  int v18; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v19[4]; // [rsp+28h] [rbp-20h] BYREF

  v6 = a2;
  LOBYTE(a2) = 1;
  v19[1] = 0LL;
  v8 = HmgShareLockEx(a1, a2, 0LL);
  v19[0] = v8;
  v9 = v8;
  if ( !v8 )
    return 0LL;
  v10 = *(_QWORD *)(v8 + 504);
  *(_QWORD *)(v8 + 472) = v6;
  if ( v10 && (*(_DWORD *)(v10 + 116) & 0x800) != 0 )
  {
    DC::vSetDpiScaling(v8, *(_QWORD *)(v10 + 660));
  }
  else if ( v6 && (unsigned int)UserIsWindowGdiScaled(v6, &v18) && (_WORD)v18 != 96 )
  {
    v17 = (__m128)COERCE_UNSIGNED_INT((float)(unsigned __int16)GreGetScaledLogPixels((unsigned __int16)v18));
    v17.m128_f32[0] = v17.m128_f32[0] / 96.0;
    DC::vSetDpiScaling(v9, _mm_unpacklo_ps(v17, v17).m128_u64[0]);
  }
  else
  {
    v11 = *(_DWORD *)(v9 + 528);
    if ( (v11 & 1) != 0 )
    {
      *(_DWORD *)(v9 + 36) |= 0x10u;
      *(_QWORD *)(v9 + 532) = 0LL;
      *(_DWORD *)(v9 + 528) = v11 & 0xFFFFFFF8 | 4;
      *(_QWORD *)(v9 + 540) = 0LL;
      DC::vUpdateCachedDPIScaleValue((DC *)v9);
    }
  }
  *(_QWORD *)(v9 + 480) = a3;
  if ( a3 && (v15 = ValidateHwnd(a3)) != 0 && (v16 = *(_QWORD *)(v15 + 16)) != 0 )
    v12 = **(_QWORD **)(v16 + 416);
  else
    v12 = 0LL;
  *(_QWORD *)(v9 + 488) = v12;
  *(_DWORD *)(v9 + 496) = a4;
  *(_DWORD *)(v9 + 500) = a5;
  XDCOBJ::RestoreAttributes((XDCOBJ *)v19);
  v18 = 0;
  v13 = *(_QWORD *)v19[0];
  HmgDecrementShareReferenceCountEx(v19[0], &v18);
  if ( v18 )
    bDeleteDCInternalEx(v13, 0LL);
  return 1LL;
}
