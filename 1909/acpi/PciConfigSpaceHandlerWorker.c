/*
 * XREFs of PciConfigSpaceHandlerWorker @ 0x1C0022A70
 * Callers:
 *     PciConfigInternal @ 0x1C00228A4 (PciConfigInternal.c)
 *     PciConfigSpaceHandler @ 0x1C0022960 (PciConfigSpaceHandler.c)
 * Callees:
 *     AMLIGetParent @ 0x1C000FF40 (AMLIGetParent.c)
 *     AMLIDereferenceHandleEx @ 0x1C001145C (AMLIDereferenceHandleEx.c)
 *     DereferenceObjectEx @ 0x1C0013B20 (DereferenceObjectEx.c)
 *     HeapFree @ 0x1C00141E4 (HeapFree.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C001A938 (WPP_RECORDER_SF_Dqss.c)
 *     GetPciAddressWorker @ 0x1C0023040 (GetPciAddressWorker.c)
 *     GetOpRegionScope @ 0x1C00235D4 (GetOpRegionScope.c)
 *     RtlStringCchPrintfW @ 0x1C00265E8 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     ACPIWriteEventLogEntry @ 0x1C00548E8 (ACPIWriteEventLogEntry.c)
 *     WPP_RECORDER_SF_ss @ 0x1C005A20C (WPP_RECORDER_SF_ss.c)
 */

__int64 __fastcall PciConfigSpaceHandlerWorker(__int64 a1, const char *a2, __int64 a3, unsigned int *a4)
{
  ULONG BusDataByOffset; // ebp
  unsigned int *v5; // rbx
  __int64 v6; // rsi
  unsigned int v7; // eax
  __int64 v8; // rdi
  _QWORD *PoolWithTag; // rax
  int PciAddressWorker; // eax
  int v12; // r14d
  unsigned __int8 CurrentIrql; // di
  __int64 v14; // rdi
  __int64 v15; // rdi
  volatile signed __int32 *v16; // rax
  __int64 v17; // r14
  __int64 v18; // rcx
  const char *v19; // rax
  void (__fastcall *v20)(_QWORD); // rax
  ULONG v21; // r12d
  const char *v22; // rcx
  __int64 v23; // r10
  ULONG v24; // r11d
  __int64 v25; // rax
  ULONG v26; // r13d
  ULONG Length; // r13d
  unsigned int v28; // eax
  __int64 v29; // rcx
  int OpRegionScope; // eax
  __int64 v31; // rcx
  __int64 v32; // rcx
  KIRQL v33; // al
  __int64 v34; // rax
  __int64 v35; // rax
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rcx
  ULONG Offset; // [rsp+20h] [rbp-D8h]
  int v39; // [rsp+54h] [rbp-A4h]
  int v40; // [rsp+58h] [rbp-A0h]
  const char *v41; // [rsp+60h] [rbp-98h]
  _QWORD v42[2]; // [rsp+68h] [rbp-90h] BYREF
  int v43; // [rsp+78h] [rbp-80h] BYREF
  char v44; // [rsp+7Ch] [rbp-7Ch]
  int v45; // [rsp+80h] [rbp-78h] BYREF
  char v46; // [rsp+84h] [rbp-74h]
  __int64 v47; // [rsp+88h] [rbp-70h] BYREF
  wchar_t v48; // [rsp+90h] [rbp-68h]
  wchar_t pszDest[16]; // [rsp+98h] [rbp-60h] BYREF

  BusDataByOffset = 0;
  v47 = *(_QWORD *)L"ACPI";
  v5 = a4;
  v48 = aAcpi_1[4];
  _InterlockedIncrement((volatile signed __int32 *)a4 + 20);
  if ( (int)a2 < 0 )
  {
    v12 = 0;
    goto LABEL_19;
  }
  if ( !*((_QWORD *)a4 + 7) )
  {
    v28 = a4[19];
    if ( (v28 & 0x1000) != 0 )
      goto LABEL_69;
    v29 = *((_QWORD *)a4 + 1);
    a4[19] = v28 | 0x1000;
    OpRegionScope = GetOpRegionScope(v29, a2, a4, a4 + 14);
    if ( OpRegionScope == 259 )
      return 259LL;
    if ( OpRegionScope < 0 )
    {
      v12 = 0;
      goto LABEL_19;
    }
    v31 = *((_QWORD *)v5 + 1);
    if ( v31 )
    {
      *(_QWORD *)(*(_QWORD *)v31 + 104LL) = *((_QWORD *)v5 + 7);
      v32 = *((_QWORD *)v5 + 7);
      dword_1C0082858 = 0;
      ::pszDest = 0;
      if ( (gdwfAMLI & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v32 + 8));
    }
  }
  a3 = *(_QWORD *)(**((_QWORD **)v5 + 7) + 104LL);
  if ( !a3 )
  {
    v12 = 0;
    goto LABEL_19;
  }
  v6 = *(_QWORD *)(a3 + 80);
  if ( v6 )
  {
LABEL_13:
    v12 = 0;
    CurrentIrql = KeGetCurrentIrql();
    if ( *v5 )
    {
      if ( *v5 == 1 )
      {
        v21 = v5[4];
        v22 = "+";
        LODWORD(a2) = v5[5];
        v41 = "+";
        LODWORD(v23) = 0;
        v40 = 0;
        v24 = 0;
        v39 = 0;
        LODWORD(a4) = v21;
        v25 = 0LL;
        LODWORD(a3) = v21;
        do
        {
          v26 = *(unsigned __int16 *)((char *)&PciConfigDisallowedRanges + v25);
          if ( v21 < v26 )
          {
            Length = v26 - v21;
            if ( (unsigned int)a2 + (_DWORD)a4 - v21 <= Length )
              Length = (_DWORD)a2 + (_DWORD)a4 - v21;
            if ( v6 )
            {
              if ( CurrentIrql < 2u )
              {
                v33 = KfRaiseIrql(2u);
                LODWORD(a4) = v5[4];
                CurrentIrql = v33;
              }
              Offset = Length;
              BusDataByOffset += (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, _QWORD))(v6 + 48))(
                                   *(_QWORD *)(v6 + 8),
                                   0LL,
                                   *((_QWORD *)v5 + 3) + 4 * (v21 - (unsigned __int64)(unsigned int)a4),
                                   v21);
              if ( CurrentIrql < 2u )
                KeLowerIrql(CurrentIrql);
            }
            else
            {
              BusDataByOffset += HalSetBusDataByOffset(
                                   PCIConfiguration,
                                   v5[22],
                                   v5[21],
                                   (PVOID)(*((_QWORD *)v5 + 3) + 4 * (v21 - (unsigned __int64)(unsigned int)a4)),
                                   v21,
                                   Length);
            }
            LODWORD(a3) = v5[4];
            v24 = Length + v39;
            v22 = v41;
            LODWORD(v23) = v40;
            v39 += Length;
          }
          v21 = a3;
          LODWORD(a2) = v5[5];
          LODWORD(a4) = a3;
          if ( (unsigned int)a3 <= (unsigned int)*(unsigned __int16 *)v22 + 1 )
            v21 = *(unsigned __int16 *)v22 + 1;
          if ( v21 >= (int)a2 + (int)a3 )
            break;
          v23 = (unsigned int)(v23 + 1);
          v40 = v23;
          v25 = 4 * v23;
          v22 = (char *)&PciConfigDisallowedRanges + 4 * v23 + 2;
          v41 = v22;
        }
        while ( *(_WORD *)v22 );
        v12 = 0;
        if ( !v24 )
        {
          RtlStringCchPrintfW(pszDest, 0xDuLL, L"0x%x", (unsigned int)a3);
          v42[0] = &v47;
          v42[1] = pszDest;
          ACPIWriteEventLogEntry(3221553162LL, v42, 2LL);
        }
      }
      else
      {
        v12 = -1073741822;
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
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a3 + 88), 0, 0) & 2) != 0
    || ((unsigned __int8)a2 & 1) != 0 )
  {
    goto LABEL_6;
  }
  v16 = (volatile signed __int32 *)AMLIGetParent(*((_QWORD *)v5 + 7));
  if ( !v16 )
  {
LABEL_69:
    v12 = -1073741772;
    goto LABEL_19;
  }
  v17 = *(_QWORD *)(*(_QWORD *)v16 + 104LL);
  AMLIDereferenceHandleEx(v16);
  if ( !v17 )
  {
    v12 = -1073741772;
    goto LABEL_19;
  }
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v17 + 184), 0, 0) & 1) == 0 )
  {
    v18 = *(_QWORD *)(v17 + 8);
    v19 = (const char *)&unk_1C006FE7D;
    LODWORD(a3) = 0;
    a2 = (const char *)&unk_1C006FE7D;
    if ( (v18 & 0x200000000000LL) != 0 )
    {
      v19 = *(const char **)(v17 + 560);
      LODWORD(a3) = 0;
      if ( (v18 & 0x400000000000LL) != 0 )
        a2 = *(const char **)(v17 + 568);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Dqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x15u,
        0xAu,
        (__int64)&WPP_81d8e93eb8cd366f72cf11447b36d96d_Traceguids,
        1,
        v17,
        v19,
        a2);
  }
LABEL_6:
  v7 = v5[19];
  if ( (v7 & 0x100) != 0 )
    goto LABEL_13;
  v8 = *((_QWORD *)v5 + 7);
  v5[19] = v7 | 0x100;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x46706341u);
  LODWORD(a4) = (_DWORD)PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = 0LL;
    PoolWithTag[3] = 0LL;
    PoolWithTag[4] = 0LL;
    PoolWithTag[5] = 0LL;
    PoolWithTag[6] = 0LL;
    PoolWithTag[7] = 0LL;
    PoolWithTag[8] = 0LL;
    *PoolWithTag = v8;
    dword_1C0082858 = 0;
    ::pszDest = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    PoolWithTag[8] = v5;
    PoolWithTag[7] = PciConfigSpaceHandlerWorker;
    *((_DWORD *)PoolWithTag + 12) = -1;
    PoolWithTag[1] = v5 + 22;
    PoolWithTag[2] = v5 + 21;
    PciAddressWorker = GetPciAddressWorker(v8, 0LL, 0LL);
    if ( PciAddressWorker == 259 )
      return 259LL;
    if ( PciAddressWorker >= 0 )
      goto LABEL_13;
  }
  v12 = 0;
LABEL_19:
  if ( !*v5 && !BusDataByOffset )
    memset(*((void **)v5 + 3), 255, v5[5]);
  if ( v5[20] )
  {
    v20 = (void (__fastcall *)(_QWORD))*((_QWORD *)v5 + 5);
    if ( v5[18] )
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v20)(
        *((_QWORD *)v5 + 7),
        (unsigned int)v12,
        0LL,
        *((_QWORD *)v5 + 6));
    else
      v20(*((_QWORD *)v5 + 6));
  }
  if ( v12 < 0 )
  {
    v45 = 0;
    v46 = 0;
    v43 = 0;
    v44 = 0;
    v34 = *((_QWORD *)v5 + 1);
    if ( v34 )
    {
      dword_1C00826D4 = *(_DWORD *)(*(_QWORD *)v34 + 40LL);
      byte_1C00826D8 = 0;
      v45 = dword_1C00826D4;
    }
    v35 = *((_QWORD *)v5 + 7);
    if ( v35 )
    {
      dword_1C00826D4 = *(_DWORD *)(*(_QWORD *)v35 + 40LL);
      byte_1C00826D8 = 0;
      v43 = dword_1C00826D4;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ss(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)a2,
        a3,
        (_DWORD)a4,
        Offset,
        (__int64)&v45,
        (__int64)&v43);
  }
  v14 = *((_QWORD *)v5 + 1);
  if ( v14 )
  {
    dword_1C0082858 = 0;
    ::pszDest = 0;
    if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 8), 0xFFFFFFFF) == 1 )
    {
      v36 = *(_QWORD *)v14;
      if ( v14 == *(_QWORD *)v14 + 120LL )
      {
        DereferenceObjectEx(v36);
      }
      else
      {
        DereferenceObjectEx(v36);
        HeapFree(v14);
      }
    }
    *((_QWORD *)v5 + 1) = 0LL;
  }
  v15 = *((_QWORD *)v5 + 7);
  if ( v15 )
  {
    dword_1C0082858 = 0;
    ::pszDest = 0;
    if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 8), 0xFFFFFFFF) == 1 )
    {
      v37 = *(_QWORD *)v15;
      if ( v15 == *(_QWORD *)v15 + 120LL )
      {
        DereferenceObjectEx(v37);
      }
      else
      {
        DereferenceObjectEx(v37);
        HeapFree(v15);
      }
    }
    *((_QWORD *)v5 + 7) = 0LL;
  }
  ExFreePoolWithTag(v5, 0x46706341u);
  return (unsigned int)v12;
}
