/*
 * XREFs of ?CsExitInitiatedWnfCallbackInternal@DXGGLOBAL@@QEAAXE_J@Z @ 0x1C020E464
 * Callers:
 *     ?CsExitInitiatedWnfCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x1C020E340 (-CsExitInitiatedWnfCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_I.c)
 * Callees:
 *     _TlgWrite @ 0x1C0001F48 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0005A7C (_TlgKeywordOn.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z @ 0x1C002EF5C (-SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z.c)
 *     ?ReleaseComponentReferencesHelper@DXGGLOBAL@@QEAAXXZ @ 0x1C0211424 (-ReleaseComponentReferencesHelper@DXGGLOBAL@@QEAAXXZ.c)
 */

void __fastcall DXGGLOBAL::CsExitInitiatedWnfCallbackInternal(DXGGLOBAL *this, char a2, __int64 a3)
{
  char v5; // r15
  __int64 v6; // rdx
  signed __int64 v7; // rcx
  __int64 v8; // r8
  DXGGLOBAL *v9; // r14
  DXGGLOBAL *v10; // rbx
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  __int64 v13; // rsi
  LARGE_INTEGER v14; // rax
  LARGE_INTEGER v15; // r8
  __int64 v16; // rcx
  LONGLONG v17; // rdx
  const GUID *v18; // r9
  char v19; // dl
  unsigned int v20; // esi
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // [rsp+38h] [rbp-D0h] BYREF
  int v24; // [rsp+3Ch] [rbp-CCh] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v26[16]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v27[2]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v28[8]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v29[32]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v30[40]; // [rsp+90h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B8h] [rbp-50h] BYREF
  int *v32; // [rsp+D8h] [rbp-30h]
  int v33; // [rsp+E0h] [rbp-28h]
  int v34; // [rsp+E4h] [rbp-24h]
  int *v35; // [rsp+E8h] [rbp-20h]
  int v36; // [rsp+F0h] [rbp-18h]
  int v37; // [rsp+F4h] [rbp-14h]
  _QWORD *v38; // [rsp+F8h] [rbp-10h]
  int v39; // [rsp+100h] [rbp-8h]
  int v40; // [rsp+104h] [rbp-4h]

  if ( !_InterlockedCompareExchange((volatile signed __int32 *)this + 424, 1, 0) && *((_BYTE *)this + 1528) != a2 )
  {
    *((_BYTE *)this + 1528) = a2;
    v5 = 0;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v26, (DXGGLOBAL *)((char *)this + 408), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v26);
    v9 = (DXGGLOBAL *)*((_QWORD *)this + 56);
    while ( v9 != (DXGGLOBAL *)((char *)this + 448) && v9 )
    {
      v10 = v9;
      v9 = *(DXGGLOBAL **)v9;
      if ( *((_QWORD *)v10 + 316) && *((_DWORD *)v10 + 679) && *((_DWORD *)v10 + 676) )
      {
        _m_prefetchw((char *)v10 + 24);
        v11 = *((_QWORD *)v10 + 3);
        while ( v11 )
        {
          v7 = v11 + 1;
          v12 = v11;
          v11 = _InterlockedCompareExchange64((volatile signed __int64 *)v10 + 3, v11 + 1, v11);
          if ( v12 == v11 )
          {
            LOBYTE(v11) = 1;
            break;
          }
        }
        if ( (_BYTE)v11 )
        {
          COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v28, v10, 0LL);
          DXGADAPTER::ReleaseReference(v10);
          v13 = (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v28);
          PerformanceFrequency.QuadPart = 0LL;
          v14 = KeQueryPerformanceCounter(&PerformanceFrequency);
          v23 = *((_DWORD *)v10 + 71);
          v16 = *((unsigned int *)v10 + 72);
          v17 = 1000000 * (v14.QuadPart - a3) % PerformanceFrequency.QuadPart;
          v27[0] = 1000000 * (v14.QuadPart - a3) / PerformanceFrequency.QuadPart;
          v24 = v16;
          if ( dword_1C008D838 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C008D838, 0x400000000004uLL) )
          {
            v34 = 0;
            v37 = 0;
            v40 = 0;
            v32 = &v23;
            v35 = &v24;
            v38 = v27;
            v33 = 4;
            v36 = 4;
            v39 = 8;
            TlgWrite((TraceLoggingHProvider)&dword_1C008D838, &unk_1C006AD9D, 0LL, v18, 5u, &pData);
          }
          if ( (int)v13 < 0 )
          {
            v21 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdWarning)(
                    v16,
                    v17,
                    (LARGE_INTEGER)v15.QuadPart);
            *(_QWORD *)(v21 + 24) = v10;
            *(_QWORD *)(v21 + 32) = v13;
            WdLogEvent5_WdWarning(v21);
          }
          else
          {
            v19 = 0;
            v20 = 0;
            if ( *((_DWORD *)v10 + 676) )
            {
              do
              {
                if ( !*(_DWORD *)(520LL * v20 + *((_QWORD *)v10 + 320) + 208) )
                {
                  DXGADAPTER::SetPowerComponentActiveCBInternal(v10, v20, 1u, 0);
                  v19 = 1;
                }
                ++v20;
              }
              while ( v20 < *((_DWORD *)v10 + 676) );
              if ( v19 )
              {
                v5 = 1;
                _InterlockedAdd((volatile signed __int32 *)v10 + 810, 1u);
              }
            }
          }
          COREACCESS::~COREACCESS((COREACCESS *)v30);
          COREACCESS::~COREACCESS((COREACCESS *)v29);
        }
        else
        {
          v22 = WdLogNewEntry5_WdWarning(v7, v6, v8);
          *(_QWORD *)(v22 + 24) = v10;
          WdLogEvent5_WdWarning(v22);
        }
      }
    }
    if ( v5 )
    {
      v27[1] = -10000000LL;
      if ( KeSetTimer((PKTIMER)this + 24, (LARGE_INTEGER)-10000000LL, (PKDPC)this + 25) )
      {
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v26);
        DXGGLOBAL::ReleaseComponentReferencesHelper(this);
      }
    }
    _InterlockedExchange((volatile __int32 *)this + 424, 0);
    if ( v26[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v26);
  }
}
