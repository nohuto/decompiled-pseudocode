/*
 * XREFs of ?ActivateStoringInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJH@Z @ 0x1C01C08B4
 * Callers:
 *     DxgkEscape @ 0x1C01124E0 (DxgkEscape.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E42C (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0012060 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::ActivateStoringInvalidModesForTestPurposes(ADAPTER_DISPLAY *this, int a2)
{
  void **v4; // rcx
  unsigned int v5; // edi
  __int64 v6; // rax
  SIZE_T v7; // rax
  PVOID v8; // rax
  __int64 v9; // rax
  unsigned int i; // ebx
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, (ADAPTER_DISPLAY *)((char *)this + 136), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  v4 = (void **)*((_QWORD *)this + 22);
  v5 = 0;
  if ( a2 )
  {
    if ( v4 )
    {
      v6 = WdLogNewEntry5_WdError(v4);
      *(_QWORD *)(v6 + 24) = 7916LL;
      WdLogEvent5_WdError(v6);
      v5 = -1073740008;
    }
    else
    {
      v7 = 24LL * *((unsigned int *)this + 20);
      if ( !is_mul_ok(*((unsigned int *)this + 20), 0x18uLL) )
        v7 = -1LL;
      v8 = operator new[](v7, 0x4B677844u, PagedPool);
      *((_QWORD *)this + 22) = v8;
      if ( v8 )
      {
        memset(v8, 0, 24LL * *((unsigned int *)this + 20));
      }
      else
      {
        v9 = WdLogNewEntry5_WdLowResource(0LL);
        *(_QWORD *)(v9 + 24) = this;
        WdLogEvent5_WdLowResource(v9);
        v5 = -1073741801;
      }
    }
  }
  else if ( v4 )
  {
    for ( i = 0; i < *((_DWORD *)this + 20); ++i )
    {
      v4 = (void **)*((_QWORD *)this + 22);
      if ( v4[3 * i + 1] )
      {
        operator delete[](v4[3 * i + 1]);
        *(_QWORD *)(*((_QWORD *)this + 22) + 24LL * i + 8) = 0LL;
        v4 = (void **)*((_QWORD *)this + 22);
      }
    }
    operator delete[](v4);
    *((_QWORD *)this + 22) = 0LL;
  }
  DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v12);
  return v5;
}
