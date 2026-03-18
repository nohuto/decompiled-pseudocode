/*
 * XREFs of IcCheckIrqConflict @ 0x1C009C040
 * Callers:
 *     ProcessorpFindAffinitizedIdtEntries @ 0x1C00994A0 (ProcessorpFindAffinitizedIdtEntries.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000C948 (WPP_RECORDER_SF_.c)
 *     IcIsActiveBothPrimaryInterrupt @ 0x1C00B6EEC (IcIsActiveBothPrimaryInterrupt.c)
 */

__int64 __fastcall IcCheckIrqConflict(unsigned int a1, int a2, unsigned __int8 a3, _BYTE *a4)
{
  __int64 v4; // r10
  int v5; // r11d
  __int16 v6; // bp
  int v9; // eax
  __int64 v10; // r9
  char v11; // si
  unsigned int v12; // r8d
  _DWORD *v13; // rax
  unsigned int v14; // r8d
  _DWORD *v15; // rax
  unsigned int v17; // r8d
  __int64 v18; // r9
  int v19; // eax
  unsigned __int16 v20; // r9
  char IsActiveBothPrimaryInterrupt; // al
  unsigned int v22; // r8d
  int v23; // r9d
  __int64 v24; // r10
  unsigned __int16 v25; // r9
  int v26; // eax

  v4 = IcListHead;
  v5 = a2;
  v6 = a3 & 1;
  if ( &IcListHead != (__int64 *)IcListHead )
  {
    while ( 1 )
    {
      v9 = *(_DWORD *)(v4 + 28);
      if ( v9 >= 0 && a1 >= *(_DWORD *)(v4 + 16) && a1 <= *(_DWORD *)(v4 + 20) )
        break;
      v4 = *(_QWORD *)v4;
      if ( &IcListHead == (__int64 *)v4 )
        goto LABEL_22;
    }
    v10 = IcListHead;
    v11 = (a3 >> 1) & ((v9 & 4) == 0);
    if ( &IcListHead == (__int64 *)IcListHead )
      goto LABEL_13;
    while ( 1 )
    {
      if ( v4 != v10 && *(int *)(v10 + 28) >= 0 )
      {
        v12 = 0;
        if ( *(_DWORD *)(v10 + 20) - *(_DWORD *)(v10 + 16) != -1 )
          break;
      }
LABEL_12:
      v10 = *(_QWORD *)v10;
      if ( &IcListHead == (__int64 *)v10 )
        goto LABEL_13;
    }
    v13 = (_DWORD *)(v10 + 140);
    while ( !*(v13 - 26) || *v13 != a2 )
    {
      ++v12;
      v13 += 50;
      if ( v12 >= *(_DWORD *)(v10 + 20) - *(_DWORD *)(v10 + 16) + 1 )
        goto LABEL_12;
    }
    if ( v11 || (unsigned __int8)IcIsActiveBothPrimaryInterrupt(v10, v12) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_58;
      v20 = 10;
      goto LABEL_57;
    }
    v19 = *(_DWORD *)(200LL * v17 + v18 + 152);
    if ( v19 )
    {
      if ( v19 != 1 || v6 )
        goto LABEL_13;
    }
    else if ( !v6 )
    {
LABEL_13:
      v14 = 0;
      if ( *(_DWORD *)(v4 + 20) - *(_DWORD *)(v4 + 16) == -1 )
        goto LABEL_17;
      v15 = (_DWORD *)(v4 + 140);
      while ( !*(v15 - 26) || *v15 != v5 )
      {
        ++v14;
        v15 += 50;
        if ( v14 >= *(_DWORD *)(v4 + 20) - *(_DWORD *)(v4 + 16) + 1 )
          goto LABEL_17;
      }
      IsActiveBothPrimaryInterrupt = IcIsActiveBothPrimaryInterrupt(v4, v14);
      if ( a1 == v23 + v22 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v25 = 12;
LABEL_38:
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            0x14u,
            v25,
            (__int64)&WPP_15d851d117d939b56880e6ec3ae23c9a_Traceguids);
        }
LABEL_17:
        *a4 = 0;
        return 0LL;
      }
      if ( v11 || IsActiveBothPrimaryInterrupt )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v20 = 13;
          goto LABEL_57;
        }
        goto LABEL_58;
      }
      v26 = *(_DWORD *)(200LL * v22 + v24 + 152);
      if ( v26 )
      {
        if ( v6 )
          goto LABEL_50;
        if ( v26 != 1 )
        {
LABEL_43:
          if ( (*(_DWORD *)(v24 + 28) & 2) != 0 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_17;
            v25 = 15;
            goto LABEL_38;
          }
LABEL_50:
          if ( (v6 & 1) != 0 && (*(_BYTE *)(v24 + 28) & 1) != 0 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_17;
            v25 = 16;
            goto LABEL_38;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v20 = 17;
            goto LABEL_57;
          }
LABEL_58:
          *a4 = 1;
          return 0LL;
        }
      }
      else if ( !v6 )
      {
        goto LABEL_43;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_58;
      v20 = 14;
LABEL_57:
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x14u,
        v20,
        (__int64)&WPP_15d851d117d939b56880e6ec3ae23c9a_Traceguids);
      goto LABEL_58;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_58;
    v20 = 11;
    goto LABEL_57;
  }
LABEL_22:
  *a4 = 1;
  return 3221226021LL;
}
