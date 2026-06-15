/*
 * XREFs of ?Init@CSecurityDesc@ATL@@IEAAXAEBU_SECURITY_DESCRIPTOR@@@Z @ 0x18002B048
 * Callers:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18002D30C (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     memset_0 @ 0x180064BFE (memset_0.c)
 *     _invalid_parameter_noinfo @ 0x180064CCA (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x18006B903 (memcpy_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800BD31C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x1800DD7AC (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 */

void __fastcall ATL::CSecurityDesc::Init(ATL::CSecurityDesc *this, struct _SECURITY_DESCRIPTOR *a2)
{
  void *v4; // rax
  __int64 v5; // rcx
  void *v6; // rcx
  int Error; // ebx
  int v8; // ebx
  WORD pControl; // [rsp+30h] [rbp+8h] BYREF
  size_t Size; // [rsp+38h] [rbp+10h] BYREF
  DWORD dwRevision; // [rsp+40h] [rbp+18h] BYREF

  LODWORD(Size) = GetSecurityDescriptorLength(a2);
  v4 = malloc((unsigned int)Size);
  *((_QWORD *)this + 1) = v4;
  if ( !v4 )
    ATL::AtlThrowImpl(-2147024882);
  if ( !GetSecurityDescriptorControl(a2, &pControl, &dwRevision) )
  {
    Error = ATL::AtlHresultFromLastError();
    free(*((void **)this + 1));
    *((_QWORD *)this + 1) = 0LL;
    ATL::AtlThrowImpl(Error);
  }
  v5 = 0x8000LL;
  if ( (pControl & 0x8000u) != 0 )
  {
    if ( !(_DWORD)Size )
      return;
    if ( *((_QWORD *)this + 1) )
    {
      v6 = (void *)*((_QWORD *)this + 1);
      if ( a2 )
      {
        memcpy_0(v6, a2, (unsigned int)Size);
        return;
      }
      memset_0(v6, 0, (unsigned int)Size);
    }
    *(_DWORD *)_o__errno(v5) = 22;
    invalid_parameter_noinfo();
    ATL::AtlThrowImpl(-2147024809);
  }
  if ( !MakeSelfRelativeSD(a2, *((PSECURITY_DESCRIPTOR *)this + 1), (LPDWORD)&Size) )
  {
    v8 = ATL::AtlHresultFromLastError();
    free(*((void **)this + 1));
    *((_QWORD *)this + 1) = 0LL;
    ATL::AtlThrowImpl(v8);
  }
}
