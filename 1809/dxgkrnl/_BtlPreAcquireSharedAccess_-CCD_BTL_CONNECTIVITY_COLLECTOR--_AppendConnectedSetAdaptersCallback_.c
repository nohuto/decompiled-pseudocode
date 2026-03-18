/*
 * XREFs of _BtlPreAcquireSharedAccess_&CCD_BTL_CONNECTIVITY_COLLECTOR::_AppendConnectedSetAdaptersCallback_0_1_ @ 0x1C00BF370
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C00040B0 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x1C004527C (DxgkIsMSBDDFallbackEnabled.c)
 *     ?DmmAppendCcdConnectedSetForAdapter@@YAJQEAXPEAU_UNICODE_STRING@@@Z @ 0x1C00C30F0 (-DmmAppendCcdConnectedSetForAdapter@@YAJQEAXPEAU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__CCD_BTL_CONNECTIVITY_COLLECTOR::_AppendConnectedSetAdaptersCallback_0_1_(
        struct DXGADAPTER *a1,
        __int64 a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int appended; // ebx
  _QWORD *v10; // rax
  void *v12; // rcx
  _BYTE v13[8]; // [rsp+20h] [rbp-78h] BYREF
  struct DXGADAPTER *v14; // [rsp+28h] [rbp-70h]
  char v15; // [rsp+30h] [rbp-68h]
  _BYTE v16[8]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v17[32]; // [rsp+48h] [rbp-50h] BYREF
  _BYTE v18[40]; // [rsp+68h] [rbp-30h] BYREF

  v14 = a1;
  v15 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v13);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v13);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v16, a1, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v16);
  appended = v4;
  if ( v4 < 0 )
  {
    if ( v4 != -1073741130 )
      goto LABEL_5;
    v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
    v10[3] = a1;
    v10[4] = *((int *)a1 + 70);
    v10[5] = *((unsigned int *)a1 + 69);
    v10[6] = a2;
    goto LABEL_4;
  }
  if ( *((_BYTE *)a1 + 2429) || DXGADAPTER::IsBddFallbackDriver(a1) && !DxgkIsMSBDDFallbackEnabled() )
  {
LABEL_4:
    appended = 0;
    goto LABEL_5;
  }
  appended = DmmAppendCcdConnectedSetForAdapter(v12, (struct _UNICODE_STRING *)(a2 + 8));
LABEL_5:
  COREACCESS::~COREACCESS((COREACCESS *)v18);
  COREACCESS::~COREACCESS((COREACCESS *)v17);
  if ( v15 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v13);
  return appended;
}
