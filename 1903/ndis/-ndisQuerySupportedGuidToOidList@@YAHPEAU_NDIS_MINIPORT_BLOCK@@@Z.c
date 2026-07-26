/*
 * XREFs of ?ndisQuerySupportedGuidToOidList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003347C
 * Callers:
 *     ?ndisWmiRegister@@YAJPEAU_NDIS_MINIPORT_BLOCK@@_KPEAUWMIREGINFOW@@KPEAK@Z @ 0x1C0027E40 (-ndisWmiRegister@@YAJPEAU_NDIS_MINIPORT_BLOCK@@_KPEAUWMIREGINFOW@@KPEAK@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ?ndisQueryCustomGuids@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_GUID@@PEAG@Z @ 0x1C0029918 (-ndisQueryCustomGuids@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_GUID@@PE.c)
 *     ?ndisWmiMapOids@@YAGPEAU_NDIS_GUID@@GPEBKG0K@Z @ 0x1C0033914 (-ndisWmiMapOids@@YAGPEAU_NDIS_GUID@@GPEBKG0K@Z.c)
 *     ndisQuerySetMiniportEx2 @ 0x1C003400C (ndisQuerySetMiniportEx2.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

__int64 __fastcall ndisQuerySupportedGuidToOidList(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _NDIS_GUID *v2; // rsi
  const struct _GUID *v3; // rdx
  __int64 v4; // r13
  int v5; // edx
  int v6; // r9d
  unsigned int SetMiniportEx2; // eax
  int v8; // edx
  unsigned int *v9; // r12
  unsigned int v10; // edi
  unsigned __int16 v11; // ax
  unsigned __int16 v12; // r9
  unsigned __int16 v13; // ax
  unsigned __int16 v14; // r9
  unsigned __int16 v15; // di
  unsigned __int16 v16; // di
  unsigned int *p_Flags; // rdx
  __int64 v18; // r8
  unsigned int v19; // eax
  struct _NDIS_GUID *PoolWithTag; // rax
  void *v21; // r14
  struct _NDIS_GUID *v22; // rdx
  unsigned __int16 v23; // r10
  __int64 v24; // r8
  unsigned int Flags; // ecx
  unsigned __int16 v26; // ax
  unsigned __int16 v27; // r9
  unsigned __int16 v28; // ax
  unsigned __int16 v29; // r9
  unsigned __int16 v30; // r9
  _GUID *v31; // rax
  struct _NDIS_GUID *v32; // rcx
  _GUID v33; // xmm1
  _NDIS_GUID *v34; // rdi
  __int64 v36; // rcx
  unsigned __int16 v37; // r15
  int v38; // [rsp+20h] [rbp-E0h]
  int v39; // [rsp+28h] [rbp-D8h]
  unsigned __int16 v40[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v41; // [rsp+54h] [rbp-ACh] BYREF
  int v42; // [rsp+58h] [rbp-A8h] BYREF
  PVOID P; // [rsp+60h] [rbp-A0h] BYREF
  void *Src; // [rsp+68h] [rbp-98h] BYREF
  struct _NDIS_OID_REQUEST v45; // [rsp+70h] [rbp-90h] BYREF

  v42 = 0;
  P = 0LL;
  v40[0] = 0;
  Src = 0LL;
  v2 = 0LL;
  memset(&v45.Header.Revision, 0, 0xF7uLL);
  v3 = &WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v3,
      18,
      18,
      (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
      (char)a1);
  }
  memset(&v45, 0, 0xF8uLL);
  *(_QWORD *)&v45.Header.Type = 15466902LL;
  *(_QWORD *)&v45.NdisReserved[32] = &ndisIntReqWmi;
  v45.DATA.QUERY_INFORMATION.Oid = 65793;
  v4 = 8LL;
  *(_DWORD *)&v45.NdisReserved[16] |= 8u;
  v45.PortNumber = 0;
  v45.DATA.QUERY_INFORMATION.InformationBuffer = 0LL;
  v45.DATA.QUERY_INFORMATION.InformationBufferLength = 0;
  SetMiniportEx2 = ndisQuerySetMiniportEx2(
                     (int)a1,
                     v5,
                     (int)&v45,
                     v6,
                     v38,
                     v39,
                     0x3277444Eu,
                     (__int64)&P,
                     (__int64)&v42,
                     (__int64)&v41);
  v9 = (unsigned int *)P;
  v10 = SetMiniportEx2;
  if ( SetMiniportEx2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v8,
        18,
        19,
        (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
        (char)a1);
    }
  }
  else
  {
    v41 >>= 2;
    v11 = ndisWmiMapOids(0LL, 0, (const unsigned int *)P, v41, &ndisSupportedGuids, 0x52u);
    v13 = ndisWmiMapOids(0LL, v11, v9, v12, &ndisCoSupportedGuids, 0x10u);
    v15 = ndisWmiMapOids(0LL, v13, v9, v14, &ndisMediaSupportedGuids, 0x31u);
    if ( !(unsigned int)ndisQueryCustomGuids(a1, &v45, (struct _NDIS_GUID **)&Src, v40) )
      v15 += v40[0];
    v16 = v15 + 38;
    p_Flags = &ndisSupportedGuids.Flags;
    v18 = 82LL;
    do
    {
      v19 = *p_Flags;
      if ( (*p_Flags & 0x20000000) != 0
        && ((v19 & 0x1000000) == 0 || a1->NDKBlock)
        && ((v19 & 0x10000000) == 0 || (a1->Flags & 0x20000) != 0) )
      {
        ++v16;
      }
      p_Flags += 7;
      --v18;
    }
    while ( v18 );
    PoolWithTag = (struct _NDIS_GUID *)ExAllocatePoolWithTag(NonPagedPoolNx, 28LL * v16, 0x3177444Eu);
    v21 = Src;
    v2 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 28LL * v16);
      v22 = &ndisSupportedGuids;
      v23 = 0;
      v24 = 82LL;
      do
      {
        Flags = v22->Flags;
        if ( (Flags & 0x20000000) != 0
          && ((Flags & 0x1000000) == 0 || a1->NDKBlock)
          && ((a1->Flags & 0x20000) != 0 || (Flags & 0x10000000) == 0) )
        {
          v36 = v23;
          v2[v36].Guid = v22->Guid;
          *(_QWORD *)&v2[v36].Oid = *(_QWORD *)&v22->Oid;
          v2[v36].Flags = v22->Flags;
          if ( (a1->Flags & 0x20000) != 0 )
            v2[v36].Flags |= 0x10000000u;
          ++v23;
        }
        ++v22;
        --v24;
      }
      while ( v24 );
      v26 = ndisWmiMapOids(v2, v23, v9, v41, &ndisSupportedGuids, 0x52u);
      v28 = ndisWmiMapOids(v2, v26, v9, v27, &ndisCoSupportedGuids, 0x10u);
      v30 = ndisWmiMapOids(v2, v28, v9, v29, &ndisMediaSupportedGuids, 0x31u);
      v8 = 128;
      v31 = (_GUID *)&ndisStatusSupportedGuids;
      v32 = &v2[v30];
      do
      {
        v32->Guid = *v31;
        *(_GUID *)&v32->Oid = v31[1];
        *(_GUID *)&v32[1].Guid.Data2 = v31[2];
        *(_GUID *)&v32[1].Size = v31[3];
        *(_GUID *)v32[2].Guid.Data4 = v31[4];
        *(_GUID *)&v32[2].Flags = v31[5];
        *(_GUID *)&v32[3].Guid.Data4[4] = v31[6];
        v32 = (struct _NDIS_GUID *)((char *)v32 + 128);
        v33 = v31[7];
        v31 += 8;
        *(_GUID *)&v32[-1].Guid.Data4[4] = v33;
        --v4;
      }
      while ( v4 );
      v32->Guid = *v31;
      *(_GUID *)&v32->Oid = v31[1];
      *(_QWORD *)&v32[1].Guid.Data2 = *(_QWORD *)&v31[2].Data1;
      a1->pNdisGuidMap = v2;
      a1->cNdisGuidMap = v16;
      if ( v21 )
      {
        v37 = v40[0];
        v34 = &v2[(unsigned __int16)(v30 + 38)];
        memmove(v34, v21, 28LL * v40[0]);
        a1->cCustomGuidMap = v37;
      }
      else
      {
        a1->cCustomGuidMap = 0;
        v34 = 0LL;
      }
      a1->pCustomGuidMap = v34;
      v10 = 0;
    }
    else
    {
      v10 = -1073741670;
    }
    if ( v21 )
      ExFreePoolWithTag(v21, 0);
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  if ( v10 && v2 )
    ExFreePoolWithTag(v2, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      18,
      20,
      (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
      (char)a1,
      v10);
  }
  return v10;
}
