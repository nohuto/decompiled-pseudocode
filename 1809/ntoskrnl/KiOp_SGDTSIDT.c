/*
 * XREFs of KiOp_SGDTSIDT @ 0x14029CAD0
 * Callers:
 *     <none>
 * Callees:
 *     KiOpRetrieveRegMemAddress @ 0x140192098 (KiOpRetrieveRegMemAddress.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 */

__int64 __fastcall KiOp_SGDTSIDT(__int64 a1)
{
  char v2; // cl
  __int64 v3; // xmm0_8
  void *IdtBase; // rcx
  __int16 v5; // ax
  __int64 v6; // rdi
  char v7; // r8
  char *v8; // rdx
  _TBYTE Src; // [rsp+28h] [rbp-30h] BYREF
  char v11; // [rsp+68h] [rbp+10h] BYREF
  void *v12; // [rsp+70h] [rbp+18h] BYREF
  __int64 v13; // [rsp+78h] [rbp+20h]

  if ( ((KiBugCheckActive & 3) == 0 || !VslVsmEnabled)
    && (!KiNPIEPEnabled || *(_BYTE *)(a1 + 81) != 1 && (KiBugCheckActive & 3) == 0) )
  {
    return 0LL;
  }
  v2 = *(_BYTE *)(a1 + 81);
  if ( (*(_BYTE *)(a1 + 65) & 0x38) != 0 )
  {
    if ( v2 )
    {
      v3 = KiOpIdtr;
      goto LABEL_12;
    }
    IdtBase = KeGetPcr()->IdtBase;
    v5 = 4095;
LABEL_14:
    LOWORD(Src) = v5;
    *(_QWORD *)((char *)&Src + 2) = IdtBase;
    goto LABEL_15;
  }
  if ( !v2 )
  {
    IdtBase = KeGetPcr()->NtTib.ExceptionList;
    v5 = 87;
    goto LABEL_14;
  }
  v3 = KiOpGdtr;
LABEL_12:
  *(_QWORD *)&Src = v3;
  HIWORD(Src) = -1;
LABEL_15:
  v6 = *(_QWORD *)(a1 + 32);
  v13 = v6;
  *(_DWORD *)v6 = -1073741819;
  if ( (int)KiOpRetrieveRegMemAddress(a1, (__int64 *)&v12, &v11, 0LL) < 0 )
  {
    v12 = (void *)-1LL;
  }
  else
  {
    v7 = *(_BYTE *)(a1 + 58);
    if ( v11 == 1 )
    {
      v8 = (char *)v12 + (-(__int64)(v7 != 0) & 0xFFFFFFFFFFFFFFFCuLL) + 10;
      if ( (unsigned __int64)v8 > 0x7FFFFFFF0000LL || v8 < v12 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(v12, &Src, (-(__int64)(v7 != 0) & 0xFFFFFFFFFFFFFFFCuLL) + 10);
    *(_QWORD *)(*(_QWORD *)(a1 + 24) + 248LL) += (unsigned int)(*(_DWORD *)(a1 + 16) - *(_DWORD *)a1);
    ++KiOpDescriptorTableStoreSkip;
    *(_BYTE *)(a1 + 96) = 1;
  }
  if ( !*(_BYTE *)(a1 + 96) )
  {
    *(_DWORD *)v6 = -1073741819;
    *(_QWORD *)(v6 + 32) = 1LL;
    *(_QWORD *)(v6 + 40) = v12;
    *(_BYTE *)(a1 + 97) = 1;
  }
  return 0LL;
}
