/*
 * XREFs of ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C0143444
 * Callers:
 *     RIMSetDeviceOutputConfig @ 0x1C01440DC (RIMSetDeviceOutputConfig.c)
 * Callees:
 *     EngMulDiv @ 0x1C004D390 (EngMulDiv.c)
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x1C0052E30 (--0CLockedInputSpace@@QEAA@XZ.c)
 *     RIMGetVirtualDesktopPhysicalSize @ 0x1C009E8B0 (RIMGetVirtualDesktopPhysicalSize.c)
 *     HMValidateSharedHandleNoRip @ 0x1C00A56B8 (HMValidateSharedHandleNoRip.c)
 *     RIMGetMonitorPhysicalSize @ 0x1C0143D70 (RIMGetMonitorPhysicalSize.c)
 *     rimUpdatePointerDeviceOrientation @ 0x1C014533C (rimUpdatePointerDeviceOrientation.c)
 *     ?GetInputSpace@InputConfig@@SA_NU_LUID@@PEAVCLockedInputSpace@@@Z @ 0x1C0185CC4 (-GetInputSpace@InputConfig@@SA_NU_LUID@@PEAVCLockedInputSpace@@@Z.c)
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
  __int64 v10; // r8
  _OWORD *v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  unsigned __int64 v14; // xmm0_8
  __int64 v15; // rdx
  __int64 v16; // rax
  _OWORD *v17; // rax
  INT v18; // edi
  INT v19; // ebx
  INT v20; // eax
  INT v21; // ecx
  INT v22; // eax
  INT v23; // ebx
  INT v24; // edi
  INT v25; // ecx
  INT v26; // eax
  INT v27; // ecx
  __int128 v28; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v29[2]; // [rsp+30h] [rbp-10h] BYREF

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
  CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v29);
  if ( *((_DWORD *)a2 + 59)
    && InputConfig::GetInputSpace(*(struct _LUID *)((char *)a2 + 240), (struct CLockedInputSpace *)v29) )
  {
    *(_QWORD *)((char *)a2 + 228) = *((_QWORD *)a2 + 30);
    if ( *((_DWORD *)a2 + 62) )
      v11 = (_OWORD *)((char *)a2 + 252);
    else
      v11 = (_OWORD *)(v29[0] + 24LL);
    *((_OWORD *)a2 + 10) = *v11;
  }
  else
  {
    *((_DWORD *)a2 + 59) = 0;
    v28 = 0uLL;
    *((_QWORD *)a2 + 30) = 0LL;
    *((_DWORD *)a2 + 62) = 0;
    *(_OWORD *)((char *)a2 + 252) = 0uLL;
  }
  v12 = *((_DWORD *)a2 + 78);
  if ( (v12 & 8) == 0 || (v12 & 0x2000) != 0 )
  {
    if ( *((_DWORD *)a1 + 334) && (*(_DWORD *)(v6 + 16) & 2) != 0 )
    {
      v18 = *((_DWORD *)a2 + 37);
      *((_DWORD *)a2 + 56) = *(_DWORD *)(v6 + 48);
      v19 = *(_DWORD *)(v6 + 60);
      v20 = EngMulDiv(*(_DWORD *)(v6 + 68), v18, v19);
      v21 = *(_DWORD *)(v6 + 76);
      LODWORD(v28) = v20;
      v22 = EngMulDiv(v21, v18, v19);
      v23 = *(_DWORD *)(v6 + 64);
      v24 = *((_DWORD *)a2 + 38);
      v25 = *(_DWORD *)(v6 + 72);
      DWORD2(v28) = v22;
      v26 = EngMulDiv(v25, v24, v23);
      v27 = *(_DWORD *)(v6 + 80);
      DWORD1(v28) = v26;
      HIDWORD(v28) = EngMulDiv(v27, v24, v23);
      *((_OWORD *)a2 + 13) = v28;
      *((_DWORD *)a2 + 46) = *((_DWORD *)a2 + 54) - *((_DWORD *)a2 + 52);
      *((_DWORD *)a2 + 47) = *((_DWORD *)a2 + 55) - *((_DWORD *)a2 + 53);
      rimUpdatePointerDeviceOrientation(a2);
    }
  }
  else
  {
    v13 = *((_QWORD *)a2 + 20);
    v14 = _mm_srli_si128(*((__m128i *)a2 + 10), 8).m128i_u64[0];
    v15 = (unsigned int)(HIDWORD(v14) - HIDWORD(v13));
    *((_DWORD *)a2 + 50) = v14 - v13;
    *((_DWORD *)a2 + 51) = v15;
    if ( *((_DWORD *)a1 + 334) )
    {
      v16 = HMValidateSharedHandleNoRip(*((_QWORD *)a1 + 168), v15, v10);
      v17 = (_OWORD *)RIMGetMonitorPhysicalSize(&v28, v16);
    }
    else
    {
      v17 = (_OWORD *)RIMGetVirtualDesktopPhysicalSize((__int64)&v28);
    }
    *((_OWORD *)a2 + 11) = *v17;
  }
  ExReleaseResourceLite(*(PERESOURCE *)v29[1]);
  KeLeaveCriticalRegion();
}
