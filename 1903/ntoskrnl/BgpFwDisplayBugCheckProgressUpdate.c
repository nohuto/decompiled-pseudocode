/*
 * XREFs of BgpFwDisplayBugCheckProgressUpdate @ 0x14034A1A4
 * Callers:
 *     KiBugCheckProgress @ 0x1402A8E70 (KiBugCheckProgress.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x14034A1A4 (BgpFwDisplayBugCheckProgressUpdate.c)
 * Callees:
 *     BcpConvertProgressToString @ 0x140349400 (BcpConvertProgressToString.c)
 *     BcpDisplayProgress @ 0x140349BA8 (BcpDisplayProgress.c)
 *     BcpGetDisplayType @ 0x140349F38 (BcpGetDisplayType.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x14034A1A4 (BgpFwDisplayBugCheckProgressUpdate.c)
 */

__int64 __fastcall BgpFwDisplayBugCheckProgressUpdate(unsigned int a1, UNICODE_STRING **a2, char a3)
{
  unsigned int v3; // edi
  LARGE_INTEGER v7; // rax
  LONGLONG v8; // rcx
  LONGLONG v9; // r8
  LARGE_INTEGER v10; // rsi
  __int64 v11; // rbx
  int DisplayType; // eax
  unsigned int v13; // r8d
  LARGE_INTEGER v14; // rax
  LARGE_INTEGER v15; // r8
  UNICODE_STRING *v16; // rax
  UNICODE_STRING *v17; // rcx
  UNICODE_STRING *v18; // rax
  unsigned __int64 v20; // [rsp+20h] [rbp-28h] BYREF
  int v21; // [rsp+28h] [rbp-20h]
  LARGE_INTEGER v22; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0;
  v22.QuadPart = 0LL;
  if ( (dword_14042C030 & 0x400000) != 0 || (dword_14042C030 & 0x10) == 0 )
    return 0LL;
  v7 = KeQueryPerformanceCounter(&v22);
  v8 = v7.QuadPart - BcpStartTicks;
  v9 = 10 * v22.QuadPart;
  v10.QuadPart = 2 * v22.QuadPart;
  if ( a3 && v8 < v9 )
    v11 = 100 * v8 / v9;
  else
    LODWORD(v11) = 100;
  if ( a1 <= (unsigned int)v11 )
    LODWORD(v11) = a1;
  if ( v7.QuadPart - BcpLastProgressUpdateTicks < v10.QuadPart || (unsigned int)v11 < BcpLastProgressDisplayed )
  {
    LODWORD(v11) = BcpLastProgressDisplayed;
  }
  else
  {
    v20 = __PAIR64__(DWORD1(BgInternal), DWORD2(BgInternal));
    v21 = HIDWORD(BgInternal);
    DisplayType = BcpGetDisplayType(&v20);
    dword_1404641E8 = dword_14042BF48;
    BcpCursor = BcpProgressOffset;
    BcpDisplayProgress(v11, DisplayType, v13);
    BcpLastProgressUpdateTicks = KeQueryPerformanceCounter(0LL).QuadPart;
    BcpLastProgressDisplayed = v11;
  }
  if ( a1 != 100 || (_DWORD)v11 == 100 )
  {
    v16 = &stru_14046B8B0;
    if ( !a3 )
      v16 = &stru_14046B8C0;
    *a2 = v16;
    BcpConvertProgressToString(v11, (__int64)(a2 + 3));
    v17 = &stru_14046B900;
    if ( a1 != 1 )
      v17 = &stru_14046B920;
    v18 = &stru_14046B8F0;
    if ( a1 != 1 )
      v18 = &stru_14046B910;
    a2[1] = v18;
    a2[2] = v17;
  }
  else
  {
    v14.QuadPart = *(_QWORD *)&KeQueryPerformanceCounter(0LL) - BcpLastProgressUpdateTicks;
    if ( v14.QuadPart < v10.QuadPart )
      KeStallExecutionProcessor(1000000 * (v10.QuadPart - v14.QuadPart) / v22.QuadPart);
    LOBYTE(v15.LowPart) = a3;
    return (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))BgpFwDisplayBugCheckProgressUpdate)(
                           100LL,
                           a2,
                           (LARGE_INTEGER)v15.QuadPart);
  }
  return v3;
}
