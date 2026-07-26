/*
 * XREFs of ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x1C00BD598
 * Callers:
 *     ?ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C00BB6A0 (-ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C00BBA94 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00BCDBC (-ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?ndisWdfRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@W4_NDIS_TMP_REF_REASON@@@Z @ 0x1C00BD9B8 (-ndisWdfRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@W4_NDIS_TMP_REF_REASON@@@Z.c)
 *     ?ndisWdfRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BDC0C (-ndisWdfRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C011D074 (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     ndisQuerySetMiniportEx @ 0x1C0006A60 (ndisQuerySetMiniportEx.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     McTemplateK0qxzzxxxxxx @ 0x1C00BDDF0 (McTemplateK0qxzzxxxxxx.c)
 */

void __fastcall ndisUpdateMiniportCsTrafficStatistics(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rbx
  int v4; // edx
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // r13
  _NDIS_MINIPORT_CS_TRAFFIC_STATS *v11; // rcx
  unsigned __int64 IfInUnicastPackets; // r11
  unsigned __int64 IfOutUnicastPackets; // r10
  unsigned __int64 IfInMulticastPackets; // r9
  unsigned __int64 IfOutMulticastPackets; // r8
  unsigned __int64 IfInBroadcastPackets; // rdx
  unsigned __int64 IfOutBroadcastPackets; // rax
  char *v18; // rdx
  __int64 v19; // r8
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  const wchar_t *v22; // rcx
  const wchar_t *v23; // rax
  KIRQL NewIrql; // [rsp+70h] [rbp-90h]
  _QWORD v26[6]; // [rsp+78h] [rbp-88h] BYREF
  struct _NDIS_MINIPORT_BLOCK *v27; // [rsp+A8h] [rbp-58h]
  __int128 v28; // [rsp+B0h] [rbp-50h]
  __int128 v29; // [rsp+C0h] [rbp-40h]
  __int128 v30; // [rsp+D0h] [rbp-30h]
  char v31[256]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v32[20]; // [rsp+1E0h] [rbp+E0h] BYREF

  v27 = a1;
  memset((char *)v32 + 1, 0, 0x97uLL);
  AoAc = a1->AoAc;
  v32[0] = 9961856LL;
  memset(v31, 0, 0xF8uLL);
  *(_DWORD *)&v31[88] |= 8u;
  *(_QWORD *)&v31[104] = &ndisIntReqGeneric;
  *(_QWORD *)&v31[40] = v32;
  *(_DWORD *)v31 = 15466902;
  *(_DWORD *)&v31[32] = 131334;
  *(_QWORD *)&v31[4] = 2LL;
  *(_DWORD *)&v31[48] = 152;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      11,
      11,
      (struct _GUID *)&WPP_a4d5aa3896e33b50761396b1dd7f9853_Traceguids,
      (char)v31,
      (char)a1);
  }
  if ( !(unsigned int)ndisQuerySetMiniportEx((__int64)a1, 0LL, (__int64)v31, 0, 0LL, 0LL) )
  {
    memset(v26, 0, sizeof(v26));
    v5 = v32[4];
    v6 = v32[8];
    v7 = v32[5];
    v8 = v32[9];
    v9 = v32[6];
    v10 = v32[10];
    *(_QWORD *)&v28 = v32[4];
    *((_QWORD *)&v28 + 1) = v32[8];
    *(_QWORD *)&v29 = v32[5];
    *((_QWORD *)&v29 + 1) = v32[9];
    *(_QWORD *)&v30 = v32[6];
    *((_QWORD *)&v30 + 1) = v32[10];
    NewIrql = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
    v11 = &AoAc->CsTrafficStats[a2];
    if ( a2 )
    {
      IfInUnicastPackets = AoAc->CsTrafficStats[0].IfInUnicastPackets;
      if ( v5 >= IfInUnicastPackets )
      {
        IfOutUnicastPackets = AoAc->CsTrafficStats[0].IfOutUnicastPackets;
        if ( v6 >= IfOutUnicastPackets )
        {
          IfInMulticastPackets = AoAc->CsTrafficStats[0].IfInMulticastPackets;
          if ( v7 >= IfInMulticastPackets )
          {
            IfOutMulticastPackets = AoAc->CsTrafficStats[0].IfOutMulticastPackets;
            if ( v8 >= IfOutMulticastPackets )
            {
              IfInBroadcastPackets = AoAc->CsTrafficStats[0].IfInBroadcastPackets;
              if ( v9 >= IfInBroadcastPackets )
              {
                IfOutBroadcastPackets = AoAc->CsTrafficStats[0].IfOutBroadcastPackets;
                if ( v10 >= IfOutBroadcastPackets )
                {
                  v5 -= IfInUnicastPackets;
                  v6 -= IfOutUnicastPackets;
                  v7 -= IfInMulticastPackets;
                  v8 -= IfOutMulticastPackets;
                  v9 -= IfInBroadcastPackets;
                  v10 -= IfOutBroadcastPackets;
                }
              }
            }
          }
        }
      }
      v26[5] = v10;
      v18 = (char *)((char *)v26 - (char *)v11);
      v26[4] = v9;
      v26[3] = v8;
      v19 = 6LL;
      v26[2] = v7;
      v26[1] = v6;
      v26[0] = v5;
      do
      {
        v11->IfInUnicastPackets += *(unsigned __int64 *)((char *)&v11->IfInUnicastPackets + (_QWORD)v18);
        v11 = (_NDIS_MINIPORT_CS_TRAFFIC_STATS *)((char *)v11 + 8);
        --v19;
      }
      while ( v19 );
    }
    else
    {
      v10 = v26[5];
      v9 = v26[4];
      v8 = v26[3];
      v7 = v26[2];
      v6 = v26[1];
      v5 = v26[0];
    }
    v20 = v29;
    *(_OWORD *)&AoAc->CsTrafficStats[0].IfInUnicastPackets = v28;
    v21 = v30;
    *(_OWORD *)&AoAc->CsTrafficStats[0].IfInMulticastPackets = v20;
    *(_OWORD *)&AoAc->CsTrafficStats[0].IfInBroadcastPackets = v21;
    KeReleaseSpinLock(&AoAc->Lock, NewIrql);
    if ( a2 && (byte_1C00E8083 & 4) != 0 )
    {
      v22 = L"D0";
      v23 = L"DX";
      if ( a2 != 1 )
      {
        v23 = L"D0";
        v22 = L"DX";
      }
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))McTemplateK0qxzzxxxxxx)(
        v22,
        v27,
        &v27->InterfaceGuid,
        v27->IfIndex,
        (_NET_LUID_LH)v27->NetLuid.Value,
        v22,
        v23,
        v5,
        v6,
        v7,
        v8,
        v9,
        v10);
    }
  }
}
