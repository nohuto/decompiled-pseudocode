/*
 * XREFs of BgpBcInitializeCriticalMode @ 0x140A410A4
 * Callers:
 *     BgpFwLibraryInitialize @ 0x14098F9A8 (BgpFwLibraryInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     BgpFwFreeMemory @ 0x1401784AC (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x140178CE0 (BgpFwAllocateMemory.c)
 *     BcpGetProgressMessages @ 0x14018FEB4 (BcpGetProgressMessages.c)
 *     BcpGetMaxResourceProfile @ 0x140190030 (BcpGetMaxResourceProfile.c)
 *     BgpDisplayCharacterDestroyContext @ 0x140990F58 (BgpDisplayCharacterDestroyContext.c)
 *     BgpDisplayCharacterGetContext @ 0x1409919C4 (BgpDisplayCharacterGetContext.c)
 *     BgpFoDetermineFontInformation @ 0x140A413EC (BgpFoDetermineFontInformation.c)
 *     BcpFindMessage @ 0x140A414B4 (BcpFindMessage.c)
 */

__int64 __fastcall BgpBcInitializeCriticalMode(__int64 a1, int a2)
{
  int v3; // eax
  PCWSTR v4; // rbx
  const WCHAR *Message; // rax
  const WCHAR *v6; // rax
  const WCHAR *v7; // rax
  const WCHAR *v8; // rax
  const WCHAR *v9; // rax
  const WCHAR *v10; // rax
  const WCHAR *v11; // rax
  const WCHAR *v12; // rax
  const WCHAR *v13; // rax
  const WCHAR *v14; // rax
  const WCHAR *v15; // rax
  const WCHAR *v16; // rax
  const WCHAR *v17; // rax
  const WCHAR *v18; // rax
  int ProgressMessages; // eax
  int v20; // edx
  int v21; // r8d
  int v22; // eax
  _DWORD *v23; // rdi
  __int64 v24; // r14
  _DWORD *v25; // rsi
  __int64 v26; // rdi
  __int64 Memory; // rax
  __int64 v29; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v30; // [rsp+38h] [rbp-38h] BYREF
  int v31; // [rsp+40h] [rbp-30h]
  unsigned __int64 v32; // [rsp+48h] [rbp-28h] BYREF
  __int64 v33; // [rsp+50h] [rbp-20h]
  _DWORD v34[2]; // [rsp+58h] [rbp-18h] BYREF
  __int128 v35; // [rsp+60h] [rbp-10h] BYREF
  PCWSTR SourceString; // [rsp+A0h] [rbp+30h] BYREF
  PCWSTR v37; // [rsp+B0h] [rbp+40h] BYREF
  PCWSTR v38; // [rsp+B8h] [rbp+48h] BYREF

  v29 = 0LL;
  v30 = 0LL;
  v31 = 0;
  v32 = 0LL;
  v33 = 0LL;
  v3 = *(_DWORD *)(a1 + 120);
  v35 = 0LL;
  if ( (v3 & 0x400000) != 0 )
  {
    dword_14042C030 |= 0x400000u;
  }
  else
  {
    if ( (v3 & 0x2000000) != 0 )
      BcpDisplayParameters = 1;
    v4 = 0LL;
    SourceString = 0LL;
    v38 = 0LL;
    if ( a2 != -1 )
    {
      Message = (const WCHAR *)BcpFindMessage(3238035457LL);
      RtlInitUnicodeString(&stru_14046B890, Message);
      v6 = (const WCHAR *)BcpFindMessage(3238035464LL);
      RtlInitUnicodeString(&stru_14046B8B0, v6);
      v7 = (const WCHAR *)BcpFindMessage(1090551817LL);
      RtlInitUnicodeString(&stru_14046B8C0, v7);
      v8 = (const WCHAR *)BcpFindMessage(1090551824LL);
      RtlInitUnicodeString(&stru_14046B8D0, v8);
      v9 = (const WCHAR *)BcpFindMessage(1090551825LL);
      RtlInitUnicodeString(&stru_14046B8E0, v9);
      v10 = (const WCHAR *)BcpFindMessage(3238035459LL);
      RtlInitUnicodeString(&stru_14046B8A0, v10);
      v11 = (const WCHAR *)BcpFindMessage(1090551828LL);
      RtlInitUnicodeString(&stru_14046B930, v11);
      v12 = (const WCHAR *)BcpFindMessage(1090551829LL);
      RtlInitUnicodeString(&stru_14046B940, v12);
      v13 = (const WCHAR *)BcpFindMessage(1090551830LL);
      RtlInitUnicodeString(&stru_14046B950, v13);
      v14 = (const WCHAR *)BcpFindMessage(1090551832LL);
      RtlInitUnicodeString(&stru_14046B960, v14);
      v15 = (const WCHAR *)BcpFindMessage(1090551831LL);
      RtlInitUnicodeString(&stru_14046B970, v15);
      v16 = (const WCHAR *)BcpFindMessage(1090551833LL);
      RtlInitUnicodeString(&stru_14046B980, v16);
      v17 = (const WCHAR *)BcpFindMessage(1090551840LL);
      RtlInitUnicodeString(&stru_14046B990, v17);
      v18 = (const WCHAR *)BcpFindMessage(1090551841LL);
      RtlInitUnicodeString(&stru_14046B9A0, v18);
      if ( (int)BcpGetProgressMessages(3238035474LL, &SourceString, &v37) >= 0 )
      {
        RtlInitUnicodeString(&stru_14046B8F0, SourceString);
        RtlInitUnicodeString(&stru_14046B900, v37);
        ProgressMessages = BcpGetProgressMessages(3238035475LL, &v38, &v37);
        v4 = v38;
        if ( ProgressMessages >= 0 )
        {
          RtlInitUnicodeString(&stru_14046B910, v38);
          RtlInitUnicodeString(&stru_14046B920, v37);
          if ( *(_WORD *)BcpFindMessage(1090551814LL) == 48 )
            dword_14042C030 |= 0x20000u;
          v22 = *(_DWORD *)(a1 + 120);
          v23 = dword_140429EC0;
          v34[1] = -1;
          v34[0] = (v22 & 0x10000000) != 0 ? -14389468 : -16746281;
LABEL_10:
          v24 = 0LL;
          v25 = v23;
          while ( (int)BgpFoDetermineFontInformation(
                         *v25,
                         v20,
                         v21,
                         (unsigned int)&v29,
                         (__int64)&v35 + 8,
                         (__int64)&v35) >= 0 )
          {
            ++v24;
            *v25++ = DWORD2(v35);
            if ( v24 >= 4 )
            {
              v23 += 18;
              if ( (__int64)v23 < (__int64)&qword_14042A028 )
                goto LABEL_10;
              HIDWORD(v35) = 0;
              if ( (int)BcpGetMaxResourceProfile((__int64)v34, &v32) >= 0 )
              {
                v26 = v32;
                Memory = BgpFwAllocateMemory(v32);
                if ( Memory )
                {
                  qword_14042BF70 = 0LL;
                  BcpWorkspace = Memory;
                  v30 = __PAIR64__(HIDWORD(v29), v33);
                  qword_14042BF68 = v26;
                  qword_14046B9B0 = BgpDisplayCharacterGetContext((__int64)v34, &v30, 3);
                  if ( qword_14046B9B0 )
                  {
                    dword_14042C030 |= 0x10u;
                    return 0LL;
                  }
                }
              }
              break;
            }
          }
        }
      }
      if ( SourceString )
        BgpFwFreeMemory((__int64)SourceString);
      if ( v4 )
        BgpFwFreeMemory((__int64)v4);
      if ( qword_14046B9B0 )
        BgpDisplayCharacterDestroyContext(qword_14046B9B0);
    }
  }
  return 0LL;
}
