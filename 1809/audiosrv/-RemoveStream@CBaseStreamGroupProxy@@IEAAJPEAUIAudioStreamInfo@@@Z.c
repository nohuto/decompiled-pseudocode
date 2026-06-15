/*
 * XREFs of ?RemoveStream@CBaseStreamGroupProxy@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800E532C
 * Callers:
 *     ?DestroyStream@CExclusiveStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800E3640 (-DestroyStream@CExclusiveStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?DestroyStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800E3720 (-DestroyStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?erase@?$vector@PEAUIAudioStreamInfo@@V?$allocator@PEAUIAudioStreamInfo@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAUIAudioStreamInfo@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAUIAudioStreamInfo@@@std@@@std@@@2@0@Z @ 0x1800E6650 (-erase@-$vector@PEAUIAudioStreamInfo@@V-$allocator@PEAUIAudioStreamInfo@@@std@@@std@@QEAA-AV-$_V.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CBaseStreamGroupProxy::RemoveStream(CBaseStreamGroupProxy *this, struct IAudioStreamInfo *a2)
{
  unsigned int v4; // ebp
  struct IAudioStreamInfo **v5; // r8
  unsigned __int64 v6; // rcx
  struct IAudioStreamInfo **v7; // rdx
  __int64 v8; // r9
  unsigned __int64 v9; // rax
  __int64 v11[3]; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v12[8]; // [rsp+48h] [rbp-90h] BYREF
  _BYTE v13[96]; // [rsp+50h] [rbp-88h] BYREF

  v11[1] = -2LL;
  v11[0] = 0LL;
  (*(void (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(*(_QWORD *)a2 + 120LL))(a2, v11);
  v4 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 72LL))(a2);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 152));
  v11[2] = (__int64)this + 152;
  v5 = (struct IAudioStreamInfo **)*((_QWORD *)this + 24);
  v6 = *((_QWORD *)this + 25);
  while ( v5 != (struct IAudioStreamInfo **)v6 && *v5 != a2 )
    ++v5;
  if ( v5 != (struct IAudioStreamInfo **)v6 )
  {
    v7 = v5 + 1;
    v8 = 0LL;
    v9 = (v6 - (unsigned __int64)(v5 + 1) + 7) >> 3;
    if ( (unsigned __int64)(v5 + 1) > v6 )
      v9 = 0LL;
    if ( v9 )
    {
      do
      {
        if ( *v7 != a2 )
          *v5++ = *v7;
        ++v7;
        ++v8;
      }
      while ( v8 != v9 );
    }
  }
  std::vector<IAudioStreamInfo *>::erase((char *)this + 192, v12, v5, *((_QWORD *)this + 25));
  memset_0(v13, 0, sizeof(v13));
  (*(void (__fastcall **)(struct IAudioStreamInfo *, _BYTE *, _QWORD))(*(_QWORD *)a2 + 112LL))(a2, v13, 0LL);
  if ( this != (CBaseStreamGroupProxy *)-152LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 152));
  (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v11[0] + 208LL))(v11[0], 2LL, 0xFFFFFFFFLL, v4);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v11);
  return 0LL;
}
