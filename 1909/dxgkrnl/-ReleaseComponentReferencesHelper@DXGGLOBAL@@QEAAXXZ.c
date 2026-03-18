/*
 * XREFs of ?ReleaseComponentReferencesHelper@DXGGLOBAL@@QEAAXXZ @ 0x1C0245908
 * Callers:
 *     ?CsExitInitiatedReleaseComponentReferencesPassiveLevel@@YAXPEAX@Z @ 0x1C0241DE0 (-CsExitInitiatedReleaseComponentReferencesPassiveLevel@@YAXPEAX@Z.c)
 *     ?CsExitInitiatedWnfCallbackInternal@DXGGLOBAL@@QEAAXE_J@Z @ 0x1C0241F24 (-CsExitInitiatedWnfCallbackInternal@DXGGLOBAL@@QEAAXE_J@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BE8C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z @ 0x1C0034E10 (-SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z.c)
 */

void __fastcall DXGGLOBAL::ReleaseComponentReferencesHelper(DXGGLOBAL *this)
{
  volatile signed __int32 **v1; // r14
  __int64 v2; // rdx
  signed __int64 v3; // rcx
  __int64 v4; // r8
  volatile signed __int32 *v5; // rdi
  volatile signed __int32 *v6; // rbx
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rsi
  unsigned int i; // esi
  __int64 v15; // rax
  __int64 v16; // rax
  _BYTE v17[16]; // [rsp+20h] [rbp-B8h] BYREF
  char v18[8]; // [rsp+30h] [rbp-A8h] BYREF
  char v19[64]; // [rsp+38h] [rbp-A0h] BYREF
  char v20[72]; // [rsp+78h] [rbp-60h] BYREF

  v1 = (volatile signed __int32 **)((char *)this + 448);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, (DXGGLOBAL *)((char *)this + 408), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
  v5 = *v1;
  while ( v5 != (volatile signed __int32 *)v1 && v5 )
  {
    v6 = v5;
    v5 = *(volatile signed __int32 **)v5;
    if ( *((_DWORD *)v6 + 818) )
    {
      _m_prefetchw((const void *)(v6 + 6));
      v7 = *((_QWORD *)v6 + 3);
      while ( v7 )
      {
        v3 = v7 + 1;
        v8 = v7;
        v7 = _InterlockedCompareExchange64((volatile signed __int64 *)v6 + 3, v7 + 1, v7);
        if ( v8 == v7 )
        {
          LOBYTE(v7) = 1;
          break;
        }
      }
      if ( (_BYTE)v7 )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v18, (struct DXGADAPTER *const)v6, 0LL);
        DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v6);
        v9 = COREADAPTERACCESS::AcquireShared((__int64)v18, 0xFFFFFFFFLL, 0LL);
        v13 = v9;
        if ( v9 < 0 )
        {
          v15 = WdLogNewEntry5_WdWarning(v11, v10, v12);
          *(_QWORD *)(v15 + 24) = v6;
          *(_QWORD *)(v15 + 32) = v13;
          WdLogEvent5_WdWarning(v15);
        }
        else
        {
          for ( i = 0; i < *((_DWORD *)v6 + 684); ++i )
          {
            if ( !*(_DWORD *)(520LL * i + *((_QWORD *)v6 + 324) + 208) )
              DXGADAPTER::SetPowerComponentIdleCBInternal((DXGADAPTER *)v6, i, 0);
          }
          _InterlockedDecrement(v6 + 818);
        }
        COREACCESS::~COREACCESS((COREACCESS *)v20);
        COREACCESS::~COREACCESS((COREACCESS *)v19);
      }
      else
      {
        v16 = WdLogNewEntry5_WdWarning(v3, v2, v4);
        *(_QWORD *)(v16 + 24) = v6;
        WdLogEvent5_WdWarning(v16);
      }
    }
  }
  if ( v17[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
}
