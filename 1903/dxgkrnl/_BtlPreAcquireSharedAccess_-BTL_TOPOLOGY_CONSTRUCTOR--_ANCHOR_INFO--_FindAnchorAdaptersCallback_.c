/*
 * XREFs of _BtlPreAcquireSharedAccess_&BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_FindAnchorAdaptersCallback_0_1_ @ 0x1C00DF340
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C00062E4 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006DA8 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006E04 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x1C004B918 (DxgkIsMSBDDFallbackEnabled.c)
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00DF4A8 (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_FindAnchorAdaptersCallback_0_1_(
        struct DXGADAPTER *a1,
        void *a2)
{
  __int64 v4; // r8
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int AnchorAdaptersCallback; // ebx
  _QWORD *v9; // rax
  struct DXGADAPTER *v11; // rcx
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
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v15, a1, 0LL);
  v5 = COREADAPTERACCESS::AcquireShared((__int64)v15, 0xFFFFFFFFLL, v4);
  AnchorAdaptersCallback = v5;
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
    AnchorAdaptersCallback = 0;
    goto LABEL_5;
  }
  AnchorAdaptersCallback = BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_FindAnchorAdaptersCallback(v11, a2);
LABEL_5:
  COREACCESS::~COREACCESS((COREACCESS *)v17);
  COREACCESS::~COREACCESS((COREACCESS *)v16);
  if ( v14 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v12);
  return AnchorAdaptersCallback;
}
