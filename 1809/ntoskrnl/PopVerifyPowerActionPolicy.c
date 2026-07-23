/*
 * XREFs of PopVerifyPowerActionPolicy @ 0x14071AC78
 * Callers:
 *     PopExecutePowerAction @ 0x1406DF390 (PopExecutePowerAction.c)
 *     PopVerifySystemPowerPolicy @ 0x140748B48 (PopVerifySystemPowerPolicy.c)
 *     PdcPoVerifyActionPolicy @ 0x1408701A0 (PdcPoVerifyActionPolicy.c)
 * Callees:
 *     PopIsHibernateSupported @ 0x1405B1850 (PopIsHibernateSupported.c)
 *     PopFilterCapabilities @ 0x1405B1968 (PopFilterCapabilities.c)
 *     PopIsHiberbootSupported @ 0x1406E37BC (PopIsHiberbootSupported.c)
 */

char __fastcall PopVerifyPowerActionPolicy(int *a1)
{
  char v1; // di
  int v3; // eax
  bool IsHiberbootSupported; // al
  int v5; // r9d
  int v6; // r10d
  int v7; // r8d
  int v8; // esi
  int v9; // ecx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  _BYTE v14[80]; // [rsp+20h] [rbp-58h] BYREF

  v1 = 0;
  if ( !a1 )
    return 0;
  v3 = a1[1];
  if ( (v3 & 0xCFFFFC0) != 0 )
    return 0;
  if ( v3 < 0 )
    a1[1] = v3 & 0xFFFFFFF8 | 4;
  if ( (int)PopFilterCapabilities((__int64)&PopCapabilities, (__int64)v14) >= 0 )
  {
    if ( (a1[1] & 8) != 0 )
      IsHiberbootSupported = PopIsHiberbootSupported((__int64)v14);
    else
      IsHiberbootSupported = PopIsHibernateSupported(v14);
    v7 = *a1;
    while ( 1 )
    {
      v8 = v7;
      v9 = v7;
      if ( v7 == v5 )
        break;
      v10 = v7 - v5 - v5;
      if ( !v10 )
        goto LABEL_16;
      v11 = v10 - v5;
      if ( !v11 )
      {
        v9 = 3;
        if ( IsHiberbootSupported )
          goto LABEL_14;
        if ( !PopPromoteHibernateToShutdown )
        {
          if ( !v6 )
            goto LABEL_31;
          goto LABEL_23;
        }
LABEL_19:
        *a1 = 4;
        v9 = 4;
        goto LABEL_14;
      }
      v12 = v11 - 3;
      if ( v12 )
      {
        if ( v12 != 2 )
          goto LABEL_14;
        v9 = 8;
        if ( !v14[20] )
          goto LABEL_14;
LABEL_23:
        *a1 = 2;
        v9 = 2;
        goto LABEL_14;
      }
      v9 = 6;
      if ( !v14[7] )
        goto LABEL_19;
LABEL_14:
      v7 = v9;
      if ( v8 == v9 )
        return v1;
    }
    *a1 = 2;
    v7 = 2;
LABEL_16:
    v9 = v7;
    if ( !v6 )
    {
      if ( !IsHiberbootSupported )
      {
LABEL_31:
        *a1 = 0;
        v1 = v5;
        v9 = 0;
        goto LABEL_14;
      }
      *a1 = 3;
      v9 = 3;
    }
    goto LABEL_14;
  }
  return 1;
}
