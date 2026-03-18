/*
 * XREFs of PointerInfoCopyOutHelperInternal @ 0x1C01F3140
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     GetDPITransformationMonitor @ 0x1C01E6CD0 (GetDPITransformationMonitor.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x1C01E7240 (RemapHimetricPointsForMultiMonDigitizers.c)
 */

__int64 __fastcall PointerInfoCopyOutHelperInternal(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, ULONG64 a6)
{
  int AdjustedPointerLocations; // esi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  int v15; // esi
  int v16; // esi
  ULONG64 v17; // rax
  _OWORD *v18; // rdx
  _OWORD *v19; // rax
  unsigned int v21; // [rsp+50h] [rbp-B8h]
  __int64 v22; // [rsp+58h] [rbp-B0h] BYREF
  __int64 DPITransformationMonitor; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v26[5]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v27; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v28; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v29; // [rsp+C0h] [rbp-48h] BYREF

  v21 = 0;
  v22 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26[0] = 0LL;
  v28 = 0uLL;
  v29 = 0uLL;
  AdjustedPointerLocations = GetAdjustedPointerLocations(
                               *(_QWORD *)(a1 + 40),
                               *(_QWORD *)(a1 + 48),
                               *(_QWORD *)(a1 + 56),
                               *(_QWORD *)(a1 + 64),
                               a2,
                               &v22,
                               &v25,
                               &v24,
                               v26,
                               a3);
  if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v11) + 1224) & 0x2000) != 0 )
    AdjustedPointerLocations = 0;
  if ( a4 == 2 || a4 == 5 )
  {
    v28 = *(_OWORD *)(a1 + 112);
    v29 = *(_OWORD *)(a1 + 128);
  }
  LOBYTE(v12) = 1;
  v14 = HMValidateHandleNoSecure(*(_QWORD *)(a1 + 32), v12, v13);
  if ( v14 && (*(_DWORD *)(*(_QWORD *)(v14 + 40) + 288LL) & 0xF) != 2 )
  {
    if ( !AdjustedPointerLocations )
    {
      v22 = *(_QWORD *)(a1 + 40);
      v25 = *(_QWORD *)(a1 + 48);
      v24 = *(_QWORD *)(a1 + 56);
      v26[0] = *(_QWORD *)(a1 + 64);
    }
    DPITransformationMonitor = GetDPITransformationMonitor(v22, v14);
    v15 = PhysicalToLogicalDPIPoint(&v22, &v22, 0LL, &DPITransformationMonitor) | AdjustedPointerLocations;
    AdjustedPointerLocations = PhysicalToLogicalDPIPoint(&v24, &v24, 0LL, &DPITransformationMonitor) | v15;
    if ( a4 == 2 || a4 == 5 )
    {
      v16 = PhysicalToLogicalDPIRect(&v28, &v28, 0LL, &DPITransformationMonitor) | AdjustedPointerLocations;
      AdjustedPointerLocations = PhysicalToLogicalDPIRect(&v29, &v29, 0LL, &DPITransformationMonitor) | v16;
    }
    if ( *(_DWORD *)*gpDispInfo > 1u && a3 && !*(_DWORD *)(*(_QWORD *)(a3 + 16) + 1336LL) && *(_DWORD *)(a3 + 24) != 7 )
    {
      v27 = *(_OWORD *)(a3 + 176);
      RemapHimetricPointsForMultiMonDigitizers((__int64)&v27, DPITransformationMonitor, &v25, v26);
      AdjustedPointerLocations = 1;
    }
  }
  switch ( a4 )
  {
    case 1:
      if ( a5 != 96 )
        goto LABEL_36;
      v19 = (_OWORD *)a6;
      if ( a6 >= MmUserProbeAddress )
        v19 = (_OWORD *)MmUserProbeAddress;
      *v19 = *(_OWORD *)(a1 + 8);
      v19[1] = *(_OWORD *)(a1 + 24);
      v19[2] = *(_OWORD *)(a1 + 40);
      v19[3] = *(_OWORD *)(a1 + 56);
      v19[4] = *(_OWORD *)(a1 + 72);
      v19[5] = *(_OWORD *)(a1 + 88);
      goto LABEL_35;
    case 2:
      goto LABEL_27;
    case 3:
      if ( a5 != 120 )
        goto LABEL_36;
      v17 = a6;
      if ( a6 >= MmUserProbeAddress )
        v17 = MmUserProbeAddress;
      *(_OWORD *)v17 = *(_OWORD *)(a1 + 8);
      *(_OWORD *)(v17 + 16) = *(_OWORD *)(a1 + 24);
      *(_OWORD *)(v17 + 32) = *(_OWORD *)(a1 + 40);
      *(_OWORD *)(v17 + 48) = *(_OWORD *)(a1 + 56);
      *(_OWORD *)(v17 + 64) = *(_OWORD *)(a1 + 72);
      *(_OWORD *)(v17 + 80) = *(_OWORD *)(a1 + 88);
      *(_OWORD *)(v17 + 96) = *(_OWORD *)(a1 + 104);
      *(_QWORD *)(v17 + 112) = *(_QWORD *)(a1 + 120);
LABEL_35:
      v21 = 1;
      goto LABEL_36;
    case 5:
LABEL_27:
      if ( a5 != 144 )
        goto LABEL_36;
      v18 = (_OWORD *)a6;
      if ( a6 >= MmUserProbeAddress )
        v18 = (_OWORD *)MmUserProbeAddress;
      *v18 = *(_OWORD *)(a1 + 8);
      v18[1] = *(_OWORD *)(a1 + 24);
      v18[2] = *(_OWORD *)(a1 + 40);
      v18[3] = *(_OWORD *)(a1 + 56);
      v18[4] = *(_OWORD *)(a1 + 72);
      v18[5] = *(_OWORD *)(a1 + 88);
      v18[6] = *(_OWORD *)(a1 + 104);
      v18[7] = *(_OWORD *)(a1 + 120);
      v18[8] = *(_OWORD *)(a1 + 136);
      goto LABEL_35;
  }
  v21 = 0;
LABEL_36:
  if ( v21 )
  {
    if ( AdjustedPointerLocations )
    {
      *(_QWORD *)(a6 + 32) = v22;
      *(_QWORD *)(a6 + 40) = v25;
      *(_QWORD *)(a6 + 48) = v24;
      *(_QWORD *)(a6 + 56) = v26[0];
      if ( a4 == 2 || a4 == 5 )
      {
        *(_OWORD *)(a6 + 104) = v28;
        *(_OWORD *)(a6 + 120) = v29;
      }
    }
  }
  return v21;
}
