/*
 * XREFs of ?v_QueryService@AppLayoutCache@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180352EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AppLayoutCache::v_QueryService(
        __int64 (__fastcall ***this)(char *, const struct _GUID *, void **),
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a4 = 0LL;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e511e73c_cad4_40aa_bf1a_b9938ac75ff0.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e511e73c_cad4_40aa_bf1a_b9938ac75ff0.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e511e73c_cad4_40aa_bf1a_b9938ac75ff0.Data4;
  if ( v4 )
  {
    v5 = -2147467263;
    v6 = 33LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\applayoutcache.cpp",
      (const char *)v5);
    return v5;
  }
  v5 = (**(this - 5))((char *)this - 40, a3, a4);
  if ( (v5 & 0x80000000) != 0 )
  {
    v6 = 34LL;
    goto LABEL_7;
  }
  return v5;
}
