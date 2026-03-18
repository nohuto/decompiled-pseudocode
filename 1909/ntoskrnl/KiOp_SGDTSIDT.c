/*
 * XREFs of KiOp_SGDTSIDT @ 0x1402B3960
 * Callers:
 *     <none>
 * Callees:
 *     KiOpRetrieveRegMemAddress @ 0x14019C788 (KiOpRetrieveRegMemAddress.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 */

__int64 __fastcall KiOp_SGDTSIDT(__int64 a1)
{
  int v2; // ecx
  __int64 v3; // xmm0_8
  void *IdtBase; // rcx
  __int16 v5; // ax
  __int64 v6; // rdi
  char v7; // r8
  char *v8; // rdx
  _TBYTE Src; // [rsp+30h] [rbp-28h] BYREF
  char v11; // [rsp+68h] [rbp+10h] BYREF
  int v12; // [rsp+70h] [rbp+18h]
  void *v13; // [rsp+78h] [rbp+20h] BYREF

  *(_QWORD *)((char *)&Src + 2) = 0LL;
  v12 = KiBugCheckActive;
  if ( (KiBugCheckActive & 3) != 0 )
  {
    v2 = 1;
    if ( VslVsmEnabled )
      goto LABEL_9;
  }
  else
  {
    v2 = 0;
  }
  if ( !KiNPIEPEnabled && (KeFeatureBits2 & 4) == 0 || *(_BYTE *)(a1 + 81) != 1 && !v2 )
    return 0LL;
LABEL_9:
  if ( (*(_BYTE *)(a1 + 65) & 0x38) != 0 )
  {
    if ( *(_BYTE *)(a1 + 81) )
    {
      v3 = KiOpIdtr;
      goto LABEL_15;
    }
    IdtBase = KeGetPcr()->IdtBase;
    v5 = 4095;
LABEL_17:
    LOWORD(Src) = v5;
    *(_QWORD *)((char *)&Src + 2) = IdtBase;
    goto LABEL_18;
  }
  if ( !*(_BYTE *)(a1 + 81) )
  {
    IdtBase = KeGetPcr()->NtTib.ExceptionList;
    v5 = 87;
    goto LABEL_17;
  }
  v3 = KiOpGdtr;
LABEL_15:
  *(_QWORD *)&Src = v3;
  HIWORD(Src) = -1;
LABEL_18:
  v6 = *(_QWORD *)(a1 + 32);
  *(_DWORD *)v6 = -1073741819;
  if ( (int)KiOpRetrieveRegMemAddress(a1, (__int64 *)&v13, &v11, 0LL) < 0 )
  {
    v13 = (void *)-1LL;
  }
  else
  {
    v7 = *(_BYTE *)(a1 + 58);
    if ( v11 == 1 )
    {
      v8 = (char *)v13 + (-(__int64)(v7 != 0) & 0xFFFFFFFFFFFFFFFCuLL) + 10;
      if ( (unsigned __int64)v8 > 0x7FFFFFFF0000LL || v8 < v13 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(v13, &Src, (-(__int64)(v7 != 0) & 0xFFFFFFFFFFFFFFFCuLL) + 10);
    *(_QWORD *)(*(_QWORD *)(a1 + 24) + 248LL) += (unsigned int)(*(_DWORD *)(a1 + 16) - *(_DWORD *)a1);
    ++KiOpDescriptorTableStoreSkip;
    *(_BYTE *)(a1 + 96) = 1;
  }
  if ( !*(_BYTE *)(a1 + 96) )
  {
    *(_DWORD *)v6 = -1073741819;
    *(_QWORD *)(v6 + 32) = 1LL;
    *(_QWORD *)(v6 + 40) = v13;
    *(_BYTE *)(a1 + 97) = 1;
  }
  return 0LL;
}
