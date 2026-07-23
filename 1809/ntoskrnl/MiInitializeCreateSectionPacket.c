/*
 * XREFs of MiInitializeCreateSectionPacket @ 0x1405DEDB0
 * Callers:
 *     MiCreateSection @ 0x1405DEAC0 (MiCreateSection.c)
 * Callees:
 *     MiMakeProtectionMask @ 0x140074490 (MiMakeProtectionMask.c)
 *     PsDereferencePartition @ 0x140090C00 (PsDereferencePartition.c)
 *     PsReferencePartitionByHandle @ 0x1406093B4 (PsReferencePartitionByHandle.c)
 */

__int64 __fastcall MiInitializeCreateSectionPacket(
        int *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        char a6,
        __int64 a7,
        char a8,
        __int64 a9,
        __int64 a10,
        unsigned __int8 a11,
        int a12,
        __int64 a13)
{
  unsigned int v13; // edi
  int v15; // eax
  unsigned int v16; // ecx
  int ProtectionMask; // eax
  unsigned int v18; // edx
  __int64 result; // rax
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  unsigned int v24; // edi
  char v25; // al
  ULONG_PTR **v26; // [rsp+30h] [rbp-18h] BYREF

  v13 = a5;
  if ( (a5 & 0x7F) != 0 )
    return 3221225485LL;
  *((_QWORD *)a1 + 20) = a7;
  a1[42] = a12;
  *((_QWORD *)a1 + 19) = a3;
  *((_BYTE *)a1 + 24) = a8;
  a1[5] = a5;
  *((_QWORD *)a1 + 1) = a2;
  a1[7] = a4;
  *((_BYTE *)a1 + 72) = a11;
  if ( (a6 & 1) != 0 )
    *a1 |= 0x800u;
  if ( (a6 & 2) != 0 )
  {
    v20 = *a1 | 1;
    *a1 = v20;
    if ( (a6 & 4) != 0 )
      *a1 = v20 | 0x10000;
  }
  v15 = ((unsigned __int16)a4 ^ (unsigned __int16)a1[35]) & 0xFFF;
  *((_QWORD *)a1 + 6) = a10;
  a1[35] ^= v15;
  *((_QWORD *)a1 + 5) = a9;
  if ( (a5 & 0x1100000) == 0x1100000 )
  {
    *a1 |= 0x200u;
    v13 = a5 & 0xFFEFFFFF;
  }
  if ( (v13 & 0x100000) == 0 )
  {
    if ( (v13 & 0x2000000) == 0 )
      goto LABEL_9;
    *a1 |= 0x10u;
    if ( (v13 & 0x400000) != 0 )
    {
      v13 &= ~0x400000u;
      v25 = 12;
    }
    else
    {
      v25 = 4;
    }
    v24 = v13 & 0xFDFFFFFF;
    goto LABEL_42;
  }
  v22 = *a1;
  if ( (v13 & 0x200000) != 0 )
  {
    v13 &= ~0x200000u;
    v22 |= 0x40u;
    *a1 = v22;
  }
  v23 = v22 | 0x20;
  v24 = v13 & 0xFFEFFFFF;
  *a1 = v23;
  if ( (v24 & 0x400000) == 0 )
  {
    v25 = 1;
LABEL_42:
    v13 = v24 | 0x1000000;
    *((_BYTE *)a1 + 24) = v25;
    goto LABEL_9;
  }
  *a1 = v23 | 0x100;
  v13 = v24 & 0xFEBFFFFF | 0x1000000;
  *((_BYTE *)a1 + 24) = 12;
LABEL_9:
  v26 = 0LL;
  if ( (v13 & 0x40000) == 0 )
    goto LABEL_10;
  if ( !a9 || a10 )
    return 3221225485LL;
  result = PsReferencePartitionByHandle(a9, 2LL, a11, 1883458893LL, &v26);
  if ( (int)result >= 0 )
  {
    if ( *v26 == &MiSystemPartition )
      PsDereferencePartition((__int64)v26);
    else
      *((_QWORD *)a1 + 22) = v26;
    *((_QWORD *)a1 + 5) = 0LL;
    v13 &= ~0x40000u;
LABEL_10:
    if ( (v13 & 0x1000000) != 0 )
    {
      if ( (a6 & 8) != 0 )
        *a1 |= 0x20000u;
      if ( (KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle & 1) != 0 )
        *a1 |= 0x120000u;
      if ( (v13 & 0x11000000) == 0x11000000 )
      {
        if ( a1[7] != 2 )
          return 3221225541LL;
        v13 &= ~0x10000000u;
      }
      else
      {
        *a1 |= 0x400u;
        v21 = *a1;
        if ( (*a1 & 0x20) != 0 && (MiFlags & 0x10000) != 0 )
        {
          *a1 = v21 | 0x20000;
        }
        else if ( (MiFlags & 0x100000) != 0 )
        {
          *a1 = v21 | 0x20000;
        }
      }
    }
    else if ( (v13 & 0x10000000) != 0 )
    {
      a1[7] |= 0x200u;
    }
    else if ( (v13 & 0x40000000) != 0 )
    {
      a1[7] |= 0x400u;
    }
    v16 = a1[7];
    a1[4] = v13;
    ProtectionMask = MiMakeProtectionMask(v16);
    a1[8] = ProtectionMask;
    if ( ProtectionMask != -1 )
    {
      if ( !a13 )
        return 0LL;
      *((_BYTE *)a1 + 192) = *(_BYTE *)a13;
      a1[49] = *(_DWORD *)(a13 + 4);
      v18 = *(_DWORD *)(a13 + 8);
      if ( v18 <= (unsigned __int16)KeNumberNodes )
      {
        a1[43] = v18;
        return 0LL;
      }
      return 3221225485LL;
    }
    return 3221225541LL;
  }
  return result;
}
