/*
 * XREFs of ?Release@CRenderDataBuilder@@UEAAKXZ @ 0x1800CBF70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18007A004 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

__int64 __fastcall CRenderDataBuilder::Release(CRenderDataBuilder *this)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 3);
  if ( !v2 && this )
  {
    DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 16);
    operator delete(this);
  }
  return v2;
}
