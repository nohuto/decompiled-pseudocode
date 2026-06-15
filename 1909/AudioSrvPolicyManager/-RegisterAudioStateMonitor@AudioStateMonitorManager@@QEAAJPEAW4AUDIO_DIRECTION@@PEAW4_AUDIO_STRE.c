/*
 * XREFs of ?RegisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEA_K@Z @ 0x18002CC6C
 * Callers:
 *     ?RegisterAudioStateMonitor@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEA_K@Z @ 0x180014450 (-RegisterAudioStateMonitor@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEB.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CoAllocString@@YAJPEBGPEAPEAG@Z @ 0x18000D6F4 (-CoAllocString@@YAJPEBGPEAPEAG@Z.c)
 *     ??1?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@QEAA@XZ @ 0x180017690 (--1-$unique_ptr@UAudioStateMonitor@@U-$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@QEAA@X.c)
 *     ?GetSoundLevelForExtendedAudioCategory@AudioStateMonitorManager@@AEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAW4AUDIO_DIRECTION@@PEAKPEBG@Z @ 0x18002D188 (-GetSoundLevelForExtendedAudioCategory@AudioStateMonitorManager@@AEAA-AW4__MIDL___MIDL_itf_audio.c)
 *     ??$_Insert@AEAU?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@std@@@std@@@1@@Z @ 0x18002D340 (--$_Insert@AEAU-$pair@$$CB_KV-$unique_ptr@UAudioStateMonitor@@U-$default_delete@UAudioStateMonit.c)
 *     ??$_Buynode@AEA_KPEAUAudioStateMonitor@@@?$_List_buy@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@V?$allocator@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@PEAX@1@PEAU21@0AEA_K$$QEAPEAUAudioStateMonitor@@@Z @ 0x18002D5A8 (--$_Buynode@AEA_KPEAUAudioStateMonitor@@@-$_List_buy@U-$pair@$$CB_KV-$unique_ptr@UAudioStateMoni.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800349C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800349FC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AudioStateMonitorManager::RegisterAudioStateMonitor(
        AudioStateMonitorManager *this,
        enum AUDIO_DIRECTION *a2,
        enum _AUDIO_STREAM_CATEGORY *a3,
        const unsigned __int16 *a4,
        unsigned __int64 *a5)
{
  AudioStateMonitorManager *v8; // rsi
  struct _RTL_CRITICAL_SECTION *v9; // r14
  void **v10; // rax
  void **v11; // rdi
  __int64 v12; // rdx
  _DWORD *v13; // rax
  void *v14; // rcx
  void *v15; // rbp
  DWORD LastError; // ebx
  int v17; // eax
  unsigned int v18; // ebx
  unsigned __int64 v19; // r9
  _DWORD *v20; // rax
  void *v21; // rcx
  int SoundLevelForExtendedAudioCategory; // ebx
  _DWORD *v23; // rax
  void *v24; // rcx
  char *v25; // rbx
  __int64 v26; // rdi
  __int64 *v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rax
  void **v31; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v32[5]; // [rsp+38h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  AudioStateMonitorManager *v34; // [rsp+90h] [rbp+8h] BYREF

  v34 = this;
  v32[2] = -2LL;
  v8 = this;
  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v32[3] = v9;
  v10 = (void **)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v10;
  if ( v10 )
  {
    *v10 = 0LL;
    v10[1] = 0LL;
    v10[2] = 0LL;
    v10[3] = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  v31 = v11;
  if ( !v11 )
  {
    v12 = 79LL;
LABEL_37:
    v18 = -2147024882;
    goto LABEL_38;
  }
  if ( a2 )
  {
    v13 = operator new(4uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v13 )
      *v13 = *(_DWORD *)a2;
    else
      v13 = 0LL;
    v14 = *v11;
    *v11 = v13;
    if ( v14 )
    {
      operator delete(v14, (const struct std::nothrow_t *)4);
      v13 = *v11;
    }
    if ( !v13 )
    {
      v12 = 83LL;
      goto LABEL_37;
    }
  }
  if ( a4 )
  {
    v15 = v11[2];
    if ( v15 )
    {
      LastError = GetLastError();
      CoTaskMemFree(v15);
      SetLastError(LastError);
    }
    v11[2] = 0LL;
    v17 = CoAllocString(a4, (unsigned __int16 **)v11 + 2);
    v18 = v17;
    if ( v17 < 0 )
    {
      v19 = (unsigned int)v17;
      v12 = 88LL;
LABEL_39:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\audiostatemonitormanager\\audiostatemonitormanager.cpp",
        (const char *)v19);
      goto LABEL_43;
    }
    v8 = v34;
  }
  if ( a3 )
  {
    v20 = operator new(4uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v20 )
      *v20 = 0;
    else
      v20 = 0LL;
    if ( !v20 )
    {
      v12 = 95LL;
      goto LABEL_37;
    }
    if ( *a3 > (unsigned int)AudioCategory_Media )
    {
      v18 = -2147024809;
      v12 = 96LL;
LABEL_38:
      v19 = v18;
      goto LABEL_39;
    }
    *v20 = *a3;
    v21 = v11[1];
    v11[1] = v20;
    if ( v21 )
      operator delete(v21, (const struct std::nothrow_t *)4);
  }
  SoundLevelForExtendedAudioCategory = AudioStateMonitorManager::GetSoundLevelForExtendedAudioCategory(
                                         v8,
                                         a2,
                                         v11[1],
                                         a4);
  v23 = operator new(4uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v23 )
    *v23 = SoundLevelForExtendedAudioCategory;
  else
    v23 = 0LL;
  v24 = v11[3];
  v11[3] = v23;
  if ( v24 )
  {
    operator delete(v24, (const struct std::nothrow_t *)4);
    v23 = v11[3];
  }
  if ( !v23 )
  {
    v12 = 103LL;
    goto LABEL_37;
  }
  v34 = (AudioStateMonitorManager *)v11;
  v31 = 0LL;
  v32[0] = v11;
  v25 = (char *)v8 + 56;
  v26 = **((_QWORD **)v8 + 8);
  v27 = *(__int64 **)(v26 + 8);
  v28 = std::_List_buy<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>::_Buynode<unsigned __int64 &,AudioStateMonitor *>(
          (_DWORD)v24,
          v26,
          (_DWORD)v27,
          (unsigned int)&v34,
          (__int64)v32);
  v29 = *((_QWORD *)v25 + 2);
  if ( v29 == 0x7FFFFFFFFFFFFFELL )
    std::_Xlength_error("list<T> too long");
  *((_QWORD *)v25 + 2) = v29 + 1;
  *(_QWORD *)(v26 + 8) = v28;
  *v27 = v28;
  std::_Hash<std::_Umap_traits<unsigned __int64,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>,0>>::_Insert<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>>>>(
    v25,
    v32,
    **((_QWORD **)v25 + 1) + 16LL);
  *a5 = (unsigned __int64)v34;
  v18 = 0;
LABEL_43:
  wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>::~unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>((void **)&v31);
  if ( v9 )
    LeaveCriticalSection(v9);
  return v18;
}
