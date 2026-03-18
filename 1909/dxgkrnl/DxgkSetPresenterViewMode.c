/*
 * XREFs of DxgkSetPresenterViewMode @ 0x1C014F490
 * Callers:
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C026E68C (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0tt @ 0x1C0042A04 (McTemplateK0tt.c)
 */

bool __fastcall DxgkSetPresenterViewMode(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // di
  unsigned __int8 v3; // si
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // rdx
  const GUID *v6; // r8
  bool v7; // zf
  bool v8; // bl
  __int64 v10; // [rsp+20h] [rbp-18h]

  v2 = a2;
  v3 = a1;
  Global = DXGGLOBAL::GetGlobal(a1, a2);
  if ( v2 )
  {
    v7 = *((_DWORD *)Global + 245) == 0;
  }
  else
  {
    v6 = (const GUID *)(unsigned int)_InterlockedExchange((volatile __int32 *)Global + 245, v3 != 0);
    v7 = (_DWORD)v6 == 0;
  }
  v8 = !v7;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v10) = v2;
    McTemplateK0tt(v2, v5, v6, v3, v10);
  }
  return v8;
}
