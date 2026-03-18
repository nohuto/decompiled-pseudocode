/*
 * XREFs of ?CheckAndNotifyAboutLongFrames@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180077970
 * Callers:
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x180076EF8 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1800B3880 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800B539C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::CheckAndNotifyAboutLongFrames(CPartitionVerticalBlankScheduler *this)
{
  __int64 v1; // rax
  __int64 v3; // r8
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rtt
  unsigned __int64 v6; // r9
  unsigned int v7; // edx
  __int64 v8; // rax
  signed int LastError; // eax
  __int64 v10; // r8
  const struct _TlgProvider_t *v11; // rcx
  int v12; // eax
  unsigned int v13; // [rsp+30h] [rbp-79h] BYREF
  DWORD CurrentProcessId; // [rsp+34h] [rbp-75h] BYREF
  DWORD pSessionId; // [rsp+38h] [rbp-71h] BYREF
  int v16; // [rsp+3Ch] [rbp-6Dh] BYREF
  __int64 v17; // [rsp+40h] [rbp-69h] BYREF
  unsigned __int64 v18; // [rsp+48h] [rbp-61h] BYREF
  LONGLONG v19; // [rsp+50h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-49h] BYREF
  DWORD *p_CurrentProcessId; // [rsp+80h] [rbp-29h]
  int v22; // [rsp+88h] [rbp-21h]
  int v23; // [rsp+8Ch] [rbp-1Dh]
  DWORD *p_pSessionId; // [rsp+90h] [rbp-19h]
  int v25; // [rsp+98h] [rbp-11h]
  int v26; // [rsp+9Ch] [rbp-Dh]
  __int64 *v27; // [rsp+A0h] [rbp-9h]
  int v28; // [rsp+A8h] [rbp-1h]
  int v29; // [rsp+ACh] [rbp+3h]
  unsigned int *v30; // [rsp+B0h] [rbp+7h]
  int v31; // [rsp+B8h] [rbp+Fh]
  int v32; // [rsp+BCh] [rbp+13h]
  __int64 *v33; // [rsp+C0h] [rbp+17h]
  int v34; // [rsp+C8h] [rbp+1Fh]
  int v35; // [rsp+CCh] [rbp+23h]
  int *v36; // [rsp+D0h] [rbp+27h]
  int v37; // [rsp+D8h] [rbp+2Fh]
  int v38; // [rsp+DCh] [rbp+33h]
  LONGLONG *v39; // [rsp+E0h] [rbp+37h]
  int v40; // [rsp+E8h] [rbp+3Fh]
  int v41; // [rsp+ECh] [rbp+43h]
  void *retaddr; // [rsp+108h] [rbp+5Fh]

  v1 = *((unsigned int *)this + 6473);
  if ( (_DWORD)v1 != -1 )
  {
    v3 = 1608 * v1;
    v17 = CCommonRegistryData::m_dwSceneVisualCutoffThresholdInMS;
    v5 = *((_QWORD *)this + 201 * v1 + 61) - *((_QWORD *)this + 201 * v1 + 58);
    v4 = v5 / g_qpcFrequencyPerMillisecond.QuadPart;
    v19 = v5 / g_qpcFrequencyPerMillisecond.QuadPart;
    v6 = *(_QWORD *)((char *)this + v3 + 176);
    v18 = v6;
    if ( *((_BYTE *)this + v3 + 1213) && v4 > CCommonRegistryData::m_dwSceneVisualCutoffThresholdInMS )
    {
      v7 = ++*((_DWORD *)this + 8916) % CCommonRegistryData::m_dwSceneVisualCutoffCountOfConsecutiveIncidentsAllowed;
      v13 = CCommonRegistryData::m_dwSceneVisualCutoffCountOfConsecutiveIncidentsAllowed;
      if ( !v7 )
      {
        v8 = *((_QWORD *)this + 8);
        if ( v6 > *(_QWORD *)(v8 + 136) )
        {
          *(_QWORD *)(v8 + 136) = v6;
          CurrentProcessId = GetCurrentProcessId();
          if ( !ProcessIdToSessionId(CurrentProcessId, &pSessionId) )
          {
            LastError = GetLastError();
            if ( LastError > 0 )
              LastError = (unsigned __int16)LastError | 0x80070000;
            if ( LastError >= 0 )
              LastError = -2003304445;
            ModuleFailFastForHRESULT((unsigned int)LastError, retaddr, v10);
          }
          if ( dword_1803371D0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1803371D0, 0x400000000000uLL) )
          {
            v23 = 0;
            v26 = 0;
            v29 = 0;
            v32 = 0;
            v35 = 0;
            v38 = 0;
            p_CurrentProcessId = &CurrentProcessId;
            p_pSessionId = &pSessionId;
            v27 = &v17;
            v30 = &v13;
            v33 = (__int64 *)&v18;
            v12 = *((_DWORD *)this + 8916) / v13;
            v41 = 0;
            v16 = v12;
            v36 = &v16;
            v39 = &v19;
            v22 = 4;
            v25 = 4;
            v28 = 8;
            v31 = 4;
            v34 = 8;
            v37 = 4;
            v40 = 8;
            TlgWrite(v11, &unk_1802D74A7, 0LL, 0LL, 9u, &pData);
          }
        }
      }
    }
    else
    {
      *((_DWORD *)this + 8916) = 0;
    }
  }
}
