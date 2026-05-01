/*
 * XREFs of ?SetSizeConstraintsForDpi@AppSizeConstraintsCache@@EEAAJIAEBUAPP_SIZE_CONSTRAINTS@@@Z @ 0x180071C20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@USIZE_CONSTRAINTS_CACHE_ENTRY@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@USIZE_CONSTRAINTS_CACHE_ENTRY@@@@V?$CSimpleArrayStandardCompareHelper@USIZE_CONSTRAINTS_CACHE_ENTRY@@@@V?$CSimpleArrayStandardMergeHelper@USIZE_CONSTRAINTS_CACHE_ENTRY@@@@@@QEAAJ_K0@Z @ 0x18005C698 (-_EnsureCapacity@-$CTSimpleArray@USIZE_CONSTRAINTS_CACHE_ENTRY@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     ??$AppSizeConstraintsSet@AEAIAEBUCSize@Geometry@@AEBU12@@ApplicationViewTelemetry@ApplicationViewManagement@@SAXAEAIAEBUCSize@Geometry@@1@Z @ 0x180071CF8 (--$AppSizeConstraintsSet@AEAIAEBUCSize@Geometry@@AEBU12@@ApplicationViewTelemetry@ApplicationVie.c)
 */

__int64 __fastcall AppSizeConstraintsCache::SetSizeConstraintsForDpi(
        AppSizeConstraintsCache *this,
        int a2,
        const struct APP_SIZE_CONSTRAINTS *a3)
{
  char *v3; // rdi
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  const struct APP_SIZE_CONSTRAINTS *v7; // rsi
  int v8; // ebx
  __int64 v9; // r8
  _BYTE v11[20]; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v13; // [rsp+58h] [rbp+10h] BYREF

  v13 = a2;
  v3 = (char *)this + 16;
  v5 = *((_QWORD *)this + 3);
  v6 = 0LL;
  v7 = a3;
  if ( v5 )
  {
    a3 = *(const struct APP_SIZE_CONSTRAINTS **)v3;
    while ( a2 != *(_DWORD *)a3 )
    {
      ++v6;
      a3 = (const struct APP_SIZE_CONSTRAINTS *)((char *)a3 + 20);
      if ( v6 >= v5 )
        goto LABEL_2;
    }
    *(_OWORD *)(*((_QWORD *)this + 2) + 20 * v6 + 4) = *(_OWORD *)v7;
    goto LABEL_6;
  }
LABEL_2:
  *(_DWORD *)v11 = a2;
  *(_OWORD *)&v11[4] = *(_OWORD *)v7;
  if ( v5 != *((_QWORD *)this + 5)
    || (v8 = CTSimpleArray<SIZE_CONSTRAINTS_CACHE_ENTRY,4294967294,CTPolicyCoTaskMem<SIZE_CONSTRAINTS_CACHE_ENTRY>,CSimpleArrayStandardCompareHelper<SIZE_CONSTRAINTS_CACHE_ENTRY>,CSimpleArrayStandardMergeHelper<SIZE_CONSTRAINTS_CACHE_ENTRY>>::_EnsureCapacity(
               (__int64)v3,
               v5 + 1,
               a3),
        v8 >= 0) )
  {
    ++*((_QWORD *)v3 + 1);
    v9 = *(_QWORD *)v3 + 4 * (5LL * *((_QWORD *)v3 + 1) - 5);
    if ( v9 )
    {
      *(_OWORD *)v9 = *(_OWORD *)v11;
      *(_DWORD *)(v9 + 16) = *(_DWORD *)&v11[16];
    }
LABEL_6:
    ApplicationViewManagement::ApplicationViewTelemetry::AppSizeConstraintsSet<unsigned int &,Geometry::CSize const &,Geometry::CSize const &>(
      &v13,
      v7,
      (char *)v7 + 8);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5E,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appsizeconstraintscache.cpp",
    (const char *)(unsigned int)v8);
  return (unsigned int)v8;
}
