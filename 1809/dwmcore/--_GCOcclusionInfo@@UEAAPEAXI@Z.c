/*
 * XREFs of ??_GCOcclusionInfo@@UEAAPEAXI@Z @ 0x180174890
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 */

COcclusionInfo *__fastcall COcclusionInfo::`scalar deleting destructor'(COcclusionInfo *this, char a2)
{
  *(_QWORD *)this = &COcclusionInfo::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
