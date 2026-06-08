/*
 * XREFs of ValidatePssSymmetry @ 0x1C0024268
 * Callers:
 *     ValidatePerfDomainSymmetry @ 0x1C00237EC (ValidatePerfDomainSymmetry.c)
 * Callees:
 *     WPP_RECORDER_SF_ddsdd @ 0x1C000A01C (WPP_RECORDER_SF_ddsdd.c)
 *     WPP_RECORDER_SF_ddsddd @ 0x1C000A1D8 (WPP_RECORDER_SF_ddsddd.c)
 */

__int64 __fastcall ValidatePssSymmetry(char a1, unsigned int *a2, __int64 a3, unsigned int *a4, __int64 a5)
{
  char v5; // di
  unsigned int v8; // ebx
  unsigned int v9; // r10d
  __int64 v10; // rdx
  __int64 v11; // rdx
  _DWORD *v12; // rcx
  __int64 v13; // r8
  int v15; // [rsp+20h] [rbp-48h]

  v5 = a3;
  v8 = -1073741823;
  if ( a2 && a4 )
  {
    v9 = *a2;
    v10 = *a4;
    if ( v9 == (_DWORD)v10 )
    {
      v11 = 0LL;
      if ( v9 )
      {
        v12 = a4 + 2;
        v13 = (char *)a2 - (char *)a4;
        while ( *(_DWORD *)((char *)v12 + v13) == *v12 )
        {
          v11 = (unsigned int)(v11 + 1);
          v12 += 12;
          if ( (unsigned int)v11 >= v9 )
            return 0;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_ddsddd((__int64)WPP_GLOBAL_Control->DeviceExtension, v11, v13, (__int64)a4, v15, a1, v5, a5);
      }
      else
      {
        return 0;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_ddsdd((__int64)WPP_GLOBAL_Control->DeviceExtension, v10, a3, (__int64)a4, v15, a1, a3, a5);
    }
  }
  return v8;
}
