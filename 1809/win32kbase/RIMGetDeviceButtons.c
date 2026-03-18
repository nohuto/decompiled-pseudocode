/*
 * XREFs of RIMGetDeviceButtons @ 0x1C0116E4C
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0115410 (RIMCreatePointerDeviceInfo.c)
 *     RIMPopulatePointerDevice @ 0x1C011B37C (RIMPopulatePointerDevice.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     RIMPbuttonToCursor @ 0x1C0118A34 (RIMPbuttonToCursor.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C011C7F0 (rimHidP_GetSpecificButtonCaps.c)
 *     RIMValidatePTPButtons @ 0x1C01308F8 (RIMValidatePTPButtons.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMGetDeviceButtons(__int64 a1, __int64 a2, __int64 a3, _WORD *a4, unsigned int a5)
{
  __int64 v5; // rax
  unsigned int v10; // r14d
  unsigned __int16 v11; // si
  __int64 v12; // r15
  __int64 v13; // rcx
  int SpecificButtonCaps; // edi
  __int64 v15; // r8
  unsigned int v16; // edx
  void *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int16 v21; // ax
  __int64 v22; // rax
  unsigned int v23; // r10d
  void *v24; // rax
  bool v25; // zf
  unsigned int i; // r8d
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned int v29; // eax
  unsigned int v30; // eax
  __int64 v31; // rax
  int v33; // [rsp+88h] [rbp+48h]
  int v34; // [rsp+98h] [rbp+58h]
  int v35; // [rsp+9Ch] [rbp+5Ch]

  v5 = (unsigned __int16)a4[23];
  a5 = (unsigned __int16)a4[23];
  v10 = 0;
  v11 = 0;
  v33 = 0;
  if ( *(_DWORD *)(a2 + 976) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, a2, a3);
    v5 = a5;
  }
  if ( *a4 != 5 )
    v11 = *(_WORD *)(a2 + 720);
  v12 = Win32AllocPool(72 * v5, 0x65687352u);
  if ( v12 )
  {
    SpecificButtonCaps = rimHidP_GetSpecificButtonCaps(0, 0, v11, 0, v12, (__int64)&a5, a3);
    if ( SpecificButtonCaps < 0 )
    {
LABEL_38:
      Win32FreePool(v12);
      goto LABEL_40;
    }
    v16 = a5;
    if ( !a5 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, 0LL, v15);
      v16 = a5;
    }
    if ( (unsigned int)(*(_DWORD *)(a2 + 24) - 5) > 1 )
    {
      v24 = Win32AllocPoolZInit(12LL * *(unsigned int *)(a2 + 712), 0x78647352u);
      *(_QWORD *)(a2 + 960) = v24;
      if ( v24 )
      {
        v25 = *(_DWORD *)(a2 + 24) == 7;
        *(_DWORD *)(a2 + 972) = *(_DWORD *)(a2 + 712);
        if ( v25 )
          SpecificButtonCaps = RIMValidatePTPButtons(v12, a5);
        if ( SpecificButtonCaps >= 0 )
        {
          for ( i = 0; i < *(_DWORD *)(a2 + 972); *(_DWORD *)(*(_QWORD *)(a2 + 960) + 4 * v28) = 1 )
          {
            ++*(_DWORD *)(a1 + 528);
            v27 = i++;
            v28 = 3 * v27;
            *(_DWORD *)(*(_QWORD *)(a2 + 960) + 4 * v28 + 4) = *(_DWORD *)(a1 + 528);
          }
        }
        goto LABEL_37;
      }
    }
    else
    {
      *(_DWORD *)(a2 + 972) = 0;
      v17 = Win32AllocPoolZInit(12LL * v16, 0x78647352u);
      *(_QWORD *)(a2 + 960) = v17;
      if ( v17 )
      {
        v20 = 0LL;
        if ( a5 )
        {
          v19 = 1LL;
          do
          {
            if ( v10 >= 2 )
              break;
            v18 = 9LL * (unsigned int)v20;
            if ( *(_WORD *)(v12 + 72LL * (unsigned int)v20) == 13 )
            {
              v21 = *(_WORD *)(v12 + 72LL * (unsigned int)v20 + 56);
              if ( v21 == 66 )
              {
                v33 = 1;
              }
              else if ( v21 != 69 && v21 != 60 || v10 && *(_WORD *)(v12 + 72LL * (v10 - 1) + 56) != 66 )
              {
                goto LABEL_23;
              }
              v18 = (unsigned int)++*(_DWORD *)(a1 + 528);
              v22 = v10++;
              ++*(_DWORD *)(a2 + 972);
              *(&v34 + v22) = v18;
            }
LABEL_23:
            v20 = (unsigned int)(v20 + 1);
          }
          while ( (unsigned int)v20 < a5 );
        }
        if ( *(_DWORD *)(a2 + 972) > a5 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v20, v19);
        if ( v33 )
        {
          *(_DWORD *)(*(_QWORD *)(a2 + 960) + 4LL) = v34;
          **(_DWORD **)(a2 + 960) = RIMPbuttonToCursor(66LL);
          if ( v10 > 1 )
          {
            *(_DWORD *)(*(_QWORD *)(a2 + 960) + 16LL) = v35;
            *(_DWORD *)(*(_QWORD *)(a2 + 960) + 12LL) = RIMPbuttonToCursor(v23);
          }
          goto LABEL_37;
        }
      }
    }
    SpecificButtonCaps = -1073741668;
LABEL_37:
    v29 = a5;
    *(_DWORD *)(a2 + 328) += a5;
    *(_DWORD *)(a2 + 976) = v29;
    goto LABEL_38;
  }
  SpecificButtonCaps = -1073741668;
LABEL_40:
  v30 = *(_DWORD *)(a2 + 976);
  if ( !v30 )
    SpecificButtonCaps = -1073741668;
  if ( SpecificButtonCaps != -1073741668 )
  {
    v31 = Win32AllocPool(2LL * v30, 0x65687352u);
    *(_QWORD *)(a2 + 760) = v31;
    if ( !v31 )
      return (unsigned int)-1073741668;
  }
  return (unsigned int)SpecificButtonCaps;
}
