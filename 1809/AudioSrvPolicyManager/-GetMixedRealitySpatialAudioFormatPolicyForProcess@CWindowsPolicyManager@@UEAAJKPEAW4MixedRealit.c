/*
 * XREFs of ?GetMixedRealitySpatialAudioFormatPolicyForProcess@CWindowsPolicyManager@@UEAAJKPEAW4MixedRealitySpatialAudioFormatPolicy@Audio@Media@Windows@@@Z @ 0x180009380
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F84 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryFindProcessFromProcessId@CApplicationManager@@QEAAJKPEAPEAVCProcess@@@Z @ 0x18001E1B0 (-TryFindProcessFromProcessId@CApplicationManager@@QEAAJKPEAPEAVCProcess@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowsPolicyManager::GetMixedRealitySpatialAudioFormatPolicyForProcess(
        CWindowsPolicyManager *this,
        unsigned int a2,
        enum Windows::Media::Audio::MixedRealitySpatialAudioFormatPolicy *a3)
{
  int ProcessFromProcessId; // eax
  struct CProcess *v5; // rbx
  unsigned int v6; // edi
  struct CProcess *v7; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CProcess *v10; // [rsp+48h] [rbp+20h] BYREF

  *(_DWORD *)a3 = 0;
  v10 = 0LL;
  ProcessFromProcessId = CApplicationManager::TryFindProcessFromProcessId(g_ApplicationManager, a2, &v10);
  v5 = v10;
  v6 = ProcessFromProcessId;
  if ( ProcessFromProcessId >= 0 )
  {
    if ( v10 )
      *(_DWORD *)a3 = *((_DWORD *)v10 + 194);
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x135,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      (const char *)(unsigned int)ProcessFromProcessId);
  }
  if ( v5 && _InterlockedExchangeAdd((volatile signed __int32 *)v5 + 2, 0xFFFFFFFF) == 1 )
  {
    v7 = v10;
    (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v10 + 32LL))(v10);
    (*(void (__fastcall **)(struct CProcess *, __int64))(*(_QWORD *)v7 + 24LL))(v7, 1LL);
  }
  return v6;
}
