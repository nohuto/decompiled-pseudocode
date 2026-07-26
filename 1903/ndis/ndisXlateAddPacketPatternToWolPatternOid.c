/*
 * XREFs of ndisXlateAddPacketPatternToWolPatternOid @ 0x1C00778E8
 * Callers:
 *     ndisOidPreAddWakeUpPattern @ 0x1C0073F70 (ndisOidPreAddWakeUpPattern.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     NdisConvertNtStatusToNdisStatus @ 0x1C003F500 (NdisConvertNtStatusToNdisStatus.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     ??$MakeExtendedPoolPtr@U_NDIS_PM_WOL_PATTERN@@@@YA?AV?$unique_ptr@U_NDIS_PM_WOL_PATTERN@@U?$KFreePool@U_NDIS_PM_WOL_PATTERN@@@@@wistd@@KKPEAK@Z @ 0x1C0115164 (--$MakeExtendedPoolPtr@U_NDIS_PM_WOL_PATTERN@@@@YA-AV-$unique_ptr@U_NDIS_PM_WOL_PATTERN@@U-$KFre.c)
 *     ??$MakePoolPtr@U_NDIS_WOL_XLATION_CONTEXT@@@@YA?AV?$unique_ptr@U_NDIS_WOL_XLATION_CONTEXT@@U?$KFreePool@U_NDIS_WOL_XLATION_CONTEXT@@@@@wistd@@K@Z @ 0x1C01151D8 (--$MakePoolPtr@U_NDIS_WOL_XLATION_CONTEXT@@@@YA-AV-$unique_ptr@U_NDIS_WOL_XLATION_CONTEXT@@U-$KF.c)
 */

__int64 __fastcall ndisXlateAddPacketPatternToWolPatternOid(__int64 a1, _BYTE *a2)
{
  int v4; // edx
  _QWORD *v5; // rbx
  unsigned int v6; // esi
  unsigned int v7; // r15d
  unsigned int v8; // edi
  _DWORD *v9; // r14
  unsigned int v10; // esi
  unsigned int v11; // ecx
  int v12; // r13d
  unsigned int v13; // edi
  __int64 v14; // rdx
  int v15; // edx
  _DWORD *v16; // rdi
  int v17; // ecx
  PVOID P; // [rsp+70h] [rbp+8h] BYREF
  _DWORD *v20; // [rsp+78h] [rbp+10h] BYREF

  *a2 = 0;
  MakePoolPtr<_NDIS_WOL_XLATION_CONTEXT>(&P);
  v5 = P;
  if ( !P )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v4,
        (_DWORD)P + 11,
        (_DWORD)P + 107,
        (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
        a1);
    }
    v6 = -1073741670;
    goto LABEL_23;
  }
  v7 = -1;
  *(_DWORD *)P = *(_DWORD *)(a1 + 32);
  v8 = -1;
  v5[1] = *(_QWORD *)(a1 + 40);
  *((_DWORD *)v5 + 4) = *(_DWORD *)(a1 + 48);
  v9 = *(_DWORD **)(a1 + 40);
  v10 = v9[2];
  if ( v10 < 0xFFFFFFE8 )
    v8 = v10 + 24;
  if ( !(unsigned int)NdisConvertNtStatusToNdisStatus(v10 >= 0xFFFFFFE8 ? 0xC0000095 : 0) )
  {
    v11 = v9[3];
    if ( v11 >= v8 )
    {
      v12 = v9[4];
      v13 = -1;
      if ( v11 + v12 >= v11 )
        v13 = v11 + v12;
      if ( !(unsigned int)NdisConvertNtStatusToNdisStatus(v11 + v12 < v11 ? 0xC0000095 : 0) )
      {
        if ( *(_DWORD *)(a1 + 48) >= v13 )
        {
          if ( v10 + v12 >= v10 )
            v7 = v10 + v12;
          v6 = NdisConvertNtStatusToNdisStatus(v10 + v12 < v10 ? 0xC0000095 : 0);
          if ( !v6 )
          {
            MakeExtendedPoolPtr<_NDIS_PM_WOL_PATTERN>(&v20, v14, v7, &P);
            v16 = v20;
            if ( v20 )
            {
              *v20 = 12845440;
              v16[37] = v9[1];
              v16[2] = *v9;
              v16[3] = 1;
              v16[40] = 196;
              v17 = v9[2];
              v16[41] = v17;
              v16[42] = v16[40] + v17;
              v16[43] = v9[4];
              memmove((char *)v16 + (unsigned int)v16[40], v9 + 6, (unsigned int)v9[2]);
              memmove((char *)v16 + (unsigned int)v16[42], (char *)v9 + (unsigned int)v9[3], (unsigned int)v9[4]);
              *(_DWORD *)(a1 + 48) = (_DWORD)P;
              *(_DWORD *)(a1 + 32) = -50265846;
              *(_QWORD *)(a1 + 40) = v16;
              v5[3] = v16;
              *(_QWORD *)(a1 + 144) = v5;
              return v6;
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v15) = 4;
              WPP_RECORDER_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v15,
                v6 + 11,
                v6 + 108,
                (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
                a1);
            }
            v6 = -1073741670;
            goto LABEL_22;
          }
        }
        else
        {
          *(_DWORD *)(a1 + 56) = v13;
        }
      }
    }
  }
  v6 = -1073676267;
LABEL_22:
  ExFreePoolWithTag(v5, 0);
LABEL_23:
  *a2 = 1;
  return v6;
}
