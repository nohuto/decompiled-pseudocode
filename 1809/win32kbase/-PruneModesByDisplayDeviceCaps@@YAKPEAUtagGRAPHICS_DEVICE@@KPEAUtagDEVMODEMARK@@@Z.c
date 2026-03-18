/*
 * XREFs of ?PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z @ 0x1C00572C0
 * Callers:
 *     DrvBuildDevmodeList @ 0x1C00534C0 (DrvBuildDevmodeList.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0025778 (PALLOCMEM2.c)
 *     UpdateMonitorDevices @ 0x1C0041C40 (UpdateMonitorDevices.c)
 *     ?PruneMode@@YAHPEAU_devicemodeW@@PEAUtagModeCap@@HPEAU_FREQUENCY_RAGE@@K@Z @ 0x1C00575D0 (-PruneMode@@YAHPEAU_devicemodeW@@PEAUtagModeCap@@HPEAU_FREQUENCY_RAGE@@K@Z.c)
 *     ?GetMonitorCapability@@YAKPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@PEAU_FREQUENCY_RAGE@@E@Z @ 0x1C00577E0 (-GetMonitorCapability@@YAKPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@PEAU_FREQUENCY_RAGE@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PruneModesByDisplayDeviceCaps(
        struct tagGRAPHICS_DEVICE *a1,
        unsigned int a2,
        struct tagDEVMODEMARK *a3)
{
  int v3; // r9d
  unsigned int v5; // edi
  unsigned int v7; // r13d
  unsigned int v8; // r14d
  int v9; // eax
  char *v10; // rax
  __int64 v11; // r15
  __int64 v12; // rcx
  int v13; // edx
  __int64 v14; // r12
  struct tagModeCap *v15; // r8
  unsigned int v16; // edi
  __int64 v17; // r11
  __int64 v18; // rcx
  unsigned int MonitorCapability; // eax
  PVOID v20; // rcx
  bool v21; // cf
  unsigned int v22; // eax
  int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // r14d
  __int64 v26; // r12
  struct _devicemodeW *v27; // r10
  struct tagModeCap *v28; // r11
  int v29; // edx
  int v30; // eax
  unsigned int v31; // eax
  unsigned int v33; // edx
  __int64 v34; // r9
  struct tagModeCap *v35; // [rsp+30h] [rbp-49h]
  struct tagModeCap *v36; // [rsp+30h] [rbp-49h]
  unsigned int v37; // [rsp+38h] [rbp-41h]
  unsigned int v38; // [rsp+3Ch] [rbp-3Dh]
  unsigned int v39; // [rsp+40h] [rbp-39h]
  unsigned int v40; // [rsp+48h] [rbp-31h] BYREF
  unsigned int v41; // [rsp+4Ch] [rbp-2Dh]
  unsigned int v42; // [rsp+50h] [rbp-29h]
  unsigned int v43; // [rsp+54h] [rbp-25h]
  unsigned int v44; // [rsp+58h] [rbp-21h]
  unsigned int v45; // [rsp+5Ch] [rbp-1Dh]
  unsigned int v46; // [rsp+60h] [rbp-19h] BYREF
  int v47; // [rsp+64h] [rbp-15h]
  unsigned int v48; // [rsp+68h] [rbp-11h]
  int v49; // [rsp+6Ch] [rbp-Dh]
  int v50; // [rsp+70h] [rbp-9h]
  int v51; // [rsp+74h] [rbp-5h]
  struct _DEVICE_OBJECT *v52; // [rsp+78h] [rbp-1h] BYREF
  PVOID Object[10]; // [rsp+80h] [rbp+7h] BYREF
  bool v54; // [rsp+E0h] [rbp+67h]
  unsigned int v55; // [rsp+E0h] [rbp+67h]
  int v58; // [rsp+F8h] [rbp+7Fh]
  int v59; // [rsp+F8h] [rbp+7Fh]

  v3 = *((_DWORD *)a1 + 40);
  v5 = a2;
  v54 = (v3 & 0x800000) != 0;
  LODWORD(v52) = 0;
  v7 = -1;
  v48 = 0;
  v47 = -1;
  v37 = -1;
  v49 = -1;
  v8 = (v3 & 0x800000) == 0 ? 0x38 : 0;
  v46 = v8;
  v38 = 0;
  v50 = 0;
  v39 = -1;
  v51 = -1;
  *((_DWORD *)a1 + 40) = v3 & 0xF7FFFFFF;
  UpdateMonitorDevices();
  v9 = *((_DWORD *)a1 + 54);
  if ( v9 )
  {
    v10 = (char *)PALLOCMEM2((unsigned int)(868 * v9), 1986356295LL, 1);
    v11 = (__int64)v10;
    if ( !v10 )
      return v5;
    v12 = *((unsigned int *)a1 + 54);
    v13 = 0;
    v14 = 0LL;
    v58 = 0;
    v15 = (struct tagModeCap *)&v10[4 * v12];
    v35 = v15;
    if ( !(_DWORD)v12 )
      goto LABEL_43;
    v16 = (unsigned int)v52;
    while ( 1 )
    {
      *(_DWORD *)(v11 + 4 * v14) = 0;
      v17 = *((_QWORD *)a1 + 28);
      v18 = 0LL;
      if ( (*(_BYTE *)(v17 + 20 * v14) & 3) == 3 )
      {
        if ( (int)((__int64 (__fastcall *)(__int64, _QWORD, PVOID *, struct _DEVICE_OBJECT **))qword_1C01CDA80)(
                    v17 + 8 + 20 * v14,
                    *(unsigned int *)(v17 + 20 * v14 + 4),
                    Object,
                    &v52) < 0 )
        {
          v13 = v58;
          v15 = v35;
          goto LABEL_21;
        }
        MonitorCapability = GetMonitorCapability(v52, v35, (struct _FREQUENCY_RAGE *)&v40, v54);
        v20 = Object[0];
        if ( v8 <= v40 )
          v8 = v40;
        v21 = v7 < v41;
        *(_DWORD *)(v11 + 4 * v14) = MonitorCapability;
        if ( !v21 )
          v7 = v41;
        v22 = v37;
        if ( v16 <= v42 )
          v16 = v42;
        v46 = v8;
        if ( v37 >= v43 )
          v22 = v43;
        v37 = v22;
        v49 = v22;
        v23 = v38;
        v47 = v7;
        if ( v38 <= v44 )
          v23 = v44;
        v38 = v23;
        v50 = v23;
        v24 = v39;
        v48 = v16;
        if ( v39 >= v45 )
          v24 = v45;
        v39 = v24;
        v51 = v24;
        ObfDereferenceObject(v20);
        v18 = *(unsigned int *)(v11 + 4 * v14);
        v13 = v58;
        v15 = v35;
      }
      v13 += v18;
      v15 = (struct tagModeCap *)((char *)v15 + 24 * v18);
      v58 = v13;
      v35 = v15;
LABEL_21:
      v14 = (unsigned int)(v14 + 1);
      if ( (unsigned int)v14 >= *((_DWORD *)a1 + 54) )
      {
        v5 = a2;
        LODWORD(v12) = *((_DWORD *)a1 + 54);
        if ( v13 )
          goto LABEL_23;
LABEL_43:
        if ( (*((_DWORD *)a1 + 40) & 0x800000) == 0 )
        {
LABEL_41:
          Win32FreePool(v11);
          return v5;
        }
LABEL_23:
        v25 = 0;
        while ( 2 )
        {
          if ( !v5 )
          {
            v5 = v25;
            goto LABEL_41;
          }
          --v5;
          v26 = 0LL;
          v27 = (struct _devicemodeW *)*((_QWORD *)a3 + 2 * v5 + 1);
          Object[0] = v27;
          v28 = (struct tagModeCap *)(v11 + 4LL * (unsigned int)v12);
          v36 = v28;
          if ( !(_DWORD)v12 )
            goto LABEL_34;
          v59 = *((_DWORD *)a1 + 40) & 0x800000;
          while ( 2 )
          {
            v29 = *(_DWORD *)(v11 + 4 * v26);
            v30 = 0;
            v55 = v29;
            if ( v29 )
            {
              v30 = PruneMode(
                      v27,
                      v28,
                      v29,
                      (struct _FREQUENCY_RAGE *)&v46,
                      *(_DWORD *)(*((_QWORD *)a1 + 28) + 20 * v26));
              v27 = (struct _devicemodeW *)Object[0];
              v28 = (struct tagModeCap *)((char *)v36 + 24 * v55);
              v36 = v28;
            }
            if ( v59 && v27->dmDriverExtra + v27->dmSize == 244 )
            {
              if ( (*(_DWORD *)&v27[1].dmDeviceName[10] & 1) != 0 )
              {
LABEL_32:
                v26 = (unsigned int)(v26 + 1);
                if ( (unsigned int)v26 >= *((_DWORD *)a1 + 54) )
                {
                  LODWORD(v12) = *((_DWORD *)a1 + 54);
                  goto LABEL_34;
                }
                continue;
              }
              v30 = 1;
            }
            break;
          }
          if ( v30 )
          {
            *((_DWORD *)a3 + 4 * v5) = 1;
            *((_DWORD *)a1 + 40) |= 0x8000000u;
            LODWORD(v12) = *((_DWORD *)a1 + 54);
LABEL_34:
            v31 = v25 + 1;
            if ( (_DWORD)v26 != (_DWORD)v12 )
              v31 = v25;
            v25 = v31;
            continue;
          }
          goto LABEL_32;
        }
      }
    }
  }
  if ( (*((_DWORD *)a1 + 40) & 0x800000) == 0 )
    return v5;
  v33 = 0;
  while ( v5 )
  {
    v34 = *((_QWORD *)a3 + 2 * --v5 + 1);
    if ( *(unsigned __int16 *)(v34 + 68) + *(unsigned __int16 *)(v34 + 70) != 244 || (*(_DWORD *)(v34 + 240) & 1) != 0 )
    {
      ++v33;
    }
    else
    {
      *((_DWORD *)a3 + 4 * v5) = 1;
      *((_DWORD *)a1 + 40) |= 0x8000000u;
    }
  }
  return v33;
}
