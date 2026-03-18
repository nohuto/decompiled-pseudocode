/*
 * XREFs of UpdateMonitorDevices @ 0x1C003D6C0
 * Callers:
 *     DrvEnumDisplayDevices @ 0x1C003B980 (DrvEnumDisplayDevices.c)
 *     DrvUpdateDisplayDriverParameters @ 0x1C003E120 (DrvUpdateDisplayDriverParameters.c)
 *     ?PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z @ 0x1C0085BB4 (-PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z.c)
 *     ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C009FE44 (-DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvGetSuggestedPhysicalMonitorArraySize @ 0x1C00A0DE0 (DrvGetSuggestedPhysicalMonitorArraySize.c)
 *     DrvSetMonitorsDimState @ 0x1C00A110C (DrvSetMonitorsDimState.c)
 *     DrvCreatePhysicalMonitorObjects @ 0x1C00AF3A0 (DrvCreatePhysicalMonitorObjects.c)
 *     DrvSetMonitorBrightness @ 0x1C00BC954 (DrvSetMonitorBrightness.c)
 *     DrvPVPGetFirstActiveMonitor @ 0x1C012BA30 (DrvPVPGetFirstActiveMonitor.c)
 *     GetMonitorPhysicalDimensions @ 0x1C012C330 (GetMonitorPhysicalDimensions.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0012FFC (PALLOCMEM2.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C003D540 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 */

void UpdateMonitorDevices()
{
  wchar_t *i; // rbx
  int v1; // esi
  struct _DEVICE_OBJECT *v2; // rcx
  PVOID v3; // r8
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // r9
  __int64 v7; // r8
  PVOID v8; // rdx
  __int64 v9; // rcx
  void *v10; // rax
  unsigned int v11; // [rsp+70h] [rbp+20h] BYREF
  PVOID P; // [rsp+78h] [rbp+28h] BYREF

  for ( i = gpGraphicsDeviceList; i; i = (wchar_t *)*((_QWORD *)i + 16) )
  {
    P = 0LL;
    v1 = 1;
    v2 = (struct _DEVICE_OBJECT *)*((_QWORD *)i + 17);
    if ( !v2 )
      goto LABEL_10;
    if ( (int)GreDeviceIoControlImpl(v2, 0x23201Bu, 0LL, 0, &P, 8u, &v11, 1u, 1) < 0 )
      goto LABEL_10;
    v3 = P;
    if ( !P )
      goto LABEL_10;
    LODWORD(v4) = 0;
    if ( (*(_DWORD *)P & 0x20000000) != 0 )
    {
      do
        v4 = (unsigned int)(v4 + 1);
      while ( (*((_DWORD *)P + 5 * v4) & 0x20000000) != 0 );
    }
    if ( *((_DWORD *)i + 54) < (unsigned int)v4 )
    {
      v9 = *((_QWORD *)i + 28);
      if ( v9 )
        Win32FreePool(v9);
      v10 = PALLOCMEM2((unsigned int)(20 * v4), 0x76646747u, 1);
      *((_QWORD *)i + 28) = v10;
      if ( !v10 )
      {
        *((_DWORD *)i + 54) = 0;
        ExFreePoolWithTag(P, 0);
        return;
      }
      v3 = P;
    }
    *((_DWORD *)i + 54) = v4;
    if ( (_DWORD)v4 )
    {
      v1 = 0;
      v6 = (unsigned int)v4;
      v7 = 0LL;
      do
      {
        *(_DWORD *)(v7 + *((_QWORD *)i + 28)) = 0;
        v8 = P;
        if ( (*(_DWORD *)((_BYTE *)P + v7) & 1) != 0 )
        {
          *(_DWORD *)(v7 + *((_QWORD *)i + 28)) |= 1u;
          v8 = P;
        }
        if ( (*(_DWORD *)((_BYTE *)v8 + v7) & 2) == 0 )
        {
          *(_DWORD *)(v7 + *((_QWORD *)i + 28)) |= 2u;
          v8 = P;
        }
        if ( *(int *)((char *)v8 + v7) >= 0 )
        {
          *(_DWORD *)(v7 + *((_QWORD *)i + 28)) |= 0x80000000;
          v8 = P;
        }
        if ( (*(_DWORD *)((_BYTE *)v8 + v7) & 0x40000000) == 0 )
        {
          *(_DWORD *)(v7 + *((_QWORD *)i + 28)) |= 0x40000000u;
          v8 = P;
        }
        *(_DWORD *)(v7 + *((_QWORD *)i + 28) + 4) = *(_DWORD *)((char *)v8 + v7 + 4);
        *(_QWORD *)(v7 + *((_QWORD *)i + 28) + 8) = *(_QWORD *)((char *)P + v7 + 8);
        *(_BYTE *)(v7 + *((_QWORD *)i + 28) + 16) = *((_BYTE *)P + v7 + 16);
        v7 += 20LL;
        --v6;
      }
      while ( v6 );
      v3 = P;
    }
    ExFreePoolWithTag(v3, 0);
    if ( v1 )
    {
LABEL_10:
      v5 = *((_QWORD *)i + 28);
      if ( v5 )
        Win32FreePool(v5);
      *((_DWORD *)i + 54) = 0;
      *((_QWORD *)i + 28) = 0LL;
    }
  }
}
