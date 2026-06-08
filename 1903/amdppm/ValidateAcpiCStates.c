/*
 * XREFs of ValidateAcpiCStates @ 0x1C002EE8C
 * Callers:
 *     InitAcpi2CStates @ 0x1C002E6B0 (InitAcpi2CStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000138C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C000AB54 (WPP_RECORDER_SF_ddd.c)
 *     IsValidAcpiGenericAddress @ 0x1C002E85C (IsValidAcpiGenericAddress.c)
 */

__int64 __fastcall ValidateAcpiCStates(_DWORD *a1)
{
  unsigned int v1; // r9d
  unsigned int v2; // r11d
  __int64 v3; // r8
  char *v4; // r10
  __int64 v5; // rax
  unsigned int v6; // ebx
  _BYTE *v7; // r10
  unsigned __int16 v8; // r9
  int v10; // [rsp+20h] [rbp-28h]

  v1 = 0;
  if ( !a1 )
    return (unsigned int)-1073741823;
  v2 = *a1;
  v3 = 1LL;
  if ( *a1 > 1u )
  {
    v4 = (char *)a1 + 38;
    do
    {
      v5 = (unsigned int)(v3 - 1);
      if ( (unsigned __int8)*(v4 - 2) < LOBYTE(a1[5 * v5 + 4])
        || *(_WORD *)v4 < HIWORD(a1[5 * v5 + 4])
        || *(_DWORD *)(v4 + 2) > a1[5 * v5 + 5] )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_ddd((__int64)WPP_GLOBAL_Control->DeviceExtension, (__int64)a1, v3, 0x19u, v10);
        return (unsigned int)-1073741823;
      }
      v3 = (unsigned int)(v3 + 1);
      v4 += 20;
    }
    while ( (unsigned int)v3 < v2 );
  }
  v6 = 0;
  if ( v2 )
  {
    v7 = a1 + 4;
    do
    {
      if ( *(v7 - 12) != 127 )
      {
        switch ( *v7 )
        {
          case 0:
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              return (unsigned int)-1073741823;
            v8 = 28;
LABEL_28:
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              1u,
              v8,
              (__int64)&WPP_885f9b737e553b3972faa1b865470758_Traceguids);
            return (unsigned int)-1073741823;
          case 1:
            return (unsigned int)-1073741823;
          case 2:
            if ( !IsValidAcpiGenericAddress((char *)&dword_1C0013C0C) )
            {
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                return (unsigned int)-1073741823;
              v8 = 26;
              goto LABEL_28;
            }
            break;
          default:
            if ( !IsValidAcpiGenericAddress((char *)&dword_1C0013C24)
              || !IsValidAcpiGenericAddress((char *)&dword_1C0013BF4)
              || !IsValidAcpiGenericAddress((char *)&dword_1C0013C0C) )
            {
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                return (unsigned int)-1073741823;
              v8 = 27;
              goto LABEL_28;
            }
            break;
        }
      }
      ++v6;
      v7 += 20;
    }
    while ( v6 < v2 );
  }
  return v1;
}
