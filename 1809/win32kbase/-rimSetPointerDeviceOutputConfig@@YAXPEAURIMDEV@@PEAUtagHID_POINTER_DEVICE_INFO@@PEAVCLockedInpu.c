/*
 * XREFs of ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C0112364
 * Callers:
 *     RIMSetDeviceOutputConfig @ 0x1C0113298 (RIMSetDeviceOutputConfig.c)
 * Callees:
 *     EngMulDiv @ 0x1C0039AE0 (EngMulDiv.c)
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x1C003CF5C (--0CLockedInputSpace@@QEAA@XZ.c)
 *     RIMGetVirtualDesktopPhysicalSize @ 0x1C008BE30 (RIMGetVirtualDesktopPhysicalSize.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ??1CEResourceLockExclusive@@QEAA@XZ @ 0x1C00AD1D4 (--1CEResourceLockExclusive@@QEAA@XZ.c)
 *     RIMGetMonitorPhysicalSize @ 0x1C0112F40 (RIMGetMonitorPhysicalSize.c)
 *     rimUpdatePointerDeviceOrientation @ 0x1C0114638 (rimUpdatePointerDeviceOrientation.c)
 *     ?GetInputSpace@InputConfig@@SA_NU_LUID@@PEAVCLockedInputSpace@@@Z @ 0x1C0153548 (-GetInputSpace@InputConfig@@SA_NU_LUID@@PEAVCLockedInputSpace@@@Z.c)
 */

void __fastcall rimSetPointerDeviceOutputConfig(
        struct RIMDEV *a1,
        struct tagHID_POINTER_DEVICE_INFO *a2,
        struct CLockedInputSpace *a3,
        struct CLockedInputSpaceRegion *a4)
{
  _QWORD *v4; // rax
  __int64 v6; // r14
  __int128 v7; // xmm0
  __int128 v9; // xmm0
  _OWORD *v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  unsigned __int64 v13; // xmm0_8
  __int128 *v14; // rax
  INT v15; // edi
  INT v16; // ebx
  INT v17; // eax
  INT v18; // ecx
  INT v19; // eax
  INT v20; // ebx
  INT v21; // edi
  INT v22; // ecx
  INT v23; // eax
  INT v24; // ecx
  __int64 v25; // [rsp+20h] [rbp-40h] BYREF
  PERESOURCE *v26; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v27[16]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v28; // [rsp+40h] [rbp-20h] BYREF

  v4 = *(_QWORD **)a3;
  v6 = *(_QWORD *)a4;
  v7 = *(_OWORD *)((char *)a2 + 124);
  *((_DWORD *)a2 + 56) = 1;
  *((_OWORD *)a2 + 12) = v7;
  v9 = *(_OWORD *)((char *)a2 + 140);
  *((_OWORD *)a2 + 13) = v9;
  *((_OWORD *)a2 + 11) = v9;
  *((_OWORD *)a2 + 10) = *(_OWORD *)v6;
  *(_QWORD *)((char *)a2 + 228) = *v4;
  CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)&v25, a2);
  if ( *((_DWORD *)a2 + 59)
    && InputConfig::GetInputSpace(*(struct _LUID *)((char *)a2 + 240), (struct CLockedInputSpace *)&v25) )
  {
    *(_QWORD *)((char *)a2 + 228) = *((_QWORD *)a2 + 30);
    if ( *((_DWORD *)a2 + 62) )
      v10 = (_OWORD *)((char *)a2 + 252);
    else
      v10 = (_OWORD *)(v25 + 24);
    *((_OWORD *)a2 + 10) = *v10;
  }
  else
  {
    *((_DWORD *)a2 + 59) = 0;
    v28 = 0uLL;
    *((_QWORD *)a2 + 30) = 0LL;
    *((_DWORD *)a2 + 62) = 0;
    *(_OWORD *)((char *)a2 + 252) = 0uLL;
  }
  v11 = *((_DWORD *)a2 + 77);
  if ( (v11 & 0x20) == 0 || (v11 & 0x8000) != 0 )
  {
    if ( *((_DWORD *)a1 + 298) && (*(_DWORD *)(v6 + 16) & 2) != 0 )
    {
      v15 = *((_DWORD *)a2 + 37);
      *((_DWORD *)a2 + 56) = *(_DWORD *)(v6 + 48);
      v16 = *(_DWORD *)(v6 + 60);
      v17 = EngMulDiv(*(_DWORD *)(v6 + 68), v15, v16);
      v18 = *(_DWORD *)(v6 + 76);
      LODWORD(v28) = v17;
      v19 = EngMulDiv(v18, v15, v16);
      v20 = *(_DWORD *)(v6 + 64);
      v21 = *((_DWORD *)a2 + 38);
      v22 = *(_DWORD *)(v6 + 72);
      DWORD2(v28) = v19;
      v23 = EngMulDiv(v22, v21, v20);
      v24 = *(_DWORD *)(v6 + 80);
      DWORD1(v28) = v23;
      HIDWORD(v28) = EngMulDiv(v24, v21, v20);
      *((_OWORD *)a2 + 13) = v28;
      *((_DWORD *)a2 + 46) = *((_DWORD *)a2 + 54) - *((_DWORD *)a2 + 52);
      *((_DWORD *)a2 + 47) = *((_DWORD *)a2 + 55) - *((_DWORD *)a2 + 53);
      rimUpdatePointerDeviceOrientation(a2);
    }
  }
  else
  {
    v12 = *((_QWORD *)a2 + 20);
    v13 = _mm_srli_si128(*((__m128i *)a2 + 10), 8).m128i_u64[0];
    *((_DWORD *)a2 + 50) = v13 - v12;
    *((_DWORD *)a2 + 51) = HIDWORD(v13) - HIDWORD(v12);
    if ( *((_DWORD *)a1 + 298) )
      v14 = (__int128 *)RIMGetMonitorPhysicalSize(&v28, *((_QWORD *)a1 + 150));
    else
      v14 = (__int128 *)RIMGetVirtualDesktopPhysicalSize((__int64)v27);
    v28 = *v14;
    *((_OWORD *)a2 + 11) = v28;
  }
  CEResourceLockExclusive::~CEResourceLockExclusive(&v26);
}
