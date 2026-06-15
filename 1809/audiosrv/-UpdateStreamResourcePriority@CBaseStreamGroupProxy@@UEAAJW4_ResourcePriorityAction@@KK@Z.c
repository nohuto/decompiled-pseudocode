/*
 * XREFs of ?UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x180009E60
 * Callers:
 *     <none>
 * Callees:
 *     ?AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z @ 0x18000A120 (-AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z.c)
 *     ?_Extract@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@@Z @ 0x18000A1F0 (-_Extract@-$_Tree@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@@@2@$0A@@std@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180060C94 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800BBCA8 (--1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall CBaseStreamGroupProxy::UpdateStreamResourcePriority(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v4; // rbx
  char v9; // si
  unsigned int v10; // r12d
  __int64 *v11; // rcx
  __int64 *v12; // rdx
  __int64 *v13; // rax
  __int64 *v15; // rax
  __int64 *i; // r8
  void *v17; // rax
  int v18; // eax
  unsigned int v19; // edi
  int v20; // ecx
  unsigned int v21; // ebx
  unsigned int v22; // esi
  __int64 v23; // rcx
  int v25; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v27; // [rsp+60h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 72);
  v9 = 0;
  v10 = *(_DWORD *)(v4 + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)v4);
  v27 = v4;
  if ( a2 - 1 <= 1 )
  {
    v11 = *(__int64 **)(v4 + 40);
    v12 = v11;
    v13 = (__int64 *)v11[1];
    if ( *((_BYTE *)v13 + 25) )
      goto LABEL_25;
    do
    {
      if ( *((_DWORD *)v13 + 7) < a4 )
      {
        v13 = (__int64 *)v13[2];
      }
      else
      {
        v12 = v13;
        v13 = (__int64 *)*v13;
      }
    }
    while ( !*((_BYTE *)v13 + 25) );
    if ( v12 == v11 || a4 < *((_DWORD *)v12 + 7) )
LABEL_25:
      v12 = *(__int64 **)(v4 + 40);
    if ( (*((_DWORD *)v12 + 8))-- == 1 )
    {
      v15 = v12;
      if ( !*((_BYTE *)v12 + 25) )
      {
        if ( *(_BYTE *)(v12[2] + 25) )
        {
          for ( i = (__int64 *)v12[1]; !*((_BYTE *)i + 25); i = (__int64 *)i[1] )
          {
            if ( v15 != (__int64 *)i[2] )
              break;
            v15 = i;
          }
        }
      }
      v17 = (void *)std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Extract(v4 + 40);
      operator delete(v17, (const struct std::nothrow_t *)0x28);
    }
  }
  if ( a2 <= 1
    && (v18 = CResourcePriorityTracker::AddResourcePriorityToMap((CResourcePriorityTracker *)v4, a3), v19 = v18, v18 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x56,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v18,
      v25);
    Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)&v27);
    return v19;
  }
  else
  {
    if ( *(_QWORD *)(v4 + 48) )
    {
      v9 = 0;
      v20 = *(_DWORD *)(**(_QWORD **)(v4 + 40) + 28LL);
      if ( v20 != *(_DWORD *)(v4 + 56) )
      {
        v9 = 1;
        *(_DWORD *)(v4 + 56) = v20;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)v4);
    v21 = 0;
    if ( v9 )
    {
      v22 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 56LL);
      EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 96));
      v23 = *(_QWORD *)(a1 + 88);
      if ( v23 )
        v21 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v23 + 72LL))(v23, 1LL, v22, v10);
      if ( a1 != -96 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 96));
    }
    return v21;
  }
}
