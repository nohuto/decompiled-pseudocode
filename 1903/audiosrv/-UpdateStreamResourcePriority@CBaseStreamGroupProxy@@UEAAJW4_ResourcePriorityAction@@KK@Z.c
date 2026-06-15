/*
 * XREFs of ?UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x180032610
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z @ 0x1800328D0 (-AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@@Z @ 0x1800329A0 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKK@std@@@std@@@std@@QEAAPEAU-$_Tree_node.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800642D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800BB7A0 (--1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall CBaseStreamGroupProxy::UpdateStreamResourcePriority(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  __int64 v9; // rbx
  char v10; // bp
  unsigned int v11; // r13d
  __int64 *v12; // rcx
  __int64 *v13; // rdx
  __int64 *v14; // rax
  __int64 *v16; // rax
  __int64 *i; // r8
  void *v18; // rax
  int v19; // eax
  unsigned int v20; // edi
  int v21; // ecx
  __int64 v22; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v25; // [rsp+60h] [rbp+8h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 96));
  v9 = *(_QWORD *)(a1 + 72);
  v10 = 0;
  v11 = *(_DWORD *)(v9 + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)v9);
  v25 = v9;
  if ( a2 - 1 <= 1 )
  {
    v12 = *(__int64 **)(v9 + 40);
    v13 = v12;
    v14 = (__int64 *)v12[1];
    if ( *((_BYTE *)v14 + 25) )
      goto LABEL_24;
    do
    {
      if ( *((_DWORD *)v14 + 7) < a4 )
      {
        v14 = (__int64 *)v14[2];
      }
      else
      {
        v13 = v14;
        v14 = (__int64 *)*v14;
      }
    }
    while ( !*((_BYTE *)v14 + 25) );
    if ( v13 == v12 || a4 < *((_DWORD *)v13 + 7) )
LABEL_24:
      v13 = *(__int64 **)(v9 + 40);
    if ( (*((_DWORD *)v13 + 8))-- == 1 )
    {
      v16 = v13;
      if ( *(_BYTE *)(v13[2] + 25) )
      {
        for ( i = (__int64 *)v13[1]; !*((_BYTE *)i + 25); i = (__int64 *)i[1] )
        {
          if ( v16 != (__int64 *)i[2] )
            break;
          v16 = i;
        }
      }
      v18 = (void *)std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,unsigned long>>>::_Extract(v9 + 40);
      operator delete(v18, (const struct std::nothrow_t *)0x28);
    }
  }
  if ( a2 <= 1
    && (v19 = CResourcePriorityTracker::AddResourcePriorityToMap((CResourcePriorityTracker *)v9, a3), v20 = v19, v19 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x56,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v19);
    Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)&v25);
  }
  else
  {
    if ( *(_QWORD *)(v9 + 48) )
    {
      v10 = 0;
      v21 = *(_DWORD *)(**(_QWORD **)(v9 + 40) + 28LL);
      if ( v21 != *(_DWORD *)(v9 + 56) )
      {
        v10 = 1;
        *(_DWORD *)(v9 + 56) = v21;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)v9);
    v20 = 0;
    if ( v10 )
    {
      v22 = *(_QWORD *)(a1 + 88);
      if ( v22 )
        v20 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v22 + 72LL))(
                v22,
                1LL,
                *(unsigned int *)(*(_QWORD *)(a1 + 72) + 56LL),
                v11);
    }
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return v20;
}
