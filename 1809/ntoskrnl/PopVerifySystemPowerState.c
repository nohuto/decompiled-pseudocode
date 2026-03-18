/*
 * XREFs of PopVerifySystemPowerState @ 0x14071B348
 * Callers:
 *     PopActionRetrieveInitialState @ 0x1401595E4 (PopActionRetrieveInitialState.c)
 *     PopExecutePowerAction @ 0x1406DE110 (PopExecutePowerAction.c)
 *     PopAdvanceSystemPowerState @ 0x1406E2560 (PopAdvanceSystemPowerState.c)
 *     PopVerifySystemPowerPolicy @ 0x140747978 (PopVerifySystemPowerPolicy.c)
 *     PdcPoVerifyPowerState @ 0x140764180 (PdcPoVerifyPowerState.c)
 * Callees:
 *     PopIsHibernateSupported @ 0x1405B0850 (PopIsHibernateSupported.c)
 *     PopIsHiberbootSupported @ 0x1406E253C (PopIsHiberbootSupported.c)
 */

void __fastcall PopVerifySystemPowerState(int *a1, int a2)
{
  int v2; // r10d
  int *v3; // r11
  int v4; // r9d
  char v5; // al
  __int128 *v6; // rcx
  _BYTE *v7; // rcx
  _BYTE *v9; // rcx

  v2 = a2;
  v3 = a1;
  if ( a1 )
  {
    v4 = *a1;
    if ( *a1 <= -1 || (unsigned int)(v4 - 2) <= 3 )
    {
      v5 = 1;
      if ( a2 >= 0 )
      {
        v6 = &PopCapabilities;
        if ( a2 > 1 )
        {
          if ( a2 != 2 )
            goto LABEL_8;
        }
        else
        {
          if ( v4 == 5 )
          {
            if ( PopIsHiberbootSupported((__int64)&PopCapabilities) )
              goto LABEL_8;
            if ( PopIsHibernateSupported(v7) )
              goto LABEL_8;
            v4 = 4;
          }
          if ( v4 == 4 )
          {
            if ( BYTE5(PopCapabilities) )
              goto LABEL_8;
            v4 = 3;
          }
          if ( v4 == 3 )
          {
            if ( BYTE4(PopCapabilities) )
              goto LABEL_8;
            v4 = 2;
          }
          if ( v4 == 2 )
          {
            if ( BYTE3(PopCapabilities) )
              goto LABEL_8;
            v4 = 1;
          }
          if ( v4 != 1 || v2 != 1 )
            goto LABEL_8;
          v5 = 0;
          v4 = 2;
        }
        if ( v4 == 2 )
        {
          if ( BYTE3(PopCapabilities) )
            goto LABEL_8;
          v4 = 3;
        }
        if ( v4 == 3 )
        {
          if ( BYTE4(PopCapabilities) )
            goto LABEL_8;
          v4 = 4;
        }
        if ( v4 == 4 )
        {
          if ( BYTE5(PopCapabilities) )
            goto LABEL_8;
          v4 = 5;
        }
        if ( v4 == 5 && (!v5 || !PopIsHiberbootSupported((__int64)v6) && !PopIsHibernateSupported(v9)) )
          v4 = 1;
      }
LABEL_8:
      *v3 = v4;
    }
  }
}
