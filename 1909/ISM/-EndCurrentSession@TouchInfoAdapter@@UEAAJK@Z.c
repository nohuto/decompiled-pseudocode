/*
 * XREFs of ?EndCurrentSession@TouchInfoAdapter@@UEAAJK@Z @ 0x180141D70
 * Callers:
 *     <none>
 * Callees:
 *     ?clear@?$list@IV?$allocator@I@std@@@std@@QEAAXXZ @ 0x1800344C0 (-clear@-$list@IV-$allocator@I@std@@@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@PEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@V?$_Uhash_compare@PEAUIDCompInputTarget@@UDCompTargetHash@@UDCompTargetEqual@@@3@V?$allocator@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x18006D724 (-_Init@-$_Hash@V-$_Umap_traits@PEAUIDCompInputTarget@@V-$vector@KV-$allocator@K@std@@@std@@V-$_U.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchInfoAdapter::EndCurrentSession(TouchInfoAdapter *this)
{
  char *v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rcx

  v2 = (char *)this + 112;
  *((_WORD *)this + 57) |= 4u;
  v3 = 0LL;
  if ( *((_BYTE *)this + 135) )
  {
    do
    {
      v4 = 56LL * (unsigned int)v3;
      if ( (v2[v4 + 26] & 3) != 0 )
        *(_WORD *)&v2[v4 + 26] = 4;
      else
        *(_WORD *)&v2[v4 + 26] = 0;
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < (unsigned __int8)v2[23] );
  }
  (*(void (__fastcall **)(_QWORD, char *, __int64))(**((_QWORD **)this + 3) + 24LL))(*((_QWORD *)this + 3), v2, v3);
  *((_BYTE *)this + 696) = 0;
  ++*((_DWORD *)this + 26);
  *((_WORD *)this + 54) = 0;
  std::list<unsigned int>::clear((__int64)this + 48);
  std::_Hash<std::_Umap_traits<IDCompInputTarget *,std::vector<unsigned long>,std::_Uhash_compare<IDCompInputTarget *,DCompTargetHash,DCompTargetEqual>,std::allocator<std::pair<IDCompInputTarget * const,std::vector<unsigned long>>>,0>>::_Init(
    (_QWORD *)this + 5,
    8LL);
  return 0LL;
}
