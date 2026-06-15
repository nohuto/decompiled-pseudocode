/*
 * XREFs of ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x18000891C
 * Callers:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x1800073C4 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x180007BDC (-GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z.c)
 * Callees:
 *     ??0CSid@ATL@@QEAA@AEBV01@@Z @ 0x180008A40 (--0CSid@ATL@@QEAA@AEBV01@@Z.c)
 *     ?GrowBuffer@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@AEAA_N_K@Z @ 0x180008EE0 (-GrowBuffer@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAcce.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AE7FC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall ATL::CDacl::AddAllowedAce(ATL::CDacl *this, const struct ATL::CSid *a2, int a3)
{
  ATL::CDacl *v5; // rsi
  HANDLE ProcessHeap; // rax
  _DWORD *v7; // rbx
  unsigned __int64 v8; // r15

  v5 = this;
  if ( !*((_BYTE *)a2 + 76) || !IsValidSid((char *)a2 + 8) )
    return 0;
  if ( *((_BYTE *)v5 + 16) )
  {
    (*(void (__fastcall **)(ATL::CDacl *))(*(_QWORD *)v5 + 16LL))(v5);
    *((_BYTE *)v5 + 16) = 0;
  }
  ProcessHeap = GetProcessHeap();
  v7 = HeapAlloc(ProcessHeap, 0, 0x98uLL);
  if ( v7 )
  {
    try
    {
      *(_QWORD *)v7 = &ATL::CAcl::CAce::`vftable';
      ATL::CSid::CSid((ATL::CSid *)(v7 + 2), a2);
      v7[32] = a3;
      *((_BYTE *)v7 + 132) = 0;
      *((_QWORD *)v7 + 17) = 0LL;
      *(_QWORD *)v7 = &ATL::CDacl::CAccessAce::`vftable';
      *((_BYTE *)v7 + 144) = 1;
    }
    catch ( ... )
    {
      v5 = this;
      v7 = 0LL;
    }
  }
  else
  {
    v7 = 0LL;
  }
  if ( !v7
    || (v8 = *((_QWORD *)v5 + 4), v8 >= *((_QWORD *)v5 + 5))
    && !(unsigned __int8)ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::GrowBuffer(
                           (char *)v5 + 24,
                           v8 + 1) )
  {
    ATL::AtlThrowImpl(-2147024882);
  }
  *(_QWORD *)(*((_QWORD *)v5 + 3) + 8 * v8) = v7;
  ++*((_QWORD *)v5 + 4);
  free(*((void **)v5 + 1));
  *((_QWORD *)v5 + 1) = 0LL;
  return 1;
}
