/*
 * XREFs of BgpClearScreen @ 0x140348F70
 * Callers:
 *     BgpDisplaySafeToPowerOffScreen @ 0x14034A0D4 (BgpDisplaySafeToPowerOffScreen.c)
 *     BgpFwDisplayBugCheckScreen @ 0x14034A390 (BgpFwDisplayBugCheckScreen.c)
 *     AnFwDisplayFade @ 0x14098EBD8 (AnFwDisplayFade.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140991714 (AnFwDisplayBackgroundUpdate.c)
 *     BgpConsoleClearScreenEx @ 0x140993698 (BgpConsoleClearScreenEx.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140994110 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     BgpGxDrawRectangle @ 0x140178640 (BgpGxDrawRectangle.c)
 *     BgpGetBitsPerPixel @ 0x140178A38 (BgpGetBitsPerPixel.c)
 *     BgpGxFillRectangle @ 0x140179114 (BgpGxFillRectangle.c)
 *     BgpGxInitializeRectangle @ 0x1401840F0 (BgpGxInitializeRectangle.c)
 */

__int64 __fastcall BgpClearScreen(unsigned int a1)
{
  __int64 result; // rax
  unsigned int v3; // r14d
  unsigned int v4; // r15d
  unsigned int v5; // r8d
  unsigned int v6; // r9d
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  unsigned int v9; // edi
  int BitsPerPixel; // eax
  unsigned int v11; // eax
  unsigned __int64 v12; // [rsp+20h] [rbp-20h] BYREF
  unsigned int v13; // [rsp+28h] [rbp-18h]
  unsigned __int64 v14; // [rsp+30h] [rbp-10h]
  __int64 v15; // [rsp+68h] [rbp+28h] BYREF

  v15 = 0LL;
  if ( (dword_14042C030 & 1) == 0 )
    return 3221225473LL;
  v3 = DWORD2(BgInternal);
  v4 = DWORD1(BgInternal);
  v14 = __PAIR64__(DWORD1(BgInternal), DWORD2(BgInternal));
  v6 = (unsigned int)BgpGetBitsPerPixel() >> 3;
  v7 = 8120;
  v12 = v14;
  v8 = HIDWORD(v14);
  v9 = v14;
  v13 = v5;
  if ( v4 * v6 * v3 < 0x1FB8 )
    v7 = v4 * v6 * v3;
  if ( v6 * v3 * HIDWORD(v14) > v7 )
  {
    do
    {
      v9 >>= 1;
      v8 >>= 1;
      v5 >>= 1;
    }
    while ( v6 * v8 * v9 > v7 );
    v12 = __PAIR64__(v8, v9);
    v13 = v5;
  }
  BitsPerPixel = BgpGetBitsPerPixel();
  result = BgpGxInitializeRectangle((int *)&v12, BitsPerPixel, (__int64)byte_14050C2F0, 0x2000u);
  if ( (int)result >= 0 )
  {
    BgpGxFillRectangle((__int64)byte_14050C2F0, a1);
    if ( v4 )
    {
      v11 = HIDWORD(v15);
      do
      {
        LODWORD(v15) = 0;
        if ( v3 )
        {
          do
          {
            BgpGxDrawRectangle(byte_14050C2F0, (__int64)&v15);
            if ( (byte_14050C300 & 0x10) != 0 )
              BgpGxFillRectangle((__int64)byte_14050C2F0, a1);
            LODWORD(v15) = v9 + v15;
          }
          while ( (unsigned int)v15 < v3 );
          v11 = HIDWORD(v15);
        }
        v11 += v8;
        HIDWORD(v15) = v11;
      }
      while ( v11 < v4 );
    }
    dword_14042C030 |= 0x2000u;
    return 0LL;
  }
  return result;
}
