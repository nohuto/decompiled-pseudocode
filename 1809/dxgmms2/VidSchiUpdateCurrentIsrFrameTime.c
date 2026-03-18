/*
 * XREFs of VidSchiUpdateCurrentIsrFrameTime @ 0x1C0017770
 * Callers:
 *     VidSchiProcessIsrCompletedPacket @ 0x1C000A720 (VidSchiProcessIsrCompletedPacket.c)
 *     VidSchiExecuteMmIoFlipAtISR @ 0x1C0014FD0 (VidSchiExecuteMmIoFlipAtISR.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 */

LARGE_INTEGER __fastcall VidSchiUpdateCurrentIsrFrameTime(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rbx
  LARGE_INTEGER result; // rax
  BOOL v6; // esi
  BOOL LowPart; // edx
  LARGE_INTEGER v10; // rcx
  signed __int64 v11; // rax
  unsigned __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp-40h] BYREF
  LARGE_INTEGER v16; // [rsp+38h] [rbp-38h]
  __int64 v17; // [rsp+40h] [rbp-30h] BYREF
  __int64 v18; // [rsp+48h] [rbp-28h]
  __int64 v19; // [rsp+50h] [rbp-20h]
  int v20; // [rsp+58h] [rbp-18h]

  v3 = 0LL;
  v16.QuadPart = 0LL;
  result.QuadPart = (unsigned int)_InterlockedExchange((volatile __int32 *)(a2 + 33216), 0);
  v6 = a3 != 0;
  if ( result.LowPart )
  {
    v16 = KeQueryPerformanceCounter(&PerformanceFrequency);
    if ( !*(_QWORD *)(a2 + 33208) )
      *(union _LARGE_INTEGER *)(a2 + 33208) = PerformanceFrequency;
    v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 33232), 0LL, 0LL);
    v10 = v16;
    v12 = v11;
    v13 = *(_QWORD *)(a2 + 33152);
    result.QuadPart = v16.QuadPart - v13;
    LowPart = v6;
    if ( v12 )
    {
      if ( result.QuadPart > v12 )
      {
        result.QuadPart /= v12;
        LowPart = result.LowPart;
        if ( !a3 )
        {
          if ( result.LowPart )
            v10.QuadPart = v13 + v12 * result.QuadPart;
        }
      }
    }
  }
  else
  {
    LowPart = a3 != 0;
    if ( a3 )
    {
      result = KeQueryPerformanceCounter(&PerformanceFrequency);
      LowPart = v6;
      v10 = result;
      if ( !*(_QWORD *)(a2 + 33208) )
      {
        result = PerformanceFrequency;
        *(union _LARGE_INTEGER *)(a2 + 33208) = PerformanceFrequency;
      }
    }
    else
    {
      v10 = v16;
    }
  }
  if ( LowPart )
  {
    result.QuadPart = LowPart;
    *(_QWORD *)(a2 + 33160) += LowPart;
    *(LARGE_INTEGER *)(a2 + 33152) = v10;
    if ( *(_BYTE *)(a2 + 8) )
    {
      if ( !*(_BYTE *)(a1 + 144) )
      {
        v14 = *(_QWORD *)(a1 + 8);
        v17 = 0LL;
        v18 = 0LL;
        v19 = 0LL;
        v20 = 0;
        result.QuadPart = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int64 *))DxgCoreInterface[60])(
                            v14,
                            0LL,
                            0LL,
                            &v17);
        if ( (result.LowPart & 0x80000000) == 0 )
          v3 = v18;
        *(_QWORD *)(a2 + 33168) = v3;
      }
    }
  }
  return result;
}
