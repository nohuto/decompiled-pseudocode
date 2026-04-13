/*
 * XREFs of ??1PinToStartProperties@Actions@CreativeFramework@@QEAA@XZ @ 0x18008878C
 * Callers:
 *     _CreativeFramework::Actions::MakeAddTileToCollectionService_::_1_::dtor$12 @ 0x1800D2827 (_CreativeFramework--Actions--MakeAddTileToCollectionService_--_1_--dtor$12.c)
 * Callees:
 *     <none>
 */

void __fastcall CreativeFramework::Actions::PinToStartProperties::~PinToStartProperties(void **this)
{
  if ( (unsigned __int64)this[19] >= 8 )
    operator delete(this[16]);
  this[19] = (void *)7;
  this[18] = 0LL;
  *((_WORD *)this + 64) = 0;
  if ( (unsigned __int64)this[15] >= 8 )
    operator delete(this[12]);
  this[15] = (void *)7;
  this[14] = 0LL;
  *((_WORD *)this + 48) = 0;
  if ( (unsigned __int64)this[11] >= 8 )
    operator delete(this[8]);
  this[11] = (void *)7;
  this[10] = 0LL;
  *((_WORD *)this + 32) = 0;
  if ( (unsigned __int64)this[7] >= 8 )
    operator delete(this[4]);
  this[7] = (void *)7;
  this[6] = 0LL;
  *((_WORD *)this + 16) = 0;
  if ( (unsigned __int64)this[3] >= 8 )
    operator delete(*this);
  this[3] = (void *)7;
  this[2] = 0LL;
  *(_WORD *)this = 0;
}
