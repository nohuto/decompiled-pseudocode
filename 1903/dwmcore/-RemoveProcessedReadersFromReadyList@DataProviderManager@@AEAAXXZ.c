/*
 * XREFs of ?RemoveProcessedReadersFromReadyList@DataProviderManager@@AEAAXXZ @ 0x1800E40E8
 * Callers:
 *     ?RegisterDataProvider@DataProviderManager@@QEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataProviderProxy@@@Z @ 0x1800E3FEC (-RegisterDataProvider@DataProviderManager@@QEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataP.c)
 *     ?CheckAndRegisterReadyReaders@DataProviderManager@@QEAAXPEAVBamoDataProviderProxy@@PEAVBamoDataSourceProxy@@@Z @ 0x1801896D4 (-CheckAndRegisterReadyReaders@DataProviderManager@@QEAAXPEAVBamoDataProviderProxy@@PEAVBamoDataS.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1800EA134 (-_Tidy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@QEAVCInte.c)
 *     memmove_0 @ 0x1800EC557 (memmove_0.c)
 *     ?_Reallocate_exactly@?$vector@PEAVCParticleAttractor@@V?$allocator@PEAVCParticleAttractor@@@std@@@std@@AEAAX_K@Z @ 0x180162FCC (-_Reallocate_exactly@-$vector@PEAVCParticleAttractor@@V-$allocator@PEAVCParticleAttractor@@@std@.c)
 */

void __fastcall DataProviderManager::RemoveProcessedReadersFromReadyList(DataProviderManager *this)
{
  char *v1; // rdx
  _QWORD *v2; // rsi
  char *i; // rdi
  __int64 v5; // rdx
  __int64 v6; // rax
  char *v7; // rcx
  unsigned __int64 v8; // r8
  size_t v9; // rbx

  v1 = (char *)*((_QWORD *)this + 14);
  v2 = (_QWORD *)((char *)this + 104);
  for ( i = (char *)*((_QWORD *)this + 13); i != v1 && (*(_BYTE *)(*(_QWORD *)i + 72LL) & 2) != 0; i += 8 )
    ;
  if ( i != v1 )
  {
    v6 = 0LL;
    v7 = i + 8;
    v8 = (unsigned __int64)(v1 - (i + 8) + 7) >> 3;
    if ( i + 8 > v1 )
      v8 = 0LL;
    if ( v8 )
    {
      do
      {
        if ( (*(_BYTE *)(*(_QWORD *)v7 + 72LL) & 2) != 0 )
        {
          *(_QWORD *)i = *(_QWORD *)v7;
          i += 8;
        }
        v7 += 8;
        ++v6;
      }
      while ( v6 != v8 );
    }
    if ( i != v1 )
    {
      v9 = *((_QWORD *)this + 14) - (_QWORD)v1;
      memmove_0(i, v1, v9);
      *((_QWORD *)this + 14) = &i[v9];
    }
  }
  v5 = v2[1];
  if ( v2[2] != v5 )
  {
    if ( *v2 == v5 )
      std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>>>>::_Tidy(v2);
    else
      std::vector<CParticleAttractor *>::_Reallocate_exactly(v2, (v5 - *v2) >> 3);
  }
}
