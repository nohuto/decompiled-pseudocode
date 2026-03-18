/*
 * XREFs of ?WnfCallback@CLongPowerButtonHoldListener@BlackScreenDiagnostics@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x140006870
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140004A90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BlackScreenDiagnostics::CLongPowerButtonHoldListener::WnfCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        _QWORD *a4,
        _DWORD *a5,
        unsigned int a6)
{
  __int64 v6; // rcx
  void (__fastcall *v7)(__int64, __int64, struct _WNF_TYPE_ID *); // rax

  if ( *(_BYTE *)a4 && a1 == WNF_PO_POWER_BUTTON_STATE && a6 == 8 )
  {
    if ( (*a5 & 1) != 0 )
    {
      v6 = *a5 >> 1;
      if ( (int)v6 >= *((_DWORD *)a4 + 5) && !*((_BYTE *)a4 + 16) )
      {
        v7 = (void (__fastcall *)(__int64, __int64, struct _WNF_TYPE_ID *))a4[3];
        *((_BYTE *)a4 + 16) = 1;
        v7(v6, a2, a3);
      }
    }
    else
    {
      *((_BYTE *)a4 + 16) = 0;
    }
  }
  return 0LL;
}
