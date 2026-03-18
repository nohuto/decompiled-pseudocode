/*
 * XREFs of GreHintDCWnd @ 0x1C00EEA10
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00CD04C (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     UpdateRedirectedDCE @ 0x1C00EE8D0 (UpdateRedirectedDCE.c)
 * Callees:
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C0270E4C (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1C0270F14 (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreHintDCWnd(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 v6; // rsi
  __int64 result; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // eax
  __m128 v16; // xmm0
  unsigned __int16 v17[12]; // [rsp+20h] [rbp-18h] BYREF

  v6 = a2;
  LOBYTE(a2) = 1;
  result = HmgShareLockEx(a1, a2, 0LL);
  v9 = result;
  if ( result )
  {
    *(_QWORD *)(result + 464) = v6;
    v10 = *(_QWORD *)(result + 496);
    if ( !v10 || *(int *)(v10 + 112) < 0 )
    {
      if ( v6 && (unsigned int)UserIsWindowGdiScaled(v6, v17) && v17[0] != 96 )
      {
        v16 = (__m128)COERCE_UNSIGNED_INT((float)(unsigned __int16)GreGetScaledLogPixels(v17[0]));
        v16.m128_f32[0] = v16.m128_f32[0] / 96.0;
        DC::vSetDpiScaling(v9, _mm_unpacklo_ps(v16, v16).m128_u64[0]);
      }
      else
      {
        v15 = *(_DWORD *)(v9 + 520);
        if ( (v15 & 1) != 0 )
        {
          *(_DWORD *)(v9 + 36) |= 0x10u;
          *(_QWORD *)(v9 + 524) = 0LL;
          *(_DWORD *)(v9 + 520) = v15 & 0xFFFFFFF8 | 4;
          *(_QWORD *)(v9 + 532) = 0LL;
          DC::vUpdateCachedDPIScaleValue((DC *)v9);
        }
      }
    }
    *(_QWORD *)(v9 + 472) = a3;
    if ( a3 && (v13 = ValidateHwnd(a3)) != 0 && (v14 = *(_QWORD *)(v13 + 16)) != 0 )
      v11 = **(_QWORD **)(v14 + 416);
    else
      v11 = 0LL;
    *(_QWORD *)(v9 + 480) = v11;
    *(_DWORD *)(v9 + 488) = a4;
    *(_DWORD *)(v9 + 492) = a5;
    *(_DWORD *)v17 = 0;
    v12 = *(_QWORD *)v9;
    HmgDecrementShareReferenceCountEx(v9, v17);
    if ( *(_DWORD *)v17 )
      bDeleteDCInternalEx(v12, 0LL);
    return 1LL;
  }
  return result;
}
