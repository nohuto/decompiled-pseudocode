/*
 * XREFs of LinkNodeCrackPrt @ 0x1C000E844
 * Callers:
 *     IrqArbAddAllocation @ 0x1C00901A0 (IrqArbAddAllocation.c)
 *     IrqArbGetNextAllocationRange @ 0x1C0091690 (IrqArbGetNextAllocationRange.c)
 *     IrqArbpFindSuitableRangePci @ 0x1C0093A44 (IrqArbpFindSuitableRangePci.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002680 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_s @ 0x1C0002740 (WPP_RECORDER_SF_s.c)
 *     FreeDataBuffs @ 0x1C0002E30 (FreeDataBuffs.c)
 *     FreeData @ 0x1C00031E4 (FreeData.c)
 *     AMLIGetNameSpaceObject @ 0x1C000ABD0 (AMLIGetNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000B954 (AMLIEvalNameSpaceObject.c)
 *     LinkNodepGetFilter @ 0x1C000E7B8 (LinkNodepGetFilter.c)
 *     AMLIEvalPkgDataElement @ 0x1C000EC04 (AMLIEvalPkgDataElement.c)
 *     AMLIGetNamedChild @ 0x1C00207C0 (AMLIGetNamedChild.c)
 *     RtlStringCchPrintfW @ 0x1C0027F08 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     ACPIWriteEventLogEntry @ 0x1C0052F38 (ACPIWriteEventLogEntry.c)
 *     WPP_RECORDER_SF_i @ 0x1C005C62C (WPP_RECORDER_SF_i.c)
 *     PcisuppGetProgConfigHeader @ 0x1C008F8E0 (PcisuppGetProgConfigHeader.c)
 *     PcisuppGetParentPdo @ 0x1C008F9E8 (PcisuppGetParentPdo.c)
 *     PcisuppSetRoutingInfo @ 0x1C008FAD0 (PcisuppSetRoutingInfo.c)
 *     PcisuppGetRoutingInfo @ 0x1C009259C (PcisuppGetRoutingInfo.c)
 *     PcisuppGetBusSlotNumber @ 0x1C0093564 (PcisuppGetBusSlotNumber.c)
 *     LinkNodeFindByNsObj @ 0x1C00B27F4 (LinkNodeFindByNsObj.c)
 *     LinkNodepAddAttachedDevice @ 0x1C00B29B4 (LinkNodepAddAttachedDevice.c)
 */

__int64 __fastcall LinkNodeCrackPrt(__int64 a1, _QWORD *a2, _DWORD *a3, char a4)
{
  PVOID v6; // rax
  __int64 result; // rax
  unsigned __int8 v9; // r13
  int v10; // ebx
  KIRQL v11; // di
  _QWORD *Filter; // rax
  _QWORD *v13; // r14
  __int64 v14; // rdi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 *v17; // r15
  char v18; // r13
  char v19; // di
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  unsigned int v25; // edi
  _DWORD *v26; // rcx
  int ProgConfigHeader; // r14d
  int v28; // eax
  char v29; // cl
  _QWORD *PoolWithTag; // rdi
  KIRQL v31; // r13
  _QWORD *v32; // rax
  _QWORD *v33; // r14
  __int64 v34; // [rsp+28h] [rbp-D8h]
  char v36; // [rsp+34h] [rbp-CCh]
  int v37; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v38; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v39; // [rsp+48h] [rbp-B8h]
  unsigned int v40; // [rsp+50h] [rbp-B0h]
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v43[40]; // [rsp+78h] [rbp-88h] BYREF
  PCSZ v44[5]; // [rsp+A0h] [rbp-60h] BYREF
  struct _UNICODE_STRING String; // [rsp+C8h] [rbp-38h] BYREF
  struct _STRING v46; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v47[16]; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int64 v48; // [rsp+F8h] [rbp-8h]
  _DWORD v49[10]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v50[40]; // [rsp+138h] [rbp+38h] BYREF
  _BYTE v51[48]; // [rsp+160h] [rbp+60h] BYREF
  _DWORD v52[2]; // [rsp+190h] [rbp+90h] BYREF
  char v53; // [rsp+19Ah] [rbp+9Ah]
  int v54; // [rsp+1BCh] [rbp+BCh]
  unsigned __int8 v55; // [rsp+1CDh] [rbp+CDh]
  _QWORD v56[4]; // [rsp+1D0h] [rbp+D0h] BYREF
  WCHAR SourceString[4]; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v58; // [rsp+1F8h] [rbp+F8h]
  int v59; // [rsp+200h] [rbp+100h]
  WCHAR v60[4]; // [rsp+208h] [rbp+108h] BYREF
  __int64 v61; // [rsp+210h] [rbp+110h]
  int v62; // [rsp+218h] [rbp+118h]
  wchar_t pszDest[20]; // [rsp+220h] [rbp+120h] BYREF

  *a2 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v6 = AcpiDriverObject;
  *a3 = 0;
  *(_QWORD *)&UnicodeString.Length = a3;
  v36 = 0;
  v40 = 0;
  if ( *(PVOID *)(a1 + 8) == v6 && (*(_DWORD *)(*(_QWORD *)(a1 + 64) + 8LL) & 0x2000000) != 0 )
    return 3221226021LL;
  if ( (int)PcisuppGetRoutingInfo(a1, &v38) >= 0 )
  {
    *a2 = v38;
    *a3 = v39;
    return 0LL;
  }
  if ( (int)PcisuppGetProgConfigHeader(a1, v52) < 0 )
    return 3221226021LL;
  v9 = v55;
  result = PcisuppGetParentPdo(a1, &DestinationString);
  if ( (int)result >= 0 )
  {
    result = PcisuppGetBusSlotNumber(a1, 0, (unsigned int)&v37, 0, 0LL);
    if ( (int)result >= 0 )
    {
      v10 = v37;
      while ( 1 )
      {
        v11 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
        Filter = (_QWORD *)LinkNodepGetFilter(
                             *(_QWORD *)(RootDeviceExtension + 720),
                             *(__int64 *)&DestinationString.Length);
        v13 = Filter;
        if ( Filter )
          ObfReferenceObject(Filter);
        KeReleaseSpinLock(&AcpiDeviceTreeLock, v11);
        if ( v13 )
        {
          v14 = *(_QWORD *)(v13[8] + 712LL);
          ObfDereferenceObject(v13);
          v17 = (__int64 *)AMLIGetNamedChild(v14, 1414680671LL, v15, v16);
          if ( v17 )
            break;
        }
        result = PcisuppGetProgConfigHeader(*(_QWORD *)&DestinationString.Length, v52);
        if ( (int)result < 0 )
          return result;
        if ( v53 == 4 )
        {
          v9 = ((v10 & 0x1F) + v9 - 1) % 4 + 1;
        }
        else
        {
          if ( v53 != 7 )
            return 3221225473LL;
          v9 = v55;
        }
        result = PcisuppGetBusSlotNumber(*(_DWORD *)&DestinationString.Length, 0, (unsigned int)&v37, 0, 0LL);
        if ( (int)result >= 0 )
        {
          v10 = v37;
          result = PcisuppGetParentPdo(*(_QWORD *)&DestinationString.Length, &DestinationString);
          if ( (int)result >= 0 )
            continue;
        }
        return result;
      }
      v18 = v9 - 1;
      memset(v44, 0, sizeof(v44));
      memset(v49, 0, sizeof(v49));
      if ( (int)AMLIEvalNameSpaceObject((unsigned __int64 *)v17, v51, 0, 0LL) >= 0 )
      {
        v19 = 0;
        do
        {
          v20 = v40++;
          if ( (int)AMLIEvalPkgDataElement(v51, v20, v43) < 0 )
            break;
          if ( (int)AMLIEvalPkgDataElement(v43, 0LL, v47) >= 0 )
          {
            v24 = v48;
            if ( (v10 & 0x1F) == WORD1(v48) )
            {
              if ( (_WORD)v48 != 0xFFFF )
              {
                WPP_RECORDER_SF_i(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v48,
                  20,
                  10,
                  (__int64)&WPP_922879ad32953f9562136b66b4e537f0_Traceguids,
                  v48);
                dword_1C0080868 = 0;
                ::pszDest = 0;
                v10 = v10 & 0xFFFFFF00 | (32 * (v48 & 7)) | (v48 >> 16) & 0x1F;
                v25 = -1073741811;
                FreeDataBuffs((__int64)v47, 1u);
                dword_1C0080868 = 0;
                ::pszDest = 0;
                FreeDataBuffs((__int64)v43, 1u);
                goto LABEL_48;
              }
              if ( (int)AMLIEvalPkgDataElement(v43, 1LL, v50) >= 0 )
              {
                if ( v50[16] == v18 )
                {
                  if ( (int)AMLIEvalPkgDataElement(v43, 2LL, v44) >= 0 )
                    v19 = 1;
                  v28 = AMLIEvalPkgDataElement(v43, 3LL, v49);
                  v29 = v19;
                  if ( v28 >= 0 )
                    v29 = 1;
                  v36 = v29;
                  v19 = v29;
                }
                dword_1C0080868 = 0;
                ::pszDest = 0;
                FreeDataBuffs((__int64)v50, 1u);
              }
            }
            dword_1C0080868 = 0;
            ::pszDest = 0;
            FreeData((__int64)v47, v24, v22, v23);
          }
          dword_1C0080868 = 0;
          ::pszDest = 0;
          FreeData((__int64)v43, v21, v22, v23);
        }
        while ( !v19 );
        dword_1C0080868 = 0;
        ::pszDest = 0;
        FreeDataBuffs((__int64)v51, 1u);
        v25 = -1073741275;
        if ( !v36 )
          goto LABEL_48;
        if ( WORD1(v44[0]) == 2 && v44[4] )
        {
          if ( (int)AMLIGetNameSpaceObject(v44[4], v17, (unsigned __int64 *)&DestinationString.Length, 0) < 0 )
          {
            v25 = -1073741772;
LABEL_48:
            AMLIDereferenceHandleEx((__int64)v17);
            if ( a4 )
            {
              *(_QWORD *)v60 = 0LL;
              v61 = 0LL;
              v62 = 0;
              *(_QWORD *)SourceString = 0LL;
              v58 = 0LL;
              v59 = 0;
              RtlStringCchPrintfW(pszDest, 0x14uLL, L"IRQARB");
              RtlInitUnicodeString(&DestinationString, SourceString);
              RtlInitUnicodeString(&String, v60);
              if ( RtlIntegerToUnicodeString(v10 & 0x1F, 0, &DestinationString) >= 0
                && RtlIntegerToUnicodeString((unsigned __int8)v10 >> 5, 0, &String) >= 0 )
              {
                v56[0] = pszDest;
                v56[1] = SourceString;
                v56[2] = v60;
                if ( v25 == -1073741811 )
                {
                  ACPIWriteEventLogEntry(3221553161LL, v56, 3LL);
                }
                else if ( v25 == -1073741772 )
                {
                  RtlInitAnsiString(&v46, v44[4]);
                  RtlAnsiStringToUnicodeString(&UnicodeString, &v46, 1u);
                  v56[3] = UnicodeString.Buffer;
                  ACPIWriteEventLogEntry(3221553160LL, v56, 4LL);
                  RtlFreeUnicodeString(&UnicodeString);
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
                  ACPIWriteEventLogEntry(3221553158LL, v56, 3LL);
                  LODWORD(v34) = v10;
                  WPP_RECORDER_SF_D(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    2u,
                    0x14u,
                    0xCu,
                    (__int64)&WPP_922879ad32953f9562136b66b4e537f0_Traceguids,
                    v34);
                }
              }
            }
            return v25;
          }
          ProgConfigHeader = LinkNodeFindByNsObj(*(_QWORD *)&DestinationString.Length, a2);
          if ( ProgConfigHeader >= 0 )
          {
            v38 = *a2;
            LODWORD(v39) = 0;
            BYTE4(v39) = 0;
            PcisuppSetRoutingInfo(a1, &v38);
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x49706341u);
            if ( PoolWithTag )
            {
              v31 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
              v32 = (_QWORD *)LinkNodepGetFilter(*(_QWORD *)(RootDeviceExtension + 720), a1);
              v33 = v32;
              if ( v32 )
                ObfReferenceObject(v32);
              KeReleaseSpinLock(&AcpiDeviceTreeLock, v31);
              if ( v33 )
              {
                PoolWithTag[2] = *(_QWORD *)(v33[8] + 712LL);
                ObfDereferenceObject(v33);
              }
              else
              {
                PoolWithTag[2] = 0LL;
              }
              PoolWithTag[3] = v17;
              PoolWithTag[6] = a1;
              v17 = 0LL;
              *((_DWORD *)PoolWithTag + 8) = v10;
              ProgConfigHeader = PcisuppGetProgConfigHeader(a1, v52);
              if ( ProgConfigHeader >= 0 )
              {
                *((_DWORD *)PoolWithTag + 9) = v52[0];
                *((_DWORD *)PoolWithTag + 10) = v54;
              }
              LinkNodepAddAttachedDevice(*a2, PoolWithTag);
            }
          }
        }
        else if ( HIWORD(v49[0]) == 1 )
        {
          v26 = *(_DWORD **)&UnicodeString.Length;
          ProgConfigHeader = 0;
          BYTE4(v39) = 2;
          v38 = 0LL;
          **(_DWORD **)&UnicodeString.Length = v49[4];
          *a2 = 0LL;
          LODWORD(v39) = *v26;
          PcisuppSetRoutingInfo(a1, &v38);
        }
        else
        {
          ProgConfigHeader = -1073741701;
        }
        if ( v17 )
          AMLIDereferenceHandleEx((__int64)v17);
        dword_1C0080868 = 0;
        ::pszDest = 0;
        FreeDataBuffs((__int64)v44, 1u);
        dword_1C0080868 = 0;
        ::pszDest = 0;
        FreeDataBuffs((__int64)v49, 1u);
        return (unsigned int)ProgConfigHeader;
      }
      v25 = -1073741275;
      goto LABEL_48;
    }
  }
  return result;
}
