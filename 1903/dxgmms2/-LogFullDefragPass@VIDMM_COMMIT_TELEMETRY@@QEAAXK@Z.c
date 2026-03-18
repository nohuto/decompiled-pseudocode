/*
 * XREFs of ?LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z @ 0x1C00C4740
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0087740 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018060 (__security_check_cookie.c)
 *     _TlgWrite @ 0x1C0029C60 (_TlgWrite.c)
 *     ?LogAllocationInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_ALLOC@@_NPEAU_GUID@@@Z @ 0x1C00C429C (-LogAllocationInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_ALLOC@@_NPEAU_GUID@@@Z.c)
 *     ?LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z @ 0x1C00C4B04 (-LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z.c)
 *     ?LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@Z @ 0x1C00C5078 (-LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@.c)
 */

void __fastcall VIDMM_COMMIT_TELEMETRY::LogFullDefragPass(VIDMM_COMMIT_TELEMETRY *this, int a2)
{
  const GUID *v4; // r9
  __int64 v5; // rax
  unsigned __int16 *v6; // rax
  int v7; // ecx
  __int64 v8; // rax
  int v9; // [rsp+30h] [rbp-39h] BYREF
  int v10; // [rsp+34h] [rbp-35h] BYREF
  GUID ActivityId; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  int *v13; // [rsp+70h] [rbp+7h]
  int v14; // [rsp+78h] [rbp+Fh]
  int v15; // [rsp+7Ch] [rbp+13h]
  _DWORD *v16; // [rsp+80h] [rbp+17h]
  int v17; // [rsp+88h] [rbp+1Fh]
  int v18; // [rsp+8Ch] [rbp+23h]
  __int64 v19; // [rsp+90h] [rbp+27h]
  _DWORD v20[2]; // [rsp+98h] [rbp+2Fh] BYREF
  int *v21; // [rsp+A0h] [rbp+37h]
  int v22; // [rsp+A8h] [rbp+3Fh]
  int v23; // [rsp+ACh] [rbp+43h]

  if ( *((_BYTE *)this + 24)
    && (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 1) + 256LL)) <= 5 )
  {
    *(_QWORD *)&ActivityId.Data1 = 0LL;
    *(_QWORD *)ActivityId.Data4 = 0LL;
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)hProvider > 5
      && (qword_1C004E058 & 0x200000000000LL) != 0
      && (qword_1C004E060 & 0x200000000000LL) == qword_1C004E060 )
    {
      v15 = 0;
      v13 = &v9;
      v5 = *(_QWORD *)this;
      v9 = 1;
      v14 = 4;
      v6 = *(unsigned __int16 **)(*(_QWORD *)(v5 + 24) + 1408LL);
      v18 = 0;
      v16 = v20;
      v17 = 2;
      v7 = *v6;
      v8 = *((_QWORD *)v6 + 1);
      v20[1] = 0;
      v23 = 0;
      v19 = v8;
      v21 = &v10;
      v20[0] = v7;
      v10 = a2;
      v22 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C00409C3, &ActivityId, v4, 6u, &pData);
    }
    VIDMM_COMMIT_TELEMETRY::LogAllocationInformation((LPCGUID)this, *((__int64 ***)this + 2), 0, &ActivityId);
    VIDMM_COMMIT_TELEMETRY::LogMemoryState(this, &ActivityId);
    VIDMM_COMMIT_TELEMETRY::LogProcessInformation(
      this,
      *(struct VIDMM_PROCESS_ADAPTER_INFO **)(*((_QWORD *)this + 1) + 16LL),
      &ActivityId);
  }
}
