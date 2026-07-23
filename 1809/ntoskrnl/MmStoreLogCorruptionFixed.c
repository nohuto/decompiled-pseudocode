/*
 * XREFs of MmStoreLogCorruptionFixed @ 0x1402C4608
 * Callers:
 *     ?StDmHandleDecompressionFailure@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x140305064 (-StDmHandleDecompressionFailure@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWriteEx @ 0x140100938 (_TlgWriteEx.c)
 *     MmGetPhysicalAddress @ 0x1401211A0 (MmGetPhysicalAddress.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall MmStoreLogCorruptionFixed(char *a1, unsigned int a2, int a3)
{
  __int64 v4; // rdi
  PHYSICAL_ADDRESS v6; // r14
  ULONG64 v7; // r8
  const struct _TlgProvider_t *v8; // r9
  __int64 v9; // r10
  const GUID *v10; // [rsp+20h] [rbp-89h]
  const GUID *v11; // [rsp+28h] [rbp-81h]
  int v12; // [rsp+40h] [rbp-69h] BYREF
  int v13; // [rsp+44h] [rbp-65h] BYREF
  char *v14; // [rsp+48h] [rbp-61h] BYREF
  PHYSICAL_ADDRESS v15; // [rsp+50h] [rbp-59h] BYREF
  __int64 v16; // [rsp+58h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-49h] BYREF
  char **v18; // [rsp+80h] [rbp-29h]
  int v19; // [rsp+88h] [rbp-21h]
  int v20; // [rsp+8Ch] [rbp-1Dh]
  int *v21; // [rsp+90h] [rbp-19h]
  int v22; // [rsp+98h] [rbp-11h]
  int v23; // [rsp+9Ch] [rbp-Dh]
  int *v24; // [rsp+A0h] [rbp-9h]
  int v25; // [rsp+A8h] [rbp-1h]
  int v26; // [rsp+ACh] [rbp+3h]
  PHYSICAL_ADDRESS *v27; // [rsp+B0h] [rbp+7h]
  int v28; // [rsp+B8h] [rbp+Fh]
  int v29; // [rsp+BCh] [rbp+13h]
  __int64 *v30; // [rsp+C0h] [rbp+17h]
  int v31; // [rsp+C8h] [rbp+1Fh]
  int v32; // [rsp+CCh] [rbp+23h]

  v4 = a2;
  if ( hProvider )
  {
    v6.QuadPart = MmGetPhysicalAddress(a1).QuadPart / 4096;
    if ( ((v4 + 4095 + ((unsigned __int16)a1 & 0xFFF)) & 0xFFFFFFFFFFFFF000uLL) != 0x1000 )
      MmGetPhysicalAddress(&a1[(unsigned int)(v4 - 1)]);
    if ( hProvider->LevelPlus1 > 5 )
    {
      if ( TlgKeywordOn(hProvider, 0x400000000002uLL) )
      {
        v20 = 0;
        v23 = 0;
        v26 = 0;
        v29 = 0;
        v32 = 0;
        v18 = &v14;
        v14 = a1;
        v21 = &v12;
        v24 = &v13;
        v27 = &v15;
        v30 = &v16;
        v12 = v4;
        v13 = a3;
        v15 = v6;
        v16 = v9;
        v19 = 8;
        v22 = 4;
        v25 = 4;
        v28 = 8;
        v31 = 8;
        TlgWriteEx(v8, &unk_14036F550, v7, (ULONG)v8, v10, v11, 7u, &pData);
      }
    }
  }
}
