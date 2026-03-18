/*
 * XREFs of ?DxgkCddReportDripsBlocker@@YAXPEAXPEAU_EPROCESS@@@Z @ 0x1C012AF90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReportDripsBlocker@DXGGLOBAL@@QEAAXW4_SLEEPSTUDY_CONNECTION_ID@@PEAU_DEVICE_OBJECT@@PEAU_EPROCESS@@_KI@Z @ 0x1C0211828 (-ReportDripsBlocker@DXGGLOBAL@@QEAAXW4_SLEEPSTUDY_CONNECTION_ID@@PEAU_DEVICE_OBJECT@@PEAU_EPROCE.c)
 */

void __fastcall DxgkCddReportDripsBlocker(_QWORD *a1, struct _EPROCESS *a2)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  struct DXGGLOBAL *v7; // rax

  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  if ( *((_DWORD *)Global + 430) )
  {
    if ( *((_DWORD *)Global + 431) )
    {
      v6 = a1[24];
      v7 = DXGGLOBAL::GetGlobal(v5);
      DXGGLOBAL::ReportDripsBlocker(v7, 2LL, v6, a2, 0LL);
    }
  }
}
