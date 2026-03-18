/*
 * XREFs of ??1Observer@CProcessAttributionManager@@UEAA@XZ @ 0x18017721C
 * Callers:
 *     ??_EObserver@CProcessAttributionManager@@UEAAPEAXI@Z @ 0x180177310 (--_EObserver@CProcessAttributionManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?NotifyOnDeadObserver@CProcessAttributionManager@@AEAAXPEAVCProcessAttributionObserver@@@Z @ 0x180177358 (-NotifyOnDeadObserver@CProcessAttributionManager@@AEAAXPEAVCProcessAttributionObserver@@@Z.c)
 */

void __fastcall CProcessAttributionManager::Observer::~Observer(CProcessAttributionManager **this)
{
  void **v2; // rdi
  __int64 v3; // rbp
  unsigned __int64 v4; // rsi
  CProcessAttributionManager *v5; // rcx

  *this = (CProcessAttributionManager *)&CProcessAttributionManager::Observer::`vftable';
  CProcessAttributionManager::NotifyOnDeadObserver(this[1], (struct CProcessAttributionObserver *)this);
  v2 = (void **)this[2];
  v3 = 0LL;
  v4 = (unsigned __int64)(this[3] - (CProcessAttributionManager *)v2 + 7) >> 3;
  if ( v2 > (void **)this[3] )
    v4 = 0LL;
  if ( v4 )
  {
    do
    {
      operator delete(*v2);
      ++v3;
      ++v2;
    }
    while ( v3 != v4 );
  }
  v5 = this[2];
  if ( v5 )
  {
    std::_Deallocate<16,0>(v5, (this[4] - v5) & 0xFFFFFFFFFFFFFFF8uLL);
    this[2] = 0LL;
    this[3] = 0LL;
    this[4] = 0LL;
  }
  *this = (CProcessAttributionManager *)&CProcessAttributionObserver::`vftable';
}
