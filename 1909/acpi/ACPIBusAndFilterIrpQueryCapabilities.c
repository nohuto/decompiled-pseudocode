/*
 * XREFs of ACPIBusAndFilterIrpQueryCapabilities @ 0x1C0097710
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001CF0 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C0001D50 (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0001D70 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIGet @ 0x1C0002200 (ACPIGet.c)
 *     AMLIGetNSObjectType @ 0x1C0005240 (AMLIGetNSObjectType.c)
 *     AMLIDereferenceHandleEx @ 0x1C001145C (AMLIDereferenceHandleEx.c)
 *     ACPIGetD3Policy @ 0x1C0014650 (ACPIGetD3Policy.c)
 *     AMLIGetNamedChild @ 0x1C0015140 (AMLIGetNamedChild.c)
 *     AMLIIsNamedChildPresent @ 0x1C0015950 (AMLIIsNamedChildPresent.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C00170E0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIDockIsDockDevice @ 0x1C0017620 (ACPIDockIsDockDevice.c)
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C0097100 (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C0097C44 (ACPISystemPowerQueryDeviceCapabilities.c)
 *     AcpiIsDeviceSecure @ 0x1C00A14E8 (AcpiIsDeviceSecure.c)
 */

__int64 __fastcall ACPIBusAndFilterIrpQueryCapabilities(ULONG_PTR a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // rdi
  char v5; // si
  unsigned __int8 v7; // r15
  __int64 DeviceExtension; // rax
  char v9; // r14
  const char *v10; // r13
  __int64 *v11; // rbx
  __int64 *v12; // rsi
  _DWORD *v13; // r15
  __int64 *v14; // rax
  volatile signed __int32 *v15; // rdi
  int DeviceCapabilities; // edi
  char v17; // r12
  __int64 v18; // rax
  char *IrpText; // rax
  const char *v20; // r8
  __int64 v21; // r10
  int v23; // eax
  bool v24; // zf
  __int64 v25; // rax
  int v26; // ecx
  unsigned int v27; // ecx
  int v28; // edx
  int v29; // ecx
  int v30; // eax
  int v31; // eax
  __int64 v32; // rax
  char *v33; // rdx
  char *v34; // rcx
  unsigned __int16 v35; // r9
  __int64 v36; // rax
  unsigned __int8 v37; // [rsp+60h] [rbp-49h]
  bool v39; // [rsp+62h] [rbp-47h] BYREF
  __int64 v40; // [rsp+68h] [rbp-41h]
  int v41; // [rsp+70h] [rbp-39h] BYREF
  __int64 v42; // [rsp+78h] [rbp-31h] BYREF
  __int64 v43; // [rsp+80h] [rbp-29h] BYREF
  __int64 v44; // [rsp+88h] [rbp-21h] BYREF
  __int64 v45; // [rsp+90h] [rbp-19h] BYREF
  __int64 *v46; // [rsp+98h] [rbp-11h] BYREF
  __int64 v47; // [rsp+A0h] [rbp-9h]
  __int64 **v48; // [rsp+A8h] [rbp-1h] BYREF
  __int64 v49; // [rsp+B0h] [rbp+7h] BYREF
  __int64 v50; // [rsp+B8h] [rbp+Fh]
  int v51; // [rsp+C0h] [rbp+17h]

  v4 = *(_QWORD *)(a2 + 184);
  v46 = 0LL;
  v5 = a2;
  v47 = 0LL;
  v7 = *(_BYTE *)(v4 + 1);
  v37 = v7;
  v40 = a2;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v9 = 0;
  v10 = byte_1C006FE7D;
  v11 = (__int64 *)DeviceExtension;
  if ( !DeviceExtension )
  {
    DeviceCapabilities = -1073741823;
    goto LABEL_33;
  }
  v12 = *(__int64 **)(DeviceExtension + 712);
  if ( (*(_DWORD *)(DeviceExtension + 952) & 0x800LL) != 0 && ACPIGetD3Policy(DeviceExtension, &v39) >= 0 && v39 )
    v11[1] &= ~0x800uLL;
  v13 = *(_DWORD **)(v4 + 8);
  if ( (v11[1] & 0x8000000000LL) == 0 )
  {
    v14 = AMLIGetNamedChild(v12, 1447907935);
    v15 = (volatile signed __int32 *)v14;
    if ( v14 )
    {
      if ( (unsigned int)AMLIGetNSObjectType((__int64)v14) == 8 )
      {
        v42 = 0LL;
        if ( (int)ACPIGet(v11, 1447907935, 268713986, 0LL, 0, 0LL, 0LL, (__int64)&v42, 0LL) < 0 )
        {
          v13[1] |= 0x10u;
        }
        else
        {
          v29 = 0;
          if ( v42 )
            v29 = 16;
          v13[1] = v29 | v13[1] & 0xFFFFFFEF;
        }
        AMLIDereferenceHandleEx(v15);
      }
      else
      {
        v13[1] |= 0x10u;
      }
    }
    if ( !ACPIDockIsDockDevice((__int64)v12) )
    {
      if ( AMLIIsNamedChildPresent(v12, 810173791) )
      {
        v30 = v13[1];
        if ( (v30 & 0x10) == 0 )
          v30 |= 0x40000u;
        v13[1] = v30 | 0x18;
      }
      if ( AMLIIsNamedChildPresent(v12, 826951007)
        || AMLIIsNamedChildPresent(v12, 843728223)
        || AMLIIsNamedChildPresent(v12, 860505439)
        || AMLIIsNamedChildPresent(v12, 877282655) )
      {
        v31 = v13[1];
        if ( (v31 & 0x10) == 0 )
          v31 |= 0x40000u;
        v13[1] = v31 | 0x10010;
      }
    }
  }
  if ( AMLIIsNamedChildPresent(v12, 1129466207) )
    *(_DWORD *)(a1 + 48) |= 0x4000u;
  v43 = 0LL;
  DeviceCapabilities = ACPIGet(v11, 1096045407, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v43, 0LL);
  if ( DeviceCapabilities >= 0 )
  {
    v46 = v11;
    v48 = &v46;
    LODWORD(v47) = 8;
    if ( (int)EmClientRuleEvaluate(&GUID_EM_RULE_ACPI_DEVICE_IGNORE_STA_DISABLE, &v48, 1LL, &v41) >= 0 && v41 == 2 )
    {
      v13[1] &= ~0x4000u;
      v17 = a4;
    }
    else if ( (v11[1] & 0x40000000000000LL) != 0 )
    {
      v17 = a4;
      if ( !a4 )
      {
        v26 = v13[1];
        if ( (AcpiOverrideAttributes & 2) != 0 )
          v27 = v26 | 0x4000;
        else
          v27 = v26 & 0xFFFFBFFF;
        v13[1] = v27;
      }
    }
    else if ( !AMLIIsNamedChildPresent(v12, 1397900127) || AMLIIsNamedChildPresent(v12, 1397904223) )
    {
      v17 = a4;
      if ( a4 )
        v13[1] &= ~0x4000u;
    }
    else
    {
      v13[1] |= 0x4000u;
      v17 = a4;
    }
    if ( (v43 & 4) == 0 )
      v13[1] |= 0x20000u;
    if ( AMLIIsNamedChildPresent(v12, 1314214751) )
    {
      v44 = 0LL;
      if ( (int)ACPIGet(v11, 1314214751, 268697602, 0LL, 0, 0LL, 0LL, (__int64)&v44, 0LL) >= 0 )
        v13[3] = v44;
    }
    v45 = 0LL;
    if ( AMLIIsNamedChildPresent(v12, 1380204895) )
    {
      DeviceCapabilities = ACPIGet(v11, 1380204895, -1878785022, 0LL, 0, 0LL, 0LL, (__int64)&v45, 0LL);
      if ( DeviceCapabilities < 0 )
      {
        v32 = v11[1];
        v33 = byte_1C006FE7D;
        v34 = byte_1C006FE7D;
        if ( (v32 & 0x200000000000LL) != 0 )
        {
          v33 = (char *)v11[70];
          if ( (v32 & 0x400000000000LL) != 0 )
            v34 = (char *)v11[71];
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_32;
        v35 = 13;
LABEL_83:
        WPP_RECORDER_SF_Lqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          5u,
          v35,
          (__int64)&WPP_5ea0bed1d6f13f26cf29dd07beb1e62d_Traceguids,
          DeviceCapabilities,
          (char)v11,
          (__int64)v33,
          (__int64)v34);
        goto LABEL_32;
      }
      v13[2] = v45;
    }
    DeviceCapabilities = ACPISystemPowerQueryDeviceCapabilities((ULONG_PTR)v11);
    if ( DeviceCapabilities >= 0 )
    {
      v18 = v11[119];
      if ( (v18 & 0x80000000) == 0 )
      {
        v24 = (unsigned __int8)AcpiIsDeviceSecure(v11) == 0;
        v25 = v11[119];
        if ( !v24 )
          v25 |= 0x2000000000uLL;
        v18 = v25 | 0x80000000LL;
        v11[119] = v18;
      }
      if ( (v18 & 0x2000000000LL) != 0 )
        v13[1] |= 0x100000u;
      if ( !v17 )
      {
        v13[1] |= 0x80u;
        v28 = v13[1] ^ ((unsigned __int16)v13[1] ^ (unsigned __int16)((unsigned __int64)*((unsigned int *)v11 + 2) >> 9)) & 0x100;
        v13[1] = v28;
        v13[1] = v28 & 0xFFFFFFBF | (v11[71] != 0 ? 0x40 : 0);
      }
      if ( (int)ACPIProcessPhysicalDeviceLocation(v11, (__int64)&v49, 0LL) >= 0 && (v49 & 0x7F) != 0 )
      {
        v23 = v50;
        if ( (v50 & 1) == 0 )
          v13[1] |= 0x40000u;
        if ( v23 < 0 )
          v13[1] |= 0x40000u;
      }
      DeviceCapabilities = 0;
      goto LABEL_32;
    }
    v36 = v11[1];
    v33 = byte_1C006FE7D;
    v34 = byte_1C006FE7D;
    if ( (v36 & 0x200000000000LL) != 0 )
    {
      v33 = (char *)v11[70];
      if ( (v36 & 0x400000000000LL) != 0 )
        v34 = (char *)v11[71];
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_32;
    v35 = 14;
    goto LABEL_83;
  }
LABEL_32:
  v7 = v37;
  v5 = v40;
LABEL_33:
  if ( v11 )
  {
    v9 = (char)v11;
    if ( (v11[1] & 0x200000000000LL) != 0 )
      v10 = (const char *)v11[70];
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText((__int64)&WPP_RECORDER_INITIALIZED, v7);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      5u,
      0xFu,
      v21,
      v5,
      IrpText,
      DeviceCapabilities,
      v9,
      v10,
      v20);
  }
  return (unsigned int)DeviceCapabilities;
}
