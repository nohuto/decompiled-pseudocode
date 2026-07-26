/*
 * XREFs of ndisMPowerPolicy @ 0x1C010AA50
 * Callers:
 *     ndisSetSystemPower @ 0x1C00B8930 (ndisSetSystemPower.c)
 *     ndisWdfNotifySystemPower @ 0x1C00F58A0 (ndisWdfNotifySystemPower.c)
 *     ndisQueryPower @ 0x1C010A6B4 (ndisQueryPower.c)
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C000AC20 (ndisQuerySetMiniport.c)
 *     ndisGetTimeInterval @ 0x1C0010B54 (ndisGetTimeInterval.c)
 *     ndisCancelWaitWake @ 0x1C0011794 (ndisCancelWaitWake.c)
 *     ndisIsMiniportStarted @ 0x1C001A37C (ndisIsMiniportStarted.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_qdD @ 0x1C003A814 (WPP_SF_qdD.c)
 *     McTemplateK0jqxq @ 0x1C003D24C (McTemplateK0jqxq.c)
 *     McTemplateK0jqxqd @ 0x1C003D2DC (McTemplateK0jqxqd.c)
 *     ?ndisMSendOidPmParametersForSx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0069364 (-ndisMSendOidPmParametersForSx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisMInvokeDevicePowerNotify @ 0x1C00B8CBC (ndisMInvokeDevicePowerNotify.c)
 */

__int64 __fastcall ndisMPowerPolicy(__int64 MiniportAdapterHandle, int a2, int a3, signed int *a4, char a5)
{
  int v5; // esi
  __int64 v6; // rdi
  unsigned int v7; // r13d
  char *v10; // rbx
  signed int v11; // r14d
  unsigned __int16 v13; // cx
  int v14; // r12d
  int v15; // edx
  int v16; // eax
  int v17; // ecx
  unsigned __int16 v18; // cx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // [rsp+20h] [rbp-E0h]
  int v22; // [rsp+40h] [rbp-C0h]
  _BYTE v23[248]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+150h] [rbp+50h] BYREF
  __int64 v25; // [rsp+158h] [rbp+58h]
  int v26; // [rsp+160h] [rbp+60h]

  v5 = 0;
  v6 = a2;
  v7 = 0;
  v10 = (char *)MiniportAdapterHandle;
  v24 = 0LL;
  v11 = 4;
  v25 = 0LL;
  v26 = 0;
  if ( (unsigned __int8)byte_1C00A025D >= 4u )
    WPP_SF_qD(0x78u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, MiniportAdapterHandle, a2);
  v22 = *((_DWORD *)v10 + 30) & 0x80;
  if ( (_DWORD)v6 == 6 )
  {
    if ( (unsigned __int8)byte_1C00A025D >= 4u )
      WPP_SF_q(0x79u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, (__int64)v10);
    if ( byte_1C00A2083 < 0 )
      McTemplateK0jqxq(
        MiniportAdapterHandle,
        &PowerShutdownMiniport,
        (const GUID *)(v10 + 4040),
        (__int64)(v10 + 4040),
        *((_DWORD *)v10 + 1022),
        *((_QWORD *)v10 + 507),
        15);
    *a4 = 4;
    if ( (unsigned __int8)byte_1C00A025D < 4u )
      return 0LL;
    v13 = 122;
    goto LABEL_137;
  }
  if ( (_DWORD)v6 == 1 )
  {
    if ( (unsigned __int8)byte_1C00A025D >= 4u )
      WPP_SF_q(0x7Bu, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, (__int64)v10);
    if ( byte_1C00A2083 < 0 )
      McTemplateK0jqxq(
        MiniportAdapterHandle,
        &PowerWakeUpDevice,
        (const GUID *)(v10 + 4040),
        (__int64)(v10 + 4040),
        *((_DWORD *)v10 + 1022),
        *((_QWORD *)v10 + 507),
        39);
    if ( !a5 )
    {
      *((_DWORD *)v10 + 31) &= ~0x800u;
      *((_QWORD *)v10 + 579) += ndisGetTimeInterval((_QWORD *)v10 + 578);
    }
    if ( !v22 )
      *a4 = 1;
    if ( (unsigned __int8)byte_1C00A025D < 4u )
      return 0LL;
    v13 = 124;
    goto LABEL_137;
  }
  if ( !a5 )
  {
    *((_DWORD *)v10 + 31) |= 0x800u;
    *((_QWORD *)v10 + 578) = MEMORY[0xFFFFF78000000014];
  }
  if ( (*((_DWORD *)v10 + 31) & 0x20) == 0
    || !ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)v10)
    || *((_DWORD *)v10 + 380) != 1 )
  {
    if ( (unsigned __int8)byte_1C00A025D >= 4u )
      WPP_SF_q(0x7Du, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, (__int64)v10);
    if ( (byte_1C00A2081 & 8) != 0 )
      McTemplateK0jqxq(
        MiniportAdapterHandle,
        &PowerPolicySetD3,
        (const GUID *)(v10 + 4040),
        (__int64)(v10 + 4040),
        *((_DWORD *)v10 + 1022),
        *((_QWORD *)v10 + 507),
        86);
    *a4 = 4;
    if ( (unsigned __int8)byte_1C00A025D < 4u )
      return 0LL;
    v13 = 126;
    goto LABEL_137;
  }
  if ( (unsigned int)(*((_DWORD *)v10 + 975) - 2) > 2 )
  {
    if ( a3 == 6 )
    {
      if ( (_DWORD)v6 == 5 )
      {
        if ( !a5 )
        {
          *((_DWORD *)v10 + 31) &= ~0x400u;
          ndisCancelWaitWake((__int64)v10);
        }
        *a4 = 4;
        if ( (unsigned __int8)byte_1C00A025D < 4u )
          return 0LL;
        v13 = 128;
        goto LABEL_137;
      }
      goto LABEL_42;
    }
    if ( (_DWORD)v6 != 5 || !ndisAoAcCapable && !ndisAoAcTest )
    {
LABEL_42:
      v14 = v22;
LABEL_43:
      if ( (*((_DWORD *)v10 + 31) & 0x40) == 0 )
      {
        if ( (unsigned __int8)byte_1C00A025D >= 4u )
          WPP_SF_qD(0x82u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, (__int64)v10, 0);
        if ( (byte_1C00A2081 & 8) != 0 )
          McTemplateK0jqxq(
            MiniportAdapterHandle,
            &PowerWakeNotEnabled,
            (const GUID *)(v10 + 4040),
            (__int64)(v10 + 4040),
            *((_DWORD *)v10 + 1022),
            *((_QWORD *)v10 + 507),
            181);
        goto LABEL_111;
      }
      if ( v14 )
      {
        if ( !(unsigned int)ndisMSendOidPmParametersForSx(v10) )
          return 0LL;
LABEL_111:
        if ( a5 )
        {
LABEL_119:
          if ( v14 )
            return v7;
          *a4 = 4;
          if ( (unsigned __int8)byte_1C00A025D >= 4u )
          {
            LODWORD(v21) = 4;
            WPP_SF_qdD(0x8Bu, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, (__int64)v10, v6, v21);
          }
          if ( (byte_1C00A2081 & 8) != 0 )
            McTemplateK0jqxqd(
              MiniportAdapterHandle,
              &PowerPolicyStates,
              (const GUID *)(v10 + 4040),
              (__int64)(v10 + 4040),
              *((_DWORD *)v10 + 1022),
              *((_QWORD *)v10 + 507),
              v6,
              *a4);
          if ( (unsigned __int8)byte_1C00A025D < 4u )
            return v7;
          v18 = 140;
LABEL_104:
          WPP_SF_q(v18, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, (__int64)v10);
          return v7;
        }
LABEL_112:
        v19 = *((_DWORD *)v10 + 31);
        if ( (v19 & 1) != 0 && (v19 & 0x40) == 0 )
        {
          memset(v23, 0, sizeof(v23));
          if ( (unsigned __int8)byte_1C00A025D >= 4u )
            WPP_SF_q(0x8Au, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, (__int64)v10);
          if ( (byte_1C00A2081 & 8) != 0 )
            McTemplateK0jqxq(
              v20,
              &PowerDisableWakeup,
              (const GUID *)(v10 + 4040),
              (__int64)(v10 + 4040),
              *((_DWORD *)v10 + 1022),
              *((_QWORD *)v10 + 507),
              198);
          v25 = 0LL;
          v26 = 0;
          v24 = 1311360LL;
          memset(v23, 0, sizeof(v23));
          *(_DWORD *)&v23[88] |= 8u;
          *(_DWORD *)&v23[8] = 0;
          *(_QWORD *)&v23[104] = &ndisIntReqGeneric;
          *(_DWORD *)v23 = 15466902;
          *(_QWORD *)&v23[40] = &v24;
          *(_DWORD *)&v23[32] = -50265847;
          *(_DWORD *)&v23[4] = 1;
          *(_DWORD *)&v23[48] = 20;
          ndisQuerySetMiniport(v10, 0LL, (struct _NDIS_OID_REQUEST *)v23, 0LL, 0LL);
        }
        goto LABEL_119;
      }
      v15 = *(_DWORD *)&v10[4 * v6 + 1240];
      if ( (int)v6 >= 5 && ((int)v6 > *((_DWORD *)v10 + 317) || v15 > *((_DWORD *)v10 + 318)) )
      {
        if ( (unsigned __int8)byte_1C00A025D >= 4u )
          WPP_SF_q(0x83u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, (__int64)v10);
        if ( (byte_1C00A2081 & 8) != 0 )
          McTemplateK0jqxq(
            MiniportAdapterHandle,
            &PowerHibernateOrShutdown,
            (const GUID *)(v10 + 4040),
            (__int64)(v10 + 4040),
            *((_DWORD *)v10 + 1022),
            *((_QWORD *)v10 + 507),
            224);
        goto LABEL_111;
      }
      MiniportAdapterHandle = *((unsigned int *)v10 + 281);
      if ( (MiniportAdapterHandle & 2) != 0 && *((_DWORD *)v10 + 275) )
        v5 = *((_DWORD *)v10 + 275);
      if ( (MiniportAdapterHandle & 0xFFFFFFFD) != 0 )
      {
        v16 = *((_DWORD *)v10 + 276);
        if ( v16 )
        {
          if ( !v5 || v5 > v16 )
            v5 = *((_DWORD *)v10 + 276);
        }
      }
      if ( !v5 )
      {
        if ( (unsigned __int8)byte_1C00A025D >= 4u )
          WPP_SF_q(0x84u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, (__int64)v10);
        if ( (byte_1C00A2081 & 8) != 0 )
          McTemplateK0jqxq(
            MiniportAdapterHandle,
            &PowerPolicyPatternNotEnabled,
            (const GUID *)(v10 + 4040),
            (__int64)(v10 + 4040),
            *((_DWORD *)v10 + 1022),
            *((_QWORD *)v10 + 507),
            9);
        goto LABEL_111;
      }
      MiniportAdapterHandle = *((unsigned int *)v10 + 318);
      if ( v5 <= (int)MiniportAdapterHandle )
        MiniportAdapterHandle = (unsigned int)v5;
      if ( (int)v6 > *((_DWORD *)v10 + 317) || v15 > (int)MiniportAdapterHandle || !v15 )
      {
        if ( (unsigned __int8)byte_1C00A025D >= 2u )
          WPP_SF_q(0x85u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, (__int64)v10);
        if ( (byte_1C00A2082 & 0x40) != 0 )
          McTemplateK0jqxq(
            MiniportAdapterHandle,
            &PowerPolicyError,
            (const GUID *)(v10 + 4040),
            (__int64)(v10 + 4040),
            *((_DWORD *)v10 + 1022),
            *((_QWORD *)v10 + 507),
            50);
        v7 = -1073741823;
        goto LABEL_111;
      }
      MiniportAdapterHandle = (unsigned int)(MiniportAdapterHandle - 1);
      if ( (_DWORD)MiniportAdapterHandle )
      {
        v17 = MiniportAdapterHandle - 1;
        if ( v17 )
        {
          MiniportAdapterHandle = (unsigned int)(v17 - 1);
          if ( (_DWORD)MiniportAdapterHandle )
          {
            if ( (_DWORD)MiniportAdapterHandle != 1 )
              goto LABEL_92;
            if ( (*((_DWORD *)v10 + 307) & 0x2000) != 0 )
              goto LABEL_87;
          }
          MiniportAdapterHandle = 4098LL;
          if ( (*((_DWORD *)v10 + 307) & 0x1002) == 0x1002 )
          {
            v11 = 3;
            goto LABEL_87;
          }
        }
        MiniportAdapterHandle = 2049LL;
        if ( (*((_DWORD *)v10 + 307) & 0x801) == 0x801 )
        {
          v11 = 2;
          goto LABEL_87;
        }
      }
      if ( (*((_DWORD *)v10 + 307) & 0x400) != 0 )
      {
        v11 = 1;
LABEL_87:
        if ( v15 > v11 )
        {
          v7 = -1073741823;
          if ( (unsigned __int8)byte_1C00A025D >= 2u )
            WPP_SF_qD(0x87u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, (__int64)v10, v6);
          if ( (byte_1C00A2082 & 0x40) != 0 )
            McTemplateK0jqxq(
              MiniportAdapterHandle,
              &PowerPolicyError,
              (const GUID *)(v10 + 4040),
              (__int64)(v10 + 4040),
              *((_DWORD *)v10 + 1022),
              *((_QWORD *)v10 + 507),
              122);
        }
        goto LABEL_96;
      }
LABEL_92:
      v7 = -1073741823;
      if ( (unsigned __int8)byte_1C00A025D >= 2u )
        WPP_SF_qD(0x86u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, (__int64)v10, v6);
      if ( (byte_1C00A2082 & 0x40) != 0 )
        McTemplateK0jqxq(
          MiniportAdapterHandle,
          &PowerPolicyError,
          (const GUID *)(v10 + 4040),
          (__int64)(v10 + 4040),
          *((_DWORD *)v10 + 1022),
          *((_QWORD *)v10 + 507),
          98);
LABEL_96:
      if ( a5 || (ndisMInvokeDevicePowerNotify((__int64)v10, v11), !(unsigned int)ndisMSendOidPmParametersForSx(v10)) )
      {
        *a4 = v11;
        if ( (unsigned __int8)byte_1C00A025D >= 4u )
        {
          LODWORD(v21) = v11;
          WPP_SF_qdD(0x88u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, (__int64)v10, v6, v21);
        }
        if ( (byte_1C00A2081 & 8) != 0 )
          McTemplateK0jqxqd(
            MiniportAdapterHandle,
            &PowerPolicyStates,
            (const GUID *)(v10 + 4040),
            (__int64)(v10 + 4040),
            *((_DWORD *)v10 + 1022),
            *((_QWORD *)v10 + 507),
            v6,
            *a4);
        if ( (unsigned __int8)byte_1C00A025D < 4u )
          return v7;
        v18 = 137;
        goto LABEL_104;
      }
      goto LABEL_112;
    }
    v14 = v22;
    if ( v22 )
      goto LABEL_43;
    if ( !a5 )
    {
      *((_DWORD *)v10 + 31) &= ~0x400u;
      ndisCancelWaitWake((__int64)v10);
    }
    *a4 = 4;
    if ( (unsigned __int8)byte_1C00A025D < 4u )
      return 0LL;
    v13 = 129;
LABEL_137:
    WPP_SF_q(v13, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, (__int64)v10);
    return 0LL;
  }
  if ( !a5 )
  {
    *((_DWORD *)v10 + 31) &= ~0x400u;
    ndisCancelWaitWake((__int64)v10);
  }
  if ( (unsigned __int8)byte_1C00A025D >= 4u )
    WPP_SF_q(0x7Fu, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, (__int64)v10);
  return 2147483663LL;
}
