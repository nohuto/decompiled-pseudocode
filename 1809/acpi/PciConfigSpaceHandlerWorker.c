/*
 * XREFs of PciConfigSpaceHandlerWorker @ 0x1C0018130
 * Callers:
 *     PciConfigInternal @ 0x1C0017DE4 (PciConfigInternal.c)
 *     PciConfigSpaceHandler @ 0x1C0018020 (PciConfigSpaceHandler.c)
 * Callees:
 *     HeapFree @ 0x1C0001FAC (HeapFree.c)
 *     DereferenceObjectEx @ 0x1C00038B0 (DereferenceObjectEx.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     GetOpRegionScope @ 0x1C00178F4 (GetOpRegionScope.c)
 *     GetPciAddressWorker @ 0x1C00186D0 (GetPciAddressWorker.c)
 *     AMLIGetParent @ 0x1C001AEEC (AMLIGetParent.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C001D498 (WPP_RECORDER_SF_Dqss.c)
 *     RtlStringCchPrintfW @ 0x1C0027F08 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     ACPIWriteEventLogEntry @ 0x1C0052F38 (ACPIWriteEventLogEntry.c)
 *     WPP_RECORDER_SF_ss @ 0x1C005862C (WPP_RECORDER_SF_ss.c)
 */

__int64 __fastcall PciConfigSpaceHandlerWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG BusDataByOffset; // ebp
  unsigned int *v5; // rbx
  __int64 v6; // rsi
  unsigned int v7; // eax
  __int64 v8; // r14
  _QWORD *PoolWithTag; // rax
  _QWORD *v10; // rdi
  char v11; // al
  int PciAddressWorker; // eax
  int v14; // r14d
  unsigned __int8 CurrentIrql; // di
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // rcx
  void *v21; // rax
  void *v22; // rdx
  void (__fastcall *v23)(_QWORD); // rax
  const char *v24; // rcx
  ULONG v25; // r12d
  __int64 v26; // r10
  ULONG v27; // r11d
  __int64 v28; // rax
  ULONG v29; // r13d
  ULONG Length; // r13d
  int v31; // eax
  __int64 v32; // rcx
  int OpRegionScope; // eax
  __int64 v34; // rcx
  __int64 v35; // rcx
  KIRQL v36; // al
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rcx
  ULONG Offset; // [rsp+20h] [rbp-D8h]
  __int64 v42; // [rsp+40h] [rbp-B8h]
  int v43; // [rsp+54h] [rbp-A4h]
  int v44; // [rsp+58h] [rbp-A0h]
  const char *v45; // [rsp+60h] [rbp-98h]
  _QWORD v46[2]; // [rsp+68h] [rbp-90h] BYREF
  int v47; // [rsp+78h] [rbp-80h] BYREF
  char v48; // [rsp+7Ch] [rbp-7Ch]
  int v49; // [rsp+80h] [rbp-78h] BYREF
  char v50; // [rsp+84h] [rbp-74h]
  __int64 v51; // [rsp+88h] [rbp-70h] BYREF
  wchar_t v52; // [rsp+90h] [rbp-68h]
  wchar_t pszDest[16]; // [rsp+98h] [rbp-60h] BYREF

  BusDataByOffset = 0;
  v51 = *(_QWORD *)L"ACPI";
  v5 = (unsigned int *)a4;
  v52 = aAcpi_0[4];
  _InterlockedIncrement((volatile signed __int32 *)(a4 + 80));
  if ( (int)a2 < 0 )
  {
    v14 = 0;
    goto LABEL_19;
  }
  if ( !*(_QWORD *)(a4 + 56) )
  {
    v31 = *(_DWORD *)(a4 + 76);
    if ( (v31 & 0x1000) != 0 )
      goto LABEL_68;
    v32 = *(_QWORD *)(a4 + 8);
    *(_DWORD *)(a4 + 76) = v31 | 0x1000;
    OpRegionScope = GetOpRegionScope(v32, a2, a4, a4 + 56);
    if ( OpRegionScope == 259 )
      return 259LL;
    if ( OpRegionScope < 0 )
    {
      v14 = 0;
      goto LABEL_19;
    }
    v34 = *((_QWORD *)v5 + 1);
    if ( v34 )
    {
      *(_QWORD *)(*(_QWORD *)v34 + 104LL) = *((_QWORD *)v5 + 7);
      v35 = *((_QWORD *)v5 + 7);
      dword_1C0080868 = 0;
      ::pszDest = 0;
      if ( (gdwfAMLI & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v35 + 8));
    }
  }
  a3 = *(_QWORD *)(**((_QWORD **)v5 + 7) + 104LL);
  if ( !a3 )
  {
    v14 = 0;
    goto LABEL_19;
  }
  v6 = *(_QWORD *)(a3 + 80);
  if ( v6 )
  {
LABEL_13:
    v14 = 0;
    CurrentIrql = KeGetCurrentIrql();
    if ( *v5 )
    {
      if ( *v5 == 1 )
      {
        LODWORD(a2) = v5[5];
        v24 = "+";
        v25 = v5[4];
        LODWORD(v26) = 0;
        LODWORD(a4) = v25;
        v45 = "+";
        LODWORD(a3) = v25;
        v44 = 0;
        v27 = 0;
        v43 = 0;
        v28 = 0LL;
        do
        {
          v29 = *(unsigned __int16 *)((char *)&PciConfigDisallowedRanges + v28);
          if ( v25 < v29 )
          {
            Length = v29 - v25;
            if ( (unsigned int)a2 + (_DWORD)a4 - v25 <= Length )
              Length = a2 + a4 - v25;
            if ( v6 )
            {
              if ( CurrentIrql < 2u )
              {
                v36 = KfRaiseIrql(2u);
                LODWORD(a4) = v5[4];
                CurrentIrql = v36;
              }
              Offset = Length;
              BusDataByOffset += (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, _QWORD))(v6 + 48))(
                                   *(_QWORD *)(v6 + 8),
                                   0LL,
                                   *((_QWORD *)v5 + 3) + 4 * (v25 - (unsigned __int64)(unsigned int)a4),
                                   v25);
              if ( CurrentIrql < 2u )
                KeLowerIrql(CurrentIrql);
            }
            else
            {
              BusDataByOffset += HalSetBusDataByOffset(
                                   PCIConfiguration,
                                   v5[22],
                                   v5[21],
                                   (PVOID)(*((_QWORD *)v5 + 3) + 4 * (v25 - (unsigned __int64)(unsigned int)a4)),
                                   v25,
                                   Length);
            }
            LODWORD(a3) = v5[4];
            v27 = Length + v43;
            v24 = v45;
            LODWORD(v26) = v44;
            v43 += Length;
          }
          v25 = a3;
          LODWORD(a2) = v5[5];
          LODWORD(a4) = a3;
          if ( (unsigned int)a3 <= (unsigned int)*(unsigned __int16 *)v24 + 1 )
            v25 = *(unsigned __int16 *)v24 + 1;
          if ( v25 >= (int)a3 + (int)a2 )
            break;
          v26 = (unsigned int)(v26 + 1);
          v44 = v26;
          v28 = 4 * v26;
          v24 = (char *)&PciConfigDisallowedRanges + 4 * v26 + 2;
          v45 = v24;
        }
        while ( *(_WORD *)v24 );
        v14 = 0;
        if ( !v27 )
        {
          RtlStringCchPrintfW(pszDest, 0xDuLL, L"0x%x", (unsigned int)a3);
          v46[0] = &v51;
          v46[1] = pszDest;
          ACPIWriteEventLogEntry(3221553162LL, v46, 2LL);
        }
      }
      else
      {
        v14 = -1073741822;
      }
    }
    else if ( v6 )
    {
      if ( CurrentIrql < 2u )
        CurrentIrql = KfRaiseIrql(2u);
      Offset = v5[5];
      BusDataByOffset = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v6 + 56))(
                          *(_QWORD *)(v6 + 8),
                          0LL,
                          *((_QWORD *)v5 + 3),
                          v5[4]);
      if ( CurrentIrql < 2u )
        KeLowerIrql(CurrentIrql);
    }
    else
    {
      BusDataByOffset = HalGetBusDataByOffset(PCIConfiguration, v5[22], v5[21], *((PVOID *)v5 + 3), v5[4], v5[5]);
    }
    goto LABEL_19;
  }
  LODWORD(a2) = _InterlockedCompareExchange((volatile signed __int32 *)(a3 + 184), 0, 0);
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a3 + 88), 0, 0) & 2) != 0 || (a2 & 1) != 0 )
    goto LABEL_6;
  v18 = AMLIGetParent(*((_QWORD *)v5 + 7));
  if ( !v18 )
  {
LABEL_68:
    v14 = -1073741772;
    goto LABEL_19;
  }
  v19 = *(_QWORD *)(*(_QWORD *)v18 + 104LL);
  AMLIDereferenceHandleEx(v18);
  if ( !v19 )
  {
    v14 = -1073741772;
    goto LABEL_19;
  }
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v19 + 184), 0, 0) & 1) == 0 )
  {
    v20 = *(_QWORD *)(v19 + 8);
    v21 = &unk_1C006E28A;
    v22 = &unk_1C006E28A;
    if ( (v20 & 0x200000000000LL) != 0 )
    {
      v21 = *(void **)(v19 + 560);
      if ( (v20 & 0x400000000000LL) != 0 )
        v22 = *(void **)(v19 + 568);
    }
    v42 = (__int64)v22;
    LOBYTE(v22) = 2;
    WPP_RECORDER_SF_Dqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v22,
      21,
      10,
      (__int64)&WPP_81d8e93eb8cd366f72cf11447b36d96d_Traceguids,
      1,
      v19,
      (__int64)v21,
      v42);
  }
LABEL_6:
  v7 = v5[19];
  if ( (v7 & 0x100) != 0 )
    goto LABEL_13;
  v8 = *((_QWORD *)v5 + 7);
  v5[19] = v7 | 0x100;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x46706341u);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x48uLL);
    v11 = gdwfAMLI;
    *v10 = v8;
    dword_1C0080868 = 0;
    ::pszDest = 0;
    if ( (v11 & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v10[8] = v5;
    v10[7] = PciConfigSpaceHandlerWorker;
    *((_DWORD *)v10 + 12) = -1;
    v10[1] = v5 + 22;
    v10[2] = v5 + 21;
    PciAddressWorker = GetPciAddressWorker(v8, 0LL, 0LL, v10);
    if ( PciAddressWorker == 259 )
      return 259LL;
    if ( PciAddressWorker >= 0 )
      goto LABEL_13;
  }
  v14 = 0;
LABEL_19:
  if ( !*v5 && !BusDataByOffset )
    memset(*((void **)v5 + 3), 255, v5[5]);
  if ( v5[20] )
  {
    v23 = (void (__fastcall *)(_QWORD))*((_QWORD *)v5 + 5);
    if ( v5[18] )
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v23)(
        *((_QWORD *)v5 + 7),
        (unsigned int)v14,
        0LL,
        *((_QWORD *)v5 + 6));
    else
      v23(*((_QWORD *)v5 + 6));
  }
  if ( v14 < 0 )
  {
    v49 = 0;
    v50 = 0;
    v47 = 0;
    v48 = 0;
    v37 = *((_QWORD *)v5 + 1);
    if ( v37 )
    {
      dword_1C00806E0 = *(_DWORD *)(*(_QWORD *)v37 + 40LL);
      byte_1C00806E4 = 0;
      v49 = dword_1C00806E0;
    }
    v38 = *((_QWORD *)v5 + 7);
    if ( v38 )
    {
      dword_1C00806E0 = *(_DWORD *)(*(_QWORD *)v38 + 40LL);
      byte_1C00806E4 = 0;
      v47 = dword_1C00806E0;
    }
    WPP_RECORDER_SF_ss(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4, Offset, (__int64)&v49, (__int64)&v47);
  }
  v16 = *((_QWORD *)v5 + 1);
  if ( v16 )
  {
    dword_1C0080868 = 0;
    ::pszDest = 0;
    if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 8), 0xFFFFFFFF) == 1 )
    {
      v39 = *(_QWORD *)v16;
      if ( v16 == *(_QWORD *)v16 + 120LL )
      {
        DereferenceObjectEx(v39);
      }
      else
      {
        DereferenceObjectEx(v39);
        HeapFree((_QWORD *)v16);
      }
    }
    *((_QWORD *)v5 + 1) = 0LL;
  }
  v17 = *((_QWORD *)v5 + 7);
  if ( v17 )
  {
    dword_1C0080868 = 0;
    ::pszDest = 0;
    if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v17 + 8), 0xFFFFFFFF) == 1 )
    {
      v40 = *(_QWORD *)v17;
      if ( v17 == *(_QWORD *)v17 + 120LL )
      {
        DereferenceObjectEx(v40);
      }
      else
      {
        DereferenceObjectEx(v40);
        HeapFree((_QWORD *)v17);
      }
    }
    *((_QWORD *)v5 + 7) = 0LL;
  }
  ExFreePoolWithTag(v5, 0x46706341u);
  return (unsigned int)v14;
}
