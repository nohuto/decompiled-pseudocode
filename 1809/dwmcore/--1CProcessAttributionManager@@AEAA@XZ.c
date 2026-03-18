/*
 * XREFs of ??1CProcessAttributionManager@@AEAA@XZ @ 0x180147D60
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x180060FBC (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CProcessAttributionManager::~CProcessAttributionManager(void ***this)
{
  void **v1; // rsi
  __int64 v3; // rbp
  unsigned __int64 v4; // rdi
  void **v5; // rcx

  v1 = *this;
  v3 = 0LL;
  v4 = (unsigned __int64)((char *)this[1] - (char *)*this + 7) >> 3;
  if ( *this > this[1] )
    v4 = 0LL;
  if ( v4 )
  {
    do
    {
      operator delete(*v1);
      ++v3;
      ++v1;
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
