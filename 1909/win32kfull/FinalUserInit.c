/*
 * XREFs of FinalUserInit @ 0x1C00801F4
 * Callers:
 *     xxxInitWindowStation @ 0x1C0080104 (xxxInitWindowStation.c)
 * Callees:
 *     GreSetTextColor @ 0x1C0022D4C (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0022E5C (GreSetBkColor.c)
 *     DestroyClass @ 0x1C0038CB0 (DestroyClass.c)
 *     MNSetupAnimationDC @ 0x1C0080670 (MNSetupAnimationDC.c)
 *     GreGetTextExtentW @ 0x1C00F77A4 (GreGetTextExtentW.c)
 *     _GetTextMetricsW @ 0x1C0107DCC (_GetTextMetricsW.c)
 *     GreSelectFont @ 0x1C012B530 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C012B54C (GreSetBkMode.c)
 *     GetDPIServerInfo @ 0x1C012C168 (GetDPIServerInfo.c)
 *     GreTextInitialized @ 0x1C0166B18 (GreTextInitialized.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 FinalUserInit()
{
  __int64 SessionDpiServerInfo; // r15
  _DWORD *v1; // r12
  HDC v2; // r14
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // esi
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // xmm2_8
  __int128 v11; // xmm4
  int v12; // edi
  __int128 v13; // xmm3
  __int64 DPIServerInfo; // rax
  __int64 v15; // xmm0_8
  __int128 v16; // xmm0
  __int64 v17; // r14
  HDC v18; // r13
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // ecx
  __int64 v25; // xmm2_8
  __int128 v26; // xmm4
  int v27; // edi
  __int128 v28; // xmm3
  __int64 v29; // rax
  __int64 v30; // xmm0_8
  __int128 v31; // xmm0
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 CurrentProcessWin32Process; // rbx
  __int64 i; // rcx
  __int64 v40; // rcx
  struct tagPROCESSINFO *v41; // rax
  _OWORD v43[4]; // [rsp+30h] [rbp-40h] BYREF
  struct _POINTL v44; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v45; // [rsp+B8h] [rbp+48h]

  SessionDpiServerInfo = GetSessionDpiServerInfo();
  v1 = (_DWORD *)(SessionDpiServerInfo + 36);
  v2 = *(HDC *)(gpDispInfo + 64LL);
  memset(v43, 0, 0x3CuLL);
  v7 = GreTextInitialized(v4, v3);
  if ( v7 && (unsigned int)GetTextMetricsW(v2) )
  {
    v9 = DWORD2(v43[3]);
    v10 = *(_QWORD *)&v43[3];
    v11 = v43[2];
    v12 = DWORD1(v43[1]);
    v13 = v43[0];
  }
  else
  {
    DPIServerInfo = GetDPIServerInfo(v6, v5, v8);
    v9 = *(unsigned int *)(DPIServerInfo + 96);
    v15 = *(_QWORD *)(DPIServerInfo + 88);
    v13 = *(_OWORD *)(DPIServerInfo + 40);
    v11 = *(_OWORD *)(DPIServerInfo + 72);
    v43[1] = *(_OWORD *)(DPIServerInfo + 56);
    *(_QWORD *)&v43[3] = v15;
    v10 = v15;
    v12 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v43[1], 4));
    v43[0] = v13;
    if ( !DWORD1(v43[1]) )
      v12 = 8;
    DWORD1(v43[1]) = v12;
  }
  if ( SessionDpiServerInfo != -40 )
  {
    v16 = v43[1];
    *(_OWORD *)(SessionDpiServerInfo + 40) = v13;
    *(_OWORD *)(SessionDpiServerInfo + 56) = v16;
    *(_OWORD *)(SessionDpiServerInfo + 72) = v11;
    *(_QWORD *)(SessionDpiServerInfo + 88) = v10;
    *(_DWORD *)(SessionDpiServerInfo + 96) = v9;
  }
  if ( SessionDpiServerInfo != -36 )
    *v1 = v43[0];
  if ( v7 )
  {
    if ( (BYTE7(v43[3]) & 1) != 0 )
    {
      v44 = 0LL;
      if ( (unsigned int)GreGetTextExtentW(v2, L"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", 0x34u, &v44, 1) )
      {
        v5 = (unsigned int)((int)(((int)((unsigned __int64)(1321528399LL * v44.x) >> 32) >> 3)
                                + 1
                                + ((unsigned int)((unsigned __int64)(1321528399LL * v44.x) >> 32) >> 31)) >> 31);
        v12 = (int)(((int)((unsigned __int64)(1321528399LL * v44.x) >> 32) >> 3)
                  + 1
                  + ((unsigned int)((unsigned __int64)(1321528399LL * v44.x) >> 32) >> 31))
            / 2;
      }
    }
  }
  *(_DWORD *)(SessionDpiServerInfo + 32) = v12;
  v17 = Get96DpiServerInfo(v9, v5, v8);
  v45 = GreSelectFont(*(_QWORD *)(gpDispInfo + 64LL), *(_QWORD *)(v17 + 24));
  v18 = *(HDC *)(gpDispInfo + 64LL);
  memset(v43, 0, 0x3CuLL);
  v44.x = GreTextInitialized(v20, v19);
  if ( v44.x && (unsigned int)GetTextMetricsW(v18) )
  {
    v24 = DWORD2(v43[3]);
    v25 = *(_QWORD *)&v43[3];
    v26 = v43[2];
    v27 = DWORD1(v43[1]);
    v28 = v43[0];
  }
  else
  {
    v29 = GetDPIServerInfo(v22, v21, v23);
    v24 = *(_DWORD *)(v29 + 96);
    v30 = *(_QWORD *)(v29 + 88);
    v28 = *(_OWORD *)(v29 + 40);
    v26 = *(_OWORD *)(v29 + 72);
    v43[1] = *(_OWORD *)(v29 + 56);
    *(_QWORD *)&v43[3] = v30;
    v25 = v30;
    v27 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v43[1], 4));
    v43[0] = v28;
    if ( !DWORD1(v43[1]) )
      v27 = 8;
    DWORD1(v43[1]) = v27;
  }
  if ( v17 != -40 )
  {
    v31 = v43[1];
    *(_OWORD *)(v17 + 40) = v28;
    *(_OWORD *)(v17 + 56) = v31;
    *(_OWORD *)(v17 + 72) = v26;
    *(_QWORD *)(v17 + 88) = v25;
    *(_DWORD *)(v17 + 96) = v24;
  }
  if ( v17 != -36 )
    *(_DWORD *)(v17 + 36) = v43[0];
  if ( v44.x )
  {
    if ( (BYTE7(v43[3]) & 1) != 0 )
    {
      v44 = 0LL;
      if ( (unsigned int)GreGetTextExtentW(v18, L"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", 0x34u, &v44, 1) )
        v27 = (int)(((int)((unsigned __int64)(1321528399LL * v44.x) >> 32) >> 3)
                  + 1
                  + ((unsigned int)((unsigned __int64)(1321528399LL * v44.x) >> 32) >> 31))
            / 2;
    }
  }
  v32 = v45;
  *(_DWORD *)(v17 + 32) = v27;
  GreSelectFont(*(_QWORD *)(gpDispInfo + 64LL), v32);
  *(_QWORD *)(gpDispInfo + 72LL) = GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 56LL));
  v33 = *(_QWORD *)(gpDispInfo + 72LL);
  if ( !v33 )
    return 0LL;
  GreSelectFont(v33, *(_QWORD *)(SessionDpiServerInfo + 24));
  GreSetDCOwnerEx(*(_QWORD *)(gpDispInfo + 72LL), 0LL, 0LL, 0LL);
  *(_DWORD *)(gpDispInfo + 88LL) = 40 * *(_DWORD *)(SessionDpiServerInfo + 32);
  *(_DWORD *)(gpDispInfo + 92LL) = *v1 + 2;
  *(_QWORD *)(gpDispInfo + 80LL) = GreCreateBitmap(
                                     *(unsigned int *)(gpDispInfo + 88LL),
                                     *(unsigned int *)(gpDispInfo + 92LL),
                                     1LL,
                                     1LL,
                                     0LL);
  v34 = *(_QWORD *)(gpDispInfo + 80LL);
  if ( !v34 )
    return 0LL;
  GreSetBitmapOwner(v34, 0LL);
  GreSelectBitmap(*(_QWORD *)(gpDispInfo + 72LL), *(_QWORD *)(gpDispInfo + 80LL));
  GreSetTextColor(*(HDC *)(gpDispInfo + 72LL), 0);
  GreSelectBrush(*(_QWORD *)(gpDispInfo + 72LL), *(_QWORD *)(gpsi + 4944LL));
  GreSetBkMode(*(HDC *)(gpDispInfo + 72LL));
  GreSetBkColor(*(HDC *)(gpDispInfo + 72LL), 0xFFFFFF);
  MNSetupAnimationDC(gMenuState);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v36, v35);
  for ( i = *(_QWORD *)(CurrentProcessWin32Process + 352); i; i = *(_QWORD *)(CurrentProcessWin32Process + 352) )
  {
    v40 = *(_QWORD *)(i + 8);
    if ( (*(_DWORD *)(v40 + 8) & 0x4000) != 0 )
      break;
    v41 = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(v40, v37);
    DestroyClass(v41, (struct _CALLPROCDATA ***)(CurrentProcessWin32Process + 352));
  }
  return 1LL;
}
