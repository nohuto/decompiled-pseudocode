/*
 * XREFs of ?PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z @ 0x1C0085BB4
 * Callers:
 *     DrvBuildDevmodeList @ 0x1C0045480 (DrvBuildDevmodeList.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0012FFC (PALLOCMEM2.c)
 *     UpdateMonitorDevices @ 0x1C003D6C0 (UpdateMonitorDevices.c)
 *     ?GetMonitorCapability@@YAKPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@PEAU_FREQUENCY_RAGE@@E@Z @ 0x1C008557C (-GetMonitorCapability@@YAKPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@PEAU_FREQUENCY_RAGE@@E@Z.c)
 *     ?PruneMode@@YAHPEAU_devicemodeW@@PEAUtagModeCap@@HPEAU_FREQUENCY_RAGE@@K@Z @ 0x1C0085EAC (-PruneMode@@YAHPEAU_devicemodeW@@PEAUtagModeCap@@HPEAU_FREQUENCY_RAGE@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PruneModesByDisplayDeviceCaps(
        struct tagGRAPHICS_DEVICE *a1,
        unsigned int a2,
        struct tagDEVMODEMARK *a3)
{
  int v3; // eax
  struct tagDEVMODEMARK *v4; // r13
  unsigned int v5; // edi
  unsigned int v7; // esi
  unsigned int v8; // r15d
  int v9; // eax
  char *v10; // rax
  __int64 v11; // r14
  __int64 v12; // rcx
  int v13; // edx
  __int64 v14; // r12
  struct tagModeCap *v15; // r8
  unsigned int v16; // r13d
  unsigned int v17; // edi
  __int64 v18; // r11
  __int64 v19; // rcx
  __int64 v20; // rdx
  unsigned int MonitorCapability; // eax
  PVOID v22; // rcx
  bool v23; // cf
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned int i; // esi
  __int64 v27; // r15
  struct tagModeCap *v28; // r10
  __int64 v29; // r13
  int v30; // edx
  int v31; // eax
  unsigned int v32; // eax
  unsigned int v34; // edx
  __int64 v35; // r9
  struct tagModeCap *v36; // [rsp+30h] [rbp-39h]
  struct tagModeCap *v37; // [rsp+30h] [rbp-39h]
  unsigned int v38; // [rsp+38h] [rbp-31h]
  unsigned int v39; // [rsp+3Ch] [rbp-2Dh]
  __int64 v40; // [rsp+40h] [rbp-29h] BYREF
  __int64 v41; // [rsp+48h] [rbp-21h]
  __int64 v42; // [rsp+50h] [rbp-19h]
  unsigned int v43; // [rsp+58h] [rbp-11h] BYREF
  int v44; // [rsp+5Ch] [rbp-Dh]
  unsigned int v45; // [rsp+60h] [rbp-9h]
  int v46; // [rsp+64h] [rbp-5h]
  unsigned int v47; // [rsp+68h] [rbp-1h]
  int v48; // [rsp+6Ch] [rbp+3h]
  struct _DEVICE_OBJECT *v49; // [rsp+70h] [rbp+7h] BYREF
  PVOID Object[9]; // [rsp+78h] [rbp+Fh] BYREF
  unsigned __int8 v51; // [rsp+D0h] [rbp+67h]
  unsigned int v52; // [rsp+D0h] [rbp+67h]
  int v55; // [rsp+E8h] [rbp+7Fh]
  int v56; // [rsp+E8h] [rbp+7Fh]

  v3 = *((_DWORD *)a1 + 40);
  v4 = a3;
  v5 = a2;
  if ( (v3 & 0x800000) != 0 )
  {
    v51 = 1;
    v7 = 0;
  }
  else
  {
    v51 = 0;
    v7 = 56;
  }
  v45 = 0;
  v8 = -1;
  v43 = v7;
  LODWORD(v49) = -1;
  v46 = -1;
  v38 = 0;
  v47 = 0;
  v39 = -1;
  v48 = -1;
  v44 = -1;
  *((_DWORD *)a1 + 40) = v3 & 0xF7FFFFFF;
  UpdateMonitorDevices();
  v9 = *((_DWORD *)a1 + 54);
  if ( v9 )
  {
    v10 = (char *)PALLOCMEM2((unsigned int)(868 * v9), 0x76656447u, 1);
    v11 = (__int64)v10;
    if ( !v10 )
      return v5;
    v12 = *((unsigned int *)a1 + 54);
    v13 = 0;
    v14 = 0LL;
    v55 = 0;
    v15 = (struct tagModeCap *)&v10[4 * v12];
    v36 = v15;
    if ( !(_DWORD)v12 )
      goto LABEL_56;
    v16 = 0;
    v17 = -1;
    while ( 1 )
    {
      *(_DWORD *)(v11 + 4 * v14) = 0;
      v18 = *((_QWORD *)a1 + 28);
      v19 = 0LL;
      if ( (*(_BYTE *)(v18 + 20 * v14) & 3) == 3 )
      {
        v20 = *(unsigned int *)(v18 + 20 * v14 + 4);
        v40 = 0LL;
        v41 = 0LL;
        v42 = 0LL;
        if ( (int)((__int64 (__fastcall *)(__int64, __int64, PVOID *, struct _DEVICE_OBJECT **))qword_1C02121D8)(
                    v18 + 8 + 20 * v14,
                    v20,
                    Object,
                    &v49) < 0 )
        {
          v13 = v55;
          v15 = v36;
          goto LABEL_23;
        }
        MonitorCapability = GetMonitorCapability(v49, v36, (struct _FREQUENCY_RAGE *)&v40, v51);
        v22 = Object[0];
        if ( v7 <= (unsigned int)v40 )
          v7 = v40;
        v23 = v8 < HIDWORD(v40);
        *(_DWORD *)(v11 + 4 * v14) = MonitorCapability;
        if ( !v23 )
          v8 = HIDWORD(v40);
        v24 = v38;
        if ( v16 <= (unsigned int)v41 )
          v16 = v41;
        v43 = v7;
        if ( v17 >= HIDWORD(v41) )
          v17 = HIDWORD(v41);
        v44 = v8;
        if ( v38 <= (unsigned int)v42 )
          v24 = v42;
        v38 = v24;
        v47 = v24;
        v25 = v39;
        v45 = v16;
        if ( v39 >= HIDWORD(v42) )
          v25 = HIDWORD(v42);
        v39 = v25;
        v48 = v25;
        v46 = v17;
        ObfDereferenceObject(v22);
        v19 = *(unsigned int *)(v11 + 4 * v14);
        v13 = v55;
        v15 = v36;
      }
      v13 += v19;
      v15 = (struct tagModeCap *)((char *)v15 + 24 * v19);
      v55 = v13;
      v36 = v15;
LABEL_23:
      v14 = (unsigned int)(v14 + 1);
      if ( (unsigned int)v14 >= *((_DWORD *)a1 + 54) )
      {
        v5 = a2;
        LODWORD(v12) = *((_DWORD *)a1 + 54);
        v4 = a3;
        if ( v13 )
          goto LABEL_25;
LABEL_56:
        if ( (*((_DWORD *)a1 + 40) & 0x800000) != 0 )
        {
LABEL_25:
          for ( i = 0; ; i = v32 )
          {
            if ( !v5 )
            {
              v5 = i;
              break;
            }
            --v5;
            v27 = 0LL;
            v28 = (struct tagModeCap *)(v11 + 4LL * (unsigned int)v12);
            v37 = v28;
            v29 = *((_QWORD *)v4 + 2 * v5 + 1);
            if ( !(_DWORD)v12 )
            {
LABEL_36:
              v4 = a3;
              goto LABEL_37;
            }
            v56 = *((_DWORD *)a1 + 40) & 0x800000;
            while ( 1 )
            {
              v30 = *(_DWORD *)(v11 + 4 * v27);
              v31 = 0;
              v52 = v30;
              if ( v30 )
              {
                v31 = PruneMode(
                        (struct _devicemodeW *)v29,
                        v28,
                        v30,
                        (struct _FREQUENCY_RAGE *)&v43,
                        *(_DWORD *)(*((_QWORD *)a1 + 28) + 20 * v27));
                v28 = (struct tagModeCap *)((char *)v37 + 24 * v52);
                v37 = v28;
              }
              if ( !v56 || *(unsigned __int16 *)(v29 + 68) + *(unsigned __int16 *)(v29 + 70) != 244 )
                goto LABEL_41;
              if ( (*(_DWORD *)(v29 + 240) & 1) == 0 )
                break;
LABEL_34:
              v27 = (unsigned int)(v27 + 1);
              if ( (unsigned int)v27 >= *((_DWORD *)a1 + 54) )
              {
                LODWORD(v12) = *((_DWORD *)a1 + 54);
                goto LABEL_36;
              }
            }
            v31 = 1;
LABEL_41:
            if ( !v31 )
              goto LABEL_34;
            v4 = a3;
            *((_DWORD *)a3 + 4 * v5) = 1;
            *((_DWORD *)a1 + 40) |= 0x8000000u;
            LODWORD(v12) = *((_DWORD *)a1 + 54);
LABEL_37:
            v32 = i + 1;
            if ( (_DWORD)v27 != (_DWORD)v12 )
              v32 = i;
          }
        }
        Win32FreePool(v11);
        return v5;
      }
    }
  }
  if ( (*((_DWORD *)a1 + 40) & 0x800000) == 0 )
    return v5;
  v34 = 0;
  while ( v5 )
  {
    v35 = *((_QWORD *)v4 + 2 * --v5 + 1);
    if ( *(unsigned __int16 *)(v35 + 68) + *(unsigned __int16 *)(v35 + 70) != 244 || (*(_DWORD *)(v35 + 240) & 1) != 0 )
    {
      ++v34;
    }
    else
    {
      *((_DWORD *)v4 + 4 * v5) = 1;
      *((_DWORD *)a1 + 40) |= 0x8000000u;
    }
  }
  return v34;
}
