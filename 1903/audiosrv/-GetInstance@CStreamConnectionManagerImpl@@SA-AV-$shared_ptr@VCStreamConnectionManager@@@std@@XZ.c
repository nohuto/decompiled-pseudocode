/*
 * XREFs of ?GetInstance@CStreamConnectionManagerImpl@@SA?AV?$shared_ptr@VCStreamConnectionManager@@@std@@XZ @ 0x18005C5CC
 * Callers:
 *     ?EndInitialization@CAudioSrv@@UEAAJJ@Z @ 0x18005AF60 (-EndInitialization@CAudioSrv@@UEAAJJ@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003EA64 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180053D70 (--2@YAPEAX_K@Z.c)
 *     ??$?0$$V@?$_Ref_count_obj@VCStreamConnectionManagerImpl@@@std@@QEAA@XZ @ 0x18005D87C (--$-0$$V@-$_Ref_count_obj@VCStreamConnectionManagerImpl@@@std@@QEAA@XZ.c)
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x18005DA28 (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1800632A0 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
std::_Ref_count_base **__fastcall CStreamConnectionManagerImpl::GetInstance(std::_Ref_count_base **a1)
{
  __int64 v2; // rdx
  std::_Ref_count_base *v3; // rsi
  LPVOID v4; // rax
  unsigned int v5; // edx
  unsigned __int64 v6; // r8
  const unsigned int *v7; // r9
  __int64 v8; // rdi
  CMonitorManager *v9; // rcx
  std::_Ref_count_base *v10; // rcx
  std::_Ref_count_base *v11; // rbx
  std::_Ref_count_base *v12; // rcx
  signed __int32 v14; // eax
  std::_Ref_count_base *v15[2]; // [rsp+28h] [rbp-28h]

  AcquireSRWLockExclusive(&CStreamConnectionManagerImpl::s_instanceLock);
  *(_OWORD *)v15 = 0LL;
  v2 = *((_QWORD *)&CStreamConnectionManagerImpl::s_weakSelf + 1);
  if ( *((_QWORD *)&CStreamConnectionManagerImpl::s_weakSelf + 1) )
  {
    while ( 1 )
    {
      v14 = *(_DWORD *)(v2 + 8);
      if ( !v14 )
        break;
      if ( v14 == _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 8), v14 + 1, v14) )
      {
        *(_OWORD *)v15 = CStreamConnectionManagerImpl::s_weakSelf;
        break;
      }
    }
  }
  v3 = v15[0];
  if ( v15[0] )
  {
    v11 = v15[1];
  }
  else
  {
    v4 = operator new(0x20uLL);
    if ( v4 )
      v8 = std::_Ref_count_obj<CStreamConnectionManagerImpl>::_Ref_count_obj<CStreamConnectionManagerImpl>(v4);
    else
      v8 = 0LL;
    v9 = *(CMonitorManager **)(v8 + 24);
    if ( v9 && (int)CMonitorManager::Initialize(v9, v5, v6, v7) >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
      v3 = (std::_Ref_count_base *)(v8 + 16);
      v15[0] = (std::_Ref_count_base *)(v8 + 16);
      v10 = v15[1];
      v11 = (std::_Ref_count_base *)v8;
      v15[1] = (std::_Ref_count_base *)v8;
      if ( v10 )
        std::_Ref_count_base::_Decref(v10);
    }
    else
    {
      v11 = v15[1];
    }
    if ( v11 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v11 + 3);
      v11 = v15[1];
      v3 = v15[0];
    }
    *(_QWORD *)&CStreamConnectionManagerImpl::s_weakSelf = v3;
    v12 = (std::_Ref_count_base *)*((_QWORD *)&CStreamConnectionManagerImpl::s_weakSelf + 1);
    *((_QWORD *)&CStreamConnectionManagerImpl::s_weakSelf + 1) = v11;
    if ( v12 )
      std::_Ref_count_base::_Decwref(v12);
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v8);
  }
  *a1 = v3;
  a1[1] = v11;
  ReleaseSRWLockExclusive(&CStreamConnectionManagerImpl::s_instanceLock);
  return a1;
}
