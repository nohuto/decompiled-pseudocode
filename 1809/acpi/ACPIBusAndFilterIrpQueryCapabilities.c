/*
 * XREFs of ACPIBusAndFilterIrpQueryCapabilities @ 0x1C009B4E0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002830 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C0002890 (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00028B0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIGet @ 0x1C0003980 (ACPIGet.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNSObjectType @ 0x1C000C844 (AMLIGetNSObjectType.c)
 *     AMLIIsNamedChildPresent @ 0x1C001ED60 (AMLIIsNamedChildPresent.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0020560 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIDockIsDockDevice @ 0x1C00206B0 (ACPIDockIsDockDevice.c)
 *     AMLIGetNamedChild @ 0x1C00207C0 (AMLIGetNamedChild.c)
 *     ACPIGetD3Policy @ 0x1C0020858 (ACPIGetD3Policy.c)
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C009AEFC (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C009B9E8 (ACPISystemPowerQueryDeviceCapabilities.c)
 *     AcpiIsDeviceSecure @ 0x1C009F5CC (AcpiIsDeviceSecure.c)
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
  __int64 v15; // rdi
  int DeviceCapabilities; // edi
  char v17; // r12
  __int64 v18; // rax
  char *IrpText; // rax
  const char *v20; // r8
  __int64 v21; // r10
  int v23; // eax
  int v24; // ecx
  unsigned int v25; // ecx
  int v26; // edx
  int v27; // ecx
  int v28; // eax
  int v29; // eax
  __int64 v30; // rax
  char *v31; // rdx
  char *v32; // rcx
  unsigned __int16 v33; // r9
  __int64 v34; // rax
  unsigned __int8 v36; // [rsp+61h] [rbp-48h]
  bool v37; // [rsp+62h] [rbp-47h] BYREF
  __int64 v38; // [rsp+68h] [rbp-41h]
  int v39; // [rsp+70h] [rbp-39h] BYREF
  __int64 v40; // [rsp+78h] [rbp-31h] BYREF
  __int64 v41; // [rsp+80h] [rbp-29h] BYREF
  __int64 v42; // [rsp+88h] [rbp-21h] BYREF
  __int64 v43; // [rsp+90h] [rbp-19h] BYREF
  __int64 **v44; // [rsp+98h] [rbp-11h] BYREF
  __int64 *v45; // [rsp+A0h] [rbp-9h] BYREF
  int v46; // [rsp+A8h] [rbp-1h]
  char v47[8]; // [rsp+B0h] [rbp+7h] BYREF
  int v48; // [rsp+B8h] [rbp+Fh]

  v4 = *(_QWORD *)(a2 + 184);
  v5 = a2;
  v38 = a2;
  v7 = *(_BYTE *)(v4 + 1);
  v36 = v7;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v9 = 0;
  v10 = byte_1C006E28A;
  v11 = (__int64 *)DeviceExtension;
  if ( !DeviceExtension )
  {
    DeviceCapabilities = -1073741823;
    goto LABEL_33;
  }
  v12 = *(__int64 **)(DeviceExtension + 712);
  if ( (*(_DWORD *)(DeviceExtension + 952) & 0x800LL) != 0 && ACPIGetD3Policy(DeviceExtension, &v37) >= 0 && v37 )
    v11[1] &= ~0x800uLL;
  v13 = *(_DWORD **)(v4 + 8);
  if ( (v11[1] & 0x8000000000LL) == 0 )
  {
    v14 = AMLIGetNamedChild(v12, 1447907935);
    v15 = (__int64)v14;
    if ( v14 )
    {
      if ( (unsigned int)AMLIGetNSObjectType((__int64)v14) == 8 )
      {
        v40 = 0LL;
        if ( (int)ACPIGet(v11, 1447907935, 268713986, 0LL, 0, 0LL, 0LL, (__int64)&v40, 0LL) < 0 )
        {
          v13[1] |= 0x10u;
        }
        else
        {
          v27 = 0;
          if ( v40 )
            v27 = 16;
          v13[1] = v27 | v13[1] & 0xFFFFFFEF;
        }
        AMLIDereferenceHandleEx(v15);
      }
      else
      {
        v13[1] |= 0x10u;
      }
    }
    if ( !ACPIDockIsDockDevice(v12) )
    {
      if ( AMLIIsNamedChildPresent(v12, 810173791) )
      {
        v28 = v13[1];
        if ( (v28 & 0x10) == 0 )
        {
          v28 |= 0x40000u;
          v13[1] = v28;
        }
        v13[1] = v28 | 0x18;
      }
      if ( AMLIIsNamedChildPresent(v12, 826951007)
        || AMLIIsNamedChildPresent(v12, 843728223)
        || AMLIIsNamedChildPresent(v12, 860505439)
        || AMLIIsNamedChildPresent(v12, 877282655) )
      {
        v29 = v13[1];
        if ( (v29 & 0x10) == 0 )
        {
          v29 |= 0x40000u;
          v13[1] = v29;
        }
        v13[1] = v29 | 0x10010;
      }
    }
  }
  if ( AMLIIsNamedChildPresent(v12, 1129466207) )
    *(_DWORD *)(a1 + 48) |= 0x4000u;
  v41 = 0LL;
  DeviceCapabilities = ACPIGet(v11, 1096045407, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v41, 0LL);
  if ( DeviceCapabilities >= 0 )
  {
    v45 = v11;
    v44 = &v45;
    v46 = 8;
    if ( (int)EmClientRuleEvaluate(&GUID_EM_RULE_ACPI_DEVICE_IGNORE_STA_DISABLE, &v44, 1LL, &v39) >= 0 && v39 == 2 )
    {
      v13[1] &= ~0x4000u;
      v17 = a4;
    }
    else if ( (v11[1] & 0x40000000000000LL) != 0 )
    {
      v17 = a4;
      if ( !a4 )
      {
        v24 = v13[1];
        if ( (AcpiOverrideAttributes & 2) != 0 )
          v25 = v24 | 0x4000;
        else
          v25 = v24 & 0xFFFFBFFF;
        v13[1] = v25;
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
    if ( (v41 & 4) == 0 )
      v13[1] |= 0x20000u;
    if ( AMLIIsNamedChildPresent(v12, 1314214751) )
    {
      v42 = 0LL;
      if ( (int)ACPIGet(v11, 1314214751, 268697602, 0LL, 0, 0LL, 0LL, (__int64)&v42, 0LL) >= 0 )
        v13[3] = v42;
    }
    v43 = 0LL;
    if ( AMLIIsNamedChildPresent(v12, 1380204895) )
    {
      DeviceCapabilities = ACPIGet(v11, 1380204895, -1878785022, 0LL, 0, 0LL, 0LL, (__int64)&v43, 0LL);
      if ( DeviceCapabilities < 0 )
      {
        v30 = v11[1];
        v31 = byte_1C006E28A;
        v32 = byte_1C006E28A;
        if ( (v30 & 0x200000000000LL) != 0 )
        {
          v31 = (char *)v11[70];
          if ( (v30 & 0x400000000000LL) != 0 )
            v32 = (char *)v11[71];
        }
        v33 = 13;
LABEL_80:
        WPP_RECORDER_SF_Lqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          5u,
          v33,
          (__int64)&WPP_5ea0bed1d6f13f26cf29dd07beb1e62d_Traceguids,
          DeviceCapabilities,
          (char)v11,
          (__int64)v31,
          (__int64)v32);
        goto LABEL_32;
      }
      v13[2] = v43;
    }
    DeviceCapabilities = ACPISystemPowerQueryDeviceCapabilities((ULONG_PTR)v11);
    if ( DeviceCapabilities >= 0 )
    {
      v18 = v11[119];
      if ( (v18 & 0x80000000) == 0 )
      {
        if ( (unsigned __int8)AcpiIsDeviceSecure(v11) )
          v11[119] |= 0x2000000000uLL;
        v18 = v11[119] | 0x80000000LL;
        v11[119] = v18;
      }
      if ( (v18 & 0x2000000000LL) != 0 )
        v13[1] |= 0x100000u;
      if ( !v17 )
      {
        v13[1] |= 0x80u;
        v26 = v13[1] ^ ((unsigned __int16)v13[1] ^ (unsigned __int16)((unsigned __int64)*((unsigned int *)v11 + 2) >> 9)) & 0x100;
        v13[1] = v26;
        v13[1] = v26 & 0xFFFFFFBF | (v11[71] != 0 ? 0x40 : 0);
      }
      if ( (int)ACPIProcessPhysicalDeviceLocation(v11, (__int64)v47, 0LL) >= 0 && (v47[0] & 0x7F) != 0 )
      {
        v23 = v48;
        if ( (v48 & 1) == 0 )
          v13[1] |= 0x40000u;
        if ( v23 < 0 )
          v13[1] |= 0x40000u;
      }
      DeviceCapabilities = 0;
      goto LABEL_32;
    }
    v34 = v11[1];
    v31 = byte_1C006E28A;
    v32 = byte_1C006E28A;
    if ( (v34 & 0x200000000000LL) != 0 )
    {
      v31 = (char *)v11[70];
      if ( (v34 & 0x400000000000LL) != 0 )
        v32 = (char *)v11[71];
    }
    v33 = 14;
    goto LABEL_80;
  }
LABEL_32:
  v7 = v36;
  v5 = v38;
LABEL_33:
  if ( v11 )
  {
    v9 = (char)v11;
    if ( (v11[1] & 0x200000000000LL) != 0 )
      v10 = (const char *)v11[70];
  }
  IrpText = ACPIDebugGetIrpText(0x200000000000LL, v7);
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
  return (unsigned int)DeviceCapabilities;
}
