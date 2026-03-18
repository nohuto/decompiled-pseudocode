/*
 * XREFs of ?TranslateUmdFileNameToVm@@YAJPEAGIPEAK@Z @ 0x1C02014F0
 * Callers:
 *     ?PostProcessUMDFileName@@YAJW4_KMTQUERYADAPTERINFOTYPE@@PEAXI@Z @ 0x1C0200F70 (-PostProcessUMDFileName@@YAJW4_KMTQUERYADAPTERINFOTYPE@@PEAXI@Z.c)
 *     ?TranslateUmdFileNameToVmMultiString@@YAJPEAGIPEAK@Z @ 0x1C02015EC (-TranslateUmdFileNameToVmMultiString@@YAJPEAGIPEAK@Z.c)
 *     ?CopyDriverStore@DXGADAPTER@@QEAAJXZ @ 0x1C023A678 (-CopyDriverStore@DXGADAPTER@@QEAAJXZ.c)
 * Callees:
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0017C3C (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?GenerateUmdFileName@@YAJQEAGPEBG1@Z @ 0x1C0200AEC (-GenerateUmdFileName@@YAJQEAGPEBG1@Z.c)
 */

__int64 __fastcall TranslateUmdFileNameToVm(unsigned __int16 *a1, unsigned int a2, unsigned int *a3)
{
  wchar_t *v6; // rax
  const unsigned __int16 *v7; // rdx
  int UmdFileName; // ebx
  __int64 v9; // rdx
  unsigned __int16 *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int16 v15[4]; // [rsp+20h] [rbp-248h] BYREF
  size_t v16[65]; // [rsp+28h] [rbp-240h] BYREF

  a1[a2 - 1] = 0;
  _wcslwr(a1);
  v6 = wcsstr(a1, L"\\filerepository\\");
  UmdFileName = 0;
  if ( v6 )
  {
    UmdFileName = GenerateUmdFileName(v15, v7, (size_t *)v6);
    if ( UmdFileName < 0 )
      goto LABEL_9;
    UmdFileName = RtlStringCbCopyW(a1, 2LL * a2, v16);
    if ( UmdFileName < 0 )
    {
      if ( a3 )
      {
        UmdFileName = -2147483643;
        v10 = v15;
        v12 = -1LL;
        do
          ++v12;
        while ( v15[v12] );
        *a3 = 2 * v12 + 2;
      }
      if ( UmdFileName < 0 )
      {
LABEL_9:
        v13 = WdLogNewEntry5_WdWarning(v10, v9, v11);
        *(_QWORD *)(v13 + 24) = UmdFileName;
        WdLogEvent5_WdWarning(v13);
      }
    }
  }
  return (unsigned int)UmdFileName;
}
