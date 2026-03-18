/*
 * XREFs of DpiDxgkDdiNotifyAcpiEvent @ 0x1C0273984
 * Callers:
 *     DpiAcpiHandleAcpiEvent @ 0x1C026FF04 (DpiAcpiHandleAcpiEvent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqqqq @ 0x1C002FFF8 (McTemplateK0pqqqq.c)
 */

__int64 __fastcall DpiDxgkDdiNotifyAcpiEvent(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        unsigned int a4,
        __int64 a5,
        _DWORD *a6)
{
  unsigned int v6; // edi
  __int64 v7; // rbx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  const GUID *v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbp
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v19; // [rsp+20h] [rbp-38h]
  __int64 v20; // [rsp+28h] [rbp-30h]
  __int64 v21; // [rsp+30h] [rbp-28h]
  __int64 v22; // [rsp+38h] [rbp-20h]

  v6 = (unsigned int)a3;
  v7 = a4;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0pqqqq(a1, &EventEnterDdiNotifyAcpiEvent, a3, a2, (_DWORD)a3, a4, 0, 0);
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _DWORD *))(a1 + 232))(
          a2,
          v6,
          (unsigned int)v7,
          a5,
          a6);
  v15 = v10;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v22) = v10;
    LODWORD(v21) = *a6;
    LODWORD(v20) = v7;
    LODWORD(v19) = v6;
    McTemplateK0pqqqq((unsigned int)*a6, &EventExitDdiNotifyAcpiEvent, v13, a2, v19, v20, v21, v22);
  }
  v16 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, v11, v13, v14);
  v16[4] = v7;
  v16[3] = a1;
  v16[5] = a5;
  v17 = (unsigned int)*a6;
  v16[7] = v15;
  v16[6] = v17;
  return (unsigned int)v15;
}
