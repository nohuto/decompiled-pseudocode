/*
 * XREFs of BgpBcInitializeCriticalMode @ 0x1409FB420
 * Callers:
 *     BgpFwLibraryInitialize @ 0x14094F95C (BgpFwLibraryInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B9A90 (RtlInitUnicodeString.c)
 *     BgpFwFreeMemory @ 0x14016ECEC (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x14016F4D8 (BgpFwAllocateMemory.c)
 *     BcpGetProgressMessages @ 0x1401867D8 (BcpGetProgressMessages.c)
 *     BcpGetMaxResourceProfile @ 0x140186950 (BcpGetMaxResourceProfile.c)
 *     BgpDisplayCharacterDestroyContext @ 0x140950EF8 (BgpDisplayCharacterDestroyContext.c)
 *     BgpDisplayCharacterGetContext @ 0x140951948 (BgpDisplayCharacterGetContext.c)
 *     BgpFoDetermineFontInformation @ 0x1409FB748 (BgpFoDetermineFontInformation.c)
 *     BcpFindMessage @ 0x1409FB808 (BcpFindMessage.c)
 */

__int64 __fastcall BgpBcInitializeCriticalMode(__int64 a1, int a2)
{
  int v2; // eax
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
  unsigned __int64 v29; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v30; // [rsp+38h] [rbp-28h]
  _DWORD v31[2]; // [rsp+40h] [rbp-20h] BYREF
  _BYTE v32[8]; // [rsp+48h] [rbp-18h] BYREF
  _DWORD v33[4]; // [rsp+50h] [rbp-10h] BYREF
  PCWSTR SourceString; // [rsp+90h] [rbp+30h] BYREF
  PCWSTR v35; // [rsp+A0h] [rbp+40h] BYREF
  PCWSTR v36; // [rsp+A8h] [rbp+48h] BYREF

  v2 = *(_DWORD *)(a1 + 120);
  if ( (v2 & 0x400000) != 0 )
  {
    dword_140405AD0 |= 0x400000u;
  }
  else
  {
    if ( (v2 & 0x2000000) != 0 )
      BcpDisplayParameters = 1;
    v4 = 0LL;
    SourceString = 0LL;
    v36 = 0LL;
    if ( a2 != -1 )
    {
      Message = (const WCHAR *)BcpFindMessage(3238035457LL);
      RtlInitUnicodeString(&stru_14043FA50, Message);
      v6 = (const WCHAR *)BcpFindMessage(3238035464LL);
      RtlInitUnicodeString(&stru_14043FA70, v6);
      v7 = (const WCHAR *)BcpFindMessage(1090551817LL);
      RtlInitUnicodeString(&stru_14043FA80, v7);
      v8 = (const WCHAR *)BcpFindMessage(1090551824LL);
      RtlInitUnicodeString(&stru_14043FA90, v8);
      v9 = (const WCHAR *)BcpFindMessage(1090551825LL);
      RtlInitUnicodeString(&stru_14043FAA0, v9);
      v10 = (const WCHAR *)BcpFindMessage(3238035459LL);
      RtlInitUnicodeString(&stru_14043FA60, v10);
      v11 = (const WCHAR *)BcpFindMessage(1090551828LL);
      RtlInitUnicodeString(&stru_14043FAF0, v11);
      v12 = (const WCHAR *)BcpFindMessage(1090551829LL);
      RtlInitUnicodeString(&stru_14043FB00, v12);
      v13 = (const WCHAR *)BcpFindMessage(1090551830LL);
      RtlInitUnicodeString(&stru_14043FB10, v13);
      v14 = (const WCHAR *)BcpFindMessage(1090551832LL);
      RtlInitUnicodeString(&stru_14043FB20, v14);
      v15 = (const WCHAR *)BcpFindMessage(1090551831LL);
      RtlInitUnicodeString(&stru_14043FB30, v15);
      v16 = (const WCHAR *)BcpFindMessage(1090551833LL);
      RtlInitUnicodeString(&stru_14043FB40, v16);
      v17 = (const WCHAR *)BcpFindMessage(1090551840LL);
      RtlInitUnicodeString(&stru_14043FB50, v17);
      v18 = (const WCHAR *)BcpFindMessage(1090551841LL);
      RtlInitUnicodeString(&stru_14043FB60, v18);
      if ( (int)BcpGetProgressMessages(3238035474LL, &SourceString, &v35) >= 0 )
      {
        RtlInitUnicodeString(&stru_14043FAB0, SourceString);
        RtlInitUnicodeString(&stru_14043FAC0, v35);
        ProgressMessages = BcpGetProgressMessages(3238035475LL, &v36, &v35);
        v4 = v36;
        if ( ProgressMessages >= 0 )
        {
          RtlInitUnicodeString(&stru_14043FAD0, v36);
          RtlInitUnicodeString(&stru_14043FAE0, v35);
          if ( *(_WORD *)BcpFindMessage(1090551814LL) == 48 )
            dword_140405AD0 |= 0x20000u;
          v22 = *(_DWORD *)(a1 + 120);
          v23 = dword_140403A70;
          v31[1] = -1;
          v31[0] = (v22 & 0x10000000) != 0 ? -14389468 : -16746281;
LABEL_10:
          v24 = 0LL;
          v25 = v23;
          while ( (int)BgpFoDetermineFontInformation(*v25, v20, v21, (unsigned int)&v35, (__int64)v33, (__int64)v32) >= 0 )
          {
            ++v24;
            *v25++ = v33[0];
            if ( v24 >= 4 )
            {
              v23 += 18;
              if ( (__int64)v23 < (__int64)&qword_140403BD8 )
                goto LABEL_10;
              v33[1] = 0;
              if ( (int)BcpGetMaxResourceProfile((__int64)v31, &v29) >= 0 )
              {
                v26 = v29;
                Memory = BgpFwAllocateMemory(v29);
                if ( Memory )
                {
                  qword_140405A30 = 0LL;
                  BcpWorkspace = Memory;
                  v29 = __PAIR64__(HIDWORD(v35), v30);
                  qword_140405A28 = v26;
                  qword_14043FB70 = BgpDisplayCharacterGetContext((__int64)v31, &v29, 3);
                  if ( qword_14043FB70 )
                  {
                    dword_140405AD0 |= 0x10u;
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
      if ( qword_14043FB70 )
        BgpDisplayCharacterDestroyContext(qword_14043FB70);
    }
  }
  return 0LL;
}
