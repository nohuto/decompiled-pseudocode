/*
 * XREFs of ?RemoveReaderFromReadyList@DataProviderManager@@QEAAXPEAVCDataSourceReader@@@Z @ 0x1801899B4
 * Callers:
 *     ??_ECDataSourceReader@@UEAAPEAXI@Z @ 0x1801CDF10 (--_ECDataSourceReader@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1800EA134 (-_Tidy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@QEAVCInte.c)
 *     memmove_0 @ 0x1800EC557 (memmove_0.c)
 *     ?_Reallocate_exactly@?$vector@PEAVCParticleAttractor@@V?$allocator@PEAVCParticleAttractor@@@std@@@std@@AEAAX_K@Z @ 0x180162FCC (-_Reallocate_exactly@-$vector@PEAVCParticleAttractor@@V-$allocator@PEAVCParticleAttractor@@@std@.c)
 */

void __fastcall DataProviderManager::RemoveReaderFromReadyList(DataProviderManager *this, struct CDataSourceReader *a2)
{
  unsigned __int64 v2; // rax
  _QWORD *v3; // rbx
  struct CDataSourceReader **i; // rcx
  __int64 v7; // r8
  struct CDataSourceReader **v8; // rdx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx

  v2 = *((_QWORD *)this + 14);
  v3 = (_QWORD *)((char *)this + 104);
  for ( i = (struct CDataSourceReader **)*((_QWORD *)this + 13); i != (struct CDataSourceReader **)v2 && *i != a2; ++i )
    ;
  if ( i != (struct CDataSourceReader **)v2 )
  {
    v7 = 0LL;
    v8 = i + 1;
    v9 = (v2 - (unsigned __int64)(i + 1) + 7) >> 3;
    if ( (unsigned __int64)(i + 1) > v2 )
      v9 = 0LL;
    if ( v9 )
    {
      do
      {
        if ( *v8 != a2 )
          *i++ = *v8;
        ++v8;
        ++v7;
      }
      while ( v7 != v9 );
    }
  }
  memmove_0(i, i + 1, *((_QWORD *)this + 14) - (_QWORD)(i + 1));
  *((_QWORD *)this + 14) -= 8LL;
  if ( v3[2] != *((_QWORD *)this + 14) )
  {
    v10 = v3[1];
    if ( *v3 == v10 )
      std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>>>>::_Tidy((__int64)v3);
    else
      std::vector<CParticleAttractor *>::_Reallocate_exactly((__int64)v3, (v10 - *v3) >> 3);
  }
}
