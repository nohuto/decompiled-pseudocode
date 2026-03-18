/*
 * XREFs of ??1CMoveRenderPassInfo@@UEAA@XZ @ 0x18017E7E8
 * Callers:
 *     ??_GCMoveRenderPassInfo@@UEAAPEAXI@Z @ 0x18017E850 (--_GCMoveRenderPassInfo@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CMoveRenderPassInfo::~CMoveRenderPassInfo(void **this)
{
  void *v2; // rcx
  void *v3; // rcx

  *this = &CMoveRenderPassInfo::`vftable';
  operator delete(this[5]);
  operator delete(this[6]);
  v2 = this[1];
  if ( v2 )
  {
    DeleteObject(v2);
    this[1] = 0LL;
  }
  v3 = this[2];
  if ( v3 )
  {
    DeleteObject(v3);
    this[2] = 0LL;
  }
}
