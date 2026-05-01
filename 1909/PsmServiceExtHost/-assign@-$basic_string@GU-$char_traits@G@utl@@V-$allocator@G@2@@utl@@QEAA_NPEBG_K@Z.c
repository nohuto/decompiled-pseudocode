/*
 * XREFs of ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG_K@Z @ 0x1800343FC
 * Callers:
 *     ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x1800341DC (-ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PS.c)
 * Callees:
 *     ?_GrowAlloc@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAA?AV?$_ContainerAllocation@V?$allocator@G@utl@@@2@_K@Z @ 0x1800344C4 (-_GrowAlloc@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAA-AV-$_ContainerAllo.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180048E98 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180049292 (memcpy_0.c)
 *     memmove_0 @ 0x18004929E (memmove_0.c)
 */

char __fastcall utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
        char **a1,
        char *a2,
        unsigned __int64 a3)
{
  char *v3; // r14
  char *v5; // rcx
  char v8; // r15
  unsigned __int64 v9; // rax
  char *v10; // rbp
  size_t v11; // rbx
  char *v12; // rbx
  void *v13; // rax
  char *v15; // rax
  void *v16[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = (char *)(a1 + 2);
  v5 = *a1;
  v8 = 1;
  if ( v5 == v3 )
    v9 = 7LL;
  else
    v9 = (__int64)(*(_QWORD *)v3 - (_QWORD)v5) >> 1;
  if ( a3 <= v9 )
  {
    if ( v5 != a2 )
    {
      memmove_0(v5, a2, 2 * a3);
      v5 = *a1;
    }
    v15 = &v5[2 * a3];
    a1[1] = v15;
    *(_WORD *)v15 = 0;
  }
  else
  {
    utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_GrowAlloc(
      a1,
      v16);
    v10 = (char *)v16[0];
    if ( v16[0] )
    {
      v11 = 2 * a3;
      memcpy_0(v16[0], a2, v11);
      v12 = &v10[v11];
      *(_WORD *)v12 = 0;
      if ( *a1 != v3 )
        operator delete(*a1);
      v13 = v16[1];
      *a1 = v10;
      a1[1] = v12;
      *(_QWORD *)v3 = &v10[2 * (_QWORD)v13 - 2];
    }
    else
    {
      return 0;
    }
  }
  return v8;
}
