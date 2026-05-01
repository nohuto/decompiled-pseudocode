/*
 * XREFs of ?GetView@CDropFeedbackItem@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180377160
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDropFeedbackItem::GetView(CDropFeedbackItem *this, const struct _GUID *a2, void **a3)
{
  __int64 (__fastcall ***v3)(_QWORD, const struct _GUID *); // rcx
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = 0LL;
  v3 = (__int64 (__fastcall ***)(_QWORD, const struct _GUID *))*((_QWORD *)this + 5);
  if ( !v3 )
    return 2147943568LL;
  v4 = (**v3)(v3, a2);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD5,
    (__int64)"pcshell\\twinui\\windowarrangementvisuals\\lib\\dropfeedbackitem.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
