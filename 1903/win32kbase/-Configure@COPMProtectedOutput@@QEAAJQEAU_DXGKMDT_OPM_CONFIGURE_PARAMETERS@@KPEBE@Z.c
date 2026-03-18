/*
 * XREFs of ?Configure@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z @ 0x1C012625C
 * Callers:
 *     ?ConfigureProtectedOutput@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z @ 0x1C0126320 (-ConfigureProtectedOutput@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z.c)
 * Callees:
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x1C00890E0 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     CallMonitor @ 0x1C00B2FA0 (CallMonitor.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COPMProtectedOutput::Configure(
        COPMProtectedOutput *this,
        struct _DXGKMDT_OPM_CONFIGURE_PARAMETERS *const a2,
        int a3,
        const unsigned __int8 *a4)
{
  void **v4; // rbx
  unsigned int v9; // edi
  struct _DEVICE_OBJECT *v10; // rcx
  _QWORD InputBuffer[2]; // [rsp+30h] [rbp-28h] BYREF
  int v13; // [rsp+40h] [rbp-18h]
  int v14; // [rsp+44h] [rbp-14h]
  const unsigned __int8 *v15; // [rsp+48h] [rbp-10h]

  v4 = (void **)*((_QWORD *)this + 1);
  OPM::CMutex::Lock(v4);
  if ( (*(unsigned __int8 (__fastcall **)(COPMProtectedOutput *))(*(_QWORD *)this + 16LL))(this) )
  {
    v9 = -1071774438;
  }
  else
  {
    v10 = (struct _DEVICE_OBJECT *)*((_QWORD *)this + 2);
    InputBuffer[0] = *((_QWORD *)this + 9);
    InputBuffer[1] = a2;
    v13 = a3;
    v14 = 0;
    v15 = a4;
    v9 = CallMonitor(v10, 0x23249Fu, InputBuffer, 0x20u, 0LL, 0);
  }
  if ( *v4 )
    KeReleaseMutex((PRKMUTEX)*v4, 0);
  return v9;
}
