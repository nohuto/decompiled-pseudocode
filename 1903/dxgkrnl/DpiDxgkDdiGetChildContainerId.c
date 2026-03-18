/*
 * XREFs of DpiDxgkDdiGetChildContainerId @ 0x1C0171B28
 * Callers:
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1C0171834 (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqq @ 0x1C00356E4 (McTemplateK0pqq.c)
 */

__int64 __fastcall DpiDxgkDdiGetChildContainerId(__int64 a1, __int64 a2, const GUID *a3, __int64 a4)
{
  __int64 v5; // rbx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  const GUID *v11; // r8
  __int64 v12; // rsi
  _QWORD *v13; // rax
  __int64 v15; // [rsp+20h] [rbp-18h]
  int v16; // [rsp+20h] [rbp-18h]
  __int64 v17; // [rsp+28h] [rbp-10h]
  int v18; // [rsp+28h] [rbp-10h]

  v5 = (unsigned int)a3;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    v18 = 0;
    v16 = (int)a3;
    McTemplateK0pqq(a1, &EventEnterDdiGetChildContainerId, a3, a2, v16, v18);
  }
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a1 + 768))(a2, (unsigned int)v5, a4);
  v12 = v8;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v17) = v8;
    LODWORD(v15) = v5;
    McTemplateK0pqq(v10, &EventExitDdiGetChildContainerId, v11, a2, v15, v17);
  }
  v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9);
  v13[3] = a1;
  v13[4] = v5;
  v13[5] = v12;
  v13[6] = 0LL;
  v13[7] = 0LL;
  return (unsigned int)v12;
}
