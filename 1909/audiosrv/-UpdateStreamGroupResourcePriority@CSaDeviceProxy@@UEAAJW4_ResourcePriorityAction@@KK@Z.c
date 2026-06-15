/*
 * XREFs of ?UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x18003B030
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z @ 0x18003B180 (-AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@@Z @ 0x18003B250 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKK@std@@@std@@@std@@QEAAPEAU-$_Tree_node.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800652C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800BB2A0 (--1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall CSaDeviceProxy::UpdateStreamGroupResourcePriority(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v4; // rbx
  char v9; // si
  __int64 *v10; // rcx
  __int64 *v11; // rdx
  __int64 *v12; // rax
  __int64 *v14; // rax
  __int64 *i; // r8
  void *v16; // rax
  int v17; // eax
  unsigned int v18; // edi
  int v19; // ecx
  int v20; // eax
  unsigned int v21; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v24; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 48);
  v9 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)v4);
  v24 = v4;
  if ( a2 - 1 <= 1 )
  {
    v10 = *(__int64 **)(v4 + 40);
    v11 = v10;
    v12 = (__int64 *)v10[1];
    if ( *((_BYTE *)v12 + 25) )
      goto LABEL_21;
    do
    {
      if ( *((_DWORD *)v12 + 7) < a4 )
      {
        v12 = (__int64 *)v12[2];
      }
      else
      {
        v11 = v12;
        v12 = (__int64 *)*v12;
      }
    }
    while ( !*((_BYTE *)v12 + 25) );
    if ( v11 == v10 || a4 < *((_DWORD *)v11 + 7) )
LABEL_21:
      v11 = *(__int64 **)(v4 + 40);
    if ( (*((_DWORD *)v11 + 8))-- == 1 )
    {
      v14 = v11;
      if ( *(_BYTE *)(v11[2] + 25) )
      {
        for ( i = (__int64 *)v11[1]; !*((_BYTE *)i + 25); i = (__int64 *)i[1] )
        {
          if ( v14 != (__int64 *)i[2] )
            break;
          v14 = i;
        }
      }
      v16 = (void *)std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,unsigned long>>>::_Extract(v4 + 40);
      operator delete(v16, (const struct std::nothrow_t *)0x28);
    }
  }
  if ( a2 <= 1
    && (v17 = CResourcePriorityTracker::AddResourcePriorityToMap((CResourcePriorityTracker *)v4, a3), v18 = v17, v17 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x56,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v17);
    Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)&v24);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x862,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)v18);
    return v18;
  }
  else
  {
    if ( *(_QWORD *)(v4 + 48) )
    {
      v9 = 0;
      v19 = *(_DWORD *)(**(_QWORD **)(v4 + 40) + 28LL);
      if ( v19 != *(_DWORD *)(v4 + 56) )
      {
        v9 = 1;
        *(_DWORD *)(v4 + 56) = v19;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)v4);
    if ( v9
      && (v20 = (*(__int64 (__fastcall **)(struct IAudioResourceManager *, _QWORD, __int64))(*(_QWORD *)g_AudioResourceManager
                                                                                           + 48LL))(
                  g_AudioResourceManager,
                  *(unsigned int *)(*(_QWORD *)(a1 + 48) + 56LL),
                  a1 + 56),
          v21 = v20,
          v20 < 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x867,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v20);
      return v21;
    }
    else
    {
      return 0LL;
    }
  }
}
