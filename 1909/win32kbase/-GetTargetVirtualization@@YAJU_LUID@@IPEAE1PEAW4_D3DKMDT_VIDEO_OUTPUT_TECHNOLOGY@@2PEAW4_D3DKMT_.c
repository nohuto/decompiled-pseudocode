/*
 * XREFs of ?GetTargetVirtualization@@YAJU_LUID@@IPEAE1PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C0129540
 * Callers:
 *     DrvSetDisplayConfigValidateParams @ 0x1C00BFA80 (DrvSetDisplayConfigValidateParams.c)
 *     ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N1PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x1C01268EC (-ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetTargetVirtualization(
        struct _LUID a1,
        __int64 a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a5,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a6,
        enum _D3DKMT_DISPLAY_TARGET_USAGE *a7)
{
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rax
  struct _LUID v17; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v18; // [rsp+58h] [rbp+10h] BYREF

  v18 = a2;
  v17 = a1;
  v9 = ((__int64 (__fastcall *)(struct _LUID *, __int64, struct _LUID *, unsigned int *))qword_1C0212238)(
         &v17,
         a2,
         &v17,
         &v18);
  v13 = v9;
  if ( v9 < 0
    || (v14 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))qword_1C0212248)(
                v17,
                v18,
                a3,
                a4,
                a5,
                a6,
                a7),
        v13 = v14,
        v14 < 0) )
  {
    v15 = WdLogNewEntry5_WdError(v11, v10, v12);
    *(_QWORD *)(v15 + 24) = v13;
    WdLogEvent5_WdError(v15);
  }
  return (unsigned int)v13;
}
