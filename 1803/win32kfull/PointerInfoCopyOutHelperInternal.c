/*
 * XREFs of PointerInfoCopyOutHelperInternal @ 0x1C01BA900
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     GetDPITransformationMonitor @ 0x1C01AF3F0 (GetDPITransformationMonitor.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x1C01AFA20 (RemapHimetricPointsForMultiMonDigitizers.c)
 */

__int64 __fastcall PointerInfoCopyOutHelperInternal(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, ULONG64 a6)
{
  int AdjustedPointerLocations; // esi
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rax
  ULONG64 v13; // rdx
  int v14; // esi
  int v15; // esi
  ULONG64 v16; // rax
  _OWORD *v17; // rax
  unsigned int v19; // [rsp+50h] [rbp-B8h]
  __int64 DPITransformationMonitor; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v22[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v24[2]; // [rsp+80h] [rbp-88h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-78h]
  __int128 v26; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v27; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v28; // [rsp+C0h] [rbp-48h] BYREF

  v19 = 0;
  v27 = 0uLL;
  v28 = 0uLL;
  AdjustedPointerLocations = GetAdjustedPointerLocations(
                               *(_QWORD *)(a1 + 40),
                               *(_QWORD *)(a1 + 48),
                               *(_QWORD *)(a1 + 56),
                               *(_QWORD *)(a1 + 64),
                               a2,
                               &v21,
                               &v23,
                               v22,
                               v24,
                               a3);
  if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10) + 1200) & 0x2000) != 0 )
    AdjustedPointerLocations = 0;
  if ( a4 == 2 || a4 == 5 )
  {
    v27 = *(_OWORD *)(a1 + 112);
    v28 = *(_OWORD *)(a1 + 128);
  }
  LOBYTE(v11) = 1;
  v12 = HMValidateHandleNoSecure(*(_QWORD *)(a1 + 32), v11);
  if ( v12 )
  {
    v13 = *(unsigned int *)(*(_QWORD *)(v12 + 40) + 288LL);
    LOBYTE(v13) = v13 & 0xF;
    if ( (_BYTE)v13 != 2 )
    {
      if ( !AdjustedPointerLocations )
      {
        v21 = *(_QWORD *)(a1 + 40);
        v23 = *(_QWORD *)(a1 + 48);
        v22[0] = *(_QWORD *)(a1 + 56);
        v24[0] = *(_QWORD *)(a1 + 64);
      }
      DPITransformationMonitor = GetDPITransformationMonitor(v21, v12);
      v14 = PhysicalToLogicalDPIPoint(&v21, &v21, 0LL, &DPITransformationMonitor) | AdjustedPointerLocations;
      AdjustedPointerLocations = PhysicalToLogicalDPIPoint(v22, v22, 0LL, &DPITransformationMonitor) | v14;
      if ( a4 == 2 || a4 == 5 )
      {
        v15 = PhysicalToLogicalDPIRect(&v27, &v27, 0LL, &DPITransformationMonitor) | AdjustedPointerLocations;
        AdjustedPointerLocations = PhysicalToLogicalDPIRect(&v28, &v28, 0LL, &DPITransformationMonitor) | v15;
      }
      if ( *(_DWORD *)*gpDispInfo > 1u && a3 && ((*(_DWORD *)(a3 + 276) & 0x20) != 0 || *(_DWORD *)(a3 + 24) == 6) )
      {
        v26 = *(_OWORD *)(a3 + 176);
        RemapHimetricPointsForMultiMonDigitizers((__int64)&v26, DPITransformationMonitor, &v23, v24);
        AdjustedPointerLocations = 1;
      }
    }
  }
  switch ( a4 )
  {
    case 1:
      if ( a5 != 96 )
        goto LABEL_36;
      v17 = (_OWORD *)a6;
      if ( a6 >= MmUserProbeAddress )
        v17 = (_OWORD *)MmUserProbeAddress;
      *v17 = *(_OWORD *)(a1 + 8);
      v17[1] = *(_OWORD *)(a1 + 24);
      v17[2] = *(_OWORD *)(a1 + 40);
      v17[3] = *(_OWORD *)(a1 + 56);
      v17[4] = *(_OWORD *)(a1 + 72);
      v17[5] = *(_OWORD *)(a1 + 88);
      break;
    case 2:
LABEL_27:
      if ( a5 != 144 )
        goto LABEL_36;
      v13 = a6;
      if ( a6 >= MmUserProbeAddress )
        v13 = MmUserProbeAddress;
      *(_OWORD *)v13 = *(_OWORD *)(a1 + 8);
      *(_OWORD *)(v13 + 16) = *(_OWORD *)(a1 + 24);
      *(_OWORD *)(v13 + 32) = *(_OWORD *)(a1 + 40);
      *(_OWORD *)(v13 + 48) = *(_OWORD *)(a1 + 56);
      *(_OWORD *)(v13 + 64) = *(_OWORD *)(a1 + 72);
      *(_OWORD *)(v13 + 80) = *(_OWORD *)(a1 + 88);
      *(_OWORD *)(v13 + 96) = *(_OWORD *)(a1 + 104);
      *(_OWORD *)(v13 + 112) = *(_OWORD *)(a1 + 120);
      *(_OWORD *)(v13 + 128) = *(_OWORD *)(a1 + 136);
      break;
    case 3:
      if ( a5 != 120 )
        goto LABEL_36;
      v16 = a6;
      if ( a6 >= MmUserProbeAddress )
        v16 = MmUserProbeAddress;
      *(_OWORD *)v16 = *(_OWORD *)(a1 + 8);
      *(_OWORD *)(v16 + 16) = *(_OWORD *)(a1 + 24);
      *(_OWORD *)(v16 + 32) = *(_OWORD *)(a1 + 40);
      *(_OWORD *)(v16 + 48) = *(_OWORD *)(a1 + 56);
      *(_OWORD *)(v16 + 64) = *(_OWORD *)(a1 + 72);
      *(_OWORD *)(v16 + 80) = *(_OWORD *)(a1 + 88);
      *(_OWORD *)(v16 + 96) = *(_OWORD *)(a1 + 104);
      *(_QWORD *)(v16 + 112) = *(_QWORD *)(a1 + 120);
      break;
    case 5:
      goto LABEL_27;
    default:
      v19 = 0;
      goto LABEL_36;
  }
  v19 = 1;
LABEL_36:
  if ( v19 )
  {
    if ( *(_DWORD *)(a1 + 8) == 5 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)CurrentThread, v13) + 1200) & 0x10000) == 0 )
        *(_QWORD *)(a6 + 16) = -2LL;
    }
    if ( AdjustedPointerLocations )
    {
      *(_QWORD *)(a6 + 32) = v21;
      *(_QWORD *)(a6 + 40) = v23;
      *(_QWORD *)(a6 + 48) = v22[0];
      *(_QWORD *)(a6 + 56) = v24[0];
      if ( a4 == 2 || a4 == 5 )
      {
        *(_OWORD *)(a6 + 104) = v27;
        *(_OWORD *)(a6 + 120) = v28;
      }
    }
  }
  return v19;
}
