/*
 * XREFs of ??1CGlyphRunContent@@MEAA@XZ @ 0x180206824
 * Callers:
 *     ??_ECGlyphRunContent@@MEAAPEAXI@Z @ 0x1801D6590 (--_ECGlyphRunContent@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z @ 0x1800B9D7C (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CGlyphRunContent::~CGlyphRunContent(struct CResource ***this)
{
  struct CResource **v2; // rcx

  *this = (struct CResource **)&CGlyphRunContent::`vftable';
  CResource::UnRegisterNNotifiersInternal((CResource *)this, this[7], (unsigned int)(this[8] - this[7]));
  v2 = this[7];
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, ((char *)this[9] - (char *)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    this[7] = 0LL;
    this[8] = 0LL;
    this[9] = 0LL;
  }
  CResource::~CResource((CResource *)this);
}
