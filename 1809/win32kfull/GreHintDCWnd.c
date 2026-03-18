/*
 * XREFs of GreHintDCWnd @ 0x1C000EAA0
 * Callers:
 *     UpdateRedirectedDCE @ 0x1C000E950 (UpdateRedirectedDCE.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0043B34 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x1C015F030 (--0-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C02575A4 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1C02575F4 (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreHintDCWnd(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  __m128 v13; // xmm0
  int v14; // eax
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned int v19; // ebx
  __int64 v20; // rdi
  int v22; // [rsp+20h] [rbp-48h] BYREF
  __int64 v23; // [rsp+28h] [rbp-40h]
  __int64 v24; // [rsp+30h] [rbp-38h]
  _BYTE v25[40]; // [rsp+38h] [rbp-30h] BYREF

  v24 = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>(v25);
  LOBYTE(v9) = 1;
  v10 = HmgShareLockEx(a1, v9, 0LL);
  v23 = v10;
  v11 = v10;
  if ( v10 )
  {
    *(_QWORD *)(v10 + 464) = a2;
    v12 = *(_QWORD *)(v10 + 496);
    if ( !v12 || *(int *)(v12 + 112) < 0 )
    {
      if ( a2 && (unsigned int)UserIsWindowGdiScaled(a2, &v22) && (_WORD)v22 != 96 )
      {
        v13 = (__m128)COERCE_UNSIGNED_INT((float)(unsigned __int16)GreGetScaledLogPixels());
        v13.m128_f32[0] = v13.m128_f32[0] / 96.0;
        DC::vSetDpiScaling(v11, _mm_unpacklo_ps(v13, v13).m128_u64[0]);
      }
      else
      {
        v14 = *(_DWORD *)(v11 + 520);
        if ( (v14 & 1) != 0 )
        {
          *(_DWORD *)(v11 + 36) |= 0x10u;
          *(_QWORD *)(v11 + 524) = 0LL;
          *(_DWORD *)(v11 + 520) = v14 & 0xFFFFFFF8 | 4;
          *(_QWORD *)(v11 + 532) = 0LL;
          DC::vUpdateCachedDPIScaleValue((DC *)v11);
        }
      }
    }
    v15 = v23;
    *(_QWORD *)(v23 + 472) = a3;
    if ( a3 && (v16 = ValidateHwnd(a3)) != 0 && (v17 = *(_QWORD *)(v16 + 16)) != 0 )
      v18 = **(_QWORD **)(v17 + 424);
    else
      v18 = 0LL;
    *(_QWORD *)(v15 + 480) = v18;
    v19 = 1;
    *(_DWORD *)(v23 + 488) = a4;
    *(_DWORD *)(v23 + 492) = a5;
    if ( v23 )
    {
      v22 = 0;
      v20 = *(_QWORD *)v23;
      HmgDecrementShareReferenceCountEx(v23, &v22);
      if ( v22 )
        bDeleteDCInternalEx(v20, 0LL);
    }
  }
  else
  {
    v19 = 0;
  }
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v25);
  return v19;
}
