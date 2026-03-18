/*
 * XREFs of FinalUserInit @ 0x1C00E0598
 * Callers:
 *     xxxInitWindowStation @ 0x1C00E04A8 (xxxInitWindowStation.c)
 * Callees:
 *     GreSetTextColor @ 0x1C002D630 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C002D740 (GreSetBkColor.c)
 *     _GetTextMetricsW @ 0x1C003E0A8 (_GetTextMetricsW.c)
 *     GreSelectFont @ 0x1C008CDF0 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C008CFF8 (GreSetBkMode.c)
 *     GetDPIServerInfo @ 0x1C0091344 (GetDPIServerInfo.c)
 *     DestroyClass @ 0x1C0097F80 (DestroyClass.c)
 *     MNSetupAnimationDC @ 0x1C00E0A14 (MNSetupAnimationDC.c)
 *     GreGetTextExtentW @ 0x1C011DC04 (GreGetTextExtentW.c)
 *     GreTextInitialized @ 0x1C0165578 (GreTextInitialized.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 FinalUserInit()
{
  __int64 SessionDpiServerInfo; // r15
  _DWORD *v1; // r12
  HDC v2; // r14
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // xmm2_8
  __int128 v10; // xmm4
  int v11; // edi
  __int128 v12; // xmm3
  __int64 DPIServerInfo; // rax
  __int64 v14; // xmm0_8
  __int128 v15; // xmm0
  __int64 v16; // r14
  HDC v17; // r13
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // ecx
  __int64 v21; // xmm2_8
  __int128 v22; // xmm4
  int v23; // edi
  __int128 v24; // xmm3
  __int64 v25; // rax
  __int64 v26; // xmm0_8
  __int128 v27; // xmm0
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 CurrentProcessWin32Process; // rbx
  __int64 i; // rcx
  __int64 v36; // rcx
  struct tagPROCESSINFO *v37; // rax
  _OWORD v39[4]; // [rsp+30h] [rbp-40h] BYREF
  struct _POINTL v40; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v41; // [rsp+B8h] [rbp+48h]

  SessionDpiServerInfo = GetSessionDpiServerInfo();
  v1 = (_DWORD *)(SessionDpiServerInfo + 36);
  v2 = *(HDC *)(gpDispInfo + 64LL);
  memset(v39, 0, 0x3CuLL);
  v5 = GreTextInitialized(v4, v3);
  if ( v5 && (unsigned int)GetTextMetricsW(v2, (__int64)v39) )
  {
    v8 = DWORD2(v39[3]);
    v9 = *(_QWORD *)&v39[3];
    v10 = v39[2];
    v11 = DWORD1(v39[1]);
    v12 = v39[0];
  }
  else
  {
    DPIServerInfo = GetDPIServerInfo();
    v8 = *(unsigned int *)(DPIServerInfo + 96);
    v14 = *(_QWORD *)(DPIServerInfo + 88);
    v12 = *(_OWORD *)(DPIServerInfo + 40);
    v10 = *(_OWORD *)(DPIServerInfo + 72);
    v39[1] = *(_OWORD *)(DPIServerInfo + 56);
    *(_QWORD *)&v39[3] = v14;
    v9 = v14;
    v11 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v39[1], 4));
    v39[0] = v12;
    if ( !DWORD1(v39[1]) )
      v11 = 8;
    DWORD1(v39[1]) = v11;
  }
  if ( SessionDpiServerInfo != -40 )
  {
    v15 = v39[1];
    *(_OWORD *)(SessionDpiServerInfo + 40) = v12;
    *(_OWORD *)(SessionDpiServerInfo + 56) = v15;
    *(_OWORD *)(SessionDpiServerInfo + 72) = v10;
    *(_QWORD *)(SessionDpiServerInfo + 88) = v9;
    *(_DWORD *)(SessionDpiServerInfo + 96) = v8;
  }
  if ( SessionDpiServerInfo != -36 )
    *v1 = v39[0];
  if ( v5 )
  {
    if ( (BYTE7(v39[3]) & 1) != 0 )
    {
      v40 = 0LL;
      if ( (unsigned int)GreGetTextExtentW(v2, L"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", 0x34u, &v40, 1) )
      {
        v6 = (unsigned int)((int)(((int)((unsigned __int64)(1321528399LL * v40.x) >> 32) >> 3)
                                + 1
                                + ((unsigned int)((unsigned __int64)(1321528399LL * v40.x) >> 32) >> 31)) >> 31);
        v11 = (int)(((int)((unsigned __int64)(1321528399LL * v40.x) >> 32) >> 3)
                  + 1
                  + ((unsigned int)((unsigned __int64)(1321528399LL * v40.x) >> 32) >> 31))
            / 2;
      }
    }
  }
  *(_DWORD *)(SessionDpiServerInfo + 32) = v11;
  v16 = Get96DpiServerInfo(v8, v6, v7);
  v41 = GreSelectFont(*(_QWORD *)(gpDispInfo + 64LL), *(_QWORD *)(v16 + 24));
  v17 = *(HDC *)(gpDispInfo + 64LL);
  memset(v39, 0, 0x3CuLL);
  v40.x = GreTextInitialized(v19, v18);
  if ( v40.x && (unsigned int)GetTextMetricsW(v17, (__int64)v39) )
  {
    v20 = DWORD2(v39[3]);
    v21 = *(_QWORD *)&v39[3];
    v22 = v39[2];
    v23 = DWORD1(v39[1]);
    v24 = v39[0];
  }
  else
  {
    v25 = GetDPIServerInfo();
    v20 = *(_DWORD *)(v25 + 96);
    v26 = *(_QWORD *)(v25 + 88);
    v24 = *(_OWORD *)(v25 + 40);
    v22 = *(_OWORD *)(v25 + 72);
    v39[1] = *(_OWORD *)(v25 + 56);
    *(_QWORD *)&v39[3] = v26;
    v21 = v26;
    v23 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v39[1], 4));
    v39[0] = v24;
    if ( !DWORD1(v39[1]) )
      v23 = 8;
    DWORD1(v39[1]) = v23;
  }
  if ( v16 != -40 )
  {
    v27 = v39[1];
    *(_OWORD *)(v16 + 40) = v24;
    *(_OWORD *)(v16 + 56) = v27;
    *(_OWORD *)(v16 + 72) = v22;
    *(_QWORD *)(v16 + 88) = v21;
    *(_DWORD *)(v16 + 96) = v20;
  }
  if ( v16 != -36 )
    *(_DWORD *)(v16 + 36) = v39[0];
  if ( v40.x )
  {
    if ( (BYTE7(v39[3]) & 1) != 0 )
    {
      v40 = 0LL;
      if ( (unsigned int)GreGetTextExtentW(v17, L"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", 0x34u, &v40, 1) )
        v23 = (int)(((int)((unsigned __int64)(1321528399LL * v40.x) >> 32) >> 3)
                  + 1
                  + ((unsigned int)((unsigned __int64)(1321528399LL * v40.x) >> 32) >> 31))
            / 2;
    }
  }
  v28 = v41;
  *(_DWORD *)(v16 + 32) = v23;
  GreSelectFont(*(_QWORD *)(gpDispInfo + 64LL), v28);
  *(_QWORD *)(gpDispInfo + 72LL) = GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 56LL));
  v29 = *(_QWORD *)(gpDispInfo + 72LL);
  if ( !v29 )
    return 0LL;
  GreSelectFont(v29, *(_QWORD *)(SessionDpiServerInfo + 24));
  GreSetDCOwnerEx(*(_QWORD *)(gpDispInfo + 72LL), 0LL, 0LL, 0LL);
  *(_DWORD *)(gpDispInfo + 88LL) = 40 * *(_DWORD *)(SessionDpiServerInfo + 32);
  *(_DWORD *)(gpDispInfo + 92LL) = *v1 + 2;
  *(_QWORD *)(gpDispInfo + 80LL) = GreCreateBitmap(
                                     *(unsigned int *)(gpDispInfo + 88LL),
                                     *(unsigned int *)(gpDispInfo + 92LL),
                                     1LL,
                                     1LL,
                                     0LL);
  v30 = *(_QWORD *)(gpDispInfo + 80LL);
  if ( !v30 )
    return 0LL;
  GreSetBitmapOwner(v30, 0LL);
  GreSelectBitmap(*(_QWORD *)(gpDispInfo + 72LL));
  GreSetTextColor(*(HDC *)(gpDispInfo + 72LL), 0);
  GreSelectBrush(*(_QWORD *)(gpDispInfo + 72LL), *(_QWORD *)(gpsi + 4944LL));
  GreSetBkMode(*(HDC *)(gpDispInfo + 72LL), 2);
  GreSetBkColor(*(HDC *)(gpDispInfo + 72LL), 0xFFFFFF);
  MNSetupAnimationDC(gMenuState);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v32, v31);
  for ( i = *(_QWORD *)(CurrentProcessWin32Process + 352); i; i = *(_QWORD *)(CurrentProcessWin32Process + 352) )
  {
    v36 = *(_QWORD *)(i + 8);
    if ( (*(_DWORD *)(v36 + 8) & 0x4000) != 0 )
      break;
    v37 = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(v36, v33);
    DestroyClass(v37, (struct _CALLPROCDATA ***)(CurrentProcessWin32Process + 352));
  }
  return 1LL;
}
