/*
 * XREFs of MiInitializePrototypePtes @ 0x14064F444
 * Callers:
 *     MiCreatePrototypePtes @ 0x1400BFB60 (MiCreatePrototypePtes.c)
 *     MiExtendSection @ 0x140625080 (MiExtendSection.c)
 *     MiCreatePagingFileMap @ 0x14064E964 (MiCreatePagingFileMap.c)
 * Callees:
 *     MiMakeDemandZeroPte @ 0x1400765C8 (MiMakeDemandZeroPte.c)
 *     MmAccessFault @ 0x1400AA630 (MmAccessFault.c)
 *     MiMakeSubsectionPte @ 0x1400C01A8 (MiMakeSubsectionPte.c)
 *     MiEncodeProtoFill @ 0x1400C1E14 (MiEncodeProtoFill.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiInitializeFaultVaListCore @ 0x1402C6668 (MiInitializeFaultVaListCore.c)
 */

__int64 __fastcall MiInitializePrototypePtes(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3, int a4)
{
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 result; // rax
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r8
  __int64 v13; // r10
  __int64 v14; // rdx
  unsigned __int64 v15; // rbx
  char v16; // al
  __int64 v17; // r10
  ULONG_PTR v18; // [rsp+20h] [rbp-78h] BYREF
  unsigned __int64 v19; // [rsp+28h] [rbp-70h]
  _DWORD v20[24]; // [rsp+30h] [rbp-68h] BYREF

  memset(v20, 0, 0x58uLL);
  v9 = *(_QWORD *)a3;
  result = 0LL;
  v11 = 8 * a2;
  v12 = 4096LL;
  v18 = 0LL;
  v19 = 0LL;
  v13 = 1LL;
  if ( *(_QWORD *)(v9 + 64) )
  {
    result = MiMakeSubsectionPte(a3);
LABEL_3:
    v15 = result;
    goto LABEL_4;
  }
  v14 = 0LL;
  if ( (*(_DWORD *)(v9 + 56) & 0x1000) == 0 )
  {
    result = MiMakeDemandZeroPte((*(unsigned __int16 *)(a3 + 32) >> 1) & 0x1F, 0LL, 4096LL, v8);
    goto LABEL_3;
  }
  v15 = 0LL;
LABEL_4:
  if ( v11 >= v12 )
  {
    if ( a4 )
    {
      v16 = v15;
      if ( !v15 )
        v16 = MiMakeDemandZeroPte(4, v14, v12, v8) & 0x1F;
      MiEncodeProtoFill(BugCheckParameter1, v11, v16 | 2);
      result = v11 & 0xFFFFFFFFFFFFF000uLL;
      BugCheckParameter1 += v11 & 0xFFFFFFFFFFFFF000uLL;
      v11 &= 0xFFFu;
    }
    else
    {
      v18 = BugCheckParameter1;
      v19 = v11;
      MiInitializeFaultVaListCore((__int64)v20, (__int64)&v18, v13, 2);
      v20[10] = (*(_DWORD *)(v9 + 56) >> 20) & 0x3F;
      result = MmAccessFault(2uLL, BugCheckParameter1, 0, v17 | (unsigned __int64)v20);
    }
  }
  if ( v11 )
  {
    result = v15;
    memset64((void *)BugCheckParameter1, v15, v11 >> 3);
  }
  return result;
}
