/*
 * XREFs of HvpPerformLogFileRecovery @ 0x1407F8D60
 * Callers:
 *     HvLoadHive @ 0x1405A5C9C (HvLoadHive.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x14000F440 (RtlNumberOfSetBits.c)
 *     RtlClearAllBits @ 0x14000FA60 (RtlClearAllBits.c)
 *     RtlMergeBitMaps @ 0x14000FA94 (RtlMergeBitMaps.c)
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x140013040 (CmpAllocateTransientPoolWithTag.c)
 *     HvpGrowDirtyVectors @ 0x1401369E0 (HvpGrowDirtyVectors.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     SetFailureLocation @ 0x14026BD48 (SetFailureLocation.c)
 *     HvpExpandMap @ 0x1405A48E4 (HvpExpandMap.c)
 *     HvpAdjustHiveFreeDisplay @ 0x1405A5FA8 (HvpAdjustHiveFreeDisplay.c)
 *     HvpLogTypeToLogArrayIndex @ 0x1405A72AC (HvpLogTypeToLogArrayIndex.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x1405A83BC (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvFreeHivePartial @ 0x1405A9240 (HvFreeHivePartial.c)
 *     HvpMapHiveImageFromViewMap @ 0x1405FAC30 (HvpMapHiveImageFromViewMap.c)
 *     HvpSetRangeProtection @ 0x1405FCD30 (HvpSetRangeProtection.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x1406B94E8 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvWriteHivePrimaryFile @ 0x1406B95D8 (HvWriteHivePrimaryFile.c)
 *     CmpDoFileSetSizeEx @ 0x1406B9BE0 (CmpDoFileSetSizeEx.c)
 *     HvpViewMapExtendStorage @ 0x1406CD840 (HvpViewMapExtendStorage.c)
 *     HvResetLogFileStatusAll @ 0x1406D0CAC (HvResetLogFileStatusAll.c)
 *     HvpAddDummyBinToHive @ 0x1407F8900 (HvpAddDummyBinToHive.c)
 *     HvApplyLogFile @ 0x140807880 (HvApplyLogFile.c)
 */

__int64 __fastcall HvpPerformLogFileRecovery(ULONG_PTR BugCheckParameter2, unsigned int a2, __int64 a3, __int64 a4)
{
  int v6; // r14d
  __int64 v7; // rax
  unsigned int v8; // r12d
  unsigned int v9; // r13d
  unsigned int *v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // r14d
  int v13; // eax
  unsigned int v14; // ebx
  int v15; // eax
  __int64 v16; // rdx
  unsigned int v17; // r13d
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  int v19; // r8d
  int v20; // edx
  int v21; // r12d
  unsigned int v22; // ecx
  int *v23; // r12
  char v24; // cl
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rax
  int v29; // ecx
  unsigned int v30; // eax
  char v31; // dl
  __int64 v32; // r9
  unsigned int v33; // edx
  int v35; // [rsp+28h] [rbp-69h]
  int v36; // [rsp+28h] [rbp-69h]
  unsigned int v37; // [rsp+68h] [rbp-29h]
  char v38; // [rsp+6Ch] [rbp-25h]
  int v39; // [rsp+70h] [rbp-21h] BYREF
  int v40; // [rsp+74h] [rbp-1Dh] BYREF
  int v41; // [rsp+78h] [rbp-19h]
  PPRIVILEGE_SET v42; // [rsp+80h] [rbp-11h]
  __int64 v43; // [rsp+88h] [rbp-9h] BYREF
  unsigned int v44; // [rsp+90h] [rbp-1h] BYREF
  PPRIVILEGE_SET v45; // [rsp+98h] [rbp+7h]
  ULONG_PTR v46; // [rsp+A0h] [rbp+Fh] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+A8h] [rbp+17h]
  __int64 v48; // [rsp+B0h] [rbp+1Fh]
  unsigned int v49; // [rsp+F8h] [rbp+67h] BYREF
  unsigned int v50; // [rsp+100h] [rbp+6Fh]
  __int64 v51; // [rsp+108h] [rbp+77h]

  v51 = a3;
  v50 = a2;
  v46 = 0LL;
  v6 = 0;
  Privileges = 0LL;
  v7 = *(_QWORD *)(BugCheckParameter2 + 64);
  v48 = 0LL;
  v44 = 0;
  v45 = 0LL;
  v8 = *(_DWORD *)(v7 + 40);
  v9 = v8;
  v42 = 0LL;
  v49 = 0;
  v40 = 0;
  if ( a2 )
  {
    v10 = (unsigned int *)(a3 + 16);
    v11 = a2;
    do
    {
      v12 = *v10;
      v10 += 6;
      if ( v12 <= v9 )
        v12 = v9;
      v9 = v12;
      --v11;
    }
    while ( v11 );
    if ( v12 > v8 )
    {
      if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x8001) == 0 )
      {
        v13 = CmpDoFileSetSizeEx(BugCheckParameter2, 0, v12 + 4096, 1);
        v14 = v13;
        if ( v13 < 0 )
        {
          v36 = 0;
LABEL_10:
          SetFailureLocation(a4, 0, 27, v13, v36);
          goto LABEL_61;
        }
        if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x20000) != 0 )
        {
          v15 = HvpViewMapExtendStorage(BugCheckParameter2 + 216, v12);
          if ( v15 < 0 )
            SetFailureLocation(a4, 0, 27, v15, 16);
        }
      }
      v13 = HvpExpandMap(BugCheckParameter2, 0, v8, v12);
      v14 = v13;
      if ( v13 < 0 )
      {
        v36 = 32;
        goto LABEL_10;
      }
      *(_DWORD *)(BugCheckParameter2 + 272) = v12;
      v13 = HvpAdjustHiveFreeDisplay(BugCheckParameter2, v12, 0);
      v14 = v13;
      if ( v13 < 0 )
      {
        v36 = 48;
        goto LABEL_10;
      }
      v13 = HvpGrowDirtyVectors(BugCheckParameter2, v12);
      v14 = v13;
      if ( v13 < 0 )
      {
        v36 = 64;
        goto LABEL_10;
      }
      if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x20000) != 0 )
        v17 = *(_DWORD *)(BugCheckParameter2 + 224) - 4096;
      else
        v17 = 0;
      if ( v8 < v17 )
      {
        v13 = HvpMapHiveImageFromViewMap(BugCheckParameter2, v8, v17 - v8);
        v14 = v13;
        if ( v13 < 0 )
        {
          v36 = 80;
          goto LABEL_10;
        }
        v8 = v17;
      }
      v9 = v12;
      while ( v8 < v12 )
      {
        v13 = HvpAddDummyBinToHive(BugCheckParameter2, v16, v8, &v43);
        v14 = v13;
        if ( v13 < 0 )
        {
          v36 = 96;
          goto LABEL_10;
        }
        v8 += 4096;
      }
    }
    v6 = v49;
  }
  TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(
                                                    PagedPool,
                                                    ((v9 >> 12) + 3) & 0xFFFFFFFC,
                                                    0x38334D43u);
  v42 = TransientPoolWithTag;
  if ( TransientPoolWithTag )
  {
    memset(TransientPoolWithTag, 0, ((v9 >> 12) + 3) & 0xFFFFFFFC);
    v20 = v51;
    v45 = v42;
    v44 = v9 >> 9;
    v21 = *(_DWORD *)(v51 + 8);
    v41 = v21;
    v39 = v21;
    v22 = 0;
    v37 = 0;
    if ( v50 )
    {
      v43 = 0LL;
      v23 = (int *)(v51 + 4);
      v38 = 0;
      while ( 1 )
      {
        HIDWORD(v48) = *v23;
        v46 = BugCheckParameter2;
        v13 = HvApplyLogFile(
                *(_QWORD *)(BugCheckParameter2 + 64),
                v20 + 24 * v22,
                v19,
                (unsigned int)&v46,
                v35,
                BugCheckParameter2,
                *(_QWORD *)(BugCheckParameter2 + 24),
                *(_QWORD *)(BugCheckParameter2 + 32),
                (__int64)&v44,
                (__int64)&v39,
                (__int64)&v49,
                (__int64)&v40);
        v14 = v13;
        if ( v13 < 0 )
          break;
        v6 = *v23;
        v19 = 255;
        v24 = -1;
        *(_WORD *)(BugCheckParameter2 + 200) |= (unsigned __int16)*v23 << v38;
        if ( v49 < 0xFF )
          v24 = v49;
        v25 = v43;
        v23 += 6;
        v38 += 3;
        v20 = v51;
        *(_BYTE *)(v43 + BugCheckParameter2 + 202) = v24;
        v22 = v37 + 1;
        v43 = v25 + 1;
        v37 = v22;
        if ( v22 >= v50 )
        {
          v21 = v39;
          goto LABEL_42;
        }
      }
      v36 = 128;
      goto LABEL_10;
    }
LABEL_42:
    HvpSetRangeProtection(BugCheckParameter2, 0LL, *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL), 2u);
    RtlMergeBitMaps(BugCheckParameter2 + 112, &v44);
    *(_DWORD *)(BugCheckParameter2 + 128) = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 112));
    v13 = HvCheckAndUpdateHiveBackupTimeStamp(BugCheckParameter2);
    v14 = v13;
    if ( v13 < 0 )
    {
      v36 = 144;
      goto LABEL_10;
    }
    v26 = v51;
    *(_DWORD *)(BugCheckParameter2 + 180) = v41;
    v27 = v50 - 1;
    *(_DWORD *)(BugCheckParameter2 + 168) = v21;
    *(_BYTE *)(BugCheckParameter2 + 190) = 0;
    v28 = 3 * v27;
    if ( *(_BYTE *)(v26 + 8 * v28 + 20) )
    {
      if ( v6 == 1 )
      {
        if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x8001) == 0 )
        {
          RtlMergeBitMaps(BugCheckParameter2 + 112, (unsigned int *)(BugCheckParameter2 + 88));
          *(_DWORD *)(BugCheckParameter2 + 128) = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 112));
          RtlClearAllBits((PRTL_BITMAP)(BugCheckParameter2 + 88));
          *(_DWORD *)(BugCheckParameter2 + 104) = 0;
          *(_DWORD *)(BugCheckParameter2 + 160) |= 0x100u;
          v13 = HvWriteHivePrimaryFile(BugCheckParameter2, 0, 0LL, v32);
          v14 = v13;
          if ( v13 < 0 )
          {
            v36 = 256;
            goto LABEL_10;
          }
          *(_DWORD *)(BugCheckParameter2 + 180) = *(_DWORD *)(BugCheckParameter2 + 168);
          v13 = HvValidateOrInvalidatePrimaryFileHeader(BugCheckParameter2, 1, 0, 0);
          v14 = v13;
          if ( v13 < 0 )
          {
            v36 = 272;
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
        *(_DWORD *)(BugCheckParameter2 + 164) = 5 - (v6 != 4);
        *(_DWORD *)(BugCheckParameter2 + 172) = v21;
        *(_DWORD *)(BugCheckParameter2 + 176) = 0;
        *(_BYTE *)((unsigned int)HvpLogTypeToLogArrayIndex(v6) + BugCheckParameter2 + 188) = 1;
        v30 = HvpLogTypeToLogArrayIndex(*(_DWORD *)(BugCheckParameter2 + 164));
        *(_BYTE *)(v30 + BugCheckParameter2 + 188) = v31;
      }
    }
    else
    {
      *(_DWORD *)(BugCheckParameter2 + 164) = v6;
      *(_DWORD *)(BugCheckParameter2 + 172) = *(_DWORD *)(v26 + 8 * v28 + 8);
      *(_DWORD *)(BugCheckParameter2 + 176) = v40;
      if ( v6 == 1 )
      {
        v29 = 1;
      }
      else
      {
        *(_BYTE *)((unsigned int)HvpLogTypeToLogArrayIndex(4) + BugCheckParameter2 + 188) = 1;
        v29 = 5;
      }
      *(_BYTE *)((unsigned int)HvpLogTypeToLogArrayIndex(v29) + BugCheckParameter2 + 188) = 1;
    }
    v33 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL);
    if ( v33 < v9 )
      HvFreeHivePartial(BugCheckParameter2, v33, 0);
    v14 = 0;
  }
  else
  {
    v14 = -1073741670;
    SetFailureLocation(a4, 0, 27, -1073741670, 112);
  }
LABEL_61:
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v42 )
    CmSiFreeMemory(v42);
  return v14;
}
