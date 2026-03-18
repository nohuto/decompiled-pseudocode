/*
 * XREFs of WheaRemoveErrorSource @ 0x1409198D0
 * Callers:
 *     WheaRemoveErrorSourceDeviceDriver @ 0x140340A50 (WheaRemoveErrorSourceDeviceDriver.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14003B180 (KeDelayExecutionThread.c)
 *     WheaLogInternalEvent @ 0x140199660 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     WheapGetErrorSource @ 0x14034069C (WheapGetErrorSource.c)
 *     WheapIsNonHestErrorSource @ 0x140340720 (WheapIsNonHestErrorSource.c)
 *     WheapCallErrorSourceUninitialize @ 0x1403410DC (WheapCallErrorSourceUninitialize.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

char __fastcall WheaRemoveErrorSource(int a1)
{
  __int64 *ErrorSource; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx
  _DWORD *v6; // rdx
  __int128 v7; // xmm1
  int v8; // eax
  void *v9; // rcx
  int v10; // edi
  LARGE_INTEGER Interval; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD Src[256]; // [rsp+30h] [rbp-D0h] BYREF

  memset(Src, 0, 0x3F1uLL);
  ErrorSource = WheapGetErrorSource((__int64)&WheapErrorSourceTable, a1);
  v3 = (__int64)ErrorSource;
  if ( ErrorSource )
  {
    LOBYTE(ErrorSource) = WheapIsNonHestErrorSource(*((_DWORD *)ErrorSource + 26));
    if ( (_BYTE)ErrorSource )
    {
      if ( (unsigned int)(*(_DWORD *)(v3 + 108) - 3) > 1 )
      {
        v4 = 7LL;
        Interval.QuadPart = -1000LL;
        v5 = v3 + 96;
        v6 = &Src[8];
        do
        {
          *(_OWORD *)v6 = *(_OWORD *)v5;
          *((_OWORD *)v6 + 1) = *(_OWORD *)(v5 + 16);
          *((_OWORD *)v6 + 2) = *(_OWORD *)(v5 + 32);
          *((_OWORD *)v6 + 3) = *(_OWORD *)(v5 + 48);
          *((_OWORD *)v6 + 4) = *(_OWORD *)(v5 + 64);
          *((_OWORD *)v6 + 5) = *(_OWORD *)(v5 + 80);
          *((_OWORD *)v6 + 6) = *(_OWORD *)(v5 + 96);
          v6 += 32;
          v7 = *(_OWORD *)(v5 + 112);
          v5 += 128LL;
          *((_OWORD *)v6 - 1) = v7;
          --v4;
        }
        while ( v4 );
        *(_OWORD *)v6 = *(_OWORD *)v5;
        *((_OWORD *)v6 + 1) = *(_OWORD *)(v5 + 16);
        *((_OWORD *)v6 + 2) = *(_OWORD *)(v5 + 32);
        *((_OWORD *)v6 + 3) = *(_OWORD *)(v5 + 48);
        *((_QWORD *)v6 + 8) = *(_QWORD *)(v5 + 64);
        v6[18] = *(_DWORD *)(v5 + 72);
        *(_DWORD *)(v3 + 108) = 4;
        while ( _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 92), -1, 0) > 0 )
          KeDelayExecutionThread(0, 0, &Interval);
        v8 = WheapCallErrorSourceUninitialize(v3);
        v9 = *(void **)(v3 + 48);
        v10 = v8;
        *(_DWORD *)(v3 + 108) = 3;
        if ( v9 )
        {
          ExFreePoolWithTag(v9, 0x61656857u);
          *(_QWORD *)(v3 + 48) = 0LL;
        }
        Src[3] = 0;
        Src[0] = 1733060695;
        Src[1] = 1;
        Src[2] = 1009;
        Src[5] = -2147483636;
        Src[4] = 1280201291;
        Src[6] = 3;
        Src[7] = 977;
        Src[251] = v10;
        LOBYTE(Src[252]) = 1;
        LOBYTE(ErrorSource) = WheaLogInternalEvent(Src);
      }
    }
  }
  return (char)ErrorSource;
}
