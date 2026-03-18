/*
 * XREFs of ?ReservePools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_K@Z @ 0x1C005C598
 * Callers:
 *     ?Connect@CConnection@DirectComposition@@QEAAJPEAX@Z @ 0x1C005849C (-Connect@CConnection@DirectComposition@@QEAAJPEAX@Z.c)
 *     ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1C005BCE4 (-Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z.c)
 * Callees:
 *     ?Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12@@Z @ 0x1C005C610 (-Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12.c)
 */

__int64 __fastcall DirectComposition::CBatchSharedMemoryPoolSet::ReservePools(
        DirectComposition::CBatchSharedMemoryPoolSet *this,
        unsigned __int64 a2)
{
  int v2; // r8d
  unsigned int v4; // edi
  __int64 v6; // rax
  struct DirectComposition::CBatchSharedMemoryPool *v7; // rcx
  struct DirectComposition::CBatchSharedMemoryPool *v9; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v4 = 0;
  do
  {
    if ( v4 >= a2 )
      break;
    v2 = DirectComposition::CBatchSharedMemoryPool::Create(this, *((_BYTE *)this + 24), &v9);
    if ( v2 >= 0 )
    {
      v6 = *(_QWORD *)this;
      if ( *(DirectComposition::CBatchSharedMemoryPoolSet **)(*(_QWORD *)this + 8LL) != this )
        __fastfail(3u);
      v7 = v9;
      *(_QWORD *)v9 = v6;
      *((_QWORD *)v7 + 1) = this;
      *(_QWORD *)(v6 + 8) = v7;
      *(_QWORD *)this = v7;
    }
    ++v4;
  }
  while ( v2 >= 0 );
  return (unsigned int)v2;
}
