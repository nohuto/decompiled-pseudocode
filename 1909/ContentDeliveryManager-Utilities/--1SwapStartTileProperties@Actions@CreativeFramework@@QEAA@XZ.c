/*
 * XREFs of ??1SwapStartTileProperties@Actions@CreativeFramework@@QEAA@XZ @ 0x180086C40
 * Callers:
 *     _CreativeFramework::Actions::MakeSwapStartTileService_::_1_::dtor$0 @ 0x1800D2580 (_CreativeFramework--Actions--MakeSwapStartTileService_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CreativeFramework::Actions::SwapStartTileProperties::~SwapStartTileProperties(void **this)
{
  if ( (unsigned __int64)this[23] >= 8 )
    operator delete(this[20]);
  this[23] = (void *)7;
  this[22] = 0LL;
  *((_WORD *)this + 80) = 0;
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
