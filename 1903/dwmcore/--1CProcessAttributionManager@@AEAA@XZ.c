/*
 * XREFs of ??1CProcessAttributionManager@@AEAA@XZ @ 0x1801788C8
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x1800DE60C (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ??_GRecord@CProcessAttributionManager@@QEAAPEAXI@Z @ 0x1800A21D0 (--_GRecord@CProcessAttributionManager@@QEAAPEAXI@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CProcessAttributionManager::~CProcessAttributionManager(CProcessAttributionManager::Record ***this)
{
  CProcessAttributionManager::Record **v1; // rsi
  __int64 v3; // rbp
  unsigned __int64 v4; // rdi
  CProcessAttributionManager::Record **v5; // rcx

  v1 = *this;
  v3 = 0LL;
  v4 = (unsigned __int64)((char *)this[1] - (char *)*this + 7) >> 3;
  if ( *this > this[1] )
    v4 = 0LL;
  if ( v4 )
  {
    do
    {
      if ( *v1 )
        CProcessAttributionManager::Record::`scalar deleting destructor'(*v1);
      ++v1;
      ++v3;
    }
    while ( v3 != v4 );
  }
  v5 = this[3];
  if ( v5 )
  {
    std::_Deallocate<16,0>(v5, ((char *)this[5] - (char *)v5) & 0xFFFFFFFFFFFFFFF8uLL);
    this[3] = 0LL;
    this[4] = 0LL;
    this[5] = 0LL;
  }
  if ( *this )
  {
    std::_Deallocate<16,0>(*this, ((char *)this[2] - (char *)*this) & 0xFFFFFFFFFFFFFFF8uLL);
    *this = 0LL;
    this[1] = 0LL;
    this[2] = 0LL;
  }
}
