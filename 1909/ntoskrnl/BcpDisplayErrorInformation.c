/*
 * XREFs of BcpDisplayErrorInformation @ 0x140349380
 * Callers:
 *     BgpFwDisplayBugCheckScreen @ 0x140349DF0 (BgpFwDisplayBugCheckScreen.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     BcpConvertBugDataToString @ 0x140348DC8 (BcpConvertBugDataToString.c)
 *     BcpDisplayCriticalCharacter @ 0x140348F5C (BcpDisplayCriticalCharacter.c)
 *     BcpDisplayCriticalString @ 0x140349024 (BcpDisplayCriticalString.c)
 *     BcpSanitizeDriverName @ 0x140349A80 (BcpSanitizeDriverName.c)
 */

__int64 __fastcall BcpDisplayErrorInformation(
        unsigned int a1,
        int a2,
        unsigned __int64 *a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  int v6; // ebp
  __int64 v7; // rsi
  int v9; // edx
  unsigned __int64 *v10; // r14
  unsigned int v11; // r8d
  int v12; // ecx
  int v13; // ebx
  int v14; // edx
  unsigned int v15; // r8d
  int v16; // r15d
  int v17; // edx
  unsigned int v18; // r8d
  __int16 v19; // cx
  unsigned int v20; // r8d
  unsigned int v21; // r8d
  __int64 v22; // rbx
  int v23; // edx
  int v24; // edx
  __int16 v25; // cx
  unsigned int v26; // r8d
  __int64 v27; // rbp
  __int64 v28; // r12
  int v29; // r13d
  unsigned int v30; // r8d
  __int64 result; // rax
  int v32; // [rsp+20h] [rbp-F8h] BYREF
  int v33; // [rsp+24h] [rbp-F4h]
  __int64 v34; // [rsp+28h] [rbp-F0h]
  unsigned int v35; // [rsp+30h] [rbp-E8h]
  _DWORD v36[2]; // [rsp+38h] [rbp-E0h] BYREF
  char *v37; // [rsp+40h] [rbp-D8h]
  __int64 v38; // [rsp+48h] [rbp-D0h]
  char v39; // [rsp+50h] [rbp-C8h] BYREF

  v6 = BcpCursor;
  v7 = a1;
  v36[1] = 0;
  v33 = a2;
  v38 = a5;
  v32 = BcpCursor;
  v9 = dword_140429ED0[18 * a1 + 1];
  v10 = a3;
  BcpTextBoxLeftEdgeOverride = (__int64)&v32;
  BcpDisplayCriticalString((__int16 *)&stru_14046B690, v9, (unsigned int)a3, a1);
  BcpDisplayCriticalString((__int16 *)&stru_14046B6A0, dword_140429ED0[18 * v7 + 1], v11, v7);
  v12 = dword_140429ED0[18 * v7 + 11];
  LODWORD(BcpCursor) = v6;
  HIDWORD(BcpCursor) = v12 + dword_140463EC8;
  v14 = dword_140429ED0[18 * v7];
  dword_140463EC8 += v12 + v12;
  v13 = dword_140463EC8;
  BcpDisplayCriticalString((__int16 *)&stru_14046B5E0, v14, v15, v7);
  v16 = v13 + dword_140429ED0[18 * v7 + 11];
  HIDWORD(BcpCursor) = v13;
  LODWORD(BcpCursor) = v6;
  v17 = dword_140429ED0[18 * v7];
  dword_140463EC8 = v16;
  BcpDisplayCriticalString((__int16 *)&stru_14046B680, v17, v18, v7);
  BcpDisplayCriticalCharacter(v19, dword_140429ED0[18 * v7]);
  BcpDisplayCriticalString((__int16 *)(a5 + 16), dword_140429ED0[18 * v7], v20, v7);
  v22 = 0LL;
  if ( a4 )
  {
    v23 = dword_140429ED0[18 * v7 + 11];
    LODWORD(BcpCursor) = v6;
    dword_140463EC8 = v16 + v23;
    v24 = dword_140429ED0[18 * v7];
    HIDWORD(BcpCursor) = v16;
    BcpDisplayCriticalString((__int16 *)&stru_14046B670, v24, v21, v7);
    BcpDisplayCriticalCharacter(v25, dword_140429ED0[18 * v7]);
    v36[0] = 0x800000;
    v37 = &v39;
    BcpSanitizeDriverName(a4, v36);
    BcpDisplayCriticalString((__int16 *)v36, dword_140429ED0[18 * v7], v26, v7);
  }
  v27 = 4LL;
  v34 = BcpCursor;
  v28 = v38;
  v29 = v33;
  v35 = dword_140463EC8;
  BcpCursor = 0LL;
  dword_140463EC8 = 0;
  do
  {
    BcpConvertBugDataToString(*v10, v22 + v28 + 32);
    if ( BcpDisplayParameters || (a6 & 8) != 0 && v29 == 317 )
    {
      BcpDisplayCriticalString((__int16 *)(v22 + v28 + 32), dword_140429ED0[18 * v7], v30, v7);
      LODWORD(BcpCursor) = 0;
      HIDWORD(BcpCursor) = dword_140463EC8;
    }
    v22 += 16LL;
    ++v10;
    --v27;
  }
  while ( v27 );
  result = v35;
  BcpTextBoxLeftEdgeOverride = 0LL;
  BcpCursor = v34;
  dword_140463EC8 = v35;
  return result;
}
