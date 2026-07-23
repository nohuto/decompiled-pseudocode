/*
 * XREFs of MiAllocateVirtualMemoryPrepare @ 0x1405EE0B0
 * Callers:
 *     NtAllocateVirtualMemory @ 0x1405EDE60 (NtAllocateVirtualMemory.c)
 *     MiAllocateVirtualMemoryCommon @ 0x140676EB0 (MiAllocateVirtualMemoryCommon.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E9390 (ObpReferenceObjectByHandleWithTag.c)
 *     MiValidateAllocationType @ 0x1405EE550 (MiValidateAllocationType.c)
 *     MiValidateZeroBits @ 0x1406785EC (MiValidateZeroBits.c)
 *     MiGetUserReservationHighestAddress @ 0x14069740C (MiGetUserReservationHighestAddress.c)
 */

__int64 __fastcall MiAllocateVirtualMemoryPrepare(
        ULONG_PTR a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int64 *a7,
        char a8,
        int a9,
        int a10,
        __int64 a11,
        __int64 a12,
        _QWORD *a13)
{
  unsigned __int64 v13; // rbx
  __int64 v14; // rdi
  _QWORD *p_Lock; // r13
  unsigned int v17; // ebp
  __int64 v18; // rcx
  __int64 v19; // rdx
  int v20; // r14d
  unsigned __int64 *v21; // rsi
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // rdx
  __int64 v24; // r10
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // r9
  unsigned __int64 v29; // rcx
  unsigned int v30; // r8d
  _QWORD *v31; // rax
  PVOID v32; // rcx
  __int64 result; // rax
  int v34; // eax
  PVOID Object; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v36; // [rsp+88h] [rbp+10h]
  __int64 v37; // [rsp+90h] [rbp+18h] BYREF

  v37 = a3;
  v13 = a2;
  v14 = a12;
  v36 = a2;
  Object = 0LL;
  p_Lock = &KeGetCurrentThread()->ApcState.Process->Header.Lock;
  *(_QWORD *)(a12 + 88) = p_Lock;
  if ( a1 != -1LL )
  {
    v20 = ObpReferenceObjectByHandleWithTag(a1, 8, (__int64)PsProcessType, a8, 0x6D566D4Du, &Object, 0LL, 0LL);
    if ( v20 < 0 )
      goto LABEL_57;
    p_Lock = Object;
  }
  v17 = a5;
  v18 = a5;
  v19 = a6;
  *(_QWORD *)(v14 + 80) = p_Lock;
  *(_QWORD *)(v14 + 32) = a4;
  v20 = MiValidateAllocationType(v18, v19);
  if ( v20 >= 0 )
  {
    if ( (v17 & 0x1000) != 0 && !v13 )
      v17 |= 0x2000u;
    if ( (v17 & 0x20000000) != 0 && (v17 & 0x2000) == 0 )
      v17 &= 0xDFBFFFFF;
    v21 = a7;
    if ( a7[3] && (v17 & 0x20400000) != 0x20000000 || ((v17 & 0x2000) == 0 || v13) && (*a7 || a7[1] || a7[2]) )
      goto LABEL_56;
    if ( v37 )
    {
      v20 = MiValidateZeroBits(&v37);
      if ( v20 < 0 )
        goto LABEL_57;
      if ( (v17 & 0x2000) != 0 && !v13 )
        v21[1] = MiGetUserReservationHighestAddress(p_Lock, v37);
    }
    if ( (v17 & 0x40000) != 0 )
    {
      *(_DWORD *)(v14 + 52) |= 0x8000000u;
    }
    else
    {
      if ( (v17 & 0x4000) == 0 )
        goto LABEL_15;
      if ( *v21 || v21[1] || v21[2] )
        goto LABEL_56;
      *(_DWORD *)(v14 + 52) |= 0x4000000u;
    }
    if ( (v17 & 0x4000) != 0 )
    {
      v22 = 4096LL;
      goto LABEL_17;
    }
LABEL_15:
    if ( (v17 & 0x2000) != 0 )
    {
      v34 = v17 & 0x20400000;
      if ( (v17 & 0x40000000) != 0 )
      {
        if ( ((v34 - 0x20000000) & 0xFFBFFFFF) == 0 )
          goto LABEL_56;
        v22 = 4096LL;
      }
      else
      {
        v22 = 0x10000LL;
        if ( v34 == 0x20000000 )
          v22 = 0x200000LL;
      }
    }
    else
    {
      v22 = 4096LL;
    }
LABEL_17:
    v23 = v21[2];
    if ( v23 )
    {
      if ( v23 < v22 || ((v23 - 1) & v23) != 0 || v23 >= 0x7FFFFFFF0000LL || (v17 & 0x40000000) != 0 && v23 != 4096 )
        goto LABEL_56;
    }
    else
    {
      v21[2] = v22;
    }
    if ( !a4 || (((v17 & 0x20400000) - 0x20000000) & 0xFFBFFFFF) == 0 && ((v22 - 1) & a4) != 0 )
      goto LABEL_56;
    v24 = 0x7FFFFFFEFFFFLL;
    if ( v13 > 0x7FFFFFFEFFFFLL || 0x7FFFFFFF0000LL - v13 < a4 )
      goto LABEL_56;
    v25 = v13 + a4;
    if ( (v17 & 0x2000) != 0 )
    {
      if ( (v17 & 0x40004000) != 0 )
      {
        if ( (((unsigned __int16)v13 | (unsigned __int16)a4) & 0xFFF) != 0 )
          goto LABEL_56;
        goto LABEL_28;
      }
      v13 &= -(__int64)v22;
      if ( (((v17 & 0x20400000) - 0x20000000) & 0xFFBFFFFF) != 0 )
        goto LABEL_27;
      v25 = v13 + a4;
    }
    else
    {
      if ( v17 != 0x80000 && v17 != 0x1000000 )
      {
        v13 &= 0x7FFFFFFFF000uLL;
LABEL_27:
        v25 = (v25 + 4095) & 0xFFFFFFFFFFFFF000uLL;
        goto LABEL_28;
      }
      v25 &= 0xFFFFFFFFFFFFF000uLL;
      v13 = (v13 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      if ( v13 >= v25 )
      {
        v20 = -1073741800;
        goto LABEL_57;
      }
    }
LABEL_28:
    v26 = v36;
    v27 = v25 - v13;
    if ( v36 )
      *v21 = v13;
    else
      v13 = *v21;
    v28 = v21[2];
    if ( ((v28 - 1) & v13) == 0 )
    {
      v29 = v21[1];
      if ( v29 )
      {
        if ( v29 <= 0x7FFFFFFEFFFFLL && (((_WORD)v29 + 1) & 0xFFF) == 0 )
          goto LABEL_35;
      }
      else
      {
        if ( (v17 & 0x2000) != 0 && !v26 && (v17 & 0x4000) == 0 )
        {
          if ( (unsigned __int64)(p_Lock[144] - 1LL) < 0x7FFFFFFEFFFFLL )
            v24 = p_Lock[144] - 1LL;
          v21[1] = v24;
          v29 = v24;
LABEL_35:
          if ( v13 < v29 && v29 - v13 + 1 >= v27 && (v17 & 0x7F) == 0 )
          {
            v30 = *((_DWORD *)v21 + 8);
            if ( v30 <= (unsigned __int16)KeNumberNodes )
            {
              *(_DWORD *)(v14 + 44) = a6;
              *(_BYTE *)(v14 + 96) = a8;
              *(_DWORD *)(v14 + 52) |= a9;
              *(_DWORD *)(v14 + 68) = a10;
              *(_QWORD *)(v14 + 72) = a11;
              *(_QWORD *)(v14 + 104) = v21[5];
              *(_QWORD *)(v14 + 112) = v21[7];
              v31 = a13;
              *(_QWORD *)(v14 + 8) = v29;
              v32 = Object;
              *(_QWORD *)v14 = v13;
              *v31 = v32;
              result = 0LL;
              *(_QWORD *)(v14 + 16) = v28;
              *(_QWORD *)(v14 + 24) = v27;
              *(_DWORD *)(v14 + 40) = v17 & 0xFFFBBFFF;
              *(_DWORD *)(v14 + 48) = v30;
              return result;
            }
          }
          goto LABEL_56;
        }
        if ( v13 + v27 >= v13 )
        {
          v29 = v13 + v27 - 1;
          v21[1] = v29;
          if ( v29 <= 0x7FFFFFFEFFFFLL )
            goto LABEL_35;
        }
      }
    }
LABEL_56:
    v20 = -1073741811;
  }
LABEL_57:
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  return (unsigned int)v20;
}
