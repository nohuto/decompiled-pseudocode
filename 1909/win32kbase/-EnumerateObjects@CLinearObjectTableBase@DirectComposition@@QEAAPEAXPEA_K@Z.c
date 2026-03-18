/*
 * XREFs of ?EnumerateObjects@CLinearObjectTableBase@DirectComposition@@QEAAPEAXPEA_K@Z @ 0x1C007EBB8
 * Callers:
 *     ?Connect@CConnection@DirectComposition@@QEAAJPEAX@Z @ 0x1C006CB74 (-Connect@CConnection@DirectComposition@@QEAAJPEAX@Z.c)
 *     ?CompleteReconnection@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C006D3B0 (-CompleteReconnection@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C006D6C8 (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ?CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z @ 0x1C006D990 (-CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z.c)
 *     ?ReleaseAllResources@CApplicationChannel@DirectComposition@@QEAAXPEA_N@Z @ 0x1C006DF50 (-ReleaseAllResources@CApplicationChannel@DirectComposition@@QEAAXPEA_N@Z.c)
 * Callees:
 *     <none>
 */

void *__fastcall DirectComposition::CLinearObjectTableBase::EnumerateObjects(
        DirectComposition::CLinearObjectTableBase *this,
        unsigned __int64 *a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // rcx

  v2 = *a2;
  v4 = *((_QWORD *)this + 3);
  if ( *a2 >= v4 )
    return 0LL;
  v5 = (_QWORD *)(*(_QWORD *)this + v2 * *((_QWORD *)this + 4));
  do
  {
    if ( *v5 )
      break;
    ++v2;
    v5 = (_QWORD *)((char *)v5 + *((_QWORD *)this + 4));
  }
  while ( v2 < v4 );
  if ( v2 >= v4 )
    return 0LL;
  v6 = *((_QWORD *)this + 4);
  *a2 = v2 + 1;
  return *(void **)(v2 * v6 + *(_QWORD *)this);
}
