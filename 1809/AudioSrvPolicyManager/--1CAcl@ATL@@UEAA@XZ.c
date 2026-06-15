/*
 * XREFs of ??1CAcl@ATL@@UEAA@XZ @ 0x18003334C
 * Callers:
 *     _DetermineLowRightsKeySecurityDescriptor_::_1_::dtor$4 @ 0x18003A26E (_DetermineLowRightsKeySecurityDescriptor_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CAcl::~CAcl(void **this)
{
  *this = &ATL::CAcl::`vftable';
  free(this[1]);
}
