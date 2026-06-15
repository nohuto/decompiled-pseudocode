/*
 * XREFs of ??1CDacl@ATL@@UEAA@XZ @ 0x1800303DC
 * Callers:
 *     ??_ECDacl@ATL@@UEAAPEAXI@Z @ 0x180030370 (--_ECDacl@ATL@@UEAAPEAXI@Z.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x180032100 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     _DetermineLowRightsKeySecurityDescriptor_::_1_::dtor$1 @ 0x180037B95 (_DetermineLowRightsKeySecurityDescriptor_--_1_--dtor$1.c)
 *     _DetermineLowRightsKeySecurityDescriptor_::_1_::dtor$2 @ 0x180037BA7 (_DetermineLowRightsKeySecurityDescriptor_--_1_--dtor$2.c)
 * Callees:
 *     ?CallDestructors@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@CAXPEAV?$CAutoPtr@VCAccessAce@CDacl@ATL@@@2@_K@Z @ 0x1800327C0 (-CallDestructors@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@V.c)
 */

void __fastcall ATL::CDacl::~CDacl(ATL::CDacl *this)
{
  void *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx

  *(_QWORD *)this = &ATL::CDacl::`vftable';
  v2 = 0LL;
  v3 = *((_QWORD *)this + 3);
  if ( v3 )
  {
    ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::CallDestructors(
      v3,
      *((_QWORD *)this + 4));
    free(*((void **)this + 3));
    *((_QWORD *)this + 3) = 0LL;
  }
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  free(*((void **)this + 1));
  *((_QWORD *)this + 1) = 0LL;
  v4 = *((_QWORD *)this + 3);
  if ( v4 )
  {
    ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::CallDestructors(
      v4,
      *((_QWORD *)this + 4));
    free(*((void **)this + 3));
    v2 = (void *)*((_QWORD *)this + 1);
  }
  *(_QWORD *)this = &ATL::CAcl::`vftable';
  free(v2);
}
