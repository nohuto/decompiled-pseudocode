/*
 * XREFs of UpdateGammaRampOnDevice @ 0x1C00BC1F0
 * Callers:
 *     ?GreSetDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXHHPEAW4_SETGAMMARAMP_FAILED_REASON@@PEAK@Z @ 0x1C00BBF58 (-GreSetDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXHHPEAW4_SETGAMMARAMP_FAILED_REASON@@PEAK@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C00CF058 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C00ECBD8 (-SETFLAG@@YAXHAECKK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UpdateGammaRampOnDevice(__int64 a1, int a2)
{
  unsigned int v2; // edi
  int v4; // ecx
  unsigned int (__fastcall *v5)(_QWORD, __int64, __int64); // r9
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 (__fastcall *v9)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // rax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  v10 = a1;
  if ( a1 )
  {
    v4 = *(_DWORD *)(a1 + 2100);
    if ( (unsigned int)(v4 - 3) <= 3 )
    {
      v5 = *(unsigned int (__fastcall **)(_QWORD, __int64, __int64))(a1 + 3216);
      if ( v5 && (*(_DWORD *)(a1 + 2120) & 0x10) != 0 )
      {
        v6 = *(_QWORD *)(a1 + 1688);
        if ( v6
          || *(_QWORD *)(a1 + 1680)
          || (*(_DWORD *)(a1 + 40) & 0x20000) != 0
          || (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v10) )
        {
          v7 = *(_QWORD *)(a1 + 1696);
          if ( !v7 )
          {
            v7 = v6;
            if ( !v6 )
              v7 = *(_QWORD *)(a1 + 1680);
          }
          return v5(*(_QWORD *)(a1 + 1792), 1LL, v7);
        }
      }
      else if ( v4 == 3 && (*(_DWORD *)(a1 + 2164) & 0x100) != 0 && (a2 || *(_QWORD *)(a1 + 1680)) )
      {
        v10 = *(_QWORD *)(a1 + 1800);
        SETFLAG(*(_QWORD *)(a1 + 1680) != 0LL, (volatile unsigned int *)(v10 + 24), 0x800000u);
        *(_QWORD *)(v10 + 64) = a1;
        v11 = *(_QWORD *)(a1 + 56);
        GreAcquireSemaphore(v11);
        GreAcquireSemaphore(*(_QWORD *)(a1 + 48));
        EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *(_QWORD *)(a1 + 48), 11LL);
        if ( (*(_DWORD *)(a1 + 40) & 0x400) == 0 )
        {
          v9 = *(__int64 (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(a1 + 2856);
          if ( v9 )
            v2 = v9(*(_QWORD *)(a1 + 1792), &v10, 0LL, 0LL, *(_DWORD *)(v10 + 28));
        }
        EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", *(_QWORD *)(a1 + 48));
        GreReleaseSemaphoreInternal(*(_QWORD *)(a1 + 48));
        SEMOBJ::vUnlock((SEMOBJ *)&v11);
      }
    }
  }
  return v2;
}
