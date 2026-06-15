/*
 * XREFs of ?ToString@CAppAudioSessionId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18002CF60
 * Callers:
 *     ?ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@H@Z @ 0x18001F54C (-ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@.c)
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x18002BFE0 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?ToStreamSwitchString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800CE43C (-ToStreamSwitchString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsC.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     memcpy_s @ 0x18000C76C (memcpy_s.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18001FB10 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x1800B3268 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 */

__int64 __fastcall CAppAudioSessionId::ToString(__int64 a1, void **a2)
{
  unsigned int v3; // r14d
  char *v4; // r15
  volatile signed __int32 *v5; // rbx
  volatile signed __int32 *v6; // rdi
  __int64 (__fastcall ***v7)(_QWORD, _QWORD, __int64); // rax
  int *v9; // rbx
  _DWORD *v10; // r12
  __int64 v11; // rax
  __int64 v12; // rcx
  ATL::CAtlException *v13; // [rsp+28h] [rbp-20h] BYREF
  int v14; // [rsp+50h] [rbp+8h]

  v3 = 0;
  v4 = *(char **)(a1 + 32);
  v5 = (volatile signed __int32 *)(v4 - 24);
  v6 = (volatile signed __int32 *)((char *)*a2 - 24);
  if ( v4 - 24 != (char *)v6 )
  {
    try
    {
      if ( *((int *)v6 + 4) >= 0 && *(_QWORD *)v5 == *(_QWORD *)v6 )
      {
        v7 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v5
                                                                                                  + 32LL))(*(_QWORD *)v5);
        if ( *((int *)v5 + 4) >= 0 && v7 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v5 )
        {
          _InterlockedIncrement(v5 + 4);
        }
        else
        {
          v10 = v5 + 2;
          v11 = (**v7)(v7, *((unsigned int *)v5 + 2), 2LL);
          v5 = (volatile signed __int32 *)v11;
          if ( !v11 )
            ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v12);
          *(_DWORD *)(v11 + 8) = *v10;
          memcpy_s((void *const)(v11 + 24), 2LL * (*v10 + 1), v4, 2LL * (*v10 + 1));
        }
        if ( _InterlockedExchangeAdd(v6 + 4, 0xFFFFFFFF) <= 1 )
          (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v6 + 8LL))(*(_QWORD *)v6, v6);
        *a2 = (void *)(v5 + 6);
      }
      else
      {
        ATL::CSimpleStringT<unsigned short,0>::SetString(a2, v4, *((_DWORD *)v4 - 4));
      }
    }
    catch ( ATL::CAtlException *v13 )
    {
      v9 = (int *)v13;
      if ( *(_DWORD *)v13 == -1073741571 )
        _o__resetstkoflw();
      v14 = *v9;
      v3 = *v9;
      if ( v14 < 0 )
        AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::ToString", 512, v14);
    }
  }
  return v3;
}
