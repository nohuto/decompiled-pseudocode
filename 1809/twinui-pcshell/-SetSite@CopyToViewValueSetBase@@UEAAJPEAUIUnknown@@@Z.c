/*
 * XREFs of ?SetSite@CopyToViewValueSetBase@@UEAAJPEAUIUnknown@@@Z @ 0x180330950
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CopyToViewValueSetBase::SetSite(CopyToViewValueSetBase *this, struct IUnknown *a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  int AgileReference; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (_QWORD *)((char *)this + 64);
  v4 = *((_QWORD *)this + 8);
  *v3 = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  if ( a2 )
  {
    AgileReference = RoGetAgileReference(0LL, &GUID_00000000_0000_0000_c000_000000000046, a2, v3);
    v6 = AgileReference;
    if ( AgileReference < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6B6,
        (__int64)"internal\\sdk\\inc\\wil\\com.h",
        (const char *)(unsigned int)AgileReference);
  }
  else
  {
    *v3 = 0LL;
    return 0;
  }
  return v6;
}
