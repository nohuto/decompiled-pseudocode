/*
 * XREFs of ??_GCProcessAttribution@@UEAAPEAXI@Z @ 0x1800C9500
 * Callers:
 *     <none>
 * Callees:
 *     ??$lower_bound@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAURecord@CProcessAttributionManager@@@std@@@std@@@std@@_KP6A_NPEBUProcessAttributionRecord@CProcessAttributionManager@@_J@Z@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAURecord@CProcessAttributionManager@@@std@@@std@@@0@V10@V10@AEB_KP6A_NPEBUProcessAttributionRecord@CProcessAttributionManager@@_J@Z@Z @ 0x180045F3C (--$lower_bound@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@PEAURecord@CProcessAttributio.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ??_GRecord@CProcessAttributionManager@@QEAAPEAXI@Z @ 0x1800A21D0 (--_GRecord@CProcessAttributionManager@@QEAAPEAXI@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     memmove_0 @ 0x1800EC557 (memmove_0.c)
 */

CProcessAttribution *__fastcall CProcessAttribution::`scalar deleting destructor'(CProcessAttribution *this, char a2)
{
  CProcessAttributionManager *v2; // rsi
  char *v5; // rbx
  __int64 v6; // rcx
  int v7; // eax
  void *v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = qword_18033CC50;
  *(_QWORD *)this = &CProcessAttribution::`vftable';
  std::lower_bound<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CProcessAttributionManager::Record *>>>,unsigned __int64,bool (*)(CProcessAttributionManager::ProcessAttributionRecord const *,__int64)>(
    (const struct CProcessAttributionManager::ProcessAttributionRecord ***)&v9,
    *(const struct CProcessAttributionManager::ProcessAttributionRecord ***)v2,
    *((_QWORD *)v2 + 1),
    (__int64 *)this + 2);
  v5 = (char *)v9;
  v6 = *(_QWORD *)v9;
  if ( *(_DWORD *)(*(_QWORD *)v9 + 160LL) )
  {
    *(_OWORD *)(v6 + 8) = *(_OWORD *)((char *)this + 24);
    v7 = *((_DWORD *)this + 10);
    *(_QWORD *)(v6 + 112) = 0LL;
    *(_DWORD *)(v6 + 24) = v7;
  }
  else
  {
    CProcessAttributionManager::Record::`scalar deleting destructor'((CProcessAttributionManager::Record *)v6);
    memmove_0(v5, v5 + 8, *((_QWORD *)v2 + 1) - (_QWORD)(v5 + 8));
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
