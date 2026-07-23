/*
 * XREFs of PopDiagTraceThermalZoneEnumeration @ 0x14018C0C4
 * Callers:
 *     PopThermalWorker @ 0x140752150 (PopThermalWorker.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140002E2C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PopSqmThermalZoneEnumeration @ 0x14087DC30 (PopSqmThermalZoneEnumeration.c)
 */

void __fastcall PopDiagTraceThermalZoneEnumeration(char *a1, unsigned __int16 *a2, __int64 a3)
{
  char *DeviceAttachmentBaseRefWithTag; // rax
  char *v5; // rdi
  char *v6; // r12
  unsigned int v7; // esi
  unsigned int v8; // kr00_4
  unsigned int v9; // r14d
  unsigned int v10; // kr04_4
  unsigned int v11; // r15d
  unsigned int v12; // kr08_4
  unsigned int *v13; // rcx
  _BYTE *v14; // r9
  unsigned int v15; // r8d
  __int64 v16; // r11
  __int64 v17; // rax
  unsigned __int16 *v18; // r9
  __int64 v19; // rax
  ULONG v20; // edx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned int v26; // r8d
  __int64 v27; // rcx
  __int64 v28; // rcx
  unsigned __int16 v29; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v30; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v31; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v32; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v33; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 *v34; // [rsp+78h] [rbp-88h]
  unsigned __int16 v35; // [rsp+80h] [rbp-80h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-70h] BYREF
  __int64 v37; // [rsp+A0h] [rbp-60h]
  int v38; // [rsp+A8h] [rbp-58h]
  int v39; // [rsp+ACh] [rbp-54h]
  unsigned int *v40; // [rsp+B0h] [rbp-50h]
  __int64 v41; // [rsp+B8h] [rbp-48h]
  _DWORD *v42; // [rsp+C0h] [rbp-40h]
  __int64 v43; // [rsp+C8h] [rbp-38h]
  _DWORD *v44; // [rsp+D0h] [rbp-30h]
  __int64 v45; // [rsp+D8h] [rbp-28h]
  _DWORD *v46; // [rsp+E0h] [rbp-20h]
  __int64 v47; // [rsp+E8h] [rbp-18h]
  _BYTE v48[40]; // [rsp+210h] [rbp+110h] BYREF

  v34 = a2;
  if ( PopDiagHandleRegistered )
  {
    DeviceAttachmentBaseRefWithTag = (char *)IoGetDeviceAttachmentBaseRefWithTag(a3, 0x67446F50u);
    v5 = DeviceAttachmentBaseRefWithTag;
    if ( DeviceAttachmentBaseRefWithTag )
      DeviceAttachmentBaseRefWithTag = *(char **)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
    if ( DeviceAttachmentBaseRefWithTag )
    {
      v6 = DeviceAttachmentBaseRefWithTag + 280;
      v35 = *((_WORD *)DeviceAttachmentBaseRefWithTag + 140) >> 1;
      v29 = v35;
      v7 = *((_DWORD *)a1 + 5) / 0xAu;
      v8 = *((_DWORD *)a1 + 7);
      v31 = v7;
      v9 = v8 / 0xA;
      v10 = *((_DWORD *)a1 + 19);
      v32 = v8 / 0xA;
      v11 = v10 / 0xA;
      v12 = *((_DWORD *)a1 + 6);
      v33 = v10 / 0xA;
      if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_THERMAL_ZONE_ENUMERATED) )
      {
        *(_QWORD *)&UserData.Size = 2LL;
        UserData.Ptr = (ULONGLONG)&v29;
        v13 = (unsigned int *)v48;
        v14 = v48;
        v37 = *((_QWORD *)v6 + 1);
        v15 = 6;
        v39 = 0;
        v38 = 2 * v35;
        v16 = 10LL;
        v41 = 4LL;
        v40 = &v31;
        v42 = a1 + 4;
        v44 = a1 + 8;
        v46 = a1 + 12;
        v43 = 4LL;
        v45 = 4LL;
        v47 = 4LL;
        do
        {
          v17 = v15++;
          v17 *= 2LL;
          *v13 = *(unsigned int *)((char *)v13 + a1 - v48 + 36) / 0xA;
          ++v13;
          *(&UserData.Ptr + v17) = (ULONGLONG)v14;
          v14 += 4;
          *((_QWORD *)&UserData.Size + v17) = 4LL;
          --v16;
        }
        while ( v16 );
        v18 = v34;
        v19 = 2LL * v15;
        v20 = *v34;
        *(&UserData.Ptr + v19) = (ULONGLONG)&v32;
        *((_QWORD *)&UserData.Size + v19) = 4LL;
        v21 = 2LL * (v15 + 1);
        *(&UserData.Ptr + v21) = (ULONGLONG)&v33;
        *((_QWORD *)&UserData.Size + v21) = 4LL;
        v22 = 2LL * (v15 + 2);
        *(&UserData.Ptr + v22) = (ULONGLONG)(a1 + 80);
        *((_QWORD *)&UserData.Size + v22) = 4LL;
        v23 = 2LL * (v15 + 3);
        *(&UserData.Ptr + v23) = (ULONGLONG)(a1 + 24);
        *((_QWORD *)&UserData.Size + v23) = 4LL;
        v24 = 2LL * (v15 + 4);
        *(&UserData.Ptr + v24) = (ULONGLONG)(a1 + 84);
        *((_QWORD *)&UserData.Size + v24) = 4LL;
        v30 = (unsigned __int16)v20 >> 1;
        v25 = v15 + 5;
        v26 = v15 + 6;
        v25 *= 2LL;
        *(&UserData.Ptr + v25) = (ULONGLONG)&v30;
        *((_QWORD *)&UserData.Size + v25) = 2LL;
        v27 = 2LL * v26;
        *(&UserData.Ptr + v27) = *((_QWORD *)v18 + 1);
        *(&UserData.Size + 2 * v27) = v20;
        *(&UserData.Reserved + 2 * v27) = 0;
        v28 = 2LL * (v26 + 1);
        *(&UserData.Ptr + v28) = (ULONGLONG)(a1 + 88);
        *((_QWORD *)&UserData.Size + v28) = 4LL;
        EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_THERMAL_ZONE_ENUMERATED, 0LL, 0, 0LL, 0LL, 0x18u, &UserData);
        v7 = v31;
        v9 = v32;
        v11 = v33;
      }
      PopSqmThermalZoneEnumeration(
        (_DWORD)v6,
        (_DWORD)v34,
        v7,
        *((_DWORD *)a1 + 1),
        *((_DWORD *)a1 + 2),
        *((_DWORD *)a1 + 3),
        *((_DWORD *)a1 + 9) / 0xAu,
        *((_DWORD *)a1 + 10) / 0xAu,
        v9,
        v11,
        v12 / 0xA,
        *((_DWORD *)a1 + 22));
    }
    if ( v5 )
      ObfDereferenceObjectWithTag(v5, 0x67446F50u);
  }
}
