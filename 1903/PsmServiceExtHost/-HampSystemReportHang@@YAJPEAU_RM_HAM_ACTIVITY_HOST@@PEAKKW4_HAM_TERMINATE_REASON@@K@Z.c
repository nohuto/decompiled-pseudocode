/*
 * XREFs of ?HampSystemReportHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAKKW4_HAM_TERMINATE_REASON@@K@Z @ 0x18007FE3C
 * Callers:
 *     ?HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180077258 (-HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ReportHangInternal2 @ 0x18007FEAC (ReportHangInternal2.c)
 *     ?ReportHangInternal@@YAJPEAUHWND__@@PEAKKKKPEBG@Z @ 0x180080628 (-ReportHangInternal@@YAJPEAUHWND__@@PEAKKKKPEBG@Z.c)
 */

__int64 __fastcall HampSystemReportHang(HWND a1, unsigned int *a2, unsigned int a3, int a4, unsigned int a5)
{
  int v5; // ecx
  int v6; // eax
  __int64 result; // rax
  const unsigned __int16 *v8; // [rsp+28h] [rbp-10h]

  switch ( a4 )
  {
    case 3328:
      v6 = ReportHangInternal(a1, a2, a3, a5, 0x3C0BCu, v8);
      break;
    case 3584:
      v6 = ReportHangInternal2(a2);
      break;
    case 5120:
      v6 = ReportHangInternal(a1, a2, a3, a5, 0x7C03Cu, v8);
      break;
    default:
      v5 = -1073741582;
      goto LABEL_9;
  }
  v5 = v6;
LABEL_9:
  result = 0LL;
  if ( v5 < 0 )
    return (unsigned int)v5;
  return result;
}
