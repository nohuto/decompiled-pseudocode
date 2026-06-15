/*
 * XREFs of ?GetDacl@CSecurityDesc@ATL@@QEBA_NPEAVCDacl@2@PEA_N1@Z @ 0x180043DE0
 * Callers:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x1800073C4 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x180043EE0 (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall ATL::CSecurityDesc::GetDacl(ATL::CSecurityDesc *this, struct ATL::CDacl *a2, bool *a3, bool *a4)
{
  void *v4; // rcx
  void (__fastcall *v6)(struct ATL::CDacl *); // rax
  struct _ACL *v7; // rdi
  struct _ACL *v9; // [rsp+30h] [rbp+8h] BYREF
  bool *v10; // [rsp+40h] [rbp+18h] BYREF
  bool *v11; // [rsp+48h] [rbp+20h] BYREF

  v11 = a4;
  v10 = a3;
  v4 = (void *)*((_QWORD *)this + 1);
  if ( !v4 || !GetSecurityDescriptorDacl(v4, (LPBOOL)&v11, &v9, (LPBOOL)&v10) )
    return 0;
  if ( a2 )
  {
    v6 = *(void (__fastcall **)(struct ATL::CDacl *))(*(_QWORD *)a2 + 16LL);
    if ( (_DWORD)v11 )
    {
      v7 = v9;
      v6(a2);
      if ( v7 )
        ATL::CDacl::Copy(a2, v7);
      else
        *((_BYTE *)a2 + 16) = 1;
    }
    else
    {
      v6(a2);
      *((_BYTE *)a2 + 16) = 0;
    }
  }
  return 1;
}
