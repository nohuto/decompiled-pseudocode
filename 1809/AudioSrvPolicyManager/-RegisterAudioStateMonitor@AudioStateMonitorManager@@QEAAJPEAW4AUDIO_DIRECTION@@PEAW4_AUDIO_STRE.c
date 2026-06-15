/*
 * XREFs of ?RegisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEA_K@Z @ 0x18002FDCC
 * Callers:
 *     ?RegisterAudioStateMonitor@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEA_K@Z @ 0x180017600 (-RegisterAudioStateMonitor@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEB.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F84 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180019274 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ??1?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@QEAA@XZ @ 0x18001A780 (--1-$unique_ptr@UAudioStateMonitor@@U-$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@QEAA@X.c)
 *     ?GetSoundLevelForExtendedAudioCategory@AudioStateMonitorManager@@AEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAW4AUDIO_DIRECTION@@PEAKPEBG@Z @ 0x18003034C (-GetSoundLevelForExtendedAudioCategory@AudioStateMonitorManager@@AEAA-AW4__MIDL___MIDL_itf_audio.c)
 *     ??$_Insert@AEAU?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@std@@@std@@@1@@Z @ 0x1800304E4 (--$_Insert@AEAU-$pair@$$CB_KV-$unique_ptr@UAudioStateMonitor@@U-$default_delete@UAudioStateMonit.c)
 *     ??$_Buynode@AEA_KPEAUAudioStateMonitor@@@?$_List_buy@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@V?$allocator@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@PEAX@1@PEAU21@0AEA_K$$QEAPEAUAudioStateMonitor@@@Z @ 0x18003073C (--$_Buynode@AEA_KPEAUAudioStateMonitor@@@-$_List_buy@U-$pair@$$CB_KV-$unique_ptr@UAudioStateMoni.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800370D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003710C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18003769E (memset_0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AudioStateMonitorManager::RegisterAudioStateMonitor(
        AudioStateMonitorManager *this,
        enum AUDIO_DIRECTION *a2,
        enum _AUDIO_STREAM_CATEGORY *a3,
        const unsigned __int16 *a4,
        unsigned __int64 *a5)
{
  AudioStateMonitorManager *v8; // r14
  char *v9; // rbx
  void *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rdx
  _DWORD *v15; // rax
  _DWORD *v16; // rsi
  void *v17; // rbx
  void *v18; // r14
  DWORD LastError; // ebx
  unsigned __int64 v20; // r9
  int v21; // eax
  unsigned int v22; // ebx
  unsigned __int64 v23; // r9
  _DWORD *v24; // rbx
  _DWORD *v25; // rcx
  int SoundLevelForExtendedAudioCategory; // ebx
  _DWORD *v27; // rax
  void *v28; // rcx
  _DWORD *v29; // rsi
  void *v30; // rbx
  void **v31; // r14
  AudioStateMonitorManager *v32; // r14
  __int64 v33; // rdi
  __int64 *v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v38; // [rsp+20h] [rbp-40h]
  unsigned __int64 v39; // [rsp+30h] [rbp-30h] BYREF
  __int64 v40; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v41[4]; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v41[2] = -2LL;
  v8 = this;
  v9 = (char *)this + 16;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v41[3] = v9;
  v10 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = (__int64)v10;
  if ( v10 )
  {
    memset_0(v10, 0, 0x20uLL);
    *(_QWORD *)v13 = 0LL;
    *(_QWORD *)(v13 + 8) = 0LL;
    *(_QWORD *)(v13 + 16) = 0LL;
    *(_QWORD *)(v13 + 24) = 0LL;
  }
  else
  {
    v13 = 0LL;
  }
  v40 = v13;
  if ( !v13 )
  {
    v14 = 79LL;
LABEL_51:
    v22 = -2147024882;
    goto LABEL_52;
  }
  if ( a2 )
  {
    v15 = operator new(4uLL, (const struct std::nothrow_t *)&std::nothrow);
    v16 = v15;
    v11 = 0LL;
    if ( v15 )
    {
      v12 = *(unsigned int *)a2;
      *v15 = v12;
    }
    else
    {
      v16 = 0LL;
    }
    v17 = v16;
    if ( (_QWORD *)v13 != v41 )
    {
      v17 = 0LL;
      v12 = *(_QWORD *)v13;
      if ( v16 == *(_DWORD **)v13 )
        goto LABEL_17;
      if ( v12 )
      {
        operator delete((void *)v12, (const struct std::nothrow_t *)4);
        v11 = 0LL;
      }
      *(_QWORD *)v13 = v16;
      v16 = 0LL;
    }
    if ( v16 )
      operator delete(v17, (const struct std::nothrow_t *)4);
LABEL_17:
    if ( !*(_QWORD *)v13 )
    {
      v14 = 83LL;
      goto LABEL_51;
    }
  }
  if ( a4 )
  {
    v18 = *(void **)(v13 + 16);
    if ( v18 )
    {
      LastError = GetLastError();
      CoTaskMemFree(v18);
      SetLastError(LastError);
    }
    *(_QWORD *)(v13 + 16) = 0LL;
    v20 = -1LL;
    do
      ++v20;
    while ( a4[v20] );
    v21 = _AllocStringWorker<CTCoAllocPolicy>(v12, v11, a4, v20, v38, (unsigned __int16 **)(v13 + 16));
    v22 = v21;
    if ( v21 < 0 )
    {
      v23 = (unsigned int)v21;
      v14 = 88LL;
LABEL_53:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\audiostatemonitormanager\\audiostatemonitormanager.cpp",
        (const char *)v23);
      v32 = this;
      goto LABEL_57;
    }
    v8 = this;
  }
  if ( a3 )
  {
    v24 = operator new(4uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v24 )
      *v24 = 0;
    else
      v24 = 0LL;
    if ( !v24 )
    {
      v14 = 95LL;
      goto LABEL_51;
    }
    if ( *a3 > (unsigned int)AudioCategory_Media )
    {
      v22 = -2147024809;
      v14 = 96LL;
LABEL_52:
      v23 = v22;
      goto LABEL_53;
    }
    *v24 = *a3;
    v25 = *(_DWORD **)(v13 + 8);
    if ( v24 != v25 )
    {
      if ( v25 )
        operator delete(v25, (const struct std::nothrow_t *)4);
      *(_QWORD *)(v13 + 8) = v24;
    }
  }
  SoundLevelForExtendedAudioCategory = AudioStateMonitorManager::GetSoundLevelForExtendedAudioCategory(
                                         v8,
                                         a2,
                                         *(_QWORD *)(v13 + 8),
                                         a4);
  v27 = operator new(4uLL, (const struct std::nothrow_t *)&std::nothrow);
  v29 = v27;
  if ( v27 )
    *v27 = SoundLevelForExtendedAudioCategory;
  else
    v29 = 0LL;
  v30 = v29;
  v31 = (void **)(v13 + 24);
  if ( (_QWORD *)(v13 + 24) != v41 )
  {
    v30 = 0LL;
    v28 = *v31;
    if ( v29 == *v31 )
      goto LABEL_49;
    if ( v28 )
      operator delete(v28, (const struct std::nothrow_t *)4);
    *v31 = v29;
    v29 = 0LL;
  }
  if ( v29 )
    operator delete(v30, (const struct std::nothrow_t *)4);
LABEL_49:
  if ( !*v31 )
  {
    v14 = 103LL;
    goto LABEL_51;
  }
  v39 = v13;
  v40 = 0LL;
  v41[0] = v13;
  v32 = this;
  v33 = **((_QWORD **)this + 8);
  v34 = *(__int64 **)(v33 + 8);
  v35 = std::_List_buy<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>::_Buynode<unsigned __int64 &,AudioStateMonitor *>(
          (_DWORD)v28,
          v33,
          (_DWORD)v34,
          (unsigned int)&v39,
          (__int64)v41);
  v36 = *((_QWORD *)this + 9);
  if ( v36 == 0x7FFFFFFFFFFFFFELL )
    std::_Xlength_error("list<T> too long");
  *((_QWORD *)this + 9) = v36 + 1;
  *(_QWORD *)(v33 + 8) = v35;
  *v34 = v35;
  std::_Hash<std::_Umap_traits<unsigned __int64,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>,0>>::_Insert<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>>>>(
    (char *)this + 56,
    v41,
    **((_QWORD **)this + 8) + 16LL);
  *a5 = v39;
  v22 = 0;
LABEL_57:
  wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>::~unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>(&v40);
  if ( v32 != (AudioStateMonitorManager *)-16LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v32 + 16));
  return v22;
}
