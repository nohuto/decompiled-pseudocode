/*
 * XREFs of ?Copy@CAudioEndpointId@@QEAAJAEBV1@@Z @ 0x180008864
 * Callers:
 *     ?Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z @ 0x1800085F4 (-Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     memcpy_s @ 0x18000C76C (memcpy_s.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18001FB10 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x1800B3268 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 */

__int64 __fastcall CAudioEndpointId::Copy(CAudioEndpointId *this, const struct CAudioEndpointId *a2)
{
  unsigned int v3; // esi
  unsigned int *v4; // r14
  volatile signed __int32 *v5; // rbx
  volatile signed __int32 *v6; // rdi
  __int64 (__fastcall ***v7)(_QWORD, _QWORD, __int64); // rcx
  int *v9; // rbx
  _DWORD *v10; // r12
  __int64 v11; // rax
  __int64 v12; // rcx
  ATL::CAtlException *v13; // [rsp+28h] [rbp-20h] BYREF
  int v14; // [rsp+50h] [rbp+8h]

  v3 = 0;
  v4 = *(unsigned int **)a2;
  v5 = (volatile signed __int32 *)(*(_QWORD *)a2 - 24LL);
  v6 = (volatile signed __int32 *)(*(_QWORD *)this - 24LL);
  if ( v5 != v6 )
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
        *(_QWORD *)this = v5 + 6;
      }
      else
      {
        ATL::CSimpleStringT<unsigned short,0>::SetString(this, *(_QWORD *)a2, *(v4 - 4));
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
        AudSrvTraceLoggingErrorHelper("CAudioEndpointId::Copy", 0x9Du, v14);
    }
  }
  return v3;
}
