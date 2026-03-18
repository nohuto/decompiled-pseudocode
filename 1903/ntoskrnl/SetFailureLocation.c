/*
 * XREFs of SetFailureLocation @ 0x14027F760
 * Callers:
 *     CmpDoFileRead @ 0x140134250 (CmpDoFileRead.c)
 *     HvCheckBin @ 0x1405D4C20 (HvCheckBin.c)
 *     HvCheckHive @ 0x14062E570 (HvCheckHive.c)
 *     CmpInitHiveFromFile @ 0x1406365F8 (CmpInitHiveFromFile.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x14063CDE8 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpCheckLeaf @ 0x14064F610 (CmpCheckLeaf.c)
 *     CmpCheckRegistry2 @ 0x140650910 (CmpCheckRegistry2.c)
 *     CmpCheckValueList @ 0x140650CB0 (CmpCheckValueList.c)
 *     CmpCheckKey @ 0x140651270 (CmpCheckKey.c)
 *     CmCheckRegistry @ 0x14065CD7C (CmCheckRegistry.c)
 *     CmpCreateHive @ 0x14065E124 (CmpCreateHive.c)
 *     HvLoadHive @ 0x14065F05C (HvLoadHive.c)
 *     HvpEnlistFreeCells @ 0x14065FAA0 (HvpEnlistFreeCells.c)
 *     HvpInitMap @ 0x140660700 (HvpInitMap.c)
 *     HvHiveStartFileBacked @ 0x14066102C (HvHiveStartFileBacked.c)
 *     CmpLoadHiveThread @ 0x140757530 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x140760BCC (CmpMountPreloadedHives.c)
 *     HvHiveStartMemoryBacked @ 0x140764B90 (HvHiveStartMemoryBacked.c)
 *     HvpBuildMapForMemoryBackedHive @ 0x14076504C (HvpBuildMapForMemoryBackedHive.c)
 *     HvpMapHiveImage @ 0x1408305FC (HvpMapHiveImage.c)
 *     HvpPerformLogFileRecovery @ 0x140830814 (HvpPerformLogFileRecovery.c)
 * Callees:
 *     _TlgWrite @ 0x14008A700 (_TlgWrite.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
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

  if ( stru_140425BC0.LevelPlus1 > 5 )
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
    TlgWrite(&stru_140425BC0, &unk_1403949A5, 0LL, 0LL, 6u, &pData);
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
