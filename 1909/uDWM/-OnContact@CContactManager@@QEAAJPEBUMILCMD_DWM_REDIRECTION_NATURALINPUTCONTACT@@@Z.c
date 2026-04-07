/*
 * XREFs of ?OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z @ 0x180096E94
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x1800137F0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011CF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18009898C (-ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@.c)
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x180098B60 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 */

__int64 __fastcall CContactManager::OnContact(
        CContactManager *this,
        const struct MILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT *a2)
{
  __int64 v4; // r8
  __int64 v5; // rdx
  int v6; // ecx
  char *v7; // r9
  _DWORD v9[6]; // [rsp+40h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+68h] [rbp+10h] BYREF

  v10 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *((_QWORD *)a2 + 1);
  v5 = *((unsigned int *)a2 + 1);
  if ( *((_DWORD *)a2 + 8) == 1 )
  {
    if ( *((_BYTE *)this + 324) )
    {
      v6 = *((_DWORD *)a2 + 3);
      v7 = (char *)v9;
      v9[1] = v6 - 25;
      v9[3] = v6 + 25;
      v9[0] = v4 - 25;
      v9[2] = v4 + 25;
    }
    else
    {
      v7 = (char *)a2 + 16;
    }
    CContactManager::ProcessTouchContact(
      this,
      v5,
      v4,
      v7,
      *((_DWORD *)a2 + 9),
      *((_DWORD *)a2 + 13),
      *(_QWORD *)((char *)a2 + 44));
  }
  else
  {
    CContactManager::ProcessPenContact(this, v5, v4);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v10);
  return 0LL;
}
