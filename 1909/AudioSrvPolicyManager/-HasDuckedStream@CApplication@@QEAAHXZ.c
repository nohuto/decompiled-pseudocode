/*
 * XREFs of ?HasDuckedStream@CApplication@@QEAAHXZ @ 0x18000F920
 * Callers:
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCApplication@@@Z @ 0x18001C274 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCAppl.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000D600 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?SubjectToStreamClassPolicyGains@CProcess@@UEAAHXZ @ 0x180013DF0 (-SubjectToStreamClassPolicyGains@CProcess@@UEAAHXZ.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x180017B84 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800359C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::HasDuckedStream(CApplication *this)
{
  unsigned int v2; // r12d
  _QWORD *v3; // rbx
  __int64 v4; // rdi
  int v5; // r13d
  unsigned int v6; // edx
  unsigned int v7; // ecx
  int v8; // ebp
  int v9; // eax
  __int64 v10; // rsi
  _DWORD *v11; // r15
  __int64 v12; // r8
  unsigned int v13; // r14d
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-40h] BYREF
  char v16; // [rsp+50h] [rbp-38h]
  __int64 v17; // [rsp+90h] [rbp+8h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v16 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v2 = 0;
  v3 = (_QWORD *)*((_QWORD *)this + 9);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
        goto LABEL_19;
      v4 = v3[2];
      v3 = (_QWORD *)*v3;
      if ( !*(_DWORD *)(v4 + 448) )
      {
        v5 = 0;
        if ( (unsigned int)CProcess::SubjectToStreamClassPolicyGains((CProcess *)(v4 + 16)) )
        {
          v8 = 0;
          v9 = *(_DWORD *)(v4 + 304);
          if ( v9 > 0 )
            break;
        }
      }
    }
    v10 = 0LL;
    do
    {
      if ( v10 < 0 || v8 >= v9 )
      {
        ATL::_AtlRaiseException(v7, v6);
        JUMPOUT(0x18000FA88LL);
      }
      v11 = *(_DWORD **)(v10 + *(_QWORD *)(v4 + 296));
      v12 = *(_QWORD *)(v10 + *(_QWORD *)(v4 + 288));
      v17 = v12;
      v13 = 0;
      while ( !*v11 )
      {
LABEL_13:
        ++v13;
        ++v11;
        if ( v13 >= 0x15 )
          goto LABEL_16;
      }
      if ( !(*(unsigned int (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _DWORD, bool))(*(_QWORD *)g_StreamClassPolicyManager
                                                                                           + 32LL))(
              g_StreamClassPolicyManager,
              *(unsigned int *)(v4 + 196),
              v12,
              v13,
              0,
              *(_DWORD *)(*(_QWORD *)(v4 + 256) + 208LL) != 0) )
      {
        v12 = v17;
        goto LABEL_13;
      }
      v5 = 1;
LABEL_16:
      ++v8;
      v10 += 8LL;
      v9 = *(_DWORD *)(v4 + 304);
    }
    while ( v8 < v9 );
  }
  while ( !v5 );
  v2 = 1;
LABEL_19:
  if ( v16 )
    LeaveCriticalSection(lpCriticalSection);
  return v2;
}
