/*
 * XREFs of ?ReleaseComponentReferencesHelper@DXGGLOBAL@@QEAAXXZ @ 0x1C0211424
 * Callers:
 *     ?CsExitInitiatedReleaseComponentReferencesPassiveLevel@@YAXPEAX@Z @ 0x1C020E320 (-CsExitInitiatedReleaseComponentReferencesPassiveLevel@@YAXPEAX@Z.c)
 *     ?CsExitInitiatedWnfCallbackInternal@DXGGLOBAL@@QEAAXE_J@Z @ 0x1C020E464 (-CsExitInitiatedWnfCallbackInternal@DXGGLOBAL@@QEAAXE_J@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z @ 0x1C002F4A4 (-SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z.c)
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
  _BYTE v17[16]; // [rsp+20h] [rbp-68h] BYREF
  char v18[8]; // [rsp+30h] [rbp-58h] BYREF
  char v19[32]; // [rsp+38h] [rbp-50h] BYREF
  char v20[40]; // [rsp+58h] [rbp-30h] BYREF

  v1 = (volatile signed __int32 **)((char *)this + 448);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, (DXGGLOBAL *)((char *)this + 408), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
  v5 = *v1;
  while ( v5 != (volatile signed __int32 *)v1 && v5 )
  {
    v6 = v5;
    v5 = *(volatile signed __int32 **)v5;
    if ( *((_DWORD *)v6 + 810) )
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
        DXGADAPTER::ReleaseReference((DXGADAPTER *)v6);
        v9 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v18);
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
          for ( i = 0; i < *((_DWORD *)v6 + 676); ++i )
          {
            if ( !*(_DWORD *)(520LL * i + *((_QWORD *)v6 + 320) + 208) )
              DXGADAPTER::SetPowerComponentIdleCBInternal((DXGADAPTER *)v6, i, 0);
          }
          _InterlockedDecrement(v6 + 810);
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
