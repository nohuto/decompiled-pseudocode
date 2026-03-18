/*
 * XREFs of RIMGetDeviceButtons @ 0x1C00EC198
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C00EA954 (RIMCreatePointerDeviceInfo.c)
 *     RIMPopulatePointerDevice @ 0x1C00EFEF4 (RIMPopulatePointerDevice.c)
 * Callees:
 *     Win32AllocPool @ 0x1C001CB30 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C004DA3C (rimHidP_GetSpecificButtonCaps.c)
 *     RIMPbuttonToCursor @ 0x1C00ED68C (RIMPbuttonToCursor.c)
 *     RIMValidatePTPButtons @ 0x1C01091D8 (RIMValidatePTPButtons.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMGetDeviceButtons(
        __int64 a1,
        __int64 a2,
        struct _HIDP_PREPARSED_DATA *a3,
        _WORD *a4,
        unsigned int a5)
{
  __int64 v5; // rax
  unsigned int v10; // r14d
  unsigned __int16 v11; // si
  struct _HIDP_BUTTON_CAPS *v12; // r15
  __int64 v13; // rcx
  int SpecificButtonCaps; // edi
  unsigned int v15; // edx
  void *v16; // rax
  __int64 v17; // rcx
  __int64 j; // rdx
  USAGE UsageMin; // ax
  __int64 v20; // rax
  unsigned int v21; // r10d
  void *v22; // rax
  bool v23; // zf
  unsigned int i; // r8d
  __int64 v25; // rax
  __int64 v26; // rdx
  unsigned int v27; // eax
  unsigned int v28; // eax
  __int64 v29; // rax
  int v31; // [rsp+88h] [rbp+48h]
  int v32; // [rsp+98h] [rbp+58h]
  int v33; // [rsp+9Ch] [rbp+5Ch]

  v5 = (unsigned __int16)a4[23];
  a5 = (unsigned __int16)a4[23];
  v10 = 0;
  v11 = 0;
  v31 = 0;
  if ( *(_DWORD *)(a2 + 944) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, a2);
    v5 = a5;
  }
  if ( *a4 != 5 )
    v11 = *(_WORD *)(a2 + 688);
  v12 = (struct _HIDP_BUTTON_CAPS *)Win32AllocPool(72 * v5, 0x65687352u);
  if ( v12 )
  {
    SpecificButtonCaps = rimHidP_GetSpecificButtonCaps(HidP_Input, 0, v11, 0, v12, (unsigned __int16 *)&a5, a3);
    if ( SpecificButtonCaps < 0 )
    {
LABEL_37:
      Win32FreePool((__int64)v12);
      goto LABEL_39;
    }
    v15 = a5;
    if ( !a5 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, 0LL);
      v15 = a5;
    }
    if ( (unsigned int)(*(_DWORD *)(a2 + 24) - 5) > 1 )
    {
      v22 = Win32AllocPoolZInit(12LL * *(unsigned int *)(a2 + 680), 0x78647352u);
      *(_QWORD *)(a2 + 928) = v22;
      if ( v22 )
      {
        v23 = *(_DWORD *)(a2 + 24) == 7;
        *(_DWORD *)(a2 + 940) = *(_DWORD *)(a2 + 680);
        if ( v23 )
          SpecificButtonCaps = RIMValidatePTPButtons(v12, a5);
        if ( SpecificButtonCaps >= 0 )
        {
          for ( i = 0; i < *(_DWORD *)(a2 + 940); *(_DWORD *)(*(_QWORD *)(a2 + 928) + 4 * v26) = 1 )
          {
            ++*(_DWORD *)(a1 + 512);
            v25 = i++;
            v26 = 3 * v25;
            *(_DWORD *)(*(_QWORD *)(a2 + 928) + 4 * v26 + 4) = *(_DWORD *)(a1 + 512);
          }
        }
        goto LABEL_36;
      }
    }
    else
    {
      *(_DWORD *)(a2 + 940) = 0;
      v16 = Win32AllocPoolZInit(12LL * v15, 0x78647352u);
      *(_QWORD *)(a2 + 928) = v16;
      if ( v16 )
      {
        for ( j = 0LL; (unsigned int)j < a5; j = (unsigned int)(j + 1) )
        {
          if ( v10 >= 2 )
            break;
          v17 = 9LL * (unsigned int)j;
          if ( v12[(unsigned int)j].UsagePage == 13 )
          {
            UsageMin = v12[(unsigned int)j].Range.UsageMin;
            if ( UsageMin == 66 )
            {
              v31 = 1;
            }
            else if ( UsageMin != 69 && UsageMin != 60 || v10 && v12[v10 - 1].Range.UsageMin != 66 )
            {
              continue;
            }
            v17 = (unsigned int)++*(_DWORD *)(a1 + 512);
            v20 = v10++;
            ++*(_DWORD *)(a2 + 940);
            *(&v32 + v20) = v17;
          }
        }
        if ( *(_DWORD *)(a2 + 940) > a5 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, j);
        if ( v31 )
        {
          *(_DWORD *)(*(_QWORD *)(a2 + 928) + 4LL) = v32;
          **(_DWORD **)(a2 + 928) = RIMPbuttonToCursor(66LL);
          if ( v10 > 1 )
          {
            *(_DWORD *)(*(_QWORD *)(a2 + 928) + 16LL) = v33;
            *(_DWORD *)(*(_QWORD *)(a2 + 928) + 12LL) = RIMPbuttonToCursor(v21);
          }
          goto LABEL_36;
        }
      }
    }
    SpecificButtonCaps = -1073741668;
LABEL_36:
    v27 = a5;
    *(_DWORD *)(a2 + 296) += a5;
    *(_DWORD *)(a2 + 944) = v27;
    goto LABEL_37;
  }
  SpecificButtonCaps = -1073741668;
LABEL_39:
  v28 = *(_DWORD *)(a2 + 944);
  if ( !v28 )
    SpecificButtonCaps = -1073741668;
  if ( SpecificButtonCaps != -1073741668 )
  {
    v29 = Win32AllocPool(2LL * v28, 0x65687352u);
    *(_QWORD *)(a2 + 728) = v29;
    if ( !v29 )
      return (unsigned int)-1073741668;
  }
  return (unsigned int)SpecificButtonCaps;
}
