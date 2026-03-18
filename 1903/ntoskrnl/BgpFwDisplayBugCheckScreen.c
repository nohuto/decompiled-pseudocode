/*
 * XREFs of BgpFwDisplayBugCheckScreen @ 0x14034A390
 * Callers:
 *     KiDisplayBlueScreen @ 0x1402A9008 (KiDisplayBlueScreen.c)
 * Callees:
 *     BgpGxDrawRectangle @ 0x140178640 (BgpGxDrawRectangle.c)
 *     BgpGetBitsPerPixel @ 0x140178A38 (BgpGetBitsPerPixel.c)
 *     IoSaveBugCheckProgress @ 0x1402953B0 (IoSaveBugCheckProgress.c)
 *     BgpClearScreen @ 0x140348F70 (BgpClearScreen.c)
 *     BcpDisplayCriticalCharacter @ 0x1403494FC (BcpDisplayCriticalCharacter.c)
 *     BcpDisplayCriticalString @ 0x1403495C4 (BcpDisplayCriticalString.c)
 *     BcpDisplayErrorInformation @ 0x140349920 (BcpDisplayErrorInformation.c)
 *     BcpDisplayProgress @ 0x140349BA8 (BcpDisplayProgress.c)
 *     BcpGetComponentOffsets @ 0x140349DAC (BcpGetComponentOffsets.c)
 *     BcpGetDisplayType @ 0x140349F38 (BcpGetDisplayType.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x140A41B88 (BcpDisplayEarlyBugCheckScreen.c)
 */

__int64 __fastcall BgpFwDisplayBugCheckScreen(unsigned int a1, unsigned __int64 *a2, __int64 a3, _QWORD *a4, char a5)
{
  unsigned int v7; // ebx
  __int64 DisplayType; // rbx
  __int64 v10; // rax
  unsigned int v11; // ecx
  unsigned int v12; // r8d
  int *v13; // rax
  int v14; // ecx
  __int16 *v15; // rcx
  int v16; // edx
  int v17; // r9d
  unsigned int v18; // r8d
  UNICODE_STRING *v19; // rcx
  __int16 v20; // cx
  unsigned int v21; // r8d
  char v22; // r14
  UNICODE_STRING *v23; // rcx
  UNICODE_STRING *v24; // rdx
  int v25; // r9d
  unsigned int BitsPerPixel; // eax
  __int64 v27; // r8
  int ComponentOffsets; // r12d
  unsigned int v29; // r8d
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp-20h] BYREF
  __int64 v32; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int64 v33; // [rsp+40h] [rbp-10h] BYREF
  int v34; // [rsp+48h] [rbp-8h]

  v32 = 0LL;
  PerformanceFrequency.QuadPart = 0LL;
  if ( (dword_14042C030 & 4) != 0 )
  {
    if ( (dword_14042C030 & 0x400000) == 0 )
    {
      v7 = BcpDisplayEarlyBugCheckScreen(a1, a2, a4);
      IoSaveBugCheckProgress(131);
      return v7;
    }
    goto LABEL_43;
  }
  if ( (dword_14042C030 & 0x400000) != 0 || (dword_14042C030 & 0x10) == 0 )
  {
LABEL_43:
    BgpClearScreen(0xFF000000);
    IoSaveBugCheckProgress(132);
    return 0LL;
  }
  v33 = __PAIR64__(DWORD1(BgInternal), DWORD2(BgInternal));
  v34 = HIDWORD(BgInternal);
  DisplayType = (int)BcpGetDisplayType(&v33);
  v10 = *(_QWORD *)(qword_14046B9B0 + 24);
  if ( a1 == 456 )
  {
    v11 = -16777216;
    *(_DWORD *)(v10 + 40) = -16777216;
  }
  else
  {
    v11 = *(_DWORD *)(v10 + 40);
  }
  BgpClearScreen(v11);
  IoSaveBugCheckProgress(133);
  LODWORD(BcpCursor) = dword_140429EC0[18 * DisplayType + 4];
  v13 = &dword_140429EC0[18 * DisplayType + 5];
  v14 = *v13;
  HIDWORD(BcpCursor) = *v13;
  if ( v13 )
    dword_1404641E8 = v14;
  if ( (dword_14042C030 & 0x20000) == 0 )
  {
    v15 = (__int16 *)&unk_140373790;
    if ( a1 == 456 )
      v15 = (__int16 *)&unk_140376450;
    BcpDisplayCriticalString(v15, dword_140429EC0[18 * DisplayType + 3], v12, DisplayType);
  }
  v16 = dword_140429EC0[18 * DisplayType + 8];
  v17 = dword_140429EC0[18 * DisplayType + 4];
  v18 = dword_140429EC0[18 * DisplayType + 2];
  HIDWORD(BcpCursor) = dword_1404641E8 + dword_140429EC0[18 * DisplayType + 9];
  if ( a1 == 456 )
  {
    LODWORD(BcpCursor) = v17 + v16;
    v19 = &stru_14046B980;
  }
  else
  {
    v19 = &stru_14046B970;
    LODWORD(BcpCursor) = v17 + v16;
    if ( (dword_14042C030 & 0x10000000) == 0 )
      v19 = &stru_14046B890;
  }
  BcpDisplayCriticalString((__int16 *)v19, v18, v18, DisplayType);
  BcpDisplayCriticalCharacter(v20, dword_140429EC0[18 * DisplayType + 2]);
  v22 = 1;
  if ( a1 == 456 )
  {
    v23 = &stru_14046B990;
  }
  else
  {
    if ( (a5 & 1) != 0 )
      goto LABEL_28;
    if ( (a5 & 2) != 0 )
    {
      v24 = &stru_14046B8C0;
      v23 = &stru_14046B8E0;
    }
    else
    {
      v23 = &stru_14046B8D0;
      v24 = &stru_14046B8B0;
    }
    if ( (a5 & 4) == 0 )
      v23 = v24;
  }
  BcpDisplayCriticalString((__int16 *)v23, dword_140429EC0[18 * DisplayType + 2], v21, DisplayType);
LABEL_28:
  v25 = 0;
  if ( !qword_14042C0B8
    || (BitsPerPixel = BgpGetBitsPerPixel(), *(_DWORD *)(v27 + 8) < BitsPerPixel) && (dword_14042C030 & 0xC00) != 0 )
  {
    v22 = 0;
  }
  else
  {
    v25 = *(_DWORD *)(v27 + 4);
  }
  ComponentOffsets = BcpGetComponentOffsets(
                       &BcpProgressOffset,
                       &BcpErrorMessageOffset,
                       (int *)&v32,
                       DisplayType,
                       v25,
                       (a5 & 4) == 0);
  if ( ComponentOffsets >= 0 )
  {
    BcpCursor = BcpErrorMessageOffset;
    dword_1404641E8 = dword_14042BF88;
    if ( a1 != 456 )
    {
      BcpDisplayErrorInformation(DisplayType, a1, a2, a3, (__int64)a4, a5);
      if ( v22 )
        BgpGxDrawRectangle((_BYTE *)qword_14042C0B8, (__int64)&v32);
    }
    IoSaveBugCheckProgress(134);
    if ( (a5 & 4) != 0 )
    {
      if ( (a5 & 2) == 0 )
      {
        KeQueryPerformanceCounter(&PerformanceFrequency);
        KeStallExecutionProcessor(10000000 * PerformanceFrequency.QuadPart / PerformanceFrequency.QuadPart);
      }
    }
    else
    {
      BcpCursor = BcpProgressOffset;
      dword_1404641E8 = dword_14042BF48;
      BcpDisplayProgress(0, DisplayType, v29);
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      BcpLastProgressDisplayed = 0;
      BcpStartTicks = PerformanceCounter.QuadPart;
      BcpLastProgressUpdateTicks = PerformanceCounter.QuadPart;
    }
    *a4 = &stru_14046B890;
    a4[1] = &stru_14046B8A0;
  }
  return (unsigned int)ComponentOffsets;
}
