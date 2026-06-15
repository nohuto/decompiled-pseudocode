/*
 * XREFs of ?GetDacl@CSecurityDesc@ATL@@QEBA_NPEAVCDacl@2@PEA_N1@Z @ 0x18003165C
 * Callers:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x180032100 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x1800306C4 (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 *     ?CallDestructors@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@CAXPEAV?$CAutoPtr@VCAccessAce@CDacl@ATL@@@2@_K@Z @ 0x1800327C0 (-CallDestructors@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@V.c)
 */

bool __fastcall ATL::CSecurityDesc::GetDacl(PSECURITY_DESCRIPTOR *this, struct ATL::CDacl *a2, bool *a3, bool *a4)
{
  BOOL SecurityDescriptorDacl; // eax
  __int64 v6; // rcx
  struct _ACL *v7; // rdi
  WINBOOL bDaclPresent; // [rsp+40h] [rbp+8h] BYREF
  WINBOOL bDaclDefaulted; // [rsp+50h] [rbp+18h] BYREF
  PACL pDacl; // [rsp+58h] [rbp+20h] BYREF

  SecurityDescriptorDacl = GetSecurityDescriptorDacl(this[1], &bDaclPresent, &pDacl, &bDaclDefaulted);
  if ( SecurityDescriptorDacl )
  {
    if ( a2 )
    {
      v6 = *((_QWORD *)a2 + 3);
      if ( bDaclPresent )
      {
        v7 = pDacl;
        if ( pDacl )
        {
          if ( v6 )
          {
            ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::CallDestructors(
              v6,
              *((_QWORD *)a2 + 4));
            free(*((void **)a2 + 3));
            *((_QWORD *)a2 + 3) = 0LL;
          }
          *((_QWORD *)a2 + 4) = 0LL;
          *((_QWORD *)a2 + 5) = 0LL;
          free(*((void **)a2 + 1));
          *((_QWORD *)a2 + 1) = 0LL;
          ATL::CDacl::Copy(a2, v7);
          goto LABEL_15;
        }
        if ( v6 )
        {
          ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::CallDestructors(
            v6,
            *((_QWORD *)a2 + 4));
          free(*((void **)a2 + 3));
          *((_QWORD *)a2 + 3) = 0LL;
        }
        *((_QWORD *)a2 + 4) = 0LL;
        *((_QWORD *)a2 + 5) = 0LL;
        free(*((void **)a2 + 1));
        *((_BYTE *)a2 + 16) = 1;
      }
      else
      {
        if ( v6 )
        {
          ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::CallDestructors(
            v6,
            *((_QWORD *)a2 + 4));
          free(*((void **)a2 + 3));
          *((_QWORD *)a2 + 3) = 0LL;
        }
        *((_QWORD *)a2 + 4) = 0LL;
        *((_QWORD *)a2 + 5) = 0LL;
        free(*((void **)a2 + 1));
        *((_BYTE *)a2 + 16) = 0;
      }
      *((_QWORD *)a2 + 1) = 0LL;
    }
LABEL_15:
    LOBYTE(SecurityDescriptorDacl) = 1;
  }
  return SecurityDescriptorDacl;
}
