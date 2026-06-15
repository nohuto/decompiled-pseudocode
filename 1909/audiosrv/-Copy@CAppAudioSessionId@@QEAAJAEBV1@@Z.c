/*
 * XREFs of ?Copy@CAppAudioSessionId@@QEAAJAEBV1@@Z @ 0x180040014
 * Callers:
 *     ?Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z @ 0x18003FF1C (-Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002D610 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180030A30 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x180036D88 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     memcpy_s @ 0x180039174 (memcpy_s.c)
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x180040244 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x1800C15D8 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 */

__int64 __fastcall CAppAudioSessionId::Copy(CAppAudioSessionId *this, const struct CAppAudioSessionId *a2)
{
  const struct CAppAudioSessionId *v2; // rsi
  CAppAudioSessionId *v3; // rdi
  char *v4; // rdx
  char *v5; // rcx
  volatile signed __int32 *v6; // rbx
  char *v7; // rdx
  char *v8; // rcx
  int *v9; // rbx
  unsigned int v10; // ebx
  __int64 *v11; // r15
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
  v4 = *(char **)a2;
  v5 = v4 - 24;
  v6 = (volatile signed __int32 *)(*(_QWORD *)v3 - 24LL);
  if ( v4 - 24 != (char *)v6 )
  {
    try
    {
      if ( *((int *)v6 + 4) >= 0 && *(_QWORD *)v5 == *(_QWORD *)v6 )
      {
        v17 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v5);
        if ( _InterlockedExchangeAdd(v6 + 4, 0xFFFFFFFF) <= 1 )
          (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v6 + 8LL))(*(_QWORD *)v6, v6);
        *(_QWORD *)v3 = v17 + 24;
      }
      else
      {
        ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)v3, v4, *((_DWORD *)v4 - 4));
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
  v7 = (char *)*((_QWORD *)v2 + 1);
  v8 = v7 - 24;
  v9 = (int *)(*((_QWORD *)v3 + 1) - 24LL);
  if ( v7 - 24 != (char *)v9 )
  {
    try
    {
      if ( v9[4] >= 0 && *(_QWORD *)v8 == *(_QWORD *)v9 )
      {
        v18 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v8);
        ATL::CStringData::Release((ATL::CStringData *)v9);
        *((_QWORD *)v3 + 1) = v18 + 24;
      }
      else
      {
        ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)v3 + 1, v7, *((_DWORD *)v7 - 4));
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
  v11 = (__int64 *)((char *)v3 + 32);
  v12 = (char *)*((_QWORD *)v2 + 4);
  v13 = (volatile signed __int32 *)(v12 - 24);
  v14 = (volatile signed __int32 *)(*v11 - 24);
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
        *v11 = (__int64)(v13 + 6);
      }
      else
      {
        ATL::CSimpleStringT<unsigned short,0>::SetString(v11, v12, *((_DWORD *)v12 - 4));
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
        AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::Copy", 479, v10);
    }
  }
  return v10;
}
