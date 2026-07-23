/*
 * XREFs of ViXdvDriverLoadImage @ 0x140929510
 * Callers:
 *     VfDriverLoadImage @ 0x140922264 (VfDriverLoadImage.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1400F2CC0 (RtlImageDirectoryEntryToData.c)
 *     strcmp @ 0x140197040 (strcmp.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     VfUtilDbgPrint @ 0x140309C3C (VfUtilDbgPrint.c)
 *     ViXdvSetXdvKernelUtilities @ 0x14030A168 (ViXdvSetXdvKernelUtilities.c)
 *     ViXdvBindXdvDDIWrappers @ 0x140929350 (ViXdvBindXdvDDIWrappers.c)
 *     ViXdvBindXdvDriverEntryWrappers @ 0x140929410 (ViXdvBindXdvDriverEntryWrappers.c)
 *     ViXdvGetFuncAddress @ 0x140929730 (ViXdvGetFuncAddress.c)
 */

char __fastcall ViXdvDriverLoadImage(__int64 a1)
{
  char *v1; // rbp
  char v2; // r14
  _DWORD *v3; // rax
  _DWORD *v4; // rbx
  char v5; // r12
  char *v6; // r13
  char v7; // r15
  __int64 v8; // rdi
  const char *v9; // rsi
  __int64 (__fastcall *FuncAddress)(int *); // rax
  __int64 (*v11)(void); // rax
  void (__fastcall *v12)(__int64 (__fastcall **)(PCONTEXT)); // rax
  __int64 (__fastcall *v13)(_QWORD); // rax
  ULONG v15; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(char **)(a1 + 48);
  v2 = 1;
  v3 = RtlImageDirectoryEntryToData(v1, 1u, 0, &v15);
  v4 = v3;
  if ( !v3 || !v3[6] )
    return 0;
  v5 = 0;
  v6 = &v1[v3[8]];
  v7 = 0;
  v8 = 0LL;
  do
  {
    v9 = &v1[*(unsigned int *)&v6[4 * v8]];
    if ( !strcmp("GetXdvDDIWrappers", v9) )
    {
      FuncAddress = (__int64 (__fastcall *)(int *))ViXdvGetFuncAddress(v1, v4, (unsigned int)v8);
      v5 = ViXdvBindXdvDDIWrappers(FuncAddress);
      if ( v5 != 1 )
        VfUtilDbgPrint("Error on Verifier Extention DDI bound process\n");
    }
    else if ( !strcmp("GetXdvDriverEntryWrappers", v9) )
    {
      v11 = (__int64 (*)(void))ViXdvGetFuncAddress(v1, v4, (unsigned int)v8);
      v7 = ViXdvBindXdvDriverEntryWrappers(v11);
      if ( v7 != 1 )
        VfUtilDbgPrint("Error on Verifier Extention entry point bound process\n");
    }
    else if ( !strcmp("SetXdvKernelUtilities", v9) )
    {
      v12 = (void (__fastcall *)(__int64 (__fastcall **)(PCONTEXT)))ViXdvGetFuncAddress(v1, v4, (unsigned int)v8);
      if ( !ViXdvSetXdvKernelUtilities(v12) )
        VfUtilDbgPrint("Error on providing kernel utilities to  XDV.\n");
    }
    else if ( !strcmp("XdvHibernationNotification", v9) )
    {
      ViFnExtensionHiberFunc = (PVOID)ViXdvGetFuncAddress(v1, v4, (unsigned int)v8);
    }
    else if ( !strcmp("XdvNotifyExtensions", v9) )
    {
      ViFnXdvNotifyExtensions = ViXdvGetFuncAddress(v1, v4, (unsigned int)v8);
    }
    else if ( !strcmp("XdvQueryDispatchTable", v9) )
    {
      v13 = (__int64 (__fastcall *)(_QWORD))ViXdvGetFuncAddress(v1, v4, (unsigned int)v8);
      ViFnXdvQueryDispatchTable = v13;
      if ( v13 )
      {
        ViXdvTipUtils = v13(4LL);
        if ( !ViXdvTipUtils )
          VfUtilDbgPrint("Error on getting TiP utilities from XDV.\n");
      }
      else
      {
        VfUtilDbgPrint("Error on getting XdvQueryDispatchTable utility from XDV.\n");
      }
    }
    v8 = (unsigned int)(v8 + 1);
  }
  while ( (unsigned int)v8 < v4[6] );
  if ( !v5 || !v7 )
    return 0;
  return v2;
}
