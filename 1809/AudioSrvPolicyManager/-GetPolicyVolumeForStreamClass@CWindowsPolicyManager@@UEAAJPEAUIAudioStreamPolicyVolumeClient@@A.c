/*
 * XREFs of ?GetPolicyVolumeForStreamClass@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamPolicyVolumeClient@@AEAUStreamCategoryPolicyVolumes@@@Z @ 0x180009740
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F84 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z @ 0x180010864 (-GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z.c)
 *     ?GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@@@Z @ 0x180026834 (-GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x180028878 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?GetPolicyVolumeForStreamClass@CStreamClassPolicyGainsWrapper@@QEAAJKHAEA_NAEAMAEA_J@Z @ 0x18002B210 (-GetPolicyVolumeForStreamClass@CStreamClassPolicyGainsWrapper@@QEAAJKHAEA_NAEAMAEA_J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowsPolicyManager::GetPolicyVolumeForStreamClass(
        CWindowsPolicyManager *this,
        struct IAudioStreamPolicyVolumeClient *a2,
        struct StreamCategoryPolicyVolumes *a3)
{
  int v5; // eax
  signed int PBMRelatedAudioStreamCategory; // ebx
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  struct IAudioProcess *v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // rax
  struct IAudioProcess *v12; // rbx
  const unsigned __int16 *v13; // r14
  int v14; // r15d
  struct _RTL_CRITICAL_SECTION *v15; // rsi
  int v16; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  unsigned int v20; // [rsp+78h] [rbp+38h] BYREF
  struct IAudioProcess *v21; // [rsp+80h] [rbp+40h] BYREF
  TSSession *v22; // [rsp+88h] [rbp+48h] BYREF

  v21 = 0LL;
  *((_DWORD *)a3 + 3) = 1065353216;
  *((_BYTE *)a3 + 8) = 0;
  v5 = (*(__int64 (__fastcall **)(struct IAudioStreamPolicyVolumeClient *, struct IAudioProcess **))(*(_QWORD *)a2 + 24LL))(
         a2,
         &v21);
  PBMRelatedAudioStreamCategory = v5;
  if ( v5 < 0 )
  {
    v7 = (unsigned int)v5;
    v8 = 40LL;
    goto LABEL_3;
  }
  v9 = v21;
  v10 = (*(__int64 (__fastcall **)(struct IAudioStreamPolicyVolumeClient *))(*(_QWORD *)a2 + 56LL))(a2);
  v20 = 0;
  if ( v10 >= 0x15 )
  {
    PBMRelatedAudioStreamCategory = -2147024809;
LABEL_8:
    v7 = (unsigned int)PBMRelatedAudioStreamCategory;
    v8 = 44LL;
    goto LABEL_3;
  }
  PBMRelatedAudioStreamCategory = GetPBMRelatedAudioStreamCategory(v9, v10, &v20);
  if ( PBMRelatedAudioStreamCategory < 0 )
    goto LABEL_8;
  v11 = (*(__int64 (__fastcall **)(struct IAudioStreamPolicyVolumeClient *))(*(_QWORD *)a2 + 40LL))(a2);
  v12 = v21;
  v13 = (const unsigned __int16 *)v11;
  v14 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v21 + 104LL))(v21);
  LODWORD(v12) = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v12 + 48LL))(v12);
  v15 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v16 = TsSessionFromSessionId((unsigned int)v12, 1, 0LL, &v22);
  if ( v16 )
  {
    PBMRelatedAudioStreamCategory = (unsigned __int16)v16 | 0x80070000;
    if ( v16 <= 0 )
      PBMRelatedAudioStreamCategory = v16;
  }
  else
  {
    PBMRelatedAudioStreamCategory = TSSession::GetStreamClassPolicyGainsForEndpoint(
                                      v22,
                                      v13,
                                      (struct CStreamClassPolicyGainsWrapper **)&lpCriticalSection);
    if ( PBMRelatedAudioStreamCategory >= 0 )
      PBMRelatedAudioStreamCategory = CStreamClassPolicyGainsWrapper::GetPolicyVolumeForStreamClass(
                                        lpCriticalSection,
                                        v20,
                                        v14,
                                        (bool *)a3,
                                        (float *)a3 + 1,
                                        (__int64 *)a3 + 2);
  }
  if ( v15 )
    LeaveCriticalSection(v15);
  if ( PBMRelatedAudioStreamCategory < 0 )
  {
    v7 = (unsigned int)PBMRelatedAudioStreamCategory;
    v8 = 48LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamclasspolicymanager.cpp",
      (const char *)v7);
    if ( v21 )
      (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v21 + 16LL))(v21);
    return (unsigned int)PBMRelatedAudioStreamCategory;
  }
  if ( v21 )
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v21 + 16LL))(v21);
  return 0;
}
