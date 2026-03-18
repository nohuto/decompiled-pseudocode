/*
 * XREFs of DpiDxgkDdiNotifySurpriseRemoval @ 0x1C02AEDAC
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1C0154800 (DpiFdoHandleDevicePower.c)
 *     DpiFdoHandleSurpriseRemoval @ 0x1C02A11C0 (DpiFdoHandleSurpriseRemoval.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqq @ 0x1C00356E4 (McTemplateK0pqq.c)
 */

__int64 __fastcall DpiDxgkDdiNotifySurpriseRemoval(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char v4; // al
  __int64 v6; // rsi
  __int64 v8; // rbx
  const GUID *v9; // r8
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  const GUID *v13; // r8
  _QWORD *v14; // rax
  __int64 v16; // [rsp+20h] [rbp-18h]
  __int64 v17; // [rsp+28h] [rbp-10h]

  v4 = *(_BYTE *)(a3 + 3904);
  v6 = a4;
  LODWORD(v8) = -1073741637;
  if ( (v4 & 0x18) != 0 && *(_DWORD *)(a1 + 136) >= 0x300Du && (v9 = *(const GUID **)(a1 + 792)) != 0LL )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0pqq(a1, &EventEnterDdiNotifySurpriseRemoval, v9, a2, a4, 0);
      v9 = *(const GUID **)(a1 + 792);
    }
    v10 = ((__int64 (__fastcall *)(__int64, _QWORD))v9)(a2, (unsigned int)v6);
    v8 = v10;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LODWORD(v17) = v10;
      LODWORD(v16) = v6;
      McTemplateK0pqq(v12, &EventExitDdiNotifySurpriseRemoval, v13, a2, v16, v17);
    }
    v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, v11);
    v14[3] = a1;
    v14[4] = v6;
    v14[5] = v8;
    v14[6] = 0LL;
    v14[7] = 0LL;
  }
  else if ( (v4 & 0x10) != 0 )
  {
    LODWORD(v8) = *(_QWORD *)(a1 + 792) != 0LL ? 0xC00000BB : 0;
  }
  return (unsigned int)v8;
}
