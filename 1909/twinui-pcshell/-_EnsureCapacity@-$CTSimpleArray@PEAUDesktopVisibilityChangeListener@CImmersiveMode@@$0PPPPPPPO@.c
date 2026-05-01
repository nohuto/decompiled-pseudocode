/*
 * XREFs of ?_EnsureCapacity@?$CTSimpleArray@PEAUDesktopVisibilityChangeListener@CImmersiveMode@@$0PPPPPPPO@V?$CTPolicyLocalMem@PEAUDesktopVisibilityChangeListener@CImmersiveMode@@@@V?$CSimpleArrayStandardCompareHelper@PEAUDesktopVisibilityChangeListener@CImmersiveMode@@@@V?$CSimpleArrayStandardMergeHelper@PEAUDesktopVisibilityChangeListener@CImmersiveMode@@@@@@QEAAJ_K0@Z @ 0x180146EDC
 * Callers:
 *     ?RegisterForDesktopVisibilityChanges@CImmersiveMode@@UEAAJW4DESKTOP_VISIBILITY_NOTIFICATION_TYPE@@PEAUIDesktopVisibilityChangesNotification@@PEAK@Z @ 0x180146AC0 (-RegisterForDesktopVisibilityChanges@CImmersiveMode@@UEAAJW4DESKTOP_VISIBILITY_NOTIFICATION_TYPE.c)
 *     ?_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180147198 (-_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?Realloc@CTLocalAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z @ 0x18006E518 (-Realloc@CTLocalAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z.c)
 */

signed int __fastcall CTSimpleArray<CImmersiveMode::DesktopVisibilityChangeListener *,4294967294,CTPolicyLocalMem<CImmersiveMode::DesktopVisibilityChangeListener *>,CSimpleArrayStandardCompareHelper<CImmersiveMode::DesktopVisibilityChangeListener *>,CSimpleArrayStandardMergeHelper<CImmersiveMode::DesktopVisibilityChangeListener *>>::_EnsureCapacity(
        __int64 a1,
        unsigned __int64 a2,
        void *a3)
{
  unsigned __int64 v3; // rbx
  signed int result; // eax
  unsigned __int64 v6; // rcx
  __int64 v7; // r9
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  void *v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = a3;
  v3 = 4294967294LL;
  result = -2147024774;
  if ( a2 <= 0xFFFFFFFE )
  {
    v6 = *(_QWORD *)(a1 + 24);
    result = 0;
    if ( a2 > v6 )
    {
      v7 = 2 * v6;
      if ( is_mul_ok(v6, 2uLL) )
      {
        result = 0;
      }
      else
      {
        v7 = -1LL;
        result = -2147024362;
      }
      if ( result >= 0 )
      {
        v8 = v7 - v6;
        v9 = v6 + 4096;
        if ( v8 <= 0x1000 )
          v9 = v7;
        v10 = v9;
        if ( a2 > v9 )
          v10 = a2;
        if ( v10 <= 0xFFFFFFFE )
        {
          v3 = v9;
          if ( a2 > v9 )
            v3 = a2;
        }
        v11 = 0LL;
        if ( is_mul_ok(v3, 8uLL) )
        {
          result = CTLocalAllocPolicy::Realloc(&v11, (v3 * (unsigned __int128)8uLL) >> 64, *(void **)a1, 8 * v3, &v11);
          if ( result >= 0 )
          {
            *(_QWORD *)a1 = v11;
            *(_QWORD *)(a1 + 24) = v3;
          }
        }
        else
        {
          return -2147024362;
        }
      }
    }
  }
  return result;
}
