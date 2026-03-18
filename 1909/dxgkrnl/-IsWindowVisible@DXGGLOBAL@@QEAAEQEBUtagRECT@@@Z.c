/*
 * XREFs of ?IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z @ 0x1C0147368
 * Callers:
 *     DxgkCheckOcclusion @ 0x1C01471A0 (DxgkCheckOcclusion.c)
 *     ?CheckOcclusion@DXGPRESENT@@QEAAEXZ @ 0x1C02593C0 (-CheckOcclusion@DXGPRESENT@@QEAAEXZ.c)
 * Callees:
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000700C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007068 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BE8C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?IsWindowVisible@ADAPTER_DISPLAY@@QEBAJQEBUtagRECT@@@Z @ 0x1C01474EC (-IsWindowVisible@ADAPTER_DISPLAY@@QEBAJQEBUtagRECT@@@Z.c)
 */

char __fastcall DXGGLOBAL::IsWindowVisible(DXGGLOBAL *this, const struct tagRECT *const a2)
{
  _QWORD **v3; // r14
  _QWORD *v4; // rsi
  char v5; // di
  _QWORD *v6; // rbx
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  int IsWindowVisible; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v13; // rax
  _QWORD v14[2]; // [rsp+28h] [rbp-89h] BYREF
  char v15; // [rsp+38h] [rbp-79h]
  _BYTE v16[24]; // [rsp+40h] [rbp-71h] BYREF
  _BYTE v17[8]; // [rsp+58h] [rbp-59h] BYREF
  _BYTE v18[64]; // [rsp+60h] [rbp-51h] BYREF
  _BYTE v19[72]; // [rsp+A0h] [rbp-11h] BYREF

  v3 = (_QWORD **)((char *)this + 448);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, (DXGGLOBAL *)((char *)this + 408), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
  v4 = *v3;
  v5 = 1;
  while ( 1 )
  {
    do
    {
      if ( v4 == v3 || !v4 )
      {
        v5 = 0;
        goto LABEL_19;
      }
      v6 = v4;
      v4 = (_QWORD *)*v4;
      _m_prefetchw(v6 + 3);
      v7 = v6[3];
      while ( v7 )
      {
        v8 = v7;
        v7 = _InterlockedCompareExchange64(v6 + 3, v7 + 1, v7);
        if ( v8 == v7 )
        {
          LOBYTE(v7) = 1;
          break;
        }
      }
    }
    while ( !(_BYTE)v7 );
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v17, (struct DXGADAPTER *const)v6, 0LL);
    DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v6);
    if ( v6[319] )
      break;
LABEL_13:
    COREACCESS::~COREACCESS((COREACCESS *)v19);
    COREACCESS::~COREACCESS((COREACCESS *)v18);
  }
  v14[1] = v6;
  v15 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v14);
  if ( *((_DWORD *)v6 + 44) != 1 )
  {
LABEL_11:
    if ( v15 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v14);
    goto LABEL_13;
  }
  IsWindowVisible = ADAPTER_DISPLAY::IsWindowVisible((ADAPTER_DISPLAY *)v6[319], a2);
  if ( IsWindowVisible != -1073741823 )
  {
    if ( !IsWindowVisible )
      goto LABEL_16;
    if ( IsWindowVisible != 261 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v11, v10);
      *(_QWORD *)(v13 + 24) = 3110LL;
      WdLogEvent5_WdAssertion(v13);
    }
    goto LABEL_11;
  }
  v5 = 0;
LABEL_16:
  if ( v15 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v14);
  COREACCESS::~COREACCESS((COREACCESS *)v19);
  COREACCESS::~COREACCESS((COREACCESS *)v18);
LABEL_19:
  if ( v16[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
  return v5;
}
