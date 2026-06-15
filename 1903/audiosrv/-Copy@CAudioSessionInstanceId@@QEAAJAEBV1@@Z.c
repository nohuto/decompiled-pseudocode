/*
 * XREFs of ?Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z @ 0x18003BC5C
 * Callers:
 *     ?FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKU_GUID@@@Z @ 0x18003B6A0 (-FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKU_GUI.c)
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18000A204 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002A780 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Copy@CAppAudioSessionId@@QEAAJAEBV1@@Z @ 0x18003BD54 (-Copy@CAppAudioSessionId@@QEAAJAEBV1@@Z.c)
 *     ?Copy@CAudioEndpointId@@QEAAJAEBV1@@Z @ 0x18003BECC (-Copy@CAudioEndpointId@@QEAAJAEBV1@@Z.c)
 *     memcpy_s @ 0x180048684 (memcpy_s.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x1800C1A88 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 */

__int64 __fastcall CAudioSessionInstanceId::Copy(
        CAudioSessionInstanceId *this,
        const struct CAudioSessionInstanceId *a2)
{
  int v4; // edi
  void **v5; // r15
  char *v6; // r14
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v8; // rsi
  __int64 (__fastcall ***v9)(_QWORD, _QWORD, __int64); // rcx
  int *v11; // rbx
  _DWORD *v12; // r12
  __int64 v13; // rax
  __int64 v14; // rcx
  ATL::CAtlException *v15; // [rsp+28h] [rbp-20h] BYREF

  v4 = CAudioEndpointId::Copy(this, a2);
  if ( v4 < 0
    || (*((_DWORD *)this + 14) = *((_DWORD *)a2 + 14),
        *((_DWORD *)this + 15) = *((_DWORD *)a2 + 15),
        *((_DWORD *)this + 16) = *((_DWORD *)a2 + 16),
        v4 = CAppAudioSessionId::Copy(
               (CAudioSessionInstanceId *)((char *)this + 8),
               (const struct CAudioSessionInstanceId *)((char *)a2 + 8)),
        v4 < 0) )
  {
LABEL_19:
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::Copy", 930, v4);
    return (unsigned int)v4;
  }
  v4 = 0;
  v5 = (void **)((char *)this + 72);
  v6 = (char *)*((_QWORD *)a2 + 9);
  v7 = (volatile signed __int32 *)(v6 - 24);
  v8 = (volatile signed __int32 *)(*((_QWORD *)this + 9) - 24LL);
  if ( v6 - 24 != (char *)v8 )
  {
    try
    {
      if ( *((int *)v8 + 4) >= 0 && *(_QWORD *)v7 == *(_QWORD *)v8 )
      {
        v9 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v7
                                                                                                  + 32LL))(*(_QWORD *)v7);
        if ( *((int *)v7 + 4) >= 0 && v9 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v7 )
        {
          _InterlockedIncrement(v7 + 4);
        }
        else
        {
          v12 = v7 + 2;
          v13 = (**v9)(v9, *((unsigned int *)v7 + 2), 2LL);
          v7 = (volatile signed __int32 *)v13;
          if ( !v13 )
            ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v14);
          *(_DWORD *)(v13 + 8) = *v12;
          memcpy_s((void *const)(v13 + 24), 2LL * (*v12 + 1), v6, 2LL * (*v12 + 1));
        }
        if ( _InterlockedExchangeAdd(v8 + 4, 0xFFFFFFFF) <= 1 )
          (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v8 + 8LL))(*(_QWORD *)v8, v8);
        *v5 = (void *)(v7 + 6);
      }
      else
      {
        ATL::CSimpleStringT<unsigned short,0>::SetString(v5, v6, *((_DWORD *)v6 - 4));
      }
    }
    catch ( ATL::CAtlException *v15 )
    {
      v11 = (int *)v15;
      if ( *(_DWORD *)v15 == -1073741571 )
        _o__resetstkoflw();
      v4 = *v11;
      if ( *v11 < 0 )
        goto LABEL_19;
    }
  }
  return (unsigned int)v4;
}
