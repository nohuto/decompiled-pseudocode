/*
 * XREFs of ??$_Emplace_reallocate@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1800084B0
 * Callers:
 *     ?FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKU_GUID@@@Z @ 0x180007DE0 (-FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKU_GUI.c)
 *     ?RegisterOwnerProcess@CAudioSession@@QEAAJPEAUIAudioProcess@@@Z @ 0x1800C25B0 (-RegisterOwnerProcess@CAudioSession@@QEAAJPEAUIAudioProcess@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000CFC0 (--2@YAPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800161F4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>(
        unsigned __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *v4; // r13
  __int64 v6; // r15
  __int64 v7; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  SIZE_T v12; // r12
  unsigned __int64 v13; // rdi
  HANDLE ProcessHeap; // rax
  unsigned __int64 v15; // rdi
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 *v18; // rcx
  __int64 *v19; // rdx
  _QWORD *v20; // rsi
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  void *v24; // rax
  unsigned __int64 v25; // r9
  __int64 v26; // rax
  unsigned __int64 v27; // rcx
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  _QWORD *v31; // r13
  unsigned __int64 v32; // [rsp+70h] [rbp+8h]

  v4 = a2;
  v6 = (__int64)((__int64)a2 - *a1) >> 3;
  v7 = (__int64)(a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (__int64)(a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 > 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) || (v11 = v10 + v9, v10 + v9 < v8) )
    v11 = v8;
  v32 = v11;
  v12 = 8 * v11;
  v13 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
  {
    v22 = -1LL;
    v13 = -1LL;
  }
  else
  {
    if ( v12 < 0x1000 )
    {
      if ( v12 )
      {
        ProcessHeap = GetProcessHeap();
        v15 = (unsigned __int64)HeapAlloc(ProcessHeap, 0, v12);
      }
      else
      {
        v15 = 0LL;
      }
      goto LABEL_9;
    }
    v22 = -1LL;
  }
  v23 = v13 + 39;
  if ( v13 + 39 >= v13 )
    goto LABEL_18;
  while ( 1 )
  {
    v23 = v22;
LABEL_18:
    v24 = operator new(v23);
    if ( v24 )
      break;
    v22 = _o__invalid_parameter_noinfo_noreturn();
  }
  v15 = ((unsigned __int64)v24 + 39) & 0xFFFFFFFFFFFFFFE0uLL;
  *(_QWORD *)(v15 - 8) = v24;
LABEL_9:
  v16 = 8 * v6;
  v17 = *a3;
  *a3 = 0LL;
  *(_QWORD *)(v16 + v15) = v17;
  v18 = (__int64 *)a1[1];
  v19 = (__int64 *)*a1;
  if ( v4 == v18 )
  {
    if ( v19 != v18 )
    {
      try
      {
        v25 = v15 - (_QWORD)v19;
        do
        {
          v26 = *v19;
          *v19 = 0LL;
          *(__int64 *)((char *)v19++ + v25) = v26;
        }
        while ( v19 != v18 );
      }
      catch ( ... )
      {
        std::vector<wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>>::_Destroy(v18, v16 + v15, v16 + v15 + 8);
        std::_Deallocate<16,0>(v15, 8 * v32);
        throw;
      }
    }
  }
  else
  {
    if ( v19 != v4 )
    {
      v27 = v15 - (_QWORD)v19;
      do
      {
        v28 = *v19;
        *v19 = 0LL;
        *(__int64 *)((char *)v19++ + v27) = v28;
      }
      while ( v19 != v4 );
      v18 = (__int64 *)a1[1];
    }
    if ( v4 != v18 )
    {
      v29 = v15 + v16 - (_QWORD)v4;
      do
      {
        v30 = *v4;
        *v4 = 0LL;
        *(__int64 *)((char *)v4++ + v29 + 8) = v30;
      }
      while ( v4 != v18 );
    }
  }
  v20 = (_QWORD *)*a1;
  if ( *a1 )
  {
    v31 = (_QWORD *)a1[1];
    if ( v20 != v31 )
    {
      do
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v20++);
      while ( v20 != v31 );
      v20 = (_QWORD *)*a1;
    }
    std::_Deallocate<16,0>(v20, (a1[2] - (_QWORD)v20) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *a1 = v15;
  a1[1] = v15 + 8 * v8;
  a1[2] = v12 + v15;
  return v16 + *a1;
}
