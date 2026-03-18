/*
 * XREFs of SetFailureLocation @ 0x14027F4C0
 * Callers:
 *     CmpDoFileRead @ 0x140134B54 (CmpDoFileRead.c)
 *     HvCheckBin @ 0x1405D53E0 (HvCheckBin.c)
 *     HvCheckHive @ 0x1406323F0 (HvCheckHive.c)
 *     CmpInitHiveFromFile @ 0x140639858 (CmpInitHiveFromFile.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x14063FE98 (CmpValidateHiveSecurityDescriptors.c)
 *     CmCheckRegistry @ 0x140641AD8 (CmCheckRegistry.c)
 *     CmpCheckLeaf @ 0x1406627D0 (CmpCheckLeaf.c)
 *     CmpCheckRegistry2 @ 0x140663AD0 (CmpCheckRegistry2.c)
 *     CmpCheckValueList @ 0x140663E70 (CmpCheckValueList.c)
 *     CmpCheckKey @ 0x140664430 (CmpCheckKey.c)
 *     HvHiveStartFileBacked @ 0x14068CE18 (HvHiveStartFileBacked.c)
 *     HvLoadHive @ 0x14068D07C (HvLoadHive.c)
 *     HvpEnlistFreeCells @ 0x14068DAC0 (HvpEnlistFreeCells.c)
 *     CmpCreateHive @ 0x14068E190 (CmpCreateHive.c)
 *     HvpInitMap @ 0x14068F608 (HvpInitMap.c)
 *     CmpLoadHiveThread @ 0x14075BB10 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407655D4 (CmpMountPreloadedHives.c)
 *     HvHiveStartMemoryBacked @ 0x140769690 (HvHiveStartMemoryBacked.c)
 *     HvpBuildMapForMemoryBackedHive @ 0x140769B4C (HvpBuildMapForMemoryBackedHive.c)
 *     HvpMapHiveImage @ 0x14083046C (HvpMapHiveImage.c)
 *     HvpPerformLogFileRecovery @ 0x140830684 (HvpPerformLogFileRecovery.c)
 * Callees:
 *     _TlgWrite @ 0x14008BA00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
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
    TlgWrite(&stru_140425BC0, &unk_140394C6E, 0LL, 0LL, 6u, &pData);
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
