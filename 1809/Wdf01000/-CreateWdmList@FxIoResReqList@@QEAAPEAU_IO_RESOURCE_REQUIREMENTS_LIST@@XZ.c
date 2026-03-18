/*
 * XREFs of ?CreateWdmList@FxIoResReqList@@QEAAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@XZ @ 0x1C00636C0
 * Callers:
 *     ?PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C008D02C (-PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C008EA78 (-PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     memset @ 0x1C001C1C0 (memset.c)
 *     WPP_IFR_SF_ @ 0x1C00343B4 (WPP_IFR_SF_.c)
 */

_IO_RESOURCE_REQUIREMENTS_LIST *__fastcall FxIoResReqList::CreateWdmList(FxIoResReqList *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  FxCollectionInternal *v2; // r14
  __int64 m_Count; // r10
  unsigned int v4; // r11d
  unsigned int *v5; // rdi
  _LIST_ENTRY *i; // r9
  unsigned int v8; // r8d
  int v9; // eax
  unsigned int v10; // edx
  _LIST_ENTRY **p_Blink; // r9
  unsigned __int64 v12; // rax
  unsigned int v13; // ecx
  unsigned __int64 v14; // rax
  unsigned int v15; // eax
  unsigned int v16; // ebx
  unsigned int v17; // edx
  unsigned int v18; // ecx
  unsigned int v19; // ebx
  _DWORD *PoolWithTag; // rax
  char *v21; // rsi
  _LIST_ENTRY *j; // rdx
  _LIST_ENTRY *v23; // rcx
  _LIST_ENTRY *Flink; // r8
  _LIST_ENTRY *v25; // rax
  _LIST_ENTRY **v26; // r8
  _LIST_ENTRY **v27; // rdx

  m_Globals = this->m_Globals;
  v2 = &this->FxCollectionInternal;
  m_Count = this->m_Count;
  v4 = 0;
  v5 = 0LL;
  if ( (_DWORD)m_Count )
  {
    for ( i = this->m_ListHead.Flink; ; i = p_Blink[1] )
    {
      p_Blink = &i[-1].Blink;
      if ( p_Blink == (_LIST_ENTRY **)v2 )
        break;
      v8 = v4;
      v9 = -1;
      v10 = v4 + LODWORD((*p_Blink)[7].Blink);
      if ( v10 >= v4 )
        v9 = v4 + LODWORD((*p_Blink)[7].Blink);
      v4 = v9;
      if ( v10 < v8 )
        goto $Overflow;
    }
    v12 = 40LL * (unsigned int)(m_Count - 1);
    if ( v12 > 0xFFFFFFFF )
      goto $Overflow;
    if ( (unsigned int)(v12 + 72) < 0x48 )
      goto $Overflow;
    v13 = v12 + 72;
    v14 = 32LL * v4;
    if ( v14 > 0xFFFFFFFF )
      goto $Overflow;
    v15 = v14 + v13;
    v16 = -1;
    if ( 32 * v4 + v13 >= v13 )
      v16 = 32 * v4 + v13;
    if ( (v17 = v16, v15 < v13)
      || (unsigned __int64)(32 * m_Count) > 0xFFFFFFFF
      || ((v18 = 32 * m_Count, v16 < 32 * (int)m_Count) ? (v19 = -1) : (v19 = v16 - v18), v17 < v18) )
    {
$Overflow:
      WPP_IFR_SF_(m_Globals, 2u, 0xCu, 0xCu, WPP_FxResourceCollection_cpp_Traceguids);
      return 0LL;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v19, m_Globals->Tag);
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      v21 = (char *)(PoolWithTag + 8);
      memset(PoolWithTag, 0, v19);
      v5[1] = this->m_InterfaceType;
      v5[3] = this->m_SlotNumber;
      *v5 = v19;
      v5[7] = v2->m_Count;
      for ( j = this->m_ListHead.Flink; ; j = v27[1] )
      {
        v27 = &j[-1].Blink;
        if ( v27 == (_LIST_ENTRY **)v2 )
          break;
        v23 = *v27;
        *(_DWORD *)v21 = 65537;
        *((_DWORD *)v21 + 1) = v23[7].Blink;
        v21 += 8;
        Flink = v23[8].Flink;
        while ( 1 )
        {
          v26 = &Flink[-1].Blink;
          if ( v26 == &v23[7].Blink )
            break;
          v25 = *v26;
          *(_LIST_ENTRY *)v21 = *(_LIST_ENTRY *)((char *)*v26 + 104);
          *((_LIST_ENTRY *)v21 + 1) = *(_LIST_ENTRY *)((char *)v25 + 120);
          Flink = v26[1];
          v21 += 32;
        }
      }
    }
  }
  return (_IO_RESOURCE_REQUIREMENTS_LIST *)v5;
}
