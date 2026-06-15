/*
 * XREFs of ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x180033690
 * Callers:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x180035308 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     ?GrowBuffer@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@AEAA_N_K@Z @ 0x18000FEC4 (-GrowBuffer@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAcce.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001094C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??0CAccessAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_N@Z @ 0x180033F60 (--0CAccessAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_N@Z.c)
 *     ?CallDestructors@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@CAXPEAV?$CAutoPtr@VCAccessAce@CDacl@ATL@@@2@_K@Z @ 0x1800359C8 (-CallDestructors@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@V.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall ATL::CDacl::AddAllowedAce(ATL::CDacl *this, const struct ATL::CSid *a2)
{
  ATL::CDacl *v3; // rsi
  __int64 v4; // rcx
  HANDLE ProcessHeap; // rax
  ATL::CDacl::CAccessAce *v6; // rax
  __int64 v7; // rbx
  unsigned __int64 v8; // r15
  __int64 v11; // [rsp+68h] [rbp+10h]

  v3 = this;
  if ( !*((_BYTE *)a2 + 76) || !IsValidSid((char *)a2 + 8) )
    return 0;
  if ( *((_BYTE *)v3 + 16) )
  {
    v4 = *((_QWORD *)v3 + 3);
    if ( v4 )
    {
      ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::CallDestructors(
        v4,
        *((_QWORD *)v3 + 4));
      free(*((void **)v3 + 3));
      *((_QWORD *)v3 + 3) = 0LL;
    }
    *((_QWORD *)v3 + 4) = 0LL;
    *((_QWORD *)v3 + 5) = 0LL;
    free(*((void **)v3 + 1));
    *((_QWORD *)v3 + 1) = 0LL;
    *((_BYTE *)v3 + 16) = 0;
  }
  ProcessHeap = GetProcessHeap();
  v6 = (ATL::CDacl::CAccessAce *)HeapAlloc(ProcessHeap, 0, 0x98uLL);
  try
  {
    if ( v6 )
      v7 = ATL::CDacl::CAccessAce::CAccessAce(v6, a2, 0x10000000u, 0, 1);
    else
      v7 = 0LL;
    v11 = v7;
  }
  catch ( ... )
  {
    v3 = this;
    v7 = v11;
  }
  if ( !v7
    || (v8 = *((_QWORD *)v3 + 4), v8 >= *((_QWORD *)v3 + 5))
    && !ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::GrowBuffer(
          (__int64)v3 + 24,
          v8 + 1) )
  {
    ATL::AtlThrowImpl(-2147024882);
  }
  *(_QWORD *)(*((_QWORD *)v3 + 3) + 8 * v8) = v7;
  ++*((_QWORD *)v3 + 4);
  free(*((void **)v3 + 1));
  *((_QWORD *)v3 + 1) = 0LL;
  return 1;
}
