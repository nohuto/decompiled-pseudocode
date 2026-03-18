/*
 * XREFs of MdlToPrp @ 0x1C0010A1C
 * Callers:
 *     SetPrpFromSrb @ 0x1C0001854 (SetPrpFromSrb.c)
 *     ScsiToNVMe @ 0x1C0003070 (ScsiToNVMe.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C0002D68 (GetSrbScsiData.c)
 *     GetSrbExtension @ 0x1C00039B0 (GetSrbExtension.c)
 *     memset @ 0x1C0005400 (memset.c)
 *     BuildReadWriteCommand @ 0x1C000DEE0 (BuildReadWriteCommand.c)
 *     GetLbaFromCdb @ 0x1C000EE98 (GetLbaFromCdb.c)
 */

__int64 __fastcall MdlToPrp(__int64 a1, __int64 a2)
{
  __int64 v4; // r15
  _QWORD *SrbExtension; // rbx
  __int64 result; // rax
  __int64 v7; // rsi
  _BYTE *SrbScsiData; // rax
  char *v9; // rcx
  int v10; // r8d
  unsigned __int8 *v11; // r11
  char v12; // cl
  unsigned __int8 v13; // cl
  __int64 v14; // rdx
  int v15; // ecx
  __int64 v16; // rax
  unsigned int v17; // r8d
  unsigned int v18; // esi
  unsigned int v19; // r8d
  _QWORD *v20; // r9
  __int64 v21; // rcx
  int v22; // [rsp+A0h] [rbp+40h]
  unsigned int v23; // [rsp+A8h] [rbp+48h] BYREF

  v4 = 0LL;
  SrbExtension = (_QWORD *)GetSrbExtension(a2);
  v22 = 0;
  if ( (*((_BYTE *)SrbExtension + 4253) & 6) != 2 )
    return 0LL;
  result = StorPortExtendedFunction(6LL, a1, a2);
  if ( !(_DWORD)result )
  {
    result = StorPortExtendedFunction(76LL, a1, a2);
    if ( !(_DWORD)result )
    {
      v7 = 60LL;
      if ( *(_BYTE *)(a2 + 2) != 40 )
        v7 = 16LL;
      if ( *(_DWORD *)(a1 + 116) )
      {
        v23 = 0;
        SrbScsiData = (_BYTE *)GetSrbScsiData(a2, &v23, 0LL, 0LL, 0LL);
        if ( GetLbaFromCdb(SrbScsiData, v23) )
        {
          v12 = *v9;
          if ( v12 == 40 || v12 == 42 || v12 == -120 || v12 == -118 )
          {
            v22 = *(_DWORD *)(a1 + 116);
            if ( *(_BYTE *)(a2 + 2) == 40 )
              v13 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
            else
              v13 = *(_BYTE *)(a2 + 7);
            v14 = v13;
            v15 = *(_DWORD *)(*(_QWORD *)(a1 + 8LL * v13 + 1648) + 52LL);
            *(_DWORD *)(v7 + a2) -= -v15 & (v15 + *(_DWORD *)(a1 + 116) - 1);
            if ( (unsigned int)v14 < *(_DWORD *)(a1 + 192) )
            {
              v16 = *(_QWORD *)(a1 + 8 * v14 + 1648);
              if ( v16 )
                v10 = *(_DWORD *)(v16 + 16);
            }
            BuildReadWriteCommand(a1, a2, v11, v23, (__int64)(SrbExtension + 512), v10);
          }
        }
      }
      v17 = v22 + *((_DWORD *)SrbExtension + 1054);
      v18 = (*(_DWORD *)(v7 + a2) >> 12) + (((v17 & 0xFFF) + (*(_DWORD *)(v7 + a2) & 0xFFF) + 4095) >> 12);
      if ( v17 >= 0x1000 )
      {
        v4 = v17 >> 12;
        v17 -= v17 >> 12 << 12;
      }
      if ( !v18 || (_DWORD)v4 + v18 )
        return 3238002689LL;
      SrbExtension[515] = v17 + (*(_QWORD *)(8 * v4) << 12);
      if ( v18 != 1 )
      {
        if ( v18 == 2 )
        {
          SrbExtension[516] = *(_QWORD *)(8LL * (unsigned int)(v4 + 1)) << 12;
          memset(SrbExtension, 0, 0x1000uLL);
          *SrbExtension = SrbExtension[516];
        }
        else
        {
          memset(SrbExtension, 0, 0x1000uLL);
          v19 = 1;
          v20 = SrbExtension;
          do
          {
            v21 = v19 + (unsigned int)v4;
            ++v19;
            *v20++ = *(_QWORD *)(8 * v21) << 12;
          }
          while ( v19 < v18 );
          SrbExtension[516] = StorPortGetPhysicalAddress(a1, a2, SrbExtension, &v23);
        }
      }
      return 0LL;
    }
  }
  return result;
}
