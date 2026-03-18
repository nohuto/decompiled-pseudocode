/*
 * XREFs of ?CsExitInitiatedWnfCallbackInternal@DXGGLOBAL@@QEAAXE_J@Z @ 0x1C02418A4
 * Callers:
 *     ?CsExitInitiatedWnfCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x1C0241780 (-CsExitInitiatedWnfCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_I.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00035A0 (_TlgKeywordOn.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BC9C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     _TlgWrite @ 0x1C0019EC0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z @ 0x1C0034758 (-SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z.c)
 *     ?ReleaseComponentReferencesHelper@DXGGLOBAL@@QEAAXXZ @ 0x1C0245288 (-ReleaseComponentReferencesHelper@DXGGLOBAL@@QEAAXXZ.c)
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
  int v13; // eax
  __int64 v14; // rsi
  LARGE_INTEGER v15; // rax
  LARGE_INTEGER v16; // r8
  __int64 v17; // rcx
  LONGLONG v18; // rdx
  const GUID *v19; // r9
  char v20; // dl
  unsigned int v21; // esi
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // [rsp+38h] [rbp-D0h] BYREF
  int v25; // [rsp+3Ch] [rbp-CCh] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v27[16]; // [rsp+48h] [rbp-C0h] BYREF
  LONGLONG v28; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v29[8]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v30[64]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v31[72]; // [rsp+B0h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F8h] [rbp-10h] BYREF
  int *v33; // [rsp+118h] [rbp+10h]
  int v34; // [rsp+120h] [rbp+18h]
  int v35; // [rsp+124h] [rbp+1Ch]
  int *v36; // [rsp+128h] [rbp+20h]
  int v37; // [rsp+130h] [rbp+28h]
  int v38; // [rsp+134h] [rbp+2Ch]
  LONGLONG *v39; // [rsp+138h] [rbp+30h]
  int v40; // [rsp+140h] [rbp+38h]
  int v41; // [rsp+144h] [rbp+3Ch]

  if ( !_InterlockedCompareExchange((volatile signed __int32 *)this + 416, 1, 0) && *((_BYTE *)this + 1496) != a2 )
  {
    *((_BYTE *)this + 1496) = a2;
    v5 = 0;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v27, (DXGGLOBAL *)((char *)this + 408), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v27);
    v9 = (DXGGLOBAL *)*((_QWORD *)this + 56);
    while ( v9 != (DXGGLOBAL *)((char *)this + 448) && v9 )
    {
      v10 = v9;
      v9 = *(DXGGLOBAL **)v9;
      if ( *((_QWORD *)v10 + 320) && *((_DWORD *)v10 + 687) && *((_DWORD *)v10 + 684) )
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
          COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v29, v10, 0LL);
          DXGADAPTER::ReleaseReferenceNoTracking(v10);
          v13 = COREADAPTERACCESS::AcquireShared((__int64)v29, 0xFFFFFFFFLL, 0LL);
          PerformanceFrequency.QuadPart = 0LL;
          v14 = v13;
          v15 = KeQueryPerformanceCounter(&PerformanceFrequency);
          v24 = *((_DWORD *)v10 + 71);
          v17 = *((unsigned int *)v10 + 72);
          v18 = 1000000 * (v15.QuadPart - a3) % PerformanceFrequency.QuadPart;
          v28 = 1000000 * (v15.QuadPart - a3) / PerformanceFrequency.QuadPart;
          v25 = v17;
          if ( dword_1C00A1888 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C00A1888, 0x400000000004uLL) )
          {
            v35 = 0;
            v38 = 0;
            v41 = 0;
            v33 = &v24;
            v36 = &v25;
            v39 = &v28;
            v34 = 4;
            v37 = 4;
            v40 = 8;
            TlgWrite((TraceLoggingHProvider)&dword_1C00A1888, &unk_1C00737C6, 0LL, v19, 5u, &pData);
          }
          if ( (int)v14 < 0 )
          {
            v22 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdWarning)(
                    v17,
                    v18,
                    (LARGE_INTEGER)v16.QuadPart);
            *(_QWORD *)(v22 + 24) = v10;
            *(_QWORD *)(v22 + 32) = v14;
            WdLogEvent5_WdWarning(v22);
          }
          else
          {
            v20 = 0;
            v21 = 0;
            if ( *((_DWORD *)v10 + 684) )
            {
              do
              {
                if ( !*(_DWORD *)(520LL * v21 + *((_QWORD *)v10 + 324) + 208) )
                {
                  DXGADAPTER::SetPowerComponentActiveCBInternal(v10, v21, 1u, 0);
                  v20 = 1;
                }
                ++v21;
              }
              while ( v21 < *((_DWORD *)v10 + 684) );
              if ( v20 )
              {
                v5 = 1;
                _InterlockedAdd((volatile signed __int32 *)v10 + 818, 1u);
              }
            }
          }
          COREACCESS::~COREACCESS((COREACCESS *)v31);
          COREACCESS::~COREACCESS((COREACCESS *)v30);
        }
        else
        {
          v23 = WdLogNewEntry5_WdWarning(v7, v6, v8);
          *(_QWORD *)(v23 + 24) = v10;
          WdLogEvent5_WdWarning(v23);
        }
      }
    }
    if ( v5 && KeSetTimer((PKTIMER)((char *)this + 1504), (LARGE_INTEGER)-10000000LL, (PKDPC)((char *)this + 1568)) )
    {
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v27);
      DXGGLOBAL::ReleaseComponentReferencesHelper(this);
    }
    _InterlockedExchange((volatile __int32 *)this + 416, 0);
    if ( v27[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v27);
  }
}
