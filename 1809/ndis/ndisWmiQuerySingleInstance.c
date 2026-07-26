/*
 * XREFs of ndisWmiQuerySingleInstance @ 0x1C00B5580
 * Callers:
 *     ndisWMIDispatch @ 0x1C00B537C (ndisWMIDispatch.c)
 * Callees:
 *     ndisWmiGetGuid @ 0x1C0009C20 (ndisWmiGetGuid.c)
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_qZ @ 0x1C0049D60 (WPP_SF_qZ.c)
 *     ndisQueryGuidData @ 0x1C00B4E54 (ndisQueryGuidData.c)
 *     ndisQueryGuidDataSize @ 0x1C00B5114 (ndisQueryGuidDataSize.c)
 *     NdisMSleep @ 0x1C00CF740 (NdisMSleep.c)
 *     ndisReferenceMiniportByName @ 0x1C010A008 (ndisReferenceMiniportByName.c)
 *     ndisDereferenceVcPtr @ 0x1C011E8EC (ndisDereferenceVcPtr.c)
 *     ndisReferenceVcPtr @ 0x1C011EB94 (ndisReferenceVcPtr.c)
 */

__int64 __fastcall ndisWmiQuerySingleInstance(
        struct _NDIS_MINIPORT_BLOCK *a1,
        __int64 a2,
        unsigned int a3,
        _DWORD *a4,
        struct _NDIS_MINIPORT_BLOCK *a5)
{
  signed __int32 v8; // eax
  int v9; // eax
  _LIST_ENTRY *v10; // rsi
  __int64 v11; // rax
  wchar_t *v12; // rdx
  int GuidDataSize; // ebx
  _LIST_ENTRY *v14; // r13
  _NDIS_BIND_PATHS *BindPaths; // rcx
  __int64 v17; // r12
  unsigned int v18; // r15d
  size_t v19; // rdx
  CHAR *v20; // rcx
  int v21; // eax
  _LIST_ENTRY *p_WmiEnabledVcs; // r15
  _LIST_ENTRY *Flink; // rsi
  __int64 v24; // rdx
  unsigned __int16 v25; // cx
  int v26; // [rsp+28h] [rbp-38h]
  struct _NDIS_MINIPORT_BLOCK *v27; // [rsp+30h] [rbp-30h]
  __int64 v28; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING String2; // [rsp+48h] [rbp-18h] BYREF
  size_t Size; // [rsp+A8h] [rbp+48h] BYREF
  unsigned int v31; // [rsp+B0h] [rbp+50h]
  _DWORD *v32; // [rsp+B8h] [rbp+58h]

  v32 = a4;
  v31 = a3;
  a5 = 0LL;
  if ( (unsigned __int8)byte_1C00A0261 >= 4u )
    WPP_SF_q(0x2Bu, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, (__int64)a1);
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
  v9 = *(_DWORD *)(a2 + 44);
  *a4 = 0;
  v10 = 0LL;
  if ( (v9 & 0x80u) != 0 )
    goto LABEL_19;
  v11 = *(unsigned int *)(a2 + 48);
  v12 = (wchar_t *)(v11 + a2 + 2);
  GuidDataSize = 0;
  v14 = 0LL;
  String2.Buffer = v12;
  String2.MaximumLength = *(_WORD *)(v11 + a2);
  String2.Length = String2.MaximumLength;
  if ( String2.MaximumLength >= 0x30u && v12 && v12[5] == 58 )
  {
    p_WmiEnabledVcs = &a1->WmiEnabledVcs;
    Flink = a1->WmiEnabledVcs.Flink;
    while ( Flink != p_WmiEnabledVcs )
    {
      v14 = Flink - 20;
      if ( RtlEqualUnicodeString((PCUNICODE_STRING)&Flink[-2].Blink, &String2, 1u) )
      {
        if ( !(unsigned __int8)ndisReferenceVcPtr(&Flink[-20], v24) )
        {
          if ( (unsigned __int8)byte_1C00A0261 >= 2u )
            WPP_SF_q(0xAu, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, (__int64)a1);
          GuidDataSize = -1073741823;
        }
        break;
      }
      Flink = Flink->Flink;
      v14 = 0LL;
    }
    if ( Flink == p_WmiEnabledVcs )
    {
      if ( (unsigned __int8)byte_1C00A0261 >= 4u )
        WPP_SF_qZ(0xBu, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, (__int64)a1, &String2.Length);
      GuidDataSize = -1073741162;
    }
    v10 = v14;
    if ( GuidDataSize < 0 )
      v10 = 0LL;
  }
  else if ( !RtlEqualUnicodeString(a1->pAdapterInstanceName, &String2, 1u) )
  {
    if ( (unsigned __int8)byte_1C00A0261 >= 2u )
      WPP_SF_q(0xCu, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, (__int64)a1);
    GuidDataSize = -1073741162;
  }
  if ( GuidDataSize < 0 )
  {
    if ( (unsigned __int8)byte_1C00A0261 >= 2u )
      WPP_SF_q(0x2Cu, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, (__int64)a1);
    goto LABEL_15;
  }
  if ( !v10 )
  {
LABEL_19:
    BindPaths = a1->BindPaths;
    if ( BindPaths )
      ndisReferenceMiniportByName(BindPaths->Paths);
  }
  if ( (int)ndisWmiGetGuid(&v28, (__int64)a1, (_QWORD *)(a2 + 24), 0) < 0 )
  {
    if ( (unsigned __int8)byte_1C00A0261 >= 2u )
      WPP_SF_q(0x2Du, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, (__int64)a1);
    v17 = (__int64)a5;
    GuidDataSize = -1073741811;
    goto LABEL_27;
  }
  v17 = (__int64)a5;
  GuidDataSize = ndisQueryGuidDataSize((int *)&Size, (__int64)a1, v10, (GUID *)(a2 + 24), a5);
  if ( GuidDataSize < 0 )
  {
    if ( (unsigned __int8)byte_1C00A0261 < 2u )
      goto LABEL_27;
    v25 = 46;
LABEL_59:
    WPP_SF_q(v25, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, (__int64)a1);
    goto LABEL_27;
  }
  v18 = Size + *(_DWORD *)(a2 + 56);
  if ( v18 < (unsigned int)Size )
  {
    GuidDataSize = -1073741823;
    goto LABEL_27;
  }
  if ( v31 < v18 )
  {
    v21 = 56;
    if ( v31 < 0x38 )
    {
      GuidDataSize = -1073741789;
      v21 = 4;
    }
    else
    {
      *(_DWORD *)(a2 + 44) |= 0x20u;
      GuidDataSize = 0;
      *(_DWORD *)a2 = 56;
      *(_DWORD *)(a2 + 48) = v18;
    }
    *v32 = v21;
    goto LABEL_27;
  }
  v19 = (unsigned int)Size;
  v20 = (CHAR *)(a2 + *(unsigned int *)(a2 + 56));
  v17 = (__int64)a5;
  v27 = a5;
  *(_QWORD *)(a2 + 16) = MEMORY[0xFFFFF78000000014];
  *(_DWORD *)a2 = v18;
  *(_DWORD *)(a2 + 60) = v19;
  GuidDataSize = ndisQueryGuidData(v20, v19, a1, v10, (_QWORD *)(a2 + 24), v26, v27);
  if ( GuidDataSize < 0 )
  {
    if ( (unsigned __int8)byte_1C00A0261 < 2u )
      goto LABEL_27;
    v25 = 47;
    goto LABEL_59;
  }
  GuidDataSize = 0;
  *v32 = v18;
LABEL_27:
  if ( v10 )
    ndisDereferenceVcPtr(v10);
  if ( v17 )
    ndisDereferenceMiniport(v17, 0x61u);
LABEL_15:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( (unsigned __int8)byte_1C00A0261 >= 4u )
    WPP_SF_qD(0x30u, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, (__int64)a1, GuidDataSize);
  return (unsigned int)GuidDataSize;
}
