/*
 * XREFs of ??_GCProcessAttribution@@UEAAPEAXI@Z @ 0x1800C9490
 * Callers:
 *     <none>
 * Callees:
 *     ??$lower_bound@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAURecord@CProcessAttributionManager@@@std@@@std@@@std@@_KP6A_NPEBUProcessAttributionRecord@CProcessAttributionManager@@_J@Z@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAURecord@CProcessAttributionManager@@@std@@@std@@@0@V10@V10@AEB_KP6A_NPEBUProcessAttributionRecord@CProcessAttributionManager@@_J@Z@Z @ 0x18004D0DC (--$lower_bound@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@PEAURecord@CProcessAttributio.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ??_GRecord@CProcessAttributionManager@@QEAAPEAXI@Z @ 0x1800D719C (--_GRecord@CProcessAttributionManager@@QEAAPEAXI@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     memmove_0 @ 0x1800F0217 (memmove_0.c)
 */

CProcessAttribution *__fastcall CProcessAttribution::`scalar deleting destructor'(CProcessAttribution *this, char a2)
{
  CProcessAttributionManager *v2; // rsi
  unsigned int v5; // edx
  char *v6; // rbx
  __int64 v7; // rcx
  int v8; // eax
  void *v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = lpMem;
  *(_QWORD *)this = &CProcessAttribution::`vftable';
  std::lower_bound<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CProcessAttributionManager::Record *>>>,unsigned __int64,bool (*)(CProcessAttributionManager::ProcessAttributionRecord const *,__int64)>(
    (const struct CProcessAttributionManager::ProcessAttributionRecord ***)&v10,
    *(const struct CProcessAttributionManager::ProcessAttributionRecord ***)v2,
    *((_QWORD *)v2 + 1),
    (__int64 *)this + 2);
  v6 = (char *)v10;
  v7 = *(_QWORD *)v10;
  if ( *(_DWORD *)(*(_QWORD *)v10 + 160LL) )
  {
    *(_OWORD *)(v7 + 8) = *(_OWORD *)((char *)this + 24);
    v8 = *((_DWORD *)this + 10);
    *(_QWORD *)(v7 + 112) = 0LL;
    *(_DWORD *)(v7 + 24) = v8;
  }
  else
  {
    CProcessAttributionManager::Record::`scalar deleting destructor'((CProcessAttributionManager::Record *)v7, v5);
    memmove_0(v6, v6 + 8, *((_QWORD *)v2 + 1) - (_QWORD)(v6 + 8));
    *((_QWORD *)v2 + 1) -= 8LL;
  }
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
