/*
 * XREFs of BgpFwDisplayBugCheckProgressUpdate @ 0x140328B14
 * Callers:
 *     KiBugCheckProgress @ 0x140292610 (KiBugCheckProgress.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x140328B14 (BgpFwDisplayBugCheckProgressUpdate.c)
 * Callees:
 *     BcpConvertProgressToString @ 0x140327D7C (BcpConvertProgressToString.c)
 *     BcpDisplayProgress @ 0x140328520 (BcpDisplayProgress.c)
 *     BcpGetDisplayType @ 0x1403288A8 (BcpGetDisplayType.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x140328B14 (BgpFwDisplayBugCheckProgressUpdate.c)
 */

__int64 __fastcall BgpFwDisplayBugCheckProgressUpdate(unsigned int a1, UNICODE_STRING **a2, char a3)
{
  LARGE_INTEGER v6; // rax
  unsigned int v7; // ebp
  LONGLONG v8; // rdx
  LONGLONG v9; // r8
  LARGE_INTEGER v10; // rdi
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

  if ( (dword_140406AD0 & 0x400000) != 0 || (dword_140406AD0 & 0x10) == 0 )
    return 0LL;
  v6 = KeQueryPerformanceCounter(&v22);
  v7 = 0;
  v8 = v6.QuadPart - BcpStartTicks;
  v9 = 10 * v22.QuadPart;
  v10.QuadPart = 2 * v22.QuadPart;
  if ( a3 && v8 < v9 )
    v11 = 100 * v8 / v9;
  else
    LODWORD(v11) = 100;
  if ( a1 <= (unsigned int)v11 )
    LODWORD(v11) = a1;
  if ( v6.QuadPart - BcpLastProgressUpdateTicks < v10.QuadPart || (unsigned int)v11 < BcpLastProgressDisplayed )
  {
    LODWORD(v11) = BcpLastProgressDisplayed;
  }
  else
  {
    v20 = __PAIR64__(DWORD1(BgInternal), DWORD2(BgInternal));
    v21 = HIDWORD(BgInternal);
    DisplayType = BcpGetDisplayType(&v20);
    dword_140439800 = dword_1404069F8;
    BcpCursor = BcpProgressOffset;
    BcpDisplayProgress(v11, DisplayType, v13);
    BcpLastProgressUpdateTicks = KeQueryPerformanceCounter(0LL).QuadPart;
    BcpLastProgressDisplayed = v11;
  }
  if ( a1 != 100 || (_DWORD)v11 == 100 )
  {
    v16 = &stru_140440B30;
    if ( !a3 )
      v16 = &stru_140440B40;
    *a2 = v16;
    BcpConvertProgressToString(v11, (__int64)(a2 + 3));
    v17 = &stru_140440B80;
    if ( a1 != 1 )
      v17 = &stru_140440BA0;
    v18 = &stru_140440B70;
    if ( a1 != 1 )
      v18 = &stru_140440B90;
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
  return v7;
}
