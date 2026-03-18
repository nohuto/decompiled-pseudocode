/*
 * XREFs of PointerInfoCopyOutHelperInternal @ 0x1C01F32C0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     GetDPITransformationMonitor @ 0x1C01E6E50 (GetDPITransformationMonitor.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x1C01E73C0 (RemapHimetricPointsForMultiMonDigitizers.c)
 */

__int64 __fastcall PointerInfoCopyOutHelperInternal(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, ULONG64 a6)
{
  int AdjustedPointerLocations; // esi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  int v17; // esi
  int v18; // esi
  ULONG64 v19; // rax
  _OWORD *v20; // rdx
  _OWORD *v21; // rax
  unsigned int v23; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v24; // [rsp+58h] [rbp-B0h] BYREF
  __int64 DPITransformationMonitor; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v28[5]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v29; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v30; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v31; // [rsp+C0h] [rbp-48h] BYREF

  v23 = 0;
  v24 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28[0] = 0LL;
  v30 = 0uLL;
  v31 = 0uLL;
  AdjustedPointerLocations = GetAdjustedPointerLocations(
                               *(_QWORD *)(a1 + 40),
                               *(_QWORD *)(a1 + 48),
                               *(_QWORD *)(a1 + 56),
                               *(_QWORD *)(a1 + 64),
                               a2,
                               &v24,
                               &v27,
                               &v26,
                               v28,
                               a3);
  if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v11, v12) + 1224) & 0x2000) != 0 )
    AdjustedPointerLocations = 0;
  if ( a4 == 2 || a4 == 5 )
  {
    v30 = *(_OWORD *)(a1 + 112);
    v31 = *(_OWORD *)(a1 + 128);
  }
  LOBYTE(v13) = 1;
  v16 = HMValidateHandleNoSecure(*(_QWORD *)(a1 + 32), v13, v14, v15);
  if ( v16 && (*(_DWORD *)(*(_QWORD *)(v16 + 40) + 288LL) & 0xF) != 2 )
  {
    if ( !AdjustedPointerLocations )
    {
      v24 = *(_QWORD *)(a1 + 40);
      v27 = *(_QWORD *)(a1 + 48);
      v26 = *(_QWORD *)(a1 + 56);
      v28[0] = *(_QWORD *)(a1 + 64);
    }
    DPITransformationMonitor = GetDPITransformationMonitor(v24, v16);
    v17 = PhysicalToLogicalDPIPoint(&v24, &v24, 0LL, &DPITransformationMonitor) | AdjustedPointerLocations;
    AdjustedPointerLocations = PhysicalToLogicalDPIPoint(&v26, &v26, 0LL, &DPITransformationMonitor) | v17;
    if ( a4 == 2 || a4 == 5 )
    {
      v18 = PhysicalToLogicalDPIRect(&v30, &v30, 0LL, &DPITransformationMonitor) | AdjustedPointerLocations;
      AdjustedPointerLocations = PhysicalToLogicalDPIRect(&v31, &v31, 0LL, &DPITransformationMonitor) | v18;
    }
    if ( *(_DWORD *)*gpDispInfo > 1u && a3 && !*(_DWORD *)(*(_QWORD *)(a3 + 16) + 1320LL) && *(_DWORD *)(a3 + 24) != 7 )
    {
      v29 = *(_OWORD *)(a3 + 176);
      RemapHimetricPointsForMultiMonDigitizers((__int64)&v29, DPITransformationMonitor, &v27, v28);
      AdjustedPointerLocations = 1;
    }
  }
  switch ( a4 )
  {
    case 1:
      if ( a5 != 96 )
        goto LABEL_36;
      v21 = (_OWORD *)a6;
      if ( a6 >= MmUserProbeAddress )
        v21 = (_OWORD *)MmUserProbeAddress;
      *v21 = *(_OWORD *)(a1 + 8);
      v21[1] = *(_OWORD *)(a1 + 24);
      v21[2] = *(_OWORD *)(a1 + 40);
      v21[3] = *(_OWORD *)(a1 + 56);
      v21[4] = *(_OWORD *)(a1 + 72);
      v21[5] = *(_OWORD *)(a1 + 88);
      goto LABEL_35;
    case 2:
      goto LABEL_27;
    case 3:
      if ( a5 != 120 )
        goto LABEL_36;
      v19 = a6;
      if ( a6 >= MmUserProbeAddress )
        v19 = MmUserProbeAddress;
      *(_OWORD *)v19 = *(_OWORD *)(a1 + 8);
      *(_OWORD *)(v19 + 16) = *(_OWORD *)(a1 + 24);
      *(_OWORD *)(v19 + 32) = *(_OWORD *)(a1 + 40);
      *(_OWORD *)(v19 + 48) = *(_OWORD *)(a1 + 56);
      *(_OWORD *)(v19 + 64) = *(_OWORD *)(a1 + 72);
      *(_OWORD *)(v19 + 80) = *(_OWORD *)(a1 + 88);
      *(_OWORD *)(v19 + 96) = *(_OWORD *)(a1 + 104);
      *(_QWORD *)(v19 + 112) = *(_QWORD *)(a1 + 120);
LABEL_35:
      v23 = 1;
      goto LABEL_36;
    case 5:
LABEL_27:
      if ( a5 != 144 )
        goto LABEL_36;
      v20 = (_OWORD *)a6;
      if ( a6 >= MmUserProbeAddress )
        v20 = (_OWORD *)MmUserProbeAddress;
      *v20 = *(_OWORD *)(a1 + 8);
      v20[1] = *(_OWORD *)(a1 + 24);
      v20[2] = *(_OWORD *)(a1 + 40);
      v20[3] = *(_OWORD *)(a1 + 56);
      v20[4] = *(_OWORD *)(a1 + 72);
      v20[5] = *(_OWORD *)(a1 + 88);
      v20[6] = *(_OWORD *)(a1 + 104);
      v20[7] = *(_OWORD *)(a1 + 120);
      v20[8] = *(_OWORD *)(a1 + 136);
      goto LABEL_35;
  }
  v23 = 0;
LABEL_36:
  if ( v23 )
  {
    if ( AdjustedPointerLocations )
    {
      *(_QWORD *)(a6 + 32) = v24;
      *(_QWORD *)(a6 + 40) = v27;
      *(_QWORD *)(a6 + 48) = v26;
      *(_QWORD *)(a6 + 56) = v28[0];
      if ( a4 == 2 || a4 == 5 )
      {
        *(_OWORD *)(a6 + 104) = v30;
        *(_OWORD *)(a6 + 120) = v31;
      }
    }
  }
  return v23;
}
