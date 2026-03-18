/*
 * XREFs of ?xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@H@Z @ 0x1C0208530
 * Callers:
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C0207FB4 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 * Callees:
 *     ?InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z @ 0x1C001B4E0 (-InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

void __fastcall xxxSendMousePromotion(const struct tagMOUSE_PROMOTION_ENTRY *a1, int a2)
{
  __int64 v4; // r15
  LARGE_INTEGER PerformanceCounter; // r12
  int v6; // edi
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // edi
  int v13; // r8d
  int v14; // eax
  unsigned int v15; // ecx
  int v16; // esi
  __int64 v17; // rcx
  bool v18; // r14
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // [rsp+30h] [rbp-20h] BYREF
  __int64 v24; // [rsp+34h] [rbp-1Ch]
  int v25; // [rsp+3Ch] [rbp-14h]
  int v26; // [rsp+40h] [rbp-10h]
  int v27; // [rsp+44h] [rbp-Ch]

  v24 = 0LL;
  v27 = 0;
  v23 = 262142;
  v4 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v6 = ((_DWORD)v4 << 8) - (*((_DWORD *)a1 + 6) << 8);
  InputTraceLogging::Mouse::InjectInput();
  v7 = *((_DWORD *)a1 + 4);
  if ( v7 == 3 )
  {
    v8 = *((unsigned __int16 *)a1 + 20);
    HIWORD(v23) |= 0x40u;
    v9 = v6 | v8;
    v10 = *((_DWORD *)a1 + 11);
    v27 = v9;
    if ( (v10 & 0x40) != 0 )
      v27 = v9 | 0x80;
  }
  else if ( v7 == 2 )
  {
    v11 = *((unsigned __int16 *)a1 + 20);
    HIWORD(v23) |= 0x10u;
    v27 = v6 | v11 | 0x80;
  }
  v12 = 0;
  v13 = *((_DWORD *)a1 + 11);
  v14 = 0;
  if ( *(_DWORD *)(gpsi + 1988LL) )
    LOBYTE(v14) = (*((_DWORD *)a1 + 11) & 1) == 0;
  else
    LOBYTE(v14) = (*((_DWORD *)a1 + 11) & 1) != 0;
  v15 = *((_DWORD *)a1 + 5);
  v16 = 1;
  if ( (v15 & 0x40000) != 0 )
  {
    LOWORD(v24) = (v14 != 0 ? 2 : 8) | v24;
    v12 = (v15 >> 15) & 1;
  }
  else if ( (v15 & 0x10000) != 0 )
  {
    LOWORD(v24) = (v14 != 0 ? 1 : 4) | v24;
  }
  v17 = *((unsigned int *)a1 + 2);
  v18 = 1;
  if ( (_DWORD)gptCursorAsync == (_DWORD)v17 )
  {
    v17 = *((unsigned int *)a1 + 3);
    if ( gptCursorAsync->y == (_DWORD)v17 )
      v18 = 0;
  }
  if ( (v13 & 2) != 0 && (!(unsigned __int8)Enforced(v17) || (*((_DWORD *)a1 + 11) & 4) == 0) )
    v16 = 0;
  if ( v18 )
  {
    v19 = 8246;
    v25 = *((_DWORD *)a1 + 2);
    v26 = *((_DWORD *)a1 + 3);
  }
  else
  {
    v25 = 0;
    v19 = 56;
    v26 = 0;
  }
  v20 = v19 | 0x101;
  if ( !a2 )
    v20 = v19;
  v21 = v20 | 0x1000;
  if ( !v12 )
    v21 = v20;
  v22 = v21 | 0x40;
  if ( !v16 )
    v22 = v21;
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))SynthesizeMouseInput)(
    0LL,
    &v23,
    v4,
    (LARGE_INTEGER)PerformanceCounter.QuadPart,
    v22);
}
