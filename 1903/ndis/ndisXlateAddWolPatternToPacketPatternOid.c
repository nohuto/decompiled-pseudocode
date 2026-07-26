/*
 * XREFs of ndisXlateAddWolPatternToPacketPatternOid @ 0x1C0077B20
 * Callers:
 *     ndisOidPrePMAddWOLPattern @ 0x1C001CCF0 (ndisOidPrePMAddWOLPattern.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     ??$MakeExtendedPoolPtr@U_NDIS_PM_PACKET_PATTERN@@@@YA?AV?$unique_ptr@U_NDIS_PM_PACKET_PATTERN@@U?$KFreePool@U_NDIS_PM_PACKET_PATTERN@@@@@wistd@@KKPEAK@Z @ 0x1C01150F8 (--$MakeExtendedPoolPtr@U_NDIS_PM_PACKET_PATTERN@@@@YA-AV-$unique_ptr@U_NDIS_PM_PACKET_PATTERN@@U.c)
 *     ??$MakePoolPtr@U_NDIS_WOL_XLATION_CONTEXT@@@@YA?AV?$unique_ptr@U_NDIS_WOL_XLATION_CONTEXT@@U?$KFreePool@U_NDIS_WOL_XLATION_CONTEXT@@@@@wistd@@K@Z @ 0x1C01151D8 (--$MakePoolPtr@U_NDIS_WOL_XLATION_CONTEXT@@@@YA-AV-$unique_ptr@U_NDIS_WOL_XLATION_CONTEXT@@U-$KF.c)
 */

__int64 __fastcall ndisXlateAddWolPatternToPacketPatternOid(__int64 a1, _BYTE *a2)
{
  _DWORD *v2; // r15
  unsigned int v3; // esi
  _BYTE *v5; // r14
  int v6; // ecx
  __int64 v7; // rdx
  _QWORD *v8; // rbx
  unsigned int v9; // ecx
  __int64 v10; // r8
  int v11; // edx
  _DWORD *v12; // rdi
  char *v13; // rcx
  int v14; // eax
  int v16; // [rsp+70h] [rbp+8h] BYREF
  PVOID P; // [rsp+78h] [rbp+10h] BYREF

  v2 = *(_DWORD **)(a1 + 40);
  v3 = 0;
  v16 = 0;
  v5 = a2;
  *a2 = 0;
  v6 = v2[3];
  if ( v6 == 1 )
  {
    MakePoolPtr<_NDIS_WOL_XLATION_CONTEXT>(&P);
    v8 = P;
    if ( P )
    {
      *(_DWORD *)P = *(_DWORD *)(a1 + 32);
      v8[1] = *(_QWORD *)(a1 + 40);
      *((_DWORD *)v8 + 4) = *(_DWORD *)(a1 + 48);
      v9 = v2[41];
      v10 = v9 + v2[43];
      if ( (unsigned int)v10 < v9 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v7) = 4;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v7,
            11,
            111,
            (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
            a1);
        }
        v3 = -1073741811;
      }
      else
      {
        MakeExtendedPoolPtr<_NDIS_PM_PACKET_PATTERN>(&P, v7, v10, &v16);
        v12 = P;
        if ( P )
        {
          v13 = (char *)P + 24;
          *((_DWORD *)P + 1) = v2[37];
          *v12 = v2[2];
          v14 = v2[41];
          v12[2] = v14;
          v12[3] = v14 + 24;
          v12[4] = v2[43];
          memmove(v13, (char *)v2 + (unsigned int)v2[40], (unsigned int)v12[2]);
          memmove((char *)v12 + (unsigned int)v12[3], (char *)v2 + (unsigned int)v2[42], (unsigned int)v12[4]);
          *(_DWORD *)(a1 + 48) = v16;
          *(_DWORD *)(a1 + 32) = -50265853;
          *(_QWORD *)(a1 + 40) = v12;
          v8[3] = v12;
          *(_QWORD *)(a1 + 144) = v8;
          return v3;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v11) = 4;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v11,
            (_DWORD)P + 11,
            (_DWORD)P + 112,
            (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
            a1);
        }
        v3 = -1073741670;
      }
      *v5 = 1;
      ExFreePoolWithTag(v8, 0);
      return v3;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v7,
        (_DWORD)P + 11,
        (_DWORD)P + 110,
        (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
        a1);
    }
    v3 = -1073741670;
    *v5 = 1;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)a2,
        11,
        109,
        (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
        a1,
        v6);
    }
    *v5 = 1;
    return (unsigned int)-1073741637;
  }
  return v3;
}
