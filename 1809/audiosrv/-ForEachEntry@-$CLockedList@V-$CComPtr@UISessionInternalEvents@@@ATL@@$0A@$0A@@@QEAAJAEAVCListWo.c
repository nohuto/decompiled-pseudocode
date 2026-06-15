/*
 * XREFs of ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180027ED0
 * Callers:
 *     ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x18000EA50 (-StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?SetGroupingParamInternal@CAudioSession@@UEAAJPEBU_GUID@@0@Z @ 0x180014D70 (-SetGroupingParamInternal@CAudioSession@@UEAAJPEBU_GUID@@0@Z.c)
 *     ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180027930 (-StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x180027BF0 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180028110 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x180043110 (-NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z.c)
 *     ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z @ 0x180044F70 (-RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z.c)
 *     _lambda_ce62a0462eef1ffdae6c0304eec1e9a4_::operator() @ 0x1800642F0 (_lambda_ce62a0462eef1ffdae6c0304eec1e9a4_--operator().c)
 *     ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800BEF30 (-Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x1800BF2DC (-DisconnectStreamList@CAudioSession@@AEAAJXZ.c)
 *     ?SetDisplayName@CAudioSession@@UEAAJPEBGPEBU_GUID@@_N@Z @ 0x1800C3030 (-SetDisplayName@CAudioSession@@UEAAJPEBGPEBU_GUID@@_N@Z.c)
 *     ?SetIconPath@CAudioSession@@UEAAJPEBGPEBU_GUID@@@Z @ 0x1800C31D0 (-SetIconPath@CAudioSession@@UEAAJPEBGPEBU_GUID@@@Z.c)
 * Callees:
 *     memmove_0 @ 0x1800688AF (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AE7FC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=2
__int64 __fastcall CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry(
        LPCRITICAL_SECTION lpCriticalSection,
        void (__fastcall ***a2)(_QWORD, __int64 *))
{
  unsigned __int64 v3; // rsi
  void *v4; // rbx
  unsigned __int64 v5; // r14
  size_t v6; // rdi
  unsigned __int64 v7; // r12
  unsigned int i; // r13d
  WORD *v9; // rax
  unsigned __int64 v10; // rcx
  size_t v11; // rdx
  void *v12; // rax
  __int64 v13; // rcx
  unsigned int j; // edi
  __int64 v15; // rcx
  __int64 v16; // rcx
  WORD *v18; // [rsp+20h] [rbp-88h]
  void *v19; // [rsp+28h] [rbp-80h]
  __int64 v21; // [rsp+C0h] [rbp+18h] BYREF
  unsigned __int64 v22; // [rsp+C8h] [rbp+20h]

  v3 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v22 = 0LL;
  EnterCriticalSection(lpCriticalSection);
  for ( i = 0; ; ++i )
  {
    LODWORD(v21) = i;
    if ( (unsigned __int64)i >= *(_QWORD *)&lpCriticalSection[1].LockCount )
      break;
    v9 = &lpCriticalSection[1].DebugInfo->Type + 4 * i;
    v18 = v9;
    if ( v5 >= v6 )
    {
      v10 = v5 + 1;
      if ( v5 + 1 > v6 )
      {
        if ( v4 )
        {
          v11 = v6 >> 1;
          if ( v10 - v6 > v6 >> 1 )
            v11 = v10 - v6;
          v6 += v11;
          if ( v10 >= v6 )
            v6 = v5 + 1;
          v12 = calloc(v6, 8uLL);
          v19 = v12;
          if ( !v12 )
LABEL_32:
            ATL::AtlThrowImpl(-2147024882);
          if ( 8 * v5 )
            memmove_0(v12, v4, 8 * v5);
          free(v4);
          v4 = v19;
        }
        else
        {
          v6 = v5 + 1;
          v4 = calloc(v5 + 1, 8uLL);
          if ( !v4 )
            goto LABEL_32;
        }
        v9 = v18;
      }
    }
    v13 = *(_QWORD *)v9;
    *((_QWORD *)v4 + v5) = *(_QWORD *)v9;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    ++v5;
    v22 = ++v7;
  }
  LeaveCriticalSection(lpCriticalSection);
  for ( j = 0; j < v7; ++j )
  {
    if ( j >= v5 )
      ATL::AtlThrowImpl(-2147024809);
    v15 = *((_QWORD *)v4 + j);
    v21 = v15;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    (**a2)(a2, &v21);
  }
  if ( v4 )
  {
    if ( v5 )
    {
      do
      {
        v16 = *((_QWORD *)v4 + v3);
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        ++v3;
      }
      while ( v3 < v5 );
    }
    free(v4);
  }
  return 0LL;
}
