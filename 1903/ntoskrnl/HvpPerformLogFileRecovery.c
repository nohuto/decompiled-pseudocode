/*
 * XREFs of HvpPerformLogFileRecovery @ 0x140830814
 * Callers:
 *     HvLoadHive @ 0x14065F05C (HvLoadHive.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x1400839F0 (RtlNumberOfSetBits.c)
 *     CmSiFreeMemory @ 0x14008BCE0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14008BDA0 (CmpAllocateTransientPoolWithTag.c)
 *     RtlClearAllBits @ 0x140098850 (RtlClearAllBits.c)
 *     RtlMergeBitMaps @ 0x14011BD88 (RtlMergeBitMaps.c)
 *     HvpGrowDirtyVectors @ 0x1401372A4 (HvpGrowDirtyVectors.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     SetFailureLocation @ 0x14027F760 (SetFailureLocation.c)
 *     HvpSetRangeProtection @ 0x14062EB74 (HvpSetRangeProtection.c)
 *     HvFreeHivePartial @ 0x14065DBD4 (HvFreeHivePartial.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x14065EEFC (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvpMapHiveImageFromViewMap @ 0x14065EF78 (HvpMapHiveImageFromViewMap.c)
 *     HvpAdjustHiveFreeDisplay @ 0x14065FD48 (HvpAdjustHiveFreeDisplay.c)
 *     HvpExpandMap @ 0x14065FEC4 (HvpExpandMap.c)
 *     HvpLogTypeToLogArrayIndex @ 0x140660DB4 (HvpLogTypeToLogArrayIndex.c)
 *     HvpViewMapExtendStorage @ 0x140662C30 (HvpViewMapExtendStorage.c)
 *     CmpDoFileSetSizeEx @ 0x140662D3C (CmpDoFileSetSizeEx.c)
 *     HvWriteHivePrimaryFile @ 0x140662F68 (HvWriteHivePrimaryFile.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x1406E98B4 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvResetLogFileStatusAll @ 0x1406EE7E0 (HvResetLogFileStatusAll.c)
 *     HvpAddDummyBinToHive @ 0x1408303B0 (HvpAddDummyBinToHive.c)
 *     HvApplyLogFile @ 0x14083FA94 (HvApplyLogFile.c)
 */

__int64 __fastcall HvpPerformLogFileRecovery(ULONG_PTR BugCheckParameter2, unsigned int a2, __int64 a3, __int64 a4)
{
  struct _LOOKASIDE_LIST_EX *v6; // r9
  int v7; // r14d
  __int64 v8; // rax
  unsigned int v9; // r12d
  unsigned int v10; // r13d
  unsigned int *v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // r14d
  int v14; // eax
  unsigned int v15; // ebx
  int v16; // eax
  __int64 v17; // rdx
  unsigned int v18; // r13d
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  int v20; // r8d
  int v21; // edx
  int v22; // r12d
  unsigned int v23; // ecx
  int *v24; // r12
  char v25; // cl
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // ecx
  unsigned int v31; // eax
  char v32; // dl
  __int64 v33; // r9
  unsigned int v34; // edx
  int v36; // [rsp+28h] [rbp-69h]
  int v37; // [rsp+28h] [rbp-69h]
  unsigned int v38; // [rsp+68h] [rbp-29h]
  char v39; // [rsp+6Ch] [rbp-25h]
  int v40; // [rsp+70h] [rbp-21h] BYREF
  int v41; // [rsp+74h] [rbp-1Dh] BYREF
  int v42; // [rsp+78h] [rbp-19h]
  PPRIVILEGE_SET v43; // [rsp+80h] [rbp-11h]
  __int64 v44; // [rsp+88h] [rbp-9h] BYREF
  __int64 v45; // [rsp+90h] [rbp-1h] BYREF
  PPRIVILEGE_SET v46; // [rsp+98h] [rbp+7h]
  ULONG_PTR v47; // [rsp+A0h] [rbp+Fh] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+A8h] [rbp+17h]
  __int64 v49; // [rsp+B0h] [rbp+1Fh]
  unsigned int v50; // [rsp+F8h] [rbp+67h] BYREF
  unsigned int v51; // [rsp+100h] [rbp+6Fh]
  __int64 v52; // [rsp+108h] [rbp+77h]

  v52 = a3;
  v51 = a2;
  v6 = 0LL;
  v47 = 0LL;
  v7 = 0;
  Privileges = 0LL;
  v8 = *(_QWORD *)(BugCheckParameter2 + 64);
  v49 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v9 = *(_DWORD *)(v8 + 40);
  v10 = v9;
  v43 = 0LL;
  v50 = 0;
  v41 = 0;
  if ( a2 )
  {
    v11 = (unsigned int *)(a3 + 16);
    v12 = a2;
    do
    {
      v13 = *v11;
      v11 += 6;
      if ( v13 <= v10 )
        v13 = v10;
      v10 = v13;
      --v12;
    }
    while ( v12 );
    if ( v13 > v9 )
    {
      if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x8001) == 0 )
      {
        v14 = CmpDoFileSetSizeEx(BugCheckParameter2, 0, v13 + 4096, 1);
        v15 = v14;
        if ( v14 < 0 )
        {
          v37 = 0;
LABEL_10:
          SetFailureLocation(a4, 0, 27, v14, v37);
          goto LABEL_61;
        }
        if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x20000) != 0 )
        {
          v16 = HvpViewMapExtendStorage(BugCheckParameter2 + 216, v13);
          if ( v16 < 0 )
            SetFailureLocation(a4, 0, 27, v16, 16);
        }
      }
      v14 = HvpExpandMap(BugCheckParameter2, 0, v9, v13);
      v15 = v14;
      if ( v14 < 0 )
      {
        v37 = 32;
        goto LABEL_10;
      }
      *(_DWORD *)(BugCheckParameter2 + 272) = v13;
      v14 = HvpAdjustHiveFreeDisplay(BugCheckParameter2, v13, 0);
      v15 = v14;
      if ( v14 < 0 )
      {
        v37 = 48;
        goto LABEL_10;
      }
      v14 = HvpGrowDirtyVectors(BugCheckParameter2, v13);
      v15 = v14;
      if ( v14 < 0 )
      {
        v37 = 64;
        goto LABEL_10;
      }
      if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x20000) != 0 )
        v18 = *(_DWORD *)(BugCheckParameter2 + 224) - 4096;
      else
        v18 = 0;
      if ( v9 < v18 )
      {
        v14 = HvpMapHiveImageFromViewMap(BugCheckParameter2, v9, v18 - v9);
        v15 = v14;
        if ( v14 < 0 )
        {
          v37 = 80;
          goto LABEL_10;
        }
        v9 = v18;
      }
      v10 = v13;
      while ( v9 < v13 )
      {
        v14 = HvpAddDummyBinToHive(BugCheckParameter2, v17, v9, &v44);
        v15 = v14;
        if ( v14 < 0 )
        {
          v37 = 96;
          goto LABEL_10;
        }
        v9 += 4096;
      }
    }
    v7 = v50;
  }
  TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(
                                                    PagedPool,
                                                    ((v10 >> 12) + 3) & 0xFFFFFFFC,
                                                    0x38334D43u,
                                                    v6);
  v43 = TransientPoolWithTag;
  if ( TransientPoolWithTag )
  {
    memset(TransientPoolWithTag, 0, ((v10 >> 12) + 3) & 0xFFFFFFFC);
    v21 = v52;
    v46 = v43;
    LODWORD(v45) = v10 >> 9;
    v22 = *(_DWORD *)(v52 + 8);
    v42 = v22;
    v40 = v22;
    v23 = 0;
    v38 = 0;
    if ( v51 )
    {
      v44 = 0LL;
      v24 = (int *)(v52 + 4);
      v39 = 0;
      while ( 1 )
      {
        HIDWORD(v49) = *v24;
        v47 = BugCheckParameter2;
        v14 = HvApplyLogFile(
                *(_QWORD *)(BugCheckParameter2 + 64),
                v21 + 24 * v23,
                v20,
                (unsigned int)&v47,
                v36,
                BugCheckParameter2,
                *(_QWORD *)(BugCheckParameter2 + 24),
                *(_QWORD *)(BugCheckParameter2 + 32),
                (__int64)&v45,
                (__int64)&v40,
                (__int64)&v50,
                (__int64)&v41);
        v15 = v14;
        if ( v14 < 0 )
          break;
        v7 = *v24;
        v20 = 255;
        v25 = -1;
        *(_WORD *)(BugCheckParameter2 + 200) |= (unsigned __int16)*v24 << v39;
        if ( v50 < 0xFF )
          v25 = v50;
        v26 = v44;
        v24 += 6;
        v39 += 3;
        v21 = v52;
        *(_BYTE *)(v44 + BugCheckParameter2 + 202) = v25;
        v23 = v38 + 1;
        v44 = v26 + 1;
        v38 = v23;
        if ( v23 >= v51 )
        {
          v22 = v40;
          goto LABEL_42;
        }
      }
      v37 = 128;
      goto LABEL_10;
    }
LABEL_42:
    HvpSetRangeProtection(BugCheckParameter2, 0LL, *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL), 2u);
    RtlMergeBitMaps(BugCheckParameter2 + 112, (unsigned int *)&v45);
    *(_DWORD *)(BugCheckParameter2 + 128) = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 112));
    v14 = HvCheckAndUpdateHiveBackupTimeStamp(BugCheckParameter2);
    v15 = v14;
    if ( v14 < 0 )
    {
      v37 = 144;
      goto LABEL_10;
    }
    v27 = v52;
    *(_DWORD *)(BugCheckParameter2 + 180) = v42;
    v28 = v51 - 1;
    *(_DWORD *)(BugCheckParameter2 + 168) = v22;
    *(_BYTE *)(BugCheckParameter2 + 190) = 0;
    v29 = 3 * v28;
    if ( *(_BYTE *)(v27 + 8 * v29 + 20) )
    {
      if ( v7 == 1 )
      {
        if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x8001) == 0 )
        {
          RtlMergeBitMaps(BugCheckParameter2 + 112, (unsigned int *)(BugCheckParameter2 + 88));
          *(_DWORD *)(BugCheckParameter2 + 128) = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 112));
          RtlClearAllBits((PRTL_BITMAP)(BugCheckParameter2 + 88));
          *(_DWORD *)(BugCheckParameter2 + 104) = 0;
          *(_DWORD *)(BugCheckParameter2 + 160) |= 0x100u;
          v14 = HvWriteHivePrimaryFile(BugCheckParameter2, 0, 0LL, v33);
          v15 = v14;
          if ( v14 < 0 )
          {
            v37 = 256;
            goto LABEL_10;
          }
          *(_DWORD *)(BugCheckParameter2 + 180) = *(_DWORD *)(BugCheckParameter2 + 168);
          v14 = HvValidateOrInvalidatePrimaryFileHeader(BugCheckParameter2, 1, 0, 0);
          v15 = v14;
          if ( v14 < 0 )
          {
            v37 = 272;
            goto LABEL_10;
          }
          RtlClearAllBits((PRTL_BITMAP)(BugCheckParameter2 + 112));
          *(_DWORD *)(BugCheckParameter2 + 128) = 0;
          HvResetLogFileStatusAll(BugCheckParameter2);
          *(_DWORD *)(BugCheckParameter2 + 164) = 1;
        }
      }
      else
      {
        *(_DWORD *)(BugCheckParameter2 + 164) = 5 - (v7 != 4);
        *(_DWORD *)(BugCheckParameter2 + 172) = v22;
        *(_DWORD *)(BugCheckParameter2 + 176) = 0;
        *(_BYTE *)((unsigned int)HvpLogTypeToLogArrayIndex(v7) + BugCheckParameter2 + 188) = 1;
        v31 = HvpLogTypeToLogArrayIndex(*(_DWORD *)(BugCheckParameter2 + 164));
        *(_BYTE *)(v31 + BugCheckParameter2 + 188) = v32;
      }
    }
    else
    {
      *(_DWORD *)(BugCheckParameter2 + 164) = v7;
      *(_DWORD *)(BugCheckParameter2 + 172) = *(_DWORD *)(v27 + 8 * v29 + 8);
      *(_DWORD *)(BugCheckParameter2 + 176) = v41;
      if ( v7 == 1 )
      {
        v30 = 1;
      }
      else
      {
        *(_BYTE *)((unsigned int)HvpLogTypeToLogArrayIndex(4) + BugCheckParameter2 + 188) = 1;
        v30 = 5;
      }
      *(_BYTE *)((unsigned int)HvpLogTypeToLogArrayIndex(v30) + BugCheckParameter2 + 188) = 1;
    }
    v34 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL);
    if ( v34 < v10 )
      HvFreeHivePartial(BugCheckParameter2, v34, 0);
    v15 = 0;
  }
  else
  {
    v15 = -1073741670;
    SetFailureLocation(a4, 0, 27, -1073741670, 112);
  }
LABEL_61:
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v43 )
    CmSiFreeMemory(v43);
  return v15;
}
