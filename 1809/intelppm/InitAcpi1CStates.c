/*
 * XREFs of InitAcpi1CStates @ 0x1C002F994
 * Callers:
 *     InitAcpiCStates @ 0x1C00207A0 (InitAcpiCStates.c)
 * Callees:
 *     memset @ 0x1C0004FC0 (memset.c)
 *     IsValidAcpiGenericAddress @ 0x1C0020C54 (IsValidAcpiGenericAddress.c)
 */

__int64 __fastcall InitAcpi1CStates(__int64 a1)
{
  __int64 v1; // r9
  unsigned int v2; // edi
  char v4; // r15
  char v5; // r14
  unsigned int v6; // r11d
  __int64 v7; // r10
  SIZE_T v8; // rbp
  unsigned int *PoolWithTag; // rax
  unsigned int *v10; // rbx
  __int64 v11; // rax

  v1 = *(_QWORD *)(a1 + 264);
  v2 = 0;
  v4 = 0;
  *(_QWORD *)(a1 + 256) |= v1 & 7;
  v5 = 0;
  v6 = 1;
  LOBYTE(v7) = v1;
  if ( (v1 & 2) != 0
    && (unsigned __int16)AcpiInfo <= 0x64u
    && IsValidAcpiGenericAddress((unsigned __int8 *)&dword_1C001AD9C)
    && IsValidAcpiGenericAddress((unsigned __int8 *)(a1 + 184))
    && dword_1C001A394 == v6 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1072), v6);
    _InterlockedOr((volatile signed __int32 *)(a1 + 1076), v6);
    v7 = *(_QWORD *)(a1 + 264);
    v6 = 2;
    v4 = 1;
  }
  if ( (v7 & 4) != 0
    && (unsigned __int16)word_1C001AD82 <= 0x3E8u
    && IsValidAcpiGenericAddress((unsigned __int8 *)&dword_1C001ADB4)
    && IsValidAcpiGenericAddress((unsigned __int8 *)&dword_1C001AD84)
    && IsValidAcpiGenericAddress((unsigned __int8 *)&dword_1C001AD9C)
    && IsValidAcpiGenericAddress((unsigned __int8 *)(a1 + 184))
    && dword_1C001A394 == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1072), 2u);
    _InterlockedOr((volatile signed __int32 *)(a1 + 1076), 2u);
    ++v6;
    v5 = 1;
  }
  v8 = 20 * v6 + 4;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v8, 0x72637250u);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v8);
    *v10 = 0;
    *(_QWORD *)(v10 + 1) = 0LL;
    *(_QWORD *)(v10 + 3) = 0LL;
    *((_BYTE *)v10 + 4) = 127;
    *((_BYTE *)v10 + 16) = 1;
    *((_WORD *)v10 + 9) = 0;
    v10[5] = 0;
    v11 = *v10 + 1;
    *v10 = v11;
    if ( v4 )
    {
      LOBYTE(v10[5 * v11 + 4]) = 2;
      HIWORD(v10[5 * *v10 + 4]) = AcpiInfo;
      v10[5 * *v10 + 5] = 0;
      if ( *(_DWORD *)(a1 + 188) != -4 )
      {
        LOBYTE(v10[5 * *v10 + 1]) = 1;
        BYTE1(v10[5 * *v10 + 1]) = 8;
        BYTE2(v10[5 * *v10 + 1]) = 0;
        HIBYTE(v10[5 * *v10 + 1]) = 8;
        v10[5 * *v10 + 3] = 0;
        v10[5 * *v10 + 2] = *(_DWORD *)(a1 + 188) + 4;
      }
      v11 = ++*v10;
    }
    if ( v5 )
    {
      LOBYTE(v10[5 * v11 + 4]) = 3;
      HIWORD(v10[5 * *v10 + 4]) = word_1C001AD82;
      v10[5 * *v10 + 5] = 0;
      if ( *(_DWORD *)(a1 + 188) != -5 )
      {
        LOBYTE(v10[5 * *v10 + 1]) = 1;
        BYTE1(v10[5 * *v10 + 1]) = 8;
        BYTE2(v10[5 * *v10 + 1]) = 0;
        HIBYTE(v10[5 * *v10 + 1]) = 8;
        v10[5 * *v10 + 3] = 0;
        v10[5 * *v10 + 2] = *(_DWORD *)(a1 + 188) + 5;
      }
      ++*v10;
    }
    *(_QWORD *)(a1 + 496) = v10;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
