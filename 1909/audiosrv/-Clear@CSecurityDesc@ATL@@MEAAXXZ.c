/*
 * XREFs of ?Clear@CSecurityDesc@ATL@@MEAAXXZ @ 0x180044E00
 * Callers:
 *     ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x18002EEB0 (-GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18003019C (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     ??1CSecurityDesc@ATL@@UEAA@XZ @ 0x1800DCD70 (--1CSecurityDesc@ATL@@UEAA@XZ.c)
 *     ??_GCSecurityDesc@ATL@@UEAAPEAXI@Z @ 0x1800DD080 (--_GCSecurityDesc@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CSecurityDesc::Clear(ATL::CSecurityDesc *this)
{
  void *v2; // rcx
  PSID pGroup; // [rsp+20h] [rbp-20h] BYREF
  PACL pDacl; // [rsp+28h] [rbp-18h] BYREF
  PACL pSacl; // [rsp+30h] [rbp-10h] BYREF
  WORD pControl; // [rsp+60h] [rbp+20h] BYREF
  DWORD dwRevision; // [rsp+68h] [rbp+28h] BYREF
  WINBOOL bDaclPresent; // [rsp+70h] [rbp+30h] BYREF
  PSID pOwner; // [rsp+78h] [rbp+38h] BYREF

  v2 = (void *)*((_QWORD *)this + 1);
  if ( v2 )
  {
    pControl = 0;
    if ( GetSecurityDescriptorControl(v2, &pControl, &dwRevision) && (pControl & 0x8000u) == 0 )
    {
      GetSecurityDescriptorOwner(*((PSECURITY_DESCRIPTOR *)this + 1), &pOwner, (LPBOOL)&dwRevision);
      free(pOwner);
      GetSecurityDescriptorGroup(*((PSECURITY_DESCRIPTOR *)this + 1), &pGroup, (LPBOOL)&dwRevision);
      free(pGroup);
      GetSecurityDescriptorDacl(*((PSECURITY_DESCRIPTOR *)this + 1), &bDaclPresent, &pDacl, (LPBOOL)&dwRevision);
      if ( bDaclPresent )
        free(pDacl);
      GetSecurityDescriptorSacl(*((PSECURITY_DESCRIPTOR *)this + 1), &bDaclPresent, &pSacl, (LPBOOL)&dwRevision);
      if ( bDaclPresent )
        free(pSacl);
    }
    free(*((void **)this + 1));
    *((_QWORD *)this + 1) = 0LL;
  }
}
