/*
 * XREFs of ?xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@H@Z @ 0x1C01F24CC
 * Callers:
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C01F1F8C (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 * Callees:
 *     ?InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z @ 0x1C00AD214 (-InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void __fastcall xxxSendMousePromotion(const struct tagMOUSE_PROMOTION_ENTRY *a1, int a2)
{
  unsigned int v2; // r9d
  int v5; // edx
  int v6; // edi
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // xmm0_8
  unsigned __int64 v9; // r8
  __int64 v10; // r14
  LARGE_INTEGER PerformanceCounter; // rax
  int v12; // esi
  LARGE_INTEGER v13; // r15
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // r9d
  int v20; // r8d
  int v21; // eax
  unsigned int v22; // ecx
  int v23; // edx
  char v24; // cl
  int v25; // ecx
  int v26; // eax
  int v27; // ecx
  int v28; // eax
  __int64 v29; // [rsp+30h] [rbp-20h] BYREF
  __int128 v30; // [rsp+38h] [rbp-18h]

  v2 = *((_DWORD *)a1 + 3);
  v29 = 0LL;
  *(_QWORD *)&v30 = 0LL;
  v5 = *((_DWORD *)a1 + 2);
  v6 = 1;
  LODWORD(v29) = 262142;
  DWORD1(v30) = v5;
  *((_QWORD *)&v30 + 1) = v2;
  v7 = *(_QWORD *)(*gpDispInfo + 24LL);
  v8 = _mm_srli_si128(*(__m128i *)(*gpDispInfo + 24LL), 8).m128i_u64[0];
  if ( (_DWORD)v8 != (_DWORD)v7 )
    DWORD1(v30) = 0xFFFF * (v5 - (int)v7) / ((int)v8 - (int)v7) + 1;
  v9 = HIDWORD(v7);
  if ( HIDWORD(v8) != (_DWORD)v9 )
    DWORD2(v30) = (int)(0xFFFF * (v2 - v9)) / (HIDWORD(v8) - (int)v9) + 1;
  v10 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v12 = ((_DWORD)v10 << 8) - (*((_DWORD *)a1 + 6) << 8);
  v13 = PerformanceCounter;
  InputTraceLogging::Mouse::InjectInput();
  v14 = *((_DWORD *)a1 + 4);
  if ( v14 == 3 )
  {
    v15 = *((unsigned __int16 *)a1 + 20);
    WORD1(v29) |= 0x40u;
    v16 = v12 | v15;
    v17 = *((_DWORD *)a1 + 11);
    HIDWORD(v30) = v16;
    if ( (v17 & 0x40) != 0 )
      HIDWORD(v30) = v16 | 0x80;
  }
  else if ( v14 == 2 )
  {
    v18 = *((unsigned __int16 *)a1 + 20);
    WORD1(v29) |= 0x10u;
    HIDWORD(v30) = v12 | v18 | 0x80;
  }
  v19 = *((_DWORD *)a1 + 11);
  v20 = 0;
  v21 = 0;
  if ( *(_DWORD *)(gpsi + 1988LL) )
    LOBYTE(v21) = (*((_DWORD *)a1 + 11) & 1) == 0;
  else
    LOBYTE(v21) = (*((_DWORD *)a1 + 11) & 1) != 0;
  v22 = *((_DWORD *)a1 + 5);
  if ( (v22 & 0x40000) != 0 )
  {
    WORD2(v29) |= v21 != 0 ? 2 : 8;
    v20 = (v22 >> 15) & 1;
  }
  else if ( (v22 & 0x10000) != 0 )
  {
    WORD2(v29) |= v21 != 0 ? 1 : 4;
  }
  v23 = *((_DWORD *)a1 + 2);
  if ( (_DWORD)gptCursorAsync != v23 || (v24 = 0, gptCursorAsync->y != *((_DWORD *)a1 + 3)) )
    v24 = 1;
  if ( (v19 & 2) != 0 && (!gbEnforceUIPI || (v19 & 4) == 0) )
    v6 = 0;
  if ( v24 )
  {
    v25 = 8246;
    DWORD2(v30) = *((_DWORD *)a1 + 3);
    DWORD1(v30) = v23;
  }
  else
  {
    v25 = 56;
    *(_QWORD *)((char *)&v30 + 4) = 0LL;
  }
  v26 = v25 | 0x101;
  if ( !a2 )
    v26 = v25;
  v27 = v26 | 0x1000;
  if ( !v20 )
    v27 = v26;
  v28 = v27 | 0x40;
  if ( !v6 )
    v28 = v27;
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))SynthesizeMouseInput)(
    0LL,
    &v29,
    v10,
    (LARGE_INTEGER)v13.QuadPart,
    v28);
}
