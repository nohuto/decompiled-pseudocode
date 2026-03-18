/*
 * XREFs of VidSchiUpdateCurrentIsrFrameTime @ 0x1C0016C48
 * Callers:
 *     VidSchiProcessIsrCompletedPacket @ 0x1C000B660 (VidSchiProcessIsrCompletedPacket.c)
 *     VidSchiExecuteMmIoFlipAtISR @ 0x1C0013810 (VidSchiExecuteMmIoFlipAtISR.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018050 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 */

LARGE_INTEGER __fastcall VidSchiUpdateCurrentIsrFrameTime(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rbx
  LARGE_INTEGER result; // rax
  BOOL v6; // esi
  LARGE_INTEGER v9; // r9
  LONGLONG v10; // rcx
  signed __int64 v11; // rax
  __int64 v12; // r10
  unsigned __int64 v13; // r8
  __int64 v14; // rcx
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp-48h] BYREF
  __int64 v16; // [rsp+38h] [rbp-40h] BYREF
  __int64 v17; // [rsp+40h] [rbp-38h]
  __int64 v18; // [rsp+48h] [rbp-30h]
  int v19; // [rsp+50h] [rbp-28h]

  v3 = 0LL;
  PerformanceFrequency.QuadPart = 0LL;
  result.QuadPart = (unsigned int)_InterlockedExchange((volatile __int32 *)(a2 + 33224), 0);
  v6 = a3 != 0;
  v9.QuadPart = 0LL;
  if ( result.LowPart )
  {
    v9 = KeQueryPerformanceCounter(&PerformanceFrequency);
    if ( !*(_QWORD *)(a2 + 33216) )
      *(union _LARGE_INTEGER *)(a2 + 33216) = PerformanceFrequency;
    v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 33240), 0LL, 0LL);
    v12 = *(_QWORD *)(a2 + 33160);
    v13 = v11;
    LODWORD(v10) = v6;
    result.QuadPart = v9.QuadPart - v12;
    if ( v13 )
    {
      if ( result.QuadPart > v13 )
      {
        result.QuadPart /= v13;
        v10 = (v9.QuadPart - v12) / v13;
        if ( !a3 )
        {
          if ( !result.LowPart )
            return result;
          v9.QuadPart = v12 + v13 * result.QuadPart;
        }
      }
    }
  }
  else
  {
    LODWORD(v10) = a3 != 0;
    if ( a3 )
    {
      result = KeQueryPerformanceCounter(&PerformanceFrequency);
      LODWORD(v10) = v6;
      v9 = result;
      if ( !*(_QWORD *)(a2 + 33216) )
      {
        result = PerformanceFrequency;
        *(union _LARGE_INTEGER *)(a2 + 33216) = PerformanceFrequency;
      }
    }
  }
  if ( (_DWORD)v10 )
  {
    result.QuadPart = (unsigned int)v10;
    *(_QWORD *)(a2 + 33168) += (unsigned int)v10;
    *(LARGE_INTEGER *)(a2 + 33160) = v9;
    if ( *(_BYTE *)(a2 + 8) )
    {
      if ( !*(_BYTE *)(a1 + 144) )
      {
        v14 = *(_QWORD *)(a1 + 8);
        v16 = 0LL;
        v17 = 0LL;
        v18 = 0LL;
        v19 = 0;
        result.QuadPart = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int64 *))DxgCoreInterface[60])(
                            v14,
                            0LL,
                            0LL,
                            &v16);
        if ( (result.LowPart & 0x80000000) == 0 )
          v3 = v17;
        *(_QWORD *)(a2 + 33176) = v3;
      }
    }
  }
  return result;
}
