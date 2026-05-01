/*
 * XREFs of ?RmpPsmAppFamilyIdHash@@YA_KPEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x180014F20
 * Callers:
 *     ?RmpPsmAppFamilyTableFindOrCreate@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180017A44 (-RmpPsmAppFamilyTableFindOrCreate@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RmpPsmAppFamilyIdHash(struct _RM_PSM_APP_FAMILY_ID *a1)
{
  unsigned __int8 *v1; // rsi
  WCHAR *v2; // rbx
  __int64 v3; // rdi
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  WCHAR v7; // [rsp+30h] [rbp+8h]

  v1 = (unsigned __int8 *)a1 + 464;
  v2 = (WCHAR *)a1;
  v3 = 314159LL;
  if ( a1 < (struct _RM_PSM_APP_FAMILY_ID *)((char *)a1 + 464) )
  {
    do
    {
      v7 = RtlUpcaseUnicodeChar(*v2++);
      v3 = HIBYTE(v7) + 37 * ((unsigned __int8)v7 + 37 * v3);
    }
    while ( v2 < (WCHAR *)v1 );
  }
  v4 = 0x2ECBEADD94E1B3F5LL * v1[42]
     + 0xDB9C20F4D76948E5uLL * v1[54]
     + 0x1D77462DBBD40701LL * v1[7]
     + 0xB5A728F1B3DF494DuLL * v1[16]
     + 0x8443F2CCD7EFCA65uLL * v1[22]
     + 0x8B7970C2A4EFB2A9uLL * v1[57]
     + 0x4D463845869B9CD9LL * v1[37]
     + 0x6A88D147CBF58115LL * v1[18]
     + 0x4FE1DAF580C363FDLL * v1[44]
     + 0x5D853AC4C14E51E9LL * v1[9]
     + 0x65EC3D53F206D09DLL * v1[52]
     + 0x14D2E4F3AFFE229LL * (v1[25] + 37LL * v1[24])
     + 37
     * (v1[70]
      + 37
      * (v1[69]
       + 37
       * (v1[68]
        + 37
        * (v1[67]
         + 37
         * (v1[66]
          + 37
          * (v1[65] + 37 * (v1[64] + 37 * (v1[63] + 37 * (v1[62] + 37 * (v1[61] + 37 * (v1[60] + 37LL * v1[59])))))))))));
  v5 = 0x9FEAE5B513875FC9uLL * v1[1]
     + 0xC378F206849F0269uLL * v1[41]
     + 0xFCE97086A74B1CB9uLL * v1[29]
     + 0x73D058131B2A8879LL * v1[13]
     + 0xBEEC149AF4096455uLL * v1[34]
     + 0xBB24DD21FAFC26B1uLL * v1[51]
     + 0xF5BCA5B282606D41uLL * v1[23]
     + 0x423D249C25A50325LL * v1[6]
     + 0xFC7A30A306398A8DuLL * v1[32]
     + 0x51C644DB3653E381LL * v1[39]
     + 0x8BA4A57B9C3D7391uLL * v1[43]
     + 0x3C82EBCCD629C471LL * v1[35]
     + 0x8DBD43762DDB26BDuLL * v1[28]
     + 0x78803D01F0C17231LL * v1[19]
     + 0x407AFAF12AFB592DLL * v1[40]
     + 0x4128EAEEFF459821LL * v1[15]
     + 0xECFE0C79B5739BCDuLL * v1[48]
     + 0xAA604B65C241EDD5uLL * v1[2]
     + 0xBD1CBAC2ED25B97DuLL * v1[12]
     + 0xBD90C36322378919uLL * v1[53]
     + 0x2B26220C747DAB5DLL * v1[36]
     + 0x92D64A9170D97459uLL * v1[5]
     + 0x84417E6FF051D6ADuLL * v1[8]
     + 0x38F8C7054F6DD0DDLL * v1[4]
     + 0x288D4C21D6A4D26DLL * v1[56]
     + v4;
  return v1[71]
       + 0x1CF3332BD290D80DLL * *v1
       + 0x1DD2179B35A84099LL * v1[21]
       + 0xC8228AB72E6AE889uLL * v1[49]
       + 0x7C5AC014A0AC9951LL * v1[27]
       + 0x6AE9F48AE50EFCC5LL * v1[14]
       + 0x65C63F607A7BA809LL * v1[17]
       + 0x3433B6F080FF8F35LL * v1[58]
       + 0x5A90B6DB573C2B45LL * v1[46]
       + 0xD1A7F3AEDA1FE1A5uLL * v1[38]
       + 0x7DA9078FE6510661LL * v1[31]
       + 0x296E17CC49B5EC05LL * v1[30]
       + 0x16EA6DB39BB240F9LL * v1[45]
       + 0x5526FE2C4673CF11LL * v1[11]
       + 0x981EFA65455B8049uLL * v1[33]
       + 0xC53F5E946719795LL * v1[50]
       + 0xF91DC2FB38F228B5uLL * v1[26]
       + 0x3BF4C3C47ADF2FF1LL * v1[3]
       + 0x40B7CD9739B584A1LL * v1[47]
       + 0xDC6C00E405D269C1uLL * v1[55]
       + 0x4EA2BC662EBCED75LL * v1[10]
       + 0x4F5D696EC151561DLL * v1[20]
       + v5
       + 0x2F2665556EEF39E1LL * v3;
}
