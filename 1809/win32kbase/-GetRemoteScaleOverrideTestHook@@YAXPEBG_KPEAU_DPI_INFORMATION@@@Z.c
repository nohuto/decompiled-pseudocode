/*
 * XREFs of ?GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z @ 0x1C00A4738
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00548D8 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x1C0013D60 (RtlStringCopyWorkerW.c)
 *     ?ScaleOverrideTestHookCore@DpiInternal@@YAXQEBGPEAK@Z @ 0x1C00A481C (-ScaleOverrideTestHookCore@DpiInternal@@YAXQEBGPEAK@Z.c)
 *     RtlStringLengthWorkerW @ 0x1C00A49D8 (RtlStringLengthWorkerW.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

void __fastcall GetRemoteScaleOverrideTestHook(STRSAFE_PCNZWCH pszSrc, __int64 a2, struct _DPI_INFORMATION *a3)
{
  size_t *v5; // r8
  __int64 v6; // r11
  unsigned int *v7; // r8
  size_t pcchLength[2]; // [rsp+30h] [rbp-88h] BYREF
  wchar_t psz[48]; // [rsp+40h] [rbp-78h] BYREF

  if ( gbOSTestSigningEnabled )
  {
    wcscpy(psz, L"REMOTE_MONITOR_");
    memset(&psz[16], 0, 0x3EuLL);
    if ( RtlStringLengthWorkerW(psz, 0x2FuLL, pcchLength) >= 0
      && RtlStringCopyWorkerW(&psz[pcchLength[0]], v6 - pcchLength[0], v5, pszSrc, 0x7FFFFFFEuLL) >= 0 )
    {
      DpiInternal::ScaleOverrideTestHookCore((DpiInternal *)psz, (const unsigned __int16 *const)pcchLength, v7);
      if ( LODWORD(pcchLength[0]) )
      {
        *((_DWORD *)a3 + 2) = pcchLength[0];
        *((_DWORD *)a3 + 21) = 1234567;
      }
    }
  }
}
