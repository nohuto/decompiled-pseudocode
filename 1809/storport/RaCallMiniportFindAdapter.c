/*
 * XREFs of RaCallMiniportFindAdapter @ 0x1C001EF8C
 * Callers:
 *     RaidAdapterStartMiniport @ 0x1C001F31C (RaidAdapterStartMiniport.c)
 *     RaidAdapterReInitialize @ 0x1C0038A8C (RaidAdapterReInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C060 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1C003B974 (WPP_SF_.c)
 *     McTemplateK0ddqqqqqqdduuuqqtt @ 0x1C003D534 (McTemplateK0ddqqqqqqdduuuqqtt.c)
 *     McTemplateK0zzdqq @ 0x1C003D6D4 (McTemplateK0zzdqq.c)
 */

__int64 __fastcall RaCallMiniportFindAdapter(__int64 *a1, void *a2, unsigned int a3)
{
  unsigned int v3; // edi
  void *v4; // rbp
  _DWORD *v5; // rbx
  int v6; // esi
  __int64 v8; // r15
  __int64 v9; // rcx
  char v10; // al
  const GUID *v11; // rdx
  int v12; // eax
  int v13; // esi
  __int64 v14; // r10
  unsigned int v15; // ecx
  unsigned int v16; // ebp
  unsigned int v17; // ecx
  unsigned int v18; // esi
  unsigned int v19; // r9d
  unsigned int v21; // esi
  __int64 v22; // rax
  int v23; // esi
  char v24; // [rsp+D0h] [rbp+8h] BYREF

  v3 = 0;
  v4 = &unk_1C0054E5E;
  v24 = 0;
  v5 = a1 + 1;
  v6 = 3;
  if ( a2 )
    v4 = a2;
  v8 = *(_QWORD *)(*a1 + 8);
  if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
    McTemplateK0ddqqqqqqdduuuqqtt(
      *((unsigned __int8 *)a1 + 91),
      (unsigned int)&EventAdapterInitPortConfigInfo,
      *((unsigned __int8 *)v5 + 97),
      *v5,
      v5[6],
      *((_BYTE *)a1 + 80),
      *((_BYTE *)v5 + 97),
      *((_BYTE *)a1 + 154),
      v5[51],
      v5[52],
      v5[53],
      v5[48],
      v5[55],
      *((_BYTE *)v5 + 98),
      *((_BYTE *)v5 + 99),
      *((_BYTE *)v5 + 144),
      v5[54],
      v5[40],
      *((_BYTE *)a1 + 91),
      *((_BYTE *)v5 + 196));
  v9 = a1[29];
  v10 = *((_BYTE *)a1 + 248) | 1;
  *((_BYTE *)a1 + 248) = v10;
  LODWORD(v11) = *(_DWORD *)v9;
  if ( *(_DWORD *)v9 == 136 )
    goto LABEL_8;
  if ( (v10 & 4) != 0 )
  {
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, void *, _DWORD *, char *))(v9 + 32))(
            a1[30] + 16,
            *(_QWORD *)(*a1 + 32),
            v8,
            *(_QWORD *)(*a1 + 24),
            v4,
            v5,
            &v24);
    goto LABEL_9;
  }
  if ( (_DWORD)v11 == 208 )
  {
LABEL_8:
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, void *, _DWORD *, char *))(v9 + 32))(
            a1[30] + 16,
            0LL,
            0LL,
            v4,
            v5,
            &v24);
LABEL_9:
    v6 = v12;
  }
  *((_BYTE *)a1 + 248) &= ~1u;
  if ( v6 == 1 && (!*((_BYTE *)v5 + 90) || !*((_BYTE *)v5 + 91) || !*((_BYTE *)v5 + 81) || !*((_BYTE *)v5 + 82)) )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 10LL, &WPP_c5c82f8c2d0d3b71a5687db0aa357632_Traceguids);
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 11LL, &WPP_c5c82f8c2d0d3b71a5687db0aa357632_Traceguids);
      }
    }
LABEL_50:
    v3 = -1073741438;
    goto LABEL_18;
  }
  if ( !v6 )
  {
    v3 = -1073741275;
    goto LABEL_18;
  }
  v13 = v6 - 1;
  if ( v13 )
  {
    v23 = v13 - 1;
    if ( !v23 )
    {
      v3 = -1073741630;
      goto LABEL_18;
    }
    if ( v23 != 1 )
    {
      v3 = -1073741595;
      goto LABEL_18;
    }
    goto LABEL_50;
  }
  v14 = *a1;
  if ( *(_DWORD *)(*a1 + 4960) && *(_QWORD *)(v14 + 4968) && *(_QWORD *)(v14 + 4976) )
  {
    v21 = 0;
    do
    {
      v11 = (const GUID *)(*(_QWORD *)(v14 + 4968) + 16LL * v21);
      a3 = v21;
      v22 = *(_QWORD *)&v11->Data1 - *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1;
      if ( *(_QWORD *)&v11->Data1 == *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 )
        v22 = *(_QWORD *)v11->Data4 - *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4;
      if ( v22 )
        PoRegisterPowerSettingCallback(
          *(PDEVICE_OBJECT *)(v14 + 8),
          v11,
          RaidPowerSettingCallback,
          (PVOID)v14,
          (PVOID *)(*(_QWORD *)(v14 + 4976) + 8LL * v21));
      v14 = *a1;
      ++v21;
    }
    while ( v21 < *(_DWORD *)(*a1 + 4960) );
  }
LABEL_18:
  v15 = v5[51];
  v16 = 1000;
  if ( v15 <= 0x3E8 || (LOBYTE(v11) = *((_BYTE *)v5 + 144), (unsigned __int8)((_BYTE)v11 - 2) <= 2u) )
  {
    v16 = v5[51];
    if ( v15 < 0x10 )
    {
      if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
        McTemplateK0zzdqq(v15, (_DWORD)v11, a3, (unsigned int)L"MaxNumberOfIO", (__int64)L"MaxNumberOfIO", 16, v15, 16);
      v5[51] = 16;
      v16 = 16;
    }
  }
  else
  {
    if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
      McTemplateK0zzdqq(
        v15,
        (_DWORD)v11,
        a3,
        (unsigned int)L"MaxNumberOfIO",
        (__int64)L"Dma64BitAddresses",
        (char)v11,
        v15,
        232);
    v5[51] = 1000;
  }
  v17 = v5[52];
  v18 = 255;
  if ( v17 > 0xFF )
  {
    LOBYTE(v11) = *((_BYTE *)v5 + 98);
    if ( (_BYTE)v11 != 1 )
    {
      if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
        McTemplateK0zzdqq(v17, (_DWORD)v11, a3, (unsigned int)L"MaxIOsPerLun", (__int64)L"SrbType", (char)v11, v17, 255);
LABEL_41:
      v5[52] = v18;
      goto LABEL_23;
    }
  }
  if ( v17 >= 0x10 )
  {
    v18 = v5[52];
    if ( v17 <= v16 )
      goto LABEL_23;
    v18 = v16;
    if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
    {
      McTemplateK0zzdqq(v17, (_DWORD)v11, a3, (unsigned int)L"MaxIOsPerLun", (__int64)L"MaxNumberOfIO", v16, v17, v16);
      v18 = v5[51];
    }
    goto LABEL_41;
  }
  if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
    McTemplateK0zzdqq(v17, (_DWORD)v11, a3, (unsigned int)L"MaxIOsPerLun", (__int64)L"MaxIOsPerLun", 16, v17, 16);
  v5[52] = 16;
  v18 = 16;
LABEL_23:
  v19 = v5[53];
  if ( v19 > v18 )
  {
    if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
    {
      McTemplateK0zzdqq(
        v17,
        (_DWORD)v11,
        a3,
        (unsigned int)L"InitialLunQueueDepth",
        (__int64)L"MaxIOsPerLun",
        v18,
        v19,
        v18);
      v18 = v5[52];
    }
    v5[53] = v18;
    LOBYTE(v19) = v18;
  }
  if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
    McTemplateK0ddqqqqqqdduuuqqtt(
      v5[6],
      (unsigned int)&EventAdapterFinalPortConfigInfo,
      *((unsigned __int8 *)v5 + 97),
      *v5,
      v5[6],
      *((_BYTE *)v5 + 72),
      *((_BYTE *)v5 + 97),
      *((_BYTE *)v5 + 146),
      v5[51],
      v18,
      v19,
      v5[48],
      v5[55],
      *((_BYTE *)v5 + 98),
      *((_BYTE *)v5 + 99),
      *((_BYTE *)v5 + 144),
      v5[54],
      v5[40],
      *((_BYTE *)v5 + 83),
      *((_BYTE *)v5 + 196));
  return v3;
}
