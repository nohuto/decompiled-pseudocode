/*
 * XREFs of ??1CAcl@ATL@@UEAA@XZ @ 0x18003023C
 * Callers:
 *     _DetermineLowRightsKeySecurityDescriptor_::_1_::dtor$4 @ 0x180037CCB (_DetermineLowRightsKeySecurityDescriptor_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CAcl::~CAcl(void **this)
{
  *this = &ATL::CAcl::`vftable';
  free(this[1]);
}
