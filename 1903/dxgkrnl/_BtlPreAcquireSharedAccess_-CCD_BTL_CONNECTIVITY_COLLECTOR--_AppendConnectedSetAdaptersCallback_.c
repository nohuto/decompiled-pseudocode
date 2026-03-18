/*
 * XREFs of _BtlPreAcquireSharedAccess_&CCD_BTL_CONNECTIVITY_COLLECTOR::_AppendConnectedSetAdaptersCallback_0_1_ @ 0x1C00EE430
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C00062E4 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006DA8 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006E04 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C000BDDC (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x1C004B918 (DxgkIsMSBDDFallbackEnabled.c)
 *     ?DmmAppendCcdConnectedSetForAdapter@@YAJQEAXPEAU_UNICODE_STRING@@@Z @ 0x1C00D04B8 (-DmmAppendCcdConnectedSetForAdapter@@YAJQEAXPEAU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__CCD_BTL_CONNECTIVITY_COLLECTOR::_AppendConnectedSetAdaptersCallback_0_1_(
        struct DXGADAPTER *a1,
        __int64 a2)
{
  struct DXGADAPTER *const v4; // rdx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int appended; // ebx
  _QWORD *v9; // rax
  DXGADAPTER *v11; // rcx
  _BYTE v12[8]; // [rsp+20h] [rbp-C8h] BYREF
  struct DXGADAPTER *v13; // [rsp+28h] [rbp-C0h]
  char v14; // [rsp+30h] [rbp-B8h]
  _BYTE v15[8]; // [rsp+40h] [rbp-A8h] BYREF
  _BYTE v16[64]; // [rsp+48h] [rbp-A0h] BYREF
  _BYTE v17[72]; // [rsp+88h] [rbp-60h] BYREF

  v13 = a1;
  v14 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v12);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v12);
  COREACCESS::COREACCESS((COREACCESS *)v16, a1);
  COREACCESS::COREACCESS((COREACCESS *)v17, v4);
  v5 = COREADAPTERACCESS::AcquireShared((__int64)v15, 0xFFFFFFFFLL, 0LL);
  appended = v5;
  if ( v5 < 0 )
  {
    if ( v5 != -1073741130 )
      goto LABEL_5;
    v9 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6);
    v9[3] = a1;
    v9[4] = *((int *)a1 + 70);
    v9[5] = *((unsigned int *)a1 + 69);
    v9[6] = a2;
    goto LABEL_4;
  }
  if ( *((_BYTE *)a1 + 2465) || DXGADAPTER::IsBddFallbackDriver(a1) && !DxgkIsMSBDDFallbackEnabled() )
  {
LABEL_4:
    appended = 0;
    goto LABEL_5;
  }
  appended = DmmAppendCcdConnectedSetForAdapter(v11, (struct _UNICODE_STRING *)(a2 + 8));
LABEL_5:
  COREACCESS::~COREACCESS((COREACCESS *)v17);
  COREACCESS::~COREACCESS((COREACCESS *)v16);
  if ( v14 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v12);
  return appended;
}
