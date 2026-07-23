/*
 * XREFs of BcpDisplayErrorInformation @ 0x1403282A0
 * Callers:
 *     BgpFwDisplayBugCheckScreen @ 0x140328CFC (BgpFwDisplayBugCheckScreen.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     BcpConvertBugDataToString @ 0x140327CE4 (BcpConvertBugDataToString.c)
 *     BcpDisplayCriticalCharacter @ 0x140327E7C (BcpDisplayCriticalCharacter.c)
 *     BcpDisplayCriticalString @ 0x140327F44 (BcpDisplayCriticalString.c)
 *     BcpSanitizeDriverName @ 0x140328990 (BcpSanitizeDriverName.c)
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
  unsigned __int64 *v9; // r14
  unsigned int v10; // r8d
  int v11; // ecx
  int v12; // ebx
  int v13; // edx
  unsigned int v14; // r8d
  int v15; // r15d
  int v16; // edx
  unsigned int v17; // r8d
  __int16 v18; // cx
  unsigned int v19; // r8d
  unsigned int v20; // r8d
  __int64 v21; // rbx
  int v22; // edx
  int v23; // edx
  __int16 v24; // cx
  unsigned int v25; // r8d
  __int64 v26; // rbp
  __int64 v27; // r12
  int v28; // r13d
  unsigned int v29; // r8d
  __int64 result; // rax
  int v31; // [rsp+20h] [rbp-F8h] BYREF
  int v32; // [rsp+24h] [rbp-F4h]
  __int64 v33; // [rsp+28h] [rbp-F0h]
  unsigned int v34; // [rsp+30h] [rbp-E8h]
  int v35; // [rsp+38h] [rbp-E0h] BYREF
  char *v36; // [rsp+40h] [rbp-D8h]
  __int64 v37; // [rsp+48h] [rbp-D0h]
  char v38; // [rsp+50h] [rbp-C8h] BYREF

  v6 = BcpCursor;
  v7 = a1;
  v32 = a2;
  v37 = a5;
  v9 = a3;
  v31 = BcpCursor;
  BcpTextBoxLeftEdgeOverride = (__int64)&v31;
  BcpDisplayCriticalString((__int16 *)&stru_140440BD0, dword_140404A70[18 * a1 + 1], (unsigned int)a3, a1);
  BcpDisplayCriticalString((__int16 *)&stru_140440BE0, dword_140404A70[18 * v7 + 1], v10, v7);
  v11 = dword_140404A70[18 * v7 + 11];
  LODWORD(BcpCursor) = v6;
  HIDWORD(BcpCursor) = v11 + dword_140439800;
  v13 = dword_140404A70[18 * v7];
  dword_140439800 += v11 + v11;
  v12 = dword_140439800;
  BcpDisplayCriticalString((__int16 *)&stru_140440B20, v13, v14, v7);
  v15 = v12 + dword_140404A70[18 * v7 + 11];
  HIDWORD(BcpCursor) = v12;
  LODWORD(BcpCursor) = v6;
  v16 = dword_140404A70[18 * v7];
  dword_140439800 = v15;
  BcpDisplayCriticalString((__int16 *)&stru_140440BC0, v16, v17, v7);
  BcpDisplayCriticalCharacter(v18, dword_140404A70[18 * v7]);
  BcpDisplayCriticalString((__int16 *)(a5 + 16), dword_140404A70[18 * v7], v19, v7);
  v21 = 0LL;
  if ( a4 )
  {
    v22 = dword_140404A70[18 * v7 + 11];
    LODWORD(BcpCursor) = v6;
    dword_140439800 = v15 + v22;
    v23 = dword_140404A70[18 * v7];
    HIDWORD(BcpCursor) = v15;
    BcpDisplayCriticalString((__int16 *)&stru_140440BB0, v23, v20, v7);
    BcpDisplayCriticalCharacter(v24, dword_140404A70[18 * v7]);
    v35 = 0x800000;
    v36 = &v38;
    BcpSanitizeDriverName(a4, &v35);
    BcpDisplayCriticalString((__int16 *)&v35, dword_140404A70[18 * v7], v25, v7);
  }
  v26 = 4LL;
  v33 = BcpCursor;
  v27 = v37;
  v28 = v32;
  v34 = dword_140439800;
  BcpCursor = 0LL;
  dword_140439800 = 0;
  do
  {
    BcpConvertBugDataToString(*v9, v21 + v27 + 32);
    if ( BcpDisplayParameters || (a6 & 8) != 0 && v28 == 317 )
    {
      BcpDisplayCriticalString((__int16 *)(v21 + v27 + 32), dword_140404A70[18 * v7], v29, v7);
      LODWORD(BcpCursor) = 0;
      HIDWORD(BcpCursor) = dword_140439800;
    }
    v21 += 16LL;
    ++v9;
    --v26;
  }
  while ( v26 );
  result = v34;
  BcpTextBoxLeftEdgeOverride = 0LL;
  BcpCursor = v33;
  dword_140439800 = v34;
  return result;
}
