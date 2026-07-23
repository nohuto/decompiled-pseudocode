/*
 * XREFs of KiOp_SLDTSTRSMSW @ 0x14029CC70
 * Callers:
 *     <none>
 * Callees:
 *     KiOpRetrieveRegMemAddress @ 0x140192098 (KiOpRetrieveRegMemAddress.c)
 */

__int64 __fastcall KiOp_SLDTSTRSMSW(__int64 a1)
{
  unsigned __int16 v2; // si
  __int64 v3; // r14
  int v4; // eax
  unsigned int v5; // ecx
  __int64 v6; // r8
  unsigned __int64 v7; // rdx
  char v9; // [rsp+68h] [rbp+10h] BYREF
  int v10; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int16 *v11; // [rsp+78h] [rbp+20h] BYREF

  if ( (KiBugCheckActive & 3) != 0 && VslVsmEnabled
    || KiNPIEPEnabled && (*(_BYTE *)(a1 + 81) == 1 || (KiBugCheckActive & 3) != 0) )
  {
    if ( (*(_BYTE *)(a1 + 65) & 0x38) != 0 )
    {
      if ( (*(_BYTE *)(a1 + 65) & 0x38) == 8 )
        v2 = 64;
      else
        v2 = __readcr0();
    }
    else
    {
      v2 = 0;
    }
    v3 = *(_QWORD *)(a1 + 32);
    *(_DWORD *)v3 = -1073741819;
    if ( (int)KiOpRetrieveRegMemAddress(a1, (__int64 *)&v11, &v9, &v10) < 0 )
    {
      v6 = -1LL;
    }
    else
    {
      v4 = *(_DWORD *)(a1 + 48) & 0x40;
      if ( *(_BYTE *)(a1 + 58) )
        v5 = v4 != 0 ? 2 : 4;
      else
        v5 = v4 != 0 ? 2 : 8;
      v6 = (__int64)v11;
      if ( v9 == 1 )
      {
        v7 = (unsigned __int64)v11 + v5;
        if ( v7 > 0x7FFFFFFF0000LL || v7 < (unsigned __int64)v11 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      if ( !v10 || v5 == 2 )
      {
        *v11 = v2;
      }
      else if ( v5 == 4 )
      {
        *(_DWORD *)v11 = v2;
      }
      else
      {
        *(_QWORD *)v11 = v2;
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 24) + 248LL) += (unsigned int)(*(_DWORD *)(a1 + 16) - *(_DWORD *)a1);
      ++KiOpDescriptorTableStoreSkip;
      *(_BYTE *)(a1 + 96) = 1;
    }
    if ( !*(_BYTE *)(a1 + 96) )
    {
      *(_DWORD *)v3 = -1073741819;
      *(_QWORD *)(v3 + 32) = 1LL;
      *(_QWORD *)(v3 + 40) = v6;
      *(_BYTE *)(a1 + 97) = 1;
    }
  }
  return 0LL;
}
