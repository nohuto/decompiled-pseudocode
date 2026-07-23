/*
 * XREFs of BgpFwDisplayBugCheckScreen @ 0x140328CFC
 * Callers:
 *     KiDisplayBlueScreen @ 0x140292764 (KiDisplayBlueScreen.c)
 * Callees:
 *     BgpGxDrawRectangle @ 0x14016EF30 (BgpGxDrawRectangle.c)
 *     BgpGetBitsPerPixel @ 0x14016F2E0 (BgpGetBitsPerPixel.c)
 *     IoSaveBugCheckProgress @ 0x140280410 (IoSaveBugCheckProgress.c)
 *     BgpClearScreen @ 0x140327904 (BgpClearScreen.c)
 *     BcpDisplayCriticalCharacter @ 0x140327E7C (BcpDisplayCriticalCharacter.c)
 *     BcpDisplayCriticalString @ 0x140327F44 (BcpDisplayCriticalString.c)
 *     BcpDisplayErrorInformation @ 0x1403282A0 (BcpDisplayErrorInformation.c)
 *     BcpDisplayProgress @ 0x140328520 (BcpDisplayProgress.c)
 *     BcpGetComponentOffsets @ 0x14032871C (BcpGetComponentOffsets.c)
 *     BcpGetDisplayType @ 0x1403288A8 (BcpGetDisplayType.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x1409FCECC (BcpDisplayEarlyBugCheckScreen.c)
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
  int v16; // eax
  int v17; // ecx
  unsigned int v18; // r8d
  int v19; // edx
  UNICODE_STRING *v20; // rcx
  __int16 v21; // cx
  unsigned int v22; // r8d
  char v23; // r15
  UNICODE_STRING *v24; // rcx
  UNICODE_STRING *v25; // rdx
  int v26; // r9d
  unsigned int BitsPerPixel; // eax
  __int64 v28; // r8
  int ComponentOffsets; // r12d
  unsigned int v30; // r8d
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp-20h] BYREF
  int v33; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int64 v34; // [rsp+40h] [rbp-10h] BYREF
  int v35; // [rsp+48h] [rbp-8h]

  if ( (dword_140406AD0 & 4) != 0 )
  {
    if ( (dword_140406AD0 & 0x400000) == 0 )
    {
      v7 = BcpDisplayEarlyBugCheckScreen(a1, a2, a4);
      IoSaveBugCheckProgress(0x83u);
      return v7;
    }
    goto LABEL_43;
  }
  if ( (dword_140406AD0 & 0x400000) != 0 || (dword_140406AD0 & 0x10) == 0 )
  {
LABEL_43:
    BgpClearScreen(0xFF000000);
    IoSaveBugCheckProgress(0x84u);
    return 0LL;
  }
  v34 = __PAIR64__(DWORD1(BgInternal), DWORD2(BgInternal));
  v35 = HIDWORD(BgInternal);
  DisplayType = (int)BcpGetDisplayType(&v34);
  v10 = *(_QWORD *)(qword_140440C30 + 24);
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
  IoSaveBugCheckProgress(0x85u);
  LODWORD(BcpCursor) = dword_140404A70[18 * DisplayType + 4];
  v13 = &dword_140404A70[18 * DisplayType + 5];
  v14 = *v13;
  HIDWORD(BcpCursor) = *v13;
  if ( v13 )
    dword_140439800 = v14;
  if ( (dword_140406AD0 & 0x20000) == 0 )
  {
    v15 = (__int16 *)&unk_140354480;
    if ( a1 == 456 )
      v15 = (__int16 *)&unk_140357368;
    BcpDisplayCriticalString(v15, dword_140404A70[18 * DisplayType + 3], v12, DisplayType);
  }
  v16 = dword_140404A70[18 * DisplayType + 8];
  v17 = dword_140404A70[18 * DisplayType + 4];
  v18 = dword_140404A70[18 * DisplayType + 9];
  v19 = dword_140404A70[18 * DisplayType + 2];
  if ( a1 == 456 )
  {
    LODWORD(BcpCursor) = v17 + v16;
    HIDWORD(BcpCursor) = v18 + dword_140439800;
    v20 = &stru_140440C00;
  }
  else
  {
    LODWORD(BcpCursor) = v16 + v17;
    HIDWORD(BcpCursor) = v18 + dword_140439800;
    v20 = &stru_140440BF0;
    if ( (dword_140406AD0 & 0x10000000) == 0 )
      v20 = &stru_140440B10;
  }
  BcpDisplayCriticalString((__int16 *)v20, v19, v18, DisplayType);
  BcpDisplayCriticalCharacter(v21, dword_140404A70[18 * DisplayType + 2]);
  v23 = 1;
  if ( a1 == 456 )
  {
    v24 = &stru_140440C10;
  }
  else
  {
    if ( (a5 & 1) != 0 )
      goto LABEL_28;
    if ( (a5 & 2) != 0 )
    {
      v25 = &stru_140440B40;
      v24 = &stru_140440B60;
    }
    else
    {
      v24 = &stru_140440B50;
      v25 = &stru_140440B30;
    }
    if ( (a5 & 4) == 0 )
      v24 = v25;
  }
  BcpDisplayCriticalString((__int16 *)v24, dword_140404A70[18 * DisplayType + 2], v22, DisplayType);
LABEL_28:
  v26 = 0;
  if ( !qword_140406B58
    || (BitsPerPixel = BgpGetBitsPerPixel(), *(_DWORD *)(v28 + 8) < BitsPerPixel) && (dword_140406AD0 & 0xC00) != 0 )
  {
    v23 = 0;
  }
  else
  {
    v26 = *(_DWORD *)(v28 + 4);
  }
  ComponentOffsets = BcpGetComponentOffsets(
                       &BcpProgressOffset,
                       &BcpErrorMessageOffset,
                       &v33,
                       DisplayType,
                       v26,
                       (a5 & 4) == 0);
  if ( ComponentOffsets >= 0 )
  {
    BcpCursor = BcpErrorMessageOffset;
    dword_140439800 = dword_140406A38;
    if ( a1 != 456 )
    {
      BcpDisplayErrorInformation(DisplayType, a1, a2, a3, (__int64)a4, a5);
      if ( v23 )
        BgpGxDrawRectangle(qword_140406B58, (__int64)&v33);
    }
    IoSaveBugCheckProgress(0x86u);
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
      dword_140439800 = dword_1404069F8;
      BcpDisplayProgress(0, DisplayType, v30);
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      BcpLastProgressDisplayed = 0;
      BcpStartTicks = PerformanceCounter.QuadPart;
      BcpLastProgressUpdateTicks = PerformanceCounter.QuadPart;
    }
    *a4 = &stru_140440B10;
    a4[1] = &stru_140440B20;
  }
  return (unsigned int)ComponentOffsets;
}
