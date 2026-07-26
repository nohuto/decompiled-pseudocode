/*
 * XREFs of ndisWmiQuerySingleInstance @ 0x1C0018CD0
 * Callers:
 *     ndisWMIDispatch @ 0x1C00191AC (ndisWMIDispatch.c)
 *     NdisWdfQuerySingleInstance @ 0x1C009F210 (NdisWdfQuerySingleInstance.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ?ndisQueryGuidDataSize@@YAJPEAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_GUID@@1@Z @ 0x1C001879C (-ndisQueryGuidDataSize@@YAJPEAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_NDIS_CO_VC_PTR_BLO.c)
 *     ?ndisQueryGuidData@@YAJPEAEKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_GUID@@1@Z @ 0x1C0018A1C (-ndisQueryGuidData@@YAJPEAEKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_NDIS_CO_VC_PTR_BLOCK@.c)
 *     WPP_RECORDER_SF_qZ @ 0x1C0019620 (WPP_RECORDER_SF_qZ.c)
 *     NdisMSleep @ 0x1C001BEC0 (NdisMSleep.c)
 *     ndisBugCheckEx @ 0x1C007E5C0 (ndisBugCheckEx.c)
 *     ndisDereferenceVcPtr @ 0x1C0087390 (ndisDereferenceVcPtr.c)
 *     ndisReferenceVcPtr @ 0x1C0087690 (ndisReferenceVcPtr.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00C79C8 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00C7B48 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ndisReferenceMiniportByName @ 0x1C012B290 (ndisReferenceMiniportByName.c)
 */

__int64 __fastcall ndisWmiQuerySingleInstance(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_GUID *a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5)
{
  _NDIS_GUID *pNdisGuidMap; // rbx
  signed __int32 v8; // eax
  wchar_t *v9; // rdx
  struct _NDIS_CO_VC_PTR_BLOCK *v10; // r12
  __int64 v11; // rax
  int GuidDataSize; // ebp
  struct _NDIS_CO_VC_PTR_BLOCK *p_TimerListEntry; // rdi
  _NDIS_BIND_PATHS *BindPaths; // rcx
  _QWORD *v15; // r8
  __int64 v16; // rax
  int v17; // edx
  unsigned int v18; // esi
  size_t v19; // rdx
  CHAR *v20; // rcx
  int v21; // edx
  _LIST_ENTRY *p_WmiEnabledVcs; // r14
  struct _NDIS_MINIPORT_BLOCK *Flink; // rsi
  int v25; // r9d
  int v26; // eax
  UNICODE_STRING String2; // [rsp+48h] [rbp-50h] BYREF
  size_t Size; // [rsp+B0h] [rbp+18h] BYREF
  unsigned int v29; // [rsp+B8h] [rbp+20h]

  v29 = a4;
  pNdisGuidMap = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      18,
      43,
      (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
      (char)a1);
  }
  v8 = _InterlockedIncrement((volatile signed __int32 *)&ndisPkgs);
  if ( !ImageSectionHandle )
  {
    if ( v8 == 1 )
    {
      ImageSectionHandle = MmLockPagableDataSection(AddressWithinSection);
      MmUnlockPagableImageSection(ImageSectionHandle);
    }
    else
    {
      do
        NdisMSleep(0x32u);
      while ( !ImageSectionHandle );
    }
  }
  MmLockPagableSectionByHandle(ImageSectionHandle);
  v10 = 0LL;
  *a5 = 0;
  if ( (*(_DWORD *)(a3 + 44) & 0x80u) != 0 )
  {
LABEL_11:
    BindPaths = a1->BindPaths;
    if ( BindPaths )
      ndisReferenceMiniportByName((__int64)BindPaths->Paths);
LABEL_13:
    if ( !pNdisGuidMap )
    {
      pNdisGuidMap = a1->pNdisGuidMap;
      v15 = (_QWORD *)(a3 + 24);
      if ( pNdisGuidMap )
      {
        LODWORD(v9) = 0;
        if ( a1->cNdisGuidMap )
        {
          do
          {
            if ( a3 == -24 )
            {
              if ( (pNdisGuidMap->Flags & 2) != 0 && !pNdisGuidMap->Oid )
                goto LABEL_22;
            }
            else
            {
              v16 = *(_QWORD *)&pNdisGuidMap->Guid.Data1 - *v15;
              if ( *(_QWORD *)&pNdisGuidMap->Guid.Data1 == *v15 )
                v16 = *(_QWORD *)pNdisGuidMap->Guid.Data4 - *(_QWORD *)(a3 + 32);
              if ( !v16 )
                goto LABEL_22;
            }
            LODWORD(v9) = (_DWORD)v9 + 1;
            ++pNdisGuidMap;
          }
          while ( (unsigned int)v9 < a1->cNdisGuidMap );
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)v9,
          18,
          45,
          (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
          (char)a1);
      }
      GuidDataSize = -1073741811;
      goto LABEL_27;
    }
LABEL_22:
    GuidDataSize = ndisQueryGuidDataSize((unsigned int *)&Size, a1, pNdisGuidMap, v10, (struct _GUID *)(a3 + 24), 0LL);
    if ( GuidDataSize >= 0 )
    {
      v18 = Size + *(_DWORD *)(a3 + 56);
      if ( v18 < (unsigned int)Size )
      {
        GuidDataSize = -1073741823;
      }
      else if ( v29 < v18 )
      {
        if ( v29 >= 0x38 )
        {
          *(_DWORD *)(a3 + 44) |= 0x20u;
          v26 = 56;
          *(_DWORD *)a3 = 56;
          GuidDataSize = 0;
          *(_DWORD *)(a3 + 48) = v18;
        }
        else
        {
          GuidDataSize = -1073741789;
          v26 = 4;
        }
        *a5 = v26;
      }
      else
      {
        v19 = (unsigned int)Size;
        v20 = (CHAR *)(a3 + *(unsigned int *)(a3 + 56));
        *(_QWORD *)(a3 + 16) = MEMORY[0xFFFFF78000000014];
        *(_DWORD *)a3 = v18;
        *(_DWORD *)(a3 + 60) = v19;
        GuidDataSize = ndisQueryGuidData(v20, v19, a1, (const CHAR *)pNdisGuidMap, v10, (struct _GUID *)(a3 + 24), 0LL);
        if ( GuidDataSize >= 0 )
        {
          GuidDataSize = 0;
          *a5 = v18;
          goto LABEL_27;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v25 = 47;
LABEL_63:
          LOBYTE(v17) = 2;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v17,
            18,
            v25,
            (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
            (char)a1);
        }
      }
LABEL_27:
      if ( v10 )
        ndisDereferenceVcPtr((char)v10);
      goto LABEL_29;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_27;
    v25 = 46;
    goto LABEL_63;
  }
  v11 = *(unsigned int *)(a3 + 48);
  v9 = (wchar_t *)(v11 + a3 + 2);
  *(_DWORD *)(&String2.MaximumLength + 1) = 0;
  GuidDataSize = 0;
  String2.Buffer = v9;
  p_TimerListEntry = 0LL;
  String2.MaximumLength = *(_WORD *)(v11 + a3);
  String2.Length = String2.MaximumLength;
  if ( String2.MaximumLength >= 0x30u && v9 && v9[5] == 58 )
  {
    p_WmiEnabledVcs = &a1->WmiEnabledVcs;
    Flink = (struct _NDIS_MINIPORT_BLOCK *)a1->WmiEnabledVcs.Flink;
    if ( Flink != (struct _NDIS_MINIPORT_BLOCK *)&a1->WmiEnabledVcs )
    {
      while ( 1 )
      {
        p_TimerListEntry = (struct _NDIS_CO_VC_PTR_BLOCK *)&Flink[-1].PdcTaskClientDisableTimer.Timer.TimerListEntry;
        if ( RtlEqualUnicodeString((PCUNICODE_STRING)&Flink[-1].PktMonEdge, &String2, 1u) )
          break;
        Flink = *(struct _NDIS_MINIPORT_BLOCK **)&Flink->Header.Type;
        p_TimerListEntry = 0LL;
        if ( Flink == (struct _NDIS_MINIPORT_BLOCK *)p_WmiEnabledVcs )
          goto LABEL_44;
      }
      if ( !(unsigned __int8)ndisReferenceVcPtr(&Flink[-1].PdcTaskClientDisableTimer.Timer.TimerListEntry, v9) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v9) = 2;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)v9,
            18,
            10,
            (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
            (char)a1);
        }
        GuidDataSize = -1073741823;
      }
    }
LABEL_44:
    if ( Flink == (struct _NDIS_MINIPORT_BLOCK *)p_WmiEnabledVcs )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qZ(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)v9,
          18,
          11,
          (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
          (char)a1,
          (__int64)&String2);
      GuidDataSize = -1073741162;
    }
    v10 = p_TimerListEntry;
    if ( GuidDataSize < 0 )
      v10 = 0LL;
  }
  else if ( !RtlEqualUnicodeString(a1->pAdapterInstanceName, &String2, 1u) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)v9,
        18,
        12,
        (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
        (char)a1);
    }
    GuidDataSize = -1073741162;
  }
  if ( GuidDataSize >= 0 )
  {
    if ( v10 )
      goto LABEL_13;
    goto LABEL_11;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v9,
      18,
      44,
      (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
      (char)a1);
  }
LABEL_29:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v21) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v21,
      18,
      48,
      (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
      (char)a1,
      GuidDataSize);
  }
  return (unsigned int)GuidDataSize;
}
