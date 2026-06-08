/*
 * XREFs of ValidateAcpiIdleDomain @ 0x1C002ECEC
 * Callers:
 *     InitAcpiIdleDomain @ 0x1C002CF00 (InitAcpiIdleDomain.c)
 * Callees:
 *     WPP_RECORDER_SF_ddd @ 0x1C000AB54 (WPP_RECORDER_SF_ddd.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C000AC44 (WPP_RECORDER_SF_DDDD.c)
 */

__int64 __fastcall ValidateAcpiIdleDomain(unsigned int *a1, unsigned int *a2)
{
  unsigned int v2; // r11d
  unsigned int v3; // r8d
  int v5; // r10d
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // edx
  unsigned __int16 v11; // r9
  int v13; // [rsp+20h] [rbp-38h]

  v2 = *a1;
  v3 = 0;
  v5 = 0;
  if ( *a1 )
  {
LABEL_2:
    v6 = a1[6 * v5 + 1];
    if ( (_DWORD)v6 == 6 )
    {
      v7 = a1[6 * v5 + 4];
      if ( (_DWORD)v7 != 254 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_ddd((__int64)WPP_GLOBAL_Control->DeviceExtension, v7, 0LL, 0x15u, v13);
        return (unsigned int)-1073741637;
      }
      v6 = a1[6 * v5 + 5];
      if ( (unsigned int)v6 > 0x500 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)-1073741823;
        v11 = 22;
      }
      else
      {
        if ( (_DWORD)v6 )
        {
          v8 = a1[6 * v5 + 6];
          v9 = *a2;
          if ( (unsigned int)v8 < (unsigned int)v9 )
          {
            v10 = 0;
            while ( v5 == v10 || (_DWORD)v8 != a1[6 * v10 + 6] )
            {
              if ( ++v10 >= v2 )
              {
                if ( ++v5 >= v2 )
                  return v3;
                goto LABEL_2;
              }
            }
            return (unsigned int)-1073741637;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_DDDD((__int64)WPP_GLOBAL_Control->DeviceExtension, v9, 0LL, v8, v13);
          return (unsigned int)-1073741823;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)-1073741823;
        v11 = 23;
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1073741823;
      v11 = 20;
    }
    WPP_RECORDER_SF_ddd((__int64)WPP_GLOBAL_Control->DeviceExtension, v6, 0LL, v11, v13);
    return (unsigned int)-1073741823;
  }
  return v3;
}
