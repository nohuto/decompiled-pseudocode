/*
 * XREFs of ??$_Emplace_reallocate@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x18003BB10
 * Callers:
 *     ?FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKU_GUID@@@Z @ 0x18003B6A0 (-FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKU_GUI.c)
 *     ?RegisterOwnerProcess@CAudioSession@@QEAAJPEAUIAudioProcess@@@Z @ 0x1800D0E88 (-RegisterOwnerProcess@CAudioSession@@QEAAJPEAUIAudioProcess@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180044928 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050720 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??2@YAPEAX_K@Z @ 0x180053D70 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>(
        unsigned __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *v4; // r10
  __int64 v6; // rsi
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
  _QWORD *v17; // rcx
  __int64 v18; // rax
  __int64 *v19; // rcx
  __int64 *v20; // rdx
  _QWORD *v21; // rsi
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  void *v25; // rax
  unsigned __int64 v26; // r9
  __int64 v27; // rax
  unsigned __int64 v28; // rcx
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  _QWORD *v32; // r13
  _QWORD *v33; // [rsp+20h] [rbp-48h]
  unsigned __int64 v34; // [rsp+70h] [rbp+8h]

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
  v34 = v11;
  v12 = 8 * v11;
  v13 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
  {
    v23 = -1LL;
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
        v4 = a2;
      }
      else
      {
        v15 = 0LL;
      }
      goto LABEL_9;
    }
    v23 = -1LL;
  }
  v24 = v13 + 39;
  if ( v13 + 39 >= v13 )
    goto LABEL_18;
  while ( 1 )
  {
    v24 = v23;
LABEL_18:
    v25 = operator new(v24);
    if ( v25 )
      break;
    v23 = _o__invalid_parameter_noinfo_noreturn();
  }
  v15 = ((unsigned __int64)v25 + 39) & 0xFFFFFFFFFFFFFFE0uLL;
  *(_QWORD *)(v15 - 8) = v25;
  v4 = a2;
LABEL_9:
  v16 = 8 * v6;
  v17 = (_QWORD *)(8 * v6 + v15);
  v33 = v17 + 1;
  v18 = *a3;
  *a3 = 0LL;
  *v17 = v18;
  v19 = (__int64 *)a1[1];
  v20 = (__int64 *)*a1;
  if ( v4 == v19 )
  {
    if ( v20 != v19 )
    {
      try
      {
        v26 = v15 - (_QWORD)v20;
        do
        {
          v27 = *v20;
          *v20 = 0LL;
          *(__int64 *)((char *)v20++ + v26) = v27;
        }
        while ( v20 != v19 );
      }
      catch ( ... )
      {
        std::vector<wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>>::_Destroy(v19, 8 * v6 + v15, v33);
        std::_Deallocate<16,0>(v15, 8 * v34);
        throw;
      }
    }
  }
  else
  {
    if ( v20 != v4 )
    {
      v28 = v15 - (_QWORD)v20;
      do
      {
        v29 = *v20;
        *v20 = 0LL;
        *(__int64 *)((char *)v20++ + v28) = v29;
      }
      while ( v20 != v4 );
      v19 = (__int64 *)a1[1];
    }
    if ( v4 != v19 )
    {
      v30 = v15 + v16 - (_QWORD)v4;
      do
      {
        v31 = *v4;
        *v4 = 0LL;
        *(__int64 *)((char *)v4++ + v30 + 8) = v31;
      }
      while ( v4 != v19 );
    }
  }
  v21 = (_QWORD *)*a1;
  if ( *a1 )
  {
    v32 = (_QWORD *)a1[1];
    if ( v21 != v32 )
    {
      do
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v21++);
      while ( v21 != v32 );
      v21 = (_QWORD *)*a1;
    }
    std::_Deallocate<16,0>(v21, (a1[2] - (_QWORD)v21) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *a1 = v15;
  a1[1] = v15 + 8 * v8;
  a1[2] = v12 + v15;
  return v16 + *a1;
}
