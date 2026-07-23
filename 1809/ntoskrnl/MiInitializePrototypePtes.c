/*
 * XREFs of MiInitializePrototypePtes @ 0x140620030
 * Callers:
 *     MiCreatePrototypePtes @ 0x140095A70 (MiCreatePrototypePtes.c)
 *     MiExtendSection @ 0x14061D4C8 (MiExtendSection.c)
 *     MiCreatePagingFileMap @ 0x14061FB18 (MiCreatePagingFileMap.c)
 *     MiCopyDirectMapHeader @ 0x140853E04 (MiCopyDirectMapHeader.c)
 * Callees:
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     MiEncodeProtoFill @ 0x1400939CC (MiEncodeProtoFill.c)
 *     MiMakeSubsectionPte @ 0x140095A40 (MiMakeSubsectionPte.c)
 *     MiMakeDemandZeroPte @ 0x140097E20 (MiMakeDemandZeroPte.c)
 *     MiInitializeFaultVaListCore @ 0x1402AECB8 (MiInitializeFaultVaListCore.c)
 */

void __fastcall MiInitializePrototypePtes(char *a1, __int64 a2, unsigned __int16 *a3, int a4)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v6; // r11
  __int64 SubsectionPte; // rax
  unsigned __int64 v8; // rbx
  char v9; // al
  __int64 v10; // r10
  __int64 v11; // r8
  _QWORD v12[2]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v13[40]; // [rsp+30h] [rbp-68h] BYREF
  int v14; // [rsp+58h] [rbp-40h]

  v4 = 8 * a2;
  v6 = 4096LL;
  if ( *(_QWORD *)(*(_QWORD *)a3 + 64LL) )
  {
    SubsectionPte = MiMakeSubsectionPte((__int64)a3);
    goto LABEL_4;
  }
  if ( (*(_DWORD *)(*(_QWORD *)a3 + 56LL) & 0x1000) == 0 )
  {
    SubsectionPte = MiMakeDemandZeroPte((a3[16] >> 1) & 0x1F);
LABEL_4:
    v8 = SubsectionPte;
    goto LABEL_5;
  }
  v8 = 0LL;
LABEL_5:
  if ( v4 >= v6 )
  {
    if ( a4 )
    {
      v9 = v8;
      if ( !v8 )
        v9 = MiMakeDemandZeroPte(4) & 0x1F;
      MiEncodeProtoFill((unsigned __int64)a1, v4, v9 | 2);
      a1 += v4 & 0xFFFFFFFFFFFFF000uLL;
      v4 &= 0xFFFu;
    }
    else
    {
      v12[0] = a1;
      v12[1] = v4;
      MiInitializeFaultVaListCore((__int64)v13, (__int64)v12, 1LL, 2);
      v14 = (*(_DWORD *)(v10 + 56) >> 20) & 0x3F;
      MmAccessFault(2uLL, (signed __int64)a1, 0LL, v11 | (unsigned __int64)v13);
    }
  }
  if ( v4 )
    memset64(a1, v8, v4 >> 3);
}
