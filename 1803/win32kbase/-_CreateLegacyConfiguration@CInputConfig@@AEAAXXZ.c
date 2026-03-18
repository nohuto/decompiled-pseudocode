/*
 * XREFs of ?_CreateLegacyConfiguration@CInputConfig@@AEAAXXZ @ 0x1C0053880
 * Callers:
 *     ?OnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1C0053A58 (-OnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 *     ?CommitConfiguration@CInputConfig@@QEAAJXZ @ 0x1C0131C18 (-CommitConfiguration@CInputConfig@@QEAAJXZ.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     RIMGetQDCActivePathsData @ 0x1C0051848 (RIMGetQDCActivePathsData.c)
 *     RIMFreeQDCActivePathsData @ 0x1C00535D4 (RIMFreeQDCActivePathsData.c)
 *     ?_CommitConfiguration@CInputConfig@@AEAAJXZ @ 0x1C0053754 (-_CommitConfiguration@CInputConfig@@AEAAJXZ.c)
 *     ?_OnNewConfiguration@CInputConfig@@AEAAJPEAUCOutputConfig@@KPEAUCRegionConfig@@@Z @ 0x1C0053798 (-_OnNewConfiguration@CInputConfig@@AEAAJPEAUCOutputConfig@@KPEAUCRegionConfig@@@Z.c)
 *     RIMGetDisplayMonitor @ 0x1C00547E8 (RIMGetDisplayMonitor.c)
 *     RIMUpdatePointerDeviceScalingInfo @ 0x1C0058B70 (RIMUpdatePointerDeviceScalingInfo.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CInputConfig::_CreateLegacyConfiguration(CInputConfig *this)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rsi
  __int64 v4; // rdi
  struct CRegionConfig *v5; // r14
  unsigned int i; // r12d
  char *v7; // r15
  int v8; // edx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned int v13; // r10d
  __int64 j; // r9
  __int64 v15; // rcx
  char *v16; // r8
  __int64 v17; // rcx
  __int64 v18; // [rsp+38h] [rbp-D0h]
  __int64 v19; // [rsp+48h] [rbp-C0h] BYREF
  char v20; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v21[23]; // [rsp+68h] [rbp-A0h] BYREF
  char v22; // [rsp+120h] [rbp+18h]

  v21[0] = 0LL;
  v22 = 1;
  v21[1] = 1LL;
  v21[2] = 0LL;
  v21[12] = 0LL;
  v21[22] = 0LL;
  v2 = RIMGetQDCActivePathsData(&v19);
  v3 = v2;
  if ( v2 && (v4 = *(unsigned int *)v2, (_DWORD)v4) )
  {
    v5 = (struct CRegionConfig *)Win32AllocPoolZInit(80 * v4, 0x6F436E49u);
    if ( !v5 )
      goto LABEL_9;
    for ( i = 0; i < *(_DWORD *)v3; *((_DWORD *)v7 + 4) = 3 - (*(_QWORD *)(gpDispInfo + 96) != v10) )
    {
      v7 = (char *)v5 + 80 * i;
      v18 = v3[1] + 200LL * i;
      v8 = *((_DWORD *)v3 + 2) + 200 * i;
      *((_QWORD *)v7 + 3) = *(_QWORD *)(v18 + 16);
      *((_DWORD *)v7 + 8) = *(_DWORD *)(v18 + 28);
      *((_DWORD *)v7 + 12) = *(_DWORD *)(v18 + 56);
      *((_DWORD *)v7 + 13) = *(_DWORD *)(v18 + 60);
      *((_DWORD *)v7 + 9) = *(_DWORD *)(v18 + 104);
      RIMUpdatePointerDeviceScalingInfo((_DWORD)v7 + 40, v8, 1, (unsigned int)&v20, (__int64)(v7 + 56));
      if ( *((_DWORD *)v7 + 16) == *((_DWORD *)v7 + 14) )
      {
        v11 = *((unsigned int *)v7 + 15);
        if ( *((_DWORD *)v7 + 17) == (_DWORD)v11 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v9);
          *(_OWORD *)(v7 + 56) = *(_OWORD *)(v7 + 40);
        }
      }
      *((_QWORD *)v7 + 9) = *(_QWORD *)(gpDispInfo + 96);
      RIMGetDisplayMonitor(v18, v3, v7 + 72);
      v10 = *((_QWORD *)v7 + 9);
      *((_DWORD *)v7 + 5) = *(_DWORD *)(*(_QWORD *)(v10 + 40) + 60LL);
      *(_OWORD *)v7 = *(_OWORD *)(*(_QWORD *)(v10 + 40) + 28LL);
      ++i;
    }
  }
  else
  {
    v4 = **(unsigned int **)gpDispInfo;
    v5 = (struct CRegionConfig *)Win32AllocPoolZInit(80 * v4, 0x6F436E49u);
    if ( !v5 )
      goto LABEL_9;
    v13 = 0;
    for ( j = *(_QWORD *)(gpDispInfo + 104); j; j = *(_QWORD *)(j + 56) )
    {
      v15 = *(unsigned int *)(*(_QWORD *)(j + 40) + 24LL);
      if ( (v15 & 1) != 0 )
      {
        if ( v13 == (_DWORD)v4 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v12);
          break;
        }
        v16 = (char *)v5 + 80 * v13;
        *((_QWORD *)v16 + 9) = j;
        *((_DWORD *)v16 + 5) = *(_DWORD *)(*(_QWORD *)(j + 40) + 60LL);
        *(_OWORD *)v16 = *(_OWORD *)(*(_QWORD *)(j + 40) + 28LL);
        v17 = j - *(_QWORD *)(gpDispInfo + 96);
        *((_DWORD *)v16 + 9) = 1;
        *((_DWORD *)v16 + 4) = 3 - (v17 != 0);
        *((_DWORD *)v16 + 12) = *(_DWORD *)(*(_QWORD *)(j + 40) + 36LL) - *(_DWORD *)(*(_QWORD *)(j + 40) + 28LL);
        v12 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(j + 40) + 40LL) - *(_DWORD *)(*(_QWORD *)(j + 40) + 32LL));
        *((_DWORD *)v16 + 13) = v12;
        ++v13;
        *(_OWORD *)(v16 + 56) = *(_OWORD *)(v16 + 40);
      }
    }
  }
  if ( (int)CInputConfig::_OnNewConfiguration(this, (struct COutputConfig *)v21, v4, v5) >= 0 )
    CInputConfig::_CommitConfiguration(this);
LABEL_9:
  RIMFreeQDCActivePathsData(v3);
}
