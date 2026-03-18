/*
 * XREFs of BcpDisplayProgress @ 0x140349BA8
 * Callers:
 *     BcpGetComponentOffsets @ 0x140349DAC (BcpGetComponentOffsets.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x14034A1A4 (BgpFwDisplayBugCheckProgressUpdate.c)
 *     BgpFwDisplayBugCheckScreen @ 0x14034A390 (BgpFwDisplayBugCheckScreen.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     BgpDisplayCharacterEx @ 0x1403490D4 (BgpDisplayCharacterEx.c)
 *     BcpConvertProgressToString @ 0x140349400 (BcpConvertProgressToString.c)
 *     BcpCursorLessThan @ 0x1403494D8 (BcpCursorLessThan.c)
 *     BcpDisplayCriticalString @ 0x1403495C4 (BcpDisplayCriticalString.c)
 */

__int64 __fastcall BcpDisplayProgress(unsigned int a1, int a2, unsigned int a3)
{
  bool v5; // zf
  __int64 v6; // r14
  int v8; // edx
  UNICODE_STRING *v9; // rcx
  unsigned int v10; // r8d
  unsigned int v11; // r8d
  UNICODE_STRING *v12; // rcx
  __int64 v13; // xmm0_8
  int v14; // r13d
  unsigned int v15; // ebx
  unsigned int v16; // esi
  int v17; // r12d
  int v18; // r15d
  unsigned int v19; // edi
  unsigned __int64 v21; // [rsp+48h] [rbp-29h]
  unsigned __int64 v22; // [rsp+58h] [rbp-19h] BYREF
  int v23; // [rsp+60h] [rbp-11h]
  __int64 v24; // [rsp+68h] [rbp-9h] BYREF
  int v25; // [rsp+70h] [rbp-1h]
  int v26; // [rsp+78h] [rbp+7h] BYREF
  int v27; // [rsp+7Ch] [rbp+Bh] BYREF
  _QWORD v28[2]; // [rsp+80h] [rbp+Fh] BYREF
  char v29; // [rsp+90h] [rbp+1Fh] BYREF

  v22 = 0LL;
  v23 = 0;
  v5 = a1 == 1;
  v6 = 9LL * a2;
  v8 = dword_140429EC0[18 * a2 + 2];
  v9 = &stru_14046B8F0;
  if ( !v5 )
    v9 = &stru_14046B910;
  BcpDisplayCriticalString((__int16 *)v9, v8, a3, a2);
  v28[0] = 0x80000LL;
  v28[1] = &v29;
  BcpConvertProgressToString(a1, (__int64)v28);
  BcpDisplayCriticalString((__int16 *)v28, dword_140429EC0[2 * v6 + 2], v10, a2);
  v12 = &stru_14046B900;
  if ( a1 != 1 )
    v12 = &stru_14046B920;
  BcpDisplayCriticalString((__int16 *)v12, dword_140429EC0[2 * v6 + 2], v11, a2);
  v13 = BcpCursor;
  v14 = dword_1404641E8;
  v24 = BcpCursor;
  v25 = dword_1404641E8;
  if ( BcpCursorLessThan(&v24) )
  {
    v15 = v24;
    v16 = HIDWORD(v24);
    v22 = v24;
    v17 = *(_DWORD *)(*(_QWORD *)(qword_14046B9B0 + 24) + 40LL);
    if ( BcpTextBoxLeftEdgeOverride )
      v18 = *(_DWORD *)BcpTextBoxLeftEdgeOverride;
    else
      v18 = dword_140429EC0[2 * v6 + 8] + dword_140429EC0[2 * v6 + 4];
    if ( BcpTextBoxRightEdgeOverride )
      v19 = *(_DWORD *)BcpTextBoxRightEdgeOverride;
    else
      v19 = dword_140429EC0[2 * v6 + 8] + dword_140429EC0[2 * v6 + 6] + dword_140429EC0[2 * v6 + 4];
    while ( BcpCursorLessThan(&v22) )
    {
      if ( (int)BgpDisplayCharacterEx(0x20u, (__int64 *)qword_14046B9B0, v15, v16, v17, v17, &v26, &v27, v21) < 0 )
        return 0LL;
      v15 += v26;
      LODWORD(v22) = v15;
      if ( v15 > v19 )
      {
        v16 += v27;
        v15 = v18;
        v22 = __PAIR64__(v16, v18);
      }
    }
    v13 = v24;
  }
  if ( (dword_14042C030 & 0x1000000) == 0 )
  {
    BcpProgressEnd = v13;
    dword_14042BF38 = v14;
  }
  return 0LL;
}
