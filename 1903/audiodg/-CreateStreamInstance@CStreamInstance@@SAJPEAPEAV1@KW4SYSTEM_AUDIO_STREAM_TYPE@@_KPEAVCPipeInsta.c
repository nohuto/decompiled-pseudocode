/*
 * XREFs of ?CreateStreamInstance@CStreamInstance@@SAJPEAPEAV1@KW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInstance@@_J@Z @ 0x140001730
 * Callers:
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14000C3D0 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     ?CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14003C160 (-CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTE.c)
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14003C760 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1400018D8 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x140001924 (--1-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 *     ??B?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEBA_NXZ @ 0x140014FC0 (--B-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001619C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$CAutoPtr@VCStreamInstance@@@ATL@@QEAA@XZ @ 0x140025DC0 (--1-$CAutoPtr@VCStreamInstance@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028234 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x14003EED4 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall CStreamInstance::CreateStreamInstance(
        _QWORD *a1,
        DWORD a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // rbx
  HRESULT v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // r9
  __int64 v14; // rdx
  HANDLE v15; // rax
  HANDLE v16; // rax
  char v17; // al
  void *v18; // rdx
  unsigned int v19; // r8d
  const char *v20; // r9
  char *v21; // rax
  _QWORD *v22; // rdi
  __int64 v23; // rax
  _QWORD *v25; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 v27; // [rsp+60h] [rbp+30h] BYREF

  v25 = 0LL;
  v7 = 0LL;
  v27 = 0LL;
  *a1 = 0LL;
  if ( a2 )
  {
    v11 = CoImpersonateClient();
    v12 = v11;
    if ( v11 < 0 )
    {
      v13 = (unsigned int)v11;
      v14 = 42LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)v13,
        (int)v25);
      goto LABEL_19;
    }
    v15 = OpenProcess(0x3000u, 0, a2);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &v27,
      v15);
    if ( !(unsigned __int8)wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::operator bool(&v27) )
    {
      v16 = OpenProcess(0x2400u, 0, a2);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        &v27,
        v16);
    }
    v17 = wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::operator bool(&v27);
    v7 = v27;
    if ( !v17 && ((v27 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
      wil::details::in1diag3::_Log_GetLastError(retaddr, v18, v19, v20);
    CoRevertToSelf();
  }
  v21 = (char *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v22 = v21;
  if ( v21 )
  {
    *(_QWORD *)v21 = 0LL;
    *((_QWORD *)v21 + 1) = 0LL;
    *((_WORD *)v21 + 8) = 0;
    *((_DWORD *)v21 + 5) = a3;
    *((_QWORD *)v21 + 3) = 0LL;
    *((_QWORD *)v21 + 4) = 0LL;
    *((_QWORD *)v21 + 5) = 0LL;
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v21 + 48), 0, 0);
    v22[11] = 0LL;
    v22[12] = 0LL;
  }
  else
  {
    v22 = 0LL;
  }
  v25 = v22;
  if ( !v22 )
  {
    v12 = -2147024882;
    v14 = 62LL;
    v13 = 2147942414LL;
    goto LABEL_15;
  }
  *v22 = a5;
  v23 = a6;
  v22[1] = a4;
  v22[12] = v23;
  if ( v22 + 5 != &v27 )
  {
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      v22 + 5,
      v7);
    v27 = 0LL;
  }
  v25 = 0LL;
  v12 = 0;
  *a1 = v22;
LABEL_19:
  wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(&v27);
  ATL::CAutoPtr<CStreamInstance>::~CAutoPtr<CStreamInstance>(&v25);
  return v12;
}
