/*
 * XREFs of ?NotifyNewAudioProtocol@CVolumeProvider@@UEAAXKI@Z @ 0x180012AC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800B3E9C (WPP_SF_d.c)
 *     WPP_SF_qS @ 0x1800B58C4 (WPP_SF_qS.c)
 *     ?erase@?$vector@V?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x1800BBF8C (-erase@-$vector@V-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$co.c)
 */

void __fastcall CVolumeProvider::NotifyNewAudioProtocol(CVolumeProvider *this, unsigned int a2, int a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  CAudioSessionManager *v5; // rax
  _QWORD *v6; // rbp
  char *v7; // r14
  _QWORD *v8; // rdi
  __int64 v9; // rax
  int SessionIdFromEndpointId; // eax
  int v11; // eax
  __int64 v12; // rbx
  __int64 v13; // rax
  char v14; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v15; // [rsp+68h] [rbp+10h]
  int v16; // [rsp+70h] [rbp+18h]

  v16 = a3;
  v15 = a2;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v5 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_9e4157c313e3308fc3b4ddb9ef7ef8fa_Traceguids, v15);
    v5 = WPP_GLOBAL_Control;
  }
  v6 = (_QWORD *)*((_QWORD *)this + 8);
  v7 = (char *)this + 56;
  v8 = (_QWORD *)*((_QWORD *)this + 7);
  if ( v8 != v6 )
  {
    do
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 32LL))(*v8);
      SessionIdFromEndpointId = GetSessionIdFromEndpointId(v9);
      if ( SessionIdFromEndpointId == v15 )
      {
        v11 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 24LL))(*v8);
        if ( v11 != v16 )
          break;
      }
      ++v8;
    }
    while ( v8 != v6 );
    v5 = WPP_GLOBAL_Control;
  }
  if ( v8 != *((_QWORD **)this + 8) )
  {
    if ( v5 != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v5 + 7) & 0x10000) != 0
      && *((_BYTE *)v5 + 25) >= 4u )
    {
      v12 = *v8;
      v13 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 32LL))(*v8);
      WPP_SF_qS(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        13,
        (unsigned int)&WPP_9e4157c313e3308fc3b4ddb9ef7ef8fa_Traceguids,
        v12,
        v13);
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 264LL))(*v8);
    std::vector<wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>>::erase(v7, &v14, v8);
  }
  if ( v3 )
    LeaveCriticalSection(v3);
}
