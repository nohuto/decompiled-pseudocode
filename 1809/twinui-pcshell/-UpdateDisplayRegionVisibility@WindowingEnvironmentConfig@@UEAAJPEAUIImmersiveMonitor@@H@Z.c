/*
 * XREFs of ?UpdateDisplayRegionVisibility@WindowingEnvironmentConfig@@UEAAJPEAUIImmersiveMonitor@@H@Z @ 0x180258AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_83f724922fe841c2aa34b3f6c33178ad___ @ 0x18025672C (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_83f724922fe841c2aa34b3f6c33178ad.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@KUDisplayRegionInfo@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@std@@@std@@@2@AEBK@Z @ 0x180258EF4 (-find@-$_Tree@V-$_Tmap_traits@KUDisplayRegionInfo@@U-$less@K@std@@V-$allocator@U-$pair@$$CBKUDis.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowingEnvironmentConfig::UpdateDisplayRegionVisibility(
        WindowingEnvironmentConfig *this,
        struct IImmersiveMonitor *a2,
        int a3)
{
  __int64 v5; // rcx
  int v6; // eax
  const char *v7; // r9
  __int64 v8; // rax
  DWORD CurrentThreadId; // eax
  unsigned int v10; // ecx
  int v11; // eax
  __int64 result; // rax
  __int64 v13; // [rsp+20h] [rbp-48h] BYREF
  PSRWLOCK SRWLock; // [rsp+28h] [rbp-40h]
  __int64 v15; // [rsp+30h] [rbp-38h]
  __int128 v16; // [rsp+38h] [rbp-30h] BYREF
  int *v17; // [rsp+48h] [rbp-20h]
  int *v18; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v20; // [rsp+70h] [rbp+8h] BYREF
  int v21; // [rsp+80h] [rbp+18h] BYREF
  int v22; // [rsp+88h] [rbp+20h] BYREF

  v21 = a3;
  v15 = -2LL;
  v5 = *((_QWORD *)this + 6);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 48LL))(v5);
    v22 = 0;
    v6 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, int *))(*(_QWORD *)a2 + 24LL))(a2, &v22);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        260LL,
        (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v6);
    std::_Tree<std::_Tmap_traits<unsigned long,DisplayRegionInfo,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,DisplayRegionInfo>>,0>>::find(
      (char *)this + 72,
      &v13,
      &v22);
    v8 = v13;
    if ( v13 == *((_QWORD *)this + 9) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        263LL,
        (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)0x80070057LL);
    LOBYTE(v20) = v21 != 0;
    if ( (v21 != 0) != *(_BYTE *)(v8 + 56) )
    {
      *(_QWORD *)&v16 = (char *)this - 32;
      *((_QWORD *)&v16 + 1) = &v13;
      v17 = &v20;
      v18 = &v21;
      CurrentThreadId = GetCurrentThreadId();
      v11 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_83f724922fe841c2aa34b3f6c33178ad___(
              v10,
              CurrentThreadId,
              &v16);
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          288LL,
          (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
          (const char *)(unsigned int)v11);
    }
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x125,
                           (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
                           v7);
  }
  return result;
}
