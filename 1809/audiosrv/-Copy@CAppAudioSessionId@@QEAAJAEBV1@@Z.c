/*
 * XREFs of ?Copy@CAppAudioSessionId@@QEAAJAEBV1@@Z @ 0x1800086EC
 * Callers:
 *     ?Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z @ 0x1800085F4 (-Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z.c)
 * Callees:
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x180008B44 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     memcpy_s @ 0x18000C76C (memcpy_s.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001FAA0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18001FB10 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x1800B3268 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 */

__int64 __fastcall CAppAudioSessionId::Copy(CAppAudioSessionId *this, const struct CAppAudioSessionId *a2)
{
  const struct CAppAudioSessionId *v2; // rsi
  CAppAudioSessionId *v3; // rdi
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  volatile signed __int32 *v6; // rbx
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  int *v9; // rbx
  unsigned int v10; // ebx
  _QWORD *v11; // r15
  char *v12; // r14
  volatile signed __int32 *v13; // rdi
  volatile signed __int32 *v14; // rsi
  __int64 (__fastcall ***v15)(_QWORD, _QWORD, __int64); // rcx
  __int64 v17; // r14
  __int64 v18; // r15
  ATL::CAtlException *v19; // rbx
  ATL::CAtlException *v20; // rbx
  ATL::CAtlException *v21; // rbx
  _DWORD *v22; // r12
  __int64 v23; // rax
  __int64 v24; // rcx
  ATL::CAtlException *v25; // [rsp+28h] [rbp-40h] BYREF
  ATL::CAtlException *v26; // [rsp+30h] [rbp-38h] BYREF
  ATL::CAtlException *v27; // [rsp+38h] [rbp-30h] BYREF
  int v30; // [rsp+80h] [rbp+18h]
  int v31; // [rsp+80h] [rbp+18h]
  int v32; // [rsp+80h] [rbp+18h]

  v2 = a2;
  v3 = this;
  *((_OWORD *)this + 1) = *((_OWORD *)a2 + 1);
  v4 = *(_QWORD *)a2;
  v5 = (_QWORD *)(v4 - 24);
  v6 = (volatile signed __int32 *)(*(_QWORD *)v3 - 24LL);
  if ( (volatile signed __int32 *)(v4 - 24) != v6 )
  {
    try
    {
      if ( *((int *)v6 + 4) >= 0 && *v5 == *(_QWORD *)v6 )
      {
        v17 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v5);
        if ( _InterlockedExchangeAdd(v6 + 4, 0xFFFFFFFF) <= 1 )
          (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v6 + 8LL))(*(_QWORD *)v6, v6);
        *(_QWORD *)v3 = v17 + 24;
      }
      else
      {
        ATL::CSimpleStringT<unsigned short,0>::SetString(v3, v4, *(unsigned int *)(v4 - 16));
      }
    }
    catch ( ATL::CAtlException *v25 )
    {
      v19 = v25;
      if ( *(_DWORD *)v25 == -1073741571 )
        _o__resetstkoflw();
      v30 = *(_DWORD *)v19;
      v10 = *(_DWORD *)v19;
      if ( v30 < 0 )
        goto LABEL_33;
      v3 = this;
      v2 = a2;
    }
  }
  v7 = *((_QWORD *)v2 + 1);
  v8 = (_QWORD *)(v7 - 24);
  v9 = (int *)(*((_QWORD *)v3 + 1) - 24LL);
  if ( (int *)(v7 - 24) != v9 )
  {
    try
    {
      if ( v9[4] >= 0 && *v8 == *(_QWORD *)v9 )
      {
        v18 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v8);
        ATL::CStringData::Release((ATL::CStringData *)v9);
        *((_QWORD *)v3 + 1) = v18 + 24;
      }
      else
      {
        ATL::CSimpleStringT<unsigned short,0>::SetString((char *)v3 + 8, v7, *(unsigned int *)(v7 - 16));
      }
    }
    catch ( ATL::CAtlException *v26 )
    {
      v20 = v26;
      if ( *(_DWORD *)v26 == -1073741571 )
        _o__resetstkoflw();
      v31 = *(_DWORD *)v20;
      v10 = *(_DWORD *)v20;
      if ( v31 < 0 )
        goto LABEL_33;
      v3 = this;
      v2 = a2;
    }
  }
  *((_DWORD *)v3 + 10) = *((_DWORD *)v2 + 10);
  v10 = 0;
  v11 = (_QWORD *)((char *)v3 + 32);
  v12 = (char *)*((_QWORD *)v2 + 4);
  v13 = (volatile signed __int32 *)(v12 - 24);
  v14 = (volatile signed __int32 *)(*v11 - 24LL);
  if ( v12 - 24 != (char *)v14 )
  {
    try
    {
      if ( *((int *)v14 + 4) >= 0 && *(_QWORD *)v13 == *(_QWORD *)v14 )
      {
        v15 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v13 + 32LL))(*(_QWORD *)v13);
        if ( *((int *)v13 + 4) >= 0 && v15 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v13 )
        {
          _InterlockedIncrement(v13 + 4);
        }
        else
        {
          v22 = v13 + 2;
          v23 = (**v15)(v15, *((unsigned int *)v13 + 2), 2LL);
          v13 = (volatile signed __int32 *)v23;
          if ( !v23 )
            ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v24);
          *(_DWORD *)(v23 + 8) = *v22;
          memcpy_s((void *const)(v23 + 24), 2LL * (*v22 + 1), v12, 2LL * (*v22 + 1));
        }
        if ( _InterlockedExchangeAdd(v14 + 4, 0xFFFFFFFF) <= 1 )
          (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v14 + 8LL))(*(_QWORD *)v14, v14);
        *v11 = v13 + 6;
      }
      else
      {
        ATL::CSimpleStringT<unsigned short,0>::SetString(v11, v12, *((unsigned int *)v12 - 4));
      }
    }
    catch ( ATL::CAtlException *v27 )
    {
      v21 = v27;
      if ( *(_DWORD *)v27 == -1073741571 )
        _o__resetstkoflw();
      v32 = *(_DWORD *)v21;
      v10 = *(_DWORD *)v21;
      if ( v32 < 0 )
LABEL_33:
        AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::Copy", 0x1D6u, v10);
    }
  }
  return v10;
}
