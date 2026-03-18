/*
 * XREFs of IcCheckIrqConflict @ 0x1C0093780
 * Callers:
 *     ProcessorpFindAffinitizedIdtEntries @ 0x1C0090A90 (ProcessorpFindAffinitizedIdtEntries.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C001D030 (WPP_RECORDER_SF_.c)
 *     IcIsActiveBothPrimaryInterrupt @ 0x1C00B33EC (IcIsActiveBothPrimaryInterrupt.c)
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
  int v25; // eax

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
    if ( &IcListHead != (__int64 *)IcListHead )
    {
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
        v20 = 10;
        goto LABEL_32;
      }
      v19 = *(_DWORD *)(200LL * v17 + v18 + 152);
      if ( !v19 )
      {
        if ( !v6 )
          goto LABEL_13;
        goto LABEL_31;
      }
      if ( v19 == 1 && !v6 )
      {
LABEL_31:
        v20 = 11;
LABEL_32:
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          0x14u,
          v20,
          (__int64)&WPP_15d851d117d939b56880e6ec3ae23c9a_Traceguids);
        *a4 = 1;
        return 0LL;
      }
    }
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
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x14u,
        0xCu,
        (__int64)&WPP_15d851d117d939b56880e6ec3ae23c9a_Traceguids);
      *a4 = 0;
      return 0LL;
    }
    if ( v11 || IsActiveBothPrimaryInterrupt )
    {
      v20 = 13;
      goto LABEL_32;
    }
    v25 = *(_DWORD *)(200LL * v22 + v24 + 152);
    if ( v25 )
    {
      if ( v25 == 1 )
      {
        if ( !v6 )
        {
LABEL_43:
          v20 = 14;
          goto LABEL_32;
        }
        goto LABEL_47;
      }
      if ( v6 )
      {
LABEL_47:
        if ( (v6 & 1) == 0 || (*(_BYTE *)(v24 + 28) & 1) == 0 )
        {
          v20 = 17;
          goto LABEL_32;
        }
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          0x14u,
          0x10u,
          (__int64)&WPP_15d851d117d939b56880e6ec3ae23c9a_Traceguids);
LABEL_17:
        *a4 = 0;
        return 0LL;
      }
    }
    else if ( v6 )
    {
      goto LABEL_43;
    }
    if ( (*(_DWORD *)(v24 + 28) & 2) != 0 )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x14u,
        0xFu,
        (__int64)&WPP_15d851d117d939b56880e6ec3ae23c9a_Traceguids);
      *a4 = 0;
      return 0LL;
    }
    goto LABEL_47;
  }
LABEL_22:
  *a4 = 1;
  return 3221226021LL;
}
