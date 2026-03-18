/*
 * XREFs of GreDesktopSwitch @ 0x1C012CE2C
 * Callers:
 *     xxxSwitchDesktop @ 0x1C00D513C (xxxSwitchDesktop.c)
 * Callees:
 *     ?ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z @ 0x1C00A13E8 (-ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z.c)
 *     ?LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z @ 0x1C00A1E9C (-LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z.c)
 *     ?SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z @ 0x1C00ED6B8 (-SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z.c)
 */

__int64 __fastcall GreDesktopSwitch(__int64 a1, int a2, int a3, __int64 a4, int a5)
{
  _QWORD *i; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v13 = a1;
  ENTER_GRE_DWM_CRIT(a1, &a5);
  if ( g_pDwmState && !a3 )
    SpRenderHint((struct PDEVOBJ *)&v13, 65539 - (a2 != 0), 0LL, 0LL);
  LEAVE_GRE_DWM_CRIT(a1, 0);
  if ( a1 )
  {
    if ( (*(_DWORD *)(a1 + 40) & 0x20000) != 0 )
    {
      for ( i = **(_QWORD ***)(a1 + 1800); i; i = (_QWORD *)*i )
      {
        v11 = i[6];
        if ( v11 )
        {
          if ( (*(_DWORD *)(v11 + 40) & 1) != 0 )
          {
            v12 = *(_QWORD *)(v11 + 2552);
            if ( v12 )
              *(_QWORD *)(v12 + 648) = a4;
          }
        }
      }
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 2552) + 648LL) = a4;
    }
  }
  if ( a5 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  }
  return 0LL;
}
