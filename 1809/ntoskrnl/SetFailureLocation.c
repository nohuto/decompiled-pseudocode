/*
 * XREFs of SetFailureLocation @ 0x14026BD48
 * Callers:
 *     CmpDoFileRead @ 0x1401343E4 (CmpDoFileRead.c)
 *     HvHiveStartFileBacked @ 0x1405A5A3C (HvHiveStartFileBacked.c)
 *     HvLoadHive @ 0x1405A5C9C (HvLoadHive.c)
 *     HvpInitMap @ 0x1405A6BE0 (HvpInitMap.c)
 *     CmpCreateHive @ 0x1405A7574 (CmpCreateHive.c)
 *     CmCheckRegistry @ 0x1405A948C (CmCheckRegistry.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x1405AC0AC (CmpValidateHiveSecurityDescriptors.c)
 *     CmpInitHiveFromFile @ 0x1405B4D68 (CmpInitHiveFromFile.c)
 *     CmpCheckLeaf @ 0x1405D9BC0 (CmpCheckLeaf.c)
 *     CmpCheckRegistry2 @ 0x1405D9EF0 (CmpCheckRegistry2.c)
 *     CmpCheckValueList @ 0x1405DA450 (CmpCheckValueList.c)
 *     CmpCheckKey @ 0x1405DB210 (CmpCheckKey.c)
 *     HvCheckBin @ 0x1405F3100 (HvCheckBin.c)
 *     HvpEnlistFreeCells @ 0x1405FA800 (HvpEnlistFreeCells.c)
 *     HvCheckHive @ 0x1405FA91C (HvCheckHive.c)
 *     CmpMountPreloadedHives @ 0x1407369D0 (CmpMountPreloadedHives.c)
 *     CmpLoadHiveThread @ 0x140736D20 (CmpLoadHiveThread.c)
 *     HvHiveStartMemoryBacked @ 0x14073DCFC (HvHiveStartMemoryBacked.c)
 *     HvpBuildMapForMemoryBackedHive @ 0x14073E1CC (HvpBuildMapForMemoryBackedHive.c)
 *     HvpMapHiveImage @ 0x1407F8B4C (HvpMapHiveImage.c)
 *     HvpPerformLogFileRecovery @ 0x1407F8D60 (HvpPerformLogFileRecovery.c)
 * Callees:
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall SetFailureLocation(__int64 a1, int a2, int a3, int a4, int a5)
{
  unsigned __int16 v9; // ax
  unsigned __int16 v10; // ax
  char v11; // [rsp+30h] [rbp-51h] BYREF
  int v12; // [rsp+34h] [rbp-4Dh] BYREF
  int v13; // [rsp+38h] [rbp-49h] BYREF
  int v14; // [rsp+3Ch] [rbp-45h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-41h] BYREF
  char *v16; // [rsp+60h] [rbp-21h]
  int v17; // [rsp+68h] [rbp-19h]
  int v18; // [rsp+6Ch] [rbp-15h]
  int *v19; // [rsp+70h] [rbp-11h]
  int v20; // [rsp+78h] [rbp-9h]
  int v21; // [rsp+7Ch] [rbp-5h]
  int *v22; // [rsp+80h] [rbp-1h]
  int v23; // [rsp+88h] [rbp+7h]
  int v24; // [rsp+8Ch] [rbp+Bh]
  int *v25; // [rsp+90h] [rbp+Fh]
  int v26; // [rsp+98h] [rbp+17h]
  int v27; // [rsp+9Ch] [rbp+1Bh]

  if ( stru_140400AA0.LevelPlus1 > 5 )
  {
    v18 = 0;
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v16 = &v11;
    v19 = &v12;
    v22 = &v13;
    v25 = &v14;
    v11 = a2;
    v12 = a3;
    v13 = a4;
    v14 = a5;
    v17 = 1;
    v20 = 4;
    v23 = 4;
    v26 = 4;
    TlgWrite(&stru_140400AA0, &unk_140374EE1, 0LL, 0LL, 6u, &pData);
  }
  if ( a1 )
  {
    if ( a2 )
    {
      v9 = *(_WORD *)(a1 + 10);
      if ( v9 < 8u )
      {
        *(_DWORD *)(a1 + 12 * (v9 + 9LL)) = a3;
        *(_DWORD *)(a1 + 12LL * *(unsigned __int16 *)(a1 + 10) + 112) = a4;
        *(_DWORD *)(a1 + 12LL * (unsigned __int16)(*(_WORD *)(a1 + 10))++ + 116) = a5;
      }
    }
    else
    {
      v10 = *(_WORD *)(a1 + 8);
      if ( v10 < 8u )
      {
        *(_DWORD *)(a1 + 12 * (v10 + 1LL)) = a3;
        *(_DWORD *)(a1 + 12LL * *(unsigned __int16 *)(a1 + 8) + 16) = a4;
        *(_DWORD *)(a1 + 12LL * (unsigned __int16)(*(_WORD *)(a1 + 8))++ + 20) = a5;
      }
    }
  }
}
