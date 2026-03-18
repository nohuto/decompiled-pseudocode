/*
 * XREFs of LinkNodeCrackPrt @ 0x1C001B04C
 * Callers:
 *     IrqArbAddAllocation @ 0x1C0098B50 (IrqArbAddAllocation.c)
 *     IrqArbGetNextAllocationRange @ 0x1C009A120 (IrqArbGetNextAllocationRange.c)
 *     IrqArbpFindSuitableRangePci @ 0x1C009C72C (IrqArbpFindSuitableRangePci.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001B40 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_s @ 0x1C0001C00 (WPP_RECORDER_SF_s.c)
 *     FreeData @ 0x1C00054E0 (FreeData.c)
 *     AMLIDereferenceHandleEx @ 0x1C001145C (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C00116EC (AMLIEvalNameSpaceObject.c)
 *     FreeDataBuffs @ 0x1C0013E30 (FreeDataBuffs.c)
 *     AMLIGetNamedChild @ 0x1C0015140 (AMLIGetNamedChild.c)
 *     AMLIGetNameSpaceObject @ 0x1C001A858 (AMLIGetNameSpaceObject.c)
 *     AMLIEvalPkgDataElement @ 0x1C001B48C (AMLIEvalPkgDataElement.c)
 *     RtlStringCchPrintfW @ 0x1C00265E8 (RtlStringCchPrintfW.c)
 *     LinkNodepGetFilter @ 0x1C002AA18 (LinkNodepGetFilter.c)
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     ACPIWriteEventLogEntry @ 0x1C00548E8 (ACPIWriteEventLogEntry.c)
 *     WPP_RECORDER_SF_i @ 0x1C005E3D8 (WPP_RECORDER_SF_i.c)
 *     PcisuppSetRoutingInfo @ 0x1C0098298 (PcisuppSetRoutingInfo.c)
 *     PcisuppGetRoutingInfo @ 0x1C009B0DC (PcisuppGetRoutingInfo.c)
 *     PcisuppGetBusSlotNumber @ 0x1C009BE04 (PcisuppGetBusSlotNumber.c)
 *     PcisuppGetProgConfigHeader @ 0x1C00A0950 (PcisuppGetProgConfigHeader.c)
 *     PcisuppGetParentPdo @ 0x1C00A12C8 (PcisuppGetParentPdo.c)
 *     LinkNodeFindByNsObj @ 0x1C00B61E4 (LinkNodeFindByNsObj.c)
 *     LinkNodepAddAttachedDevice @ 0x1C00B63A4 (LinkNodepAddAttachedDevice.c)
 */

__int64 __fastcall LinkNodeCrackPrt(__int64 a1, _QWORD *a2, _DWORD *a3, char a4)
{
  PVOID v7; // rax
  __int64 result; // rax
  unsigned __int8 v9; // r12
  int v10; // ebx
  KIRQL v11; // di
  __int64 v12; // r13
  _QWORD *Filter; // rax
  _QWORD *v14; // rsi
  __int64 *v15; // rdi
  __int64 *v16; // r15
  char v17; // r12
  char v18; // r13
  __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  unsigned int v21; // edi
  _DWORD *v22; // rcx
  int ProgConfigHeader; // esi
  _QWORD *v24; // r12
  char v25; // di
  _QWORD *v26; // r12
  _QWORD *PoolWithTag; // rdi
  KIRQL v28; // r13
  _QWORD *v29; // rax
  _QWORD *v30; // rsi
  __int64 v31; // [rsp+28h] [rbp-D8h]
  __int64 v33; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+40h] [rbp-C0h]
  int v35; // [rsp+48h] [rbp-B8h] BYREF
  int v36; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v37; // [rsp+50h] [rbp-B0h]
  struct _UNICODE_STRING String; // [rsp+58h] [rbp-A8h] BYREF
  int v39; // [rsp+68h] [rbp-98h]
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-80h] BYREF
  struct _STRING v42; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v43[5]; // [rsp+A0h] [rbp-60h] BYREF
  PCSZ v44[5]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v45[5]; // [rsp+F0h] [rbp-10h] BYREF
  _DWORD v46[10]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v47[40]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v48[40]; // [rsp+168h] [rbp+68h] BYREF
  _DWORD v49[16]; // [rsp+190h] [rbp+90h] BYREF
  _QWORD v50[4]; // [rsp+1D0h] [rbp+D0h] BYREF
  WCHAR SourceString[4]; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v52; // [rsp+1F8h] [rbp+F8h]
  int v53; // [rsp+200h] [rbp+100h]
  WCHAR v54[4]; // [rsp+208h] [rbp+108h] BYREF
  __int64 v55; // [rsp+210h] [rbp+110h]
  int v56; // [rsp+218h] [rbp+118h]
  wchar_t pszDest[20]; // [rsp+220h] [rbp+120h] BYREF

  *(_QWORD *)&UnicodeString.Length = a3;
  *(_QWORD *)&DestinationString.Length = a2;
  memset(v45, 0, sizeof(v45));
  LOBYTE(v39) = 0;
  memset(v46, 0, sizeof(v46));
  memset(v44, 0, sizeof(v44));
  v36 = 0;
  memset(v49, 0, sizeof(v49));
  v35 = 0;
  memset(v47, 0, sizeof(v47));
  memset(v43, 0, sizeof(v43));
  memset(v48, 0, sizeof(v48));
  *a2 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v7 = AcpiDriverObject;
  *a3 = 0;
  v37 = 0;
  if ( *(PVOID *)(a1 + 8) == v7 && (*(_DWORD *)(*(_QWORD *)(a1 + 64) + 8LL) & 0x2000000) != 0 )
    return 3221226021LL;
  if ( (int)PcisuppGetRoutingInfo(a1, &v33) < 0 )
  {
    if ( (int)PcisuppGetProgConfigHeader(a1, v49) < 0 )
      return 3221226021LL;
    v9 = BYTE1(v49[15]);
    result = PcisuppGetParentPdo(a1, &String);
    if ( (int)result >= 0 )
    {
      result = PcisuppGetBusSlotNumber(a1, 0, (unsigned int)&v35, 0, 0LL);
      if ( (int)result >= 0 )
      {
        v10 = v35;
        while ( 1 )
        {
          v11 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
          v12 = *(_QWORD *)&String.Length;
          Filter = (_QWORD *)LinkNodepGetFilter(*(_QWORD *)(RootDeviceExtension + 720), *(_QWORD *)&String.Length);
          v14 = Filter;
          if ( Filter )
            ObfReferenceObject(Filter);
          KeReleaseSpinLock(&AcpiDeviceTreeLock, v11);
          if ( v14 )
          {
            v15 = *(__int64 **)(v14[8] + 712LL);
            ObfDereferenceObject(v14);
            v16 = AMLIGetNamedChild(v15, 1414680671);
            if ( v16 )
              break;
          }
          result = PcisuppGetProgConfigHeader(v12, v49);
          if ( (int)result < 0 )
            return result;
          if ( BYTE2(v49[2]) == 4 )
          {
            v9 = ((v10 & 0x1F) + v9 - 1) % 4 + 1;
          }
          else
          {
            if ( BYTE2(v49[2]) != 7 )
              return 3221225473LL;
            v9 = BYTE1(v49[15]);
          }
          result = PcisuppGetBusSlotNumber(v12, 0, (unsigned int)&v36, 0, 0LL);
          if ( (int)result >= 0 )
          {
            v10 = v36;
            result = PcisuppGetParentPdo(v12, &String);
            if ( (int)result >= 0 )
              continue;
          }
          return result;
        }
        v17 = v9 - 1;
        memset(v44, 0, sizeof(v44));
        memset(v46, 0, sizeof(v46));
        if ( (int)AMLIEvalNameSpaceObject(v16, v48, 0, 0LL) < 0 )
        {
          v21 = -1073741275;
LABEL_64:
          AMLIDereferenceHandleEx((volatile signed __int32 *)v16);
          if ( a4 )
          {
            *(_QWORD *)&v42.Length = 0LL;
            v42.Buffer = 0LL;
            *(_QWORD *)v54 = 0LL;
            v55 = 0LL;
            v56 = 0;
            *(_QWORD *)&String.Length = 0LL;
            String.Buffer = 0LL;
            *(_QWORD *)SourceString = 0LL;
            v52 = 0LL;
            v53 = 0;
            *(_QWORD *)&DestinationString.Length = 0LL;
            DestinationString.Buffer = 0LL;
            *(_QWORD *)&UnicodeString.Length = 0LL;
            UnicodeString.Buffer = 0LL;
            RtlStringCchPrintfW(pszDest, 0x14uLL, L"IRQARB");
            RtlInitUnicodeString(&DestinationString, SourceString);
            RtlInitUnicodeString(&String, v54);
            if ( RtlIntegerToUnicodeString(v10 & 0x1F, 0, &DestinationString) >= 0
              && RtlIntegerToUnicodeString((unsigned __int8)v10 >> 5, 0, &String) >= 0 )
            {
              v50[0] = pszDest;
              v50[1] = SourceString;
              v50[2] = v54;
              if ( v21 == -1073741811 )
              {
                ACPIWriteEventLogEntry(3221553161LL, v50, 3LL);
              }
              else if ( v21 == -1073741772 )
              {
                RtlInitAnsiString(&v42, v44[4]);
                RtlAnsiStringToUnicodeString(&UnicodeString, &v42, 1u);
                v50[3] = UnicodeString.Buffer;
                ACPIWriteEventLogEntry(3221553160LL, v50, 4LL);
                RtlFreeUnicodeString(&UnicodeString);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_s(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    2u,
                    0x14u,
                    0xBu,
                    (__int64)&WPP_922879ad32953f9562136b66b4e537f0_Traceguids,
                    v44[4]);
              }
              else
              {
                ACPIWriteEventLogEntry(3221553158LL, v50, 3LL);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LODWORD(v31) = v10;
                  WPP_RECORDER_SF_D(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    2u,
                    0x14u,
                    0xCu,
                    (__int64)&WPP_922879ad32953f9562136b66b4e537f0_Traceguids,
                    v31);
                }
              }
            }
          }
          return v21;
        }
        else
        {
          v18 = v39;
          do
          {
            v19 = v37++;
            if ( (int)AMLIEvalPkgDataElement(v48, v19, v43) < 0 )
              break;
            if ( (int)AMLIEvalPkgDataElement(v43, 0LL, v45) >= 0 )
            {
              v20 = v45[2];
              if ( (v10 & 0x1F) == HIWORD(LODWORD(v45[2])) )
              {
                if ( LOWORD(v45[2]) != 0xFFFF )
                {
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    WPP_RECORDER_SF_i(
                      WPP_GLOBAL_Control->DeviceExtension,
                      v45[2],
                      20,
                      10,
                      (__int64)&WPP_922879ad32953f9562136b66b4e537f0_Traceguids,
                      v45[2]);
                    v20 = v45[2];
                  }
                  dword_1C0082858 = 0;
                  ::pszDest = 0;
                  v10 = v10 & 0xFFFFFF00 | (32 * (v20 & 7)) | (v20 >> 16) & 0x1F;
                  v21 = -1073741811;
                  FreeDataBuffs((__int64)v45, 1u);
                  dword_1C0082858 = 0;
                  ::pszDest = 0;
                  FreeDataBuffs((__int64)v43, 1u);
                  goto LABEL_64;
                }
                if ( (int)AMLIEvalPkgDataElement(v43, 1LL, v47) >= 0 )
                {
                  if ( v47[16] == v17 )
                  {
                    v25 = v18;
                    if ( (int)AMLIEvalPkgDataElement(v43, 2LL, v44) >= 0 )
                      v25 = 1;
                    v18 = v25;
                    if ( (int)AMLIEvalPkgDataElement(v43, 3LL, v46) >= 0 )
                      v18 = 1;
                  }
                  dword_1C0082858 = 0;
                  ::pszDest = 0;
                  FreeDataBuffs((__int64)v47, 1u);
                }
              }
              dword_1C0082858 = 0;
              ::pszDest = 0;
              FreeData(v45);
            }
            dword_1C0082858 = 0;
            ::pszDest = 0;
            FreeData(v43);
          }
          while ( !v18 );
          dword_1C0082858 = 0;
          ::pszDest = 0;
          FreeDataBuffs((__int64)v48, 1u);
          v21 = -1073741275;
          if ( !v18 )
            goto LABEL_64;
          if ( WORD1(v44[0]) == 2 && v44[4] )
          {
            if ( (int)AMLIGetNameSpaceObject(v44[4], v16, (unsigned __int64 *)&String.Length, 0) < 0 )
            {
              v21 = -1073741772;
              goto LABEL_64;
            }
            v26 = *(_QWORD **)&DestinationString.Length;
            ProgConfigHeader = LinkNodeFindByNsObj(*(_QWORD *)&String.Length, *(_QWORD *)&DestinationString.Length);
            if ( ProgConfigHeader >= 0 )
            {
              v33 = *v26;
              LODWORD(v34) = 0;
              BYTE4(v34) = 0;
              PcisuppSetRoutingInfo(a1, &v33);
              PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x49706341u);
              if ( PoolWithTag )
              {
                v28 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
                v29 = (_QWORD *)LinkNodepGetFilter(*(_QWORD *)(RootDeviceExtension + 720), a1);
                v30 = v29;
                if ( v29 )
                  ObfReferenceObject(v29);
                KeReleaseSpinLock(&AcpiDeviceTreeLock, v28);
                if ( v30 )
                {
                  PoolWithTag[2] = *(_QWORD *)(v30[8] + 712LL);
                  ObfDereferenceObject(v30);
                }
                else
                {
                  PoolWithTag[2] = 0LL;
                }
                PoolWithTag[3] = v16;
                PoolWithTag[6] = a1;
                v16 = 0LL;
                *((_DWORD *)PoolWithTag + 8) = v10;
                ProgConfigHeader = PcisuppGetProgConfigHeader(a1, v49);
                if ( ProgConfigHeader >= 0 )
                {
                  *((_DWORD *)PoolWithTag + 9) = v49[0];
                  *((_DWORD *)PoolWithTag + 10) = v49[11];
                }
                LinkNodepAddAttachedDevice(*v26, PoolWithTag);
              }
            }
          }
          else if ( HIWORD(v46[0]) == 1 )
          {
            v22 = *(_DWORD **)&UnicodeString.Length;
            ProgConfigHeader = 0;
            v24 = *(_QWORD **)&DestinationString.Length;
            BYTE4(v34) = 2;
            **(_DWORD **)&UnicodeString.Length = v46[4];
            v33 = 0LL;
            *v24 = 0LL;
            LODWORD(v34) = *v22;
            PcisuppSetRoutingInfo(a1, &v33);
          }
          else
          {
            ProgConfigHeader = -1073741701;
          }
          if ( v16 )
            AMLIDereferenceHandleEx((volatile signed __int32 *)v16);
          dword_1C0082858 = 0;
          ::pszDest = 0;
          FreeDataBuffs((__int64)v44, 1u);
          dword_1C0082858 = 0;
          ::pszDest = 0;
          FreeDataBuffs((__int64)v46, 1u);
          return (unsigned int)ProgConfigHeader;
        }
      }
    }
  }
  else
  {
    *a2 = v33;
    *a3 = v34;
    return 0LL;
  }
  return result;
}
