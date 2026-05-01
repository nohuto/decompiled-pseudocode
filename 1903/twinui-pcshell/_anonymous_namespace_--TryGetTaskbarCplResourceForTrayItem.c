/*
 * XREFs of _anonymous_namespace_::TryGetTaskbarCplResourceForTrayItem @ 0x18033ED3C
 * Callers:
 *     ?RuntimeClassInitialize@TrayInfoTipDisplayInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z @ 0x18033EB38 (-RuntimeClassInitialize@TrayInfoTipDisplayInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall anonymous_namespace_::TryGetTaskbarCplResourceForTrayItem(int *a1, _QWORD *a2)
{
  __int64 v2; // rax
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax

  v2 = *a2 - SCAID_Volume;
  if ( *a2 == SCAID_Volume )
    v2 = a2[1] + 0x63A48249E31B3E7ELL;
  if ( v2 )
  {
    v4 = *a2 - SCAID_Network;
    if ( *a2 == SCAID_Network )
      v4 = a2[1] + 0x63A48249E31B3E7ELL;
    if ( v4 )
    {
      v5 = *a2 - SCAID_Power;
      if ( *a2 == SCAID_Power )
        v5 = a2[1] + 0x63A48249E31B3E7ELL;
      if ( v5 )
      {
        v6 = *a2 - SCAID_WindowsUpdate;
        if ( *a2 == SCAID_WindowsUpdate )
          v6 = a2[1] + 0x63A48249E31B3E7ELL;
        if ( v6 )
        {
          v7 = *a2 - SCAID_Microphone;
          if ( *a2 == SCAID_Microphone )
            v7 = a2[1] + 0x63A48249E31B3E7ELL;
          if ( v7 )
          {
            *a1 = 0;
            v3 = 0;
            return v3 != 0;
          }
          v3 = 424;
        }
        else
        {
          v3 = 423;
        }
      }
      else
      {
        v3 = 406;
      }
    }
    else
    {
      v3 = 405;
    }
  }
  else
  {
    v3 = 404;
  }
  *a1 = v3;
  return v3 != 0;
}
