/*
 * XREFs of MiAllocateVirtualMemoryPrepare @ 0x140677B30
 * Callers:
 *     MiAllocateVirtualMemoryCommon @ 0x140677740 (MiAllocateVirtualMemoryCommon.c)
 *     NtAllocateVirtualMemory @ 0x1406778F0 (NtAllocateVirtualMemory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     xHalUnmaskInterrupt @ 0x14013E050 (xHalUnmaskInterrupt.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FA4A0 (ObpReferenceObjectByHandleWithTag.c)
 *     MiValidateZeroBits @ 0x140608638 (MiValidateZeroBits.c)
 *     MiValidateAllocationType @ 0x140678070 (MiValidateAllocationType.c)
 *     MiGetUserReservationHighestAddress @ 0x14067868C (MiGetUserReservationHighestAddress.c)
 */

__int64 __fastcall MiAllocateVirtualMemoryPrepare(
        ULONG_PTR a1,
        unsigned __int64 a2,
        ULONGLONG a3,
        unsigned __int64 a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7,
        char a8,
        unsigned int a9,
        int a10,
        __int64 a11,
        ULONG_PTR BugCheckParameter1,
        PVOID *a13)
{
  unsigned __int64 v13; // rsi
  ULONG_PTR v14; // rbx
  _QWORD *p_Lock; // rax
  unsigned int v17; // ebp
  __int64 v18; // rcx
  __int64 v19; // rdx
  int v20; // r10d
  unsigned int v21; // eax
  int v22; // r10d
  int v23; // r14d
  __int64 v24; // rdi
  unsigned __int64 v25; // r13
  int v26; // r10d
  int v27; // ecx
  _QWORD *v28; // r14
  unsigned __int64 v29; // rcx
  __int64 v30; // r9
  unsigned __int64 v31; // r8
  __int64 v32; // rax
  unsigned __int64 v33; // r15
  unsigned __int64 v34; // r8
  __int64 v35; // r10
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rcx
  int v38; // r11d
  unsigned int v39; // r9d
  char v40; // al
  __int64 v41; // rax
  int v42; // ecx
  PVOID *v43; // rax
  __int64 result; // rax
  __int64 v45; // rax
  bool v46; // zf
  __int64 v47; // rcx
  _QWORD *v48; // [rsp+40h] [rbp-58h]
  PVOID Object; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v50; // [rsp+50h] [rbp-48h]
  int v51; // [rsp+A8h] [rbp+10h]
  ULONGLONG v52; // [rsp+B0h] [rbp+18h] BYREF

  v52 = a3;
  v13 = a2;
  v14 = BugCheckParameter1;
  v50 = a2;
  Object = 0LL;
  p_Lock = &KeGetCurrentThread()->ApcState.Process->Header.Lock;
  v48 = p_Lock;
  *(_QWORD *)(BugCheckParameter1 + 96) = p_Lock;
  if ( a1 != -1LL )
  {
    v23 = ObpReferenceObjectByHandleWithTag(a1, 8, (__int64)PsProcessType, a8, 0x6D566D4Du, &Object, 0LL, 0LL);
    if ( v23 < 0 )
      goto LABEL_71;
    p_Lock = Object;
    v48 = Object;
  }
  v17 = a5;
  v18 = a5;
  v19 = a9;
  *(_QWORD *)(v14 + 88) = p_Lock;
  v20 = a6;
  v21 = a6 & 0xFFFC07FF;
  *(_QWORD *)(v14 + 32) = a4;
  a6 = v21;
  v51 = v20 & 0x3F800;
  v23 = MiValidateAllocationType(v18, v19, v21);
  if ( v23 >= 0 )
  {
    if ( !v22 || (v23 = xHalUnmaskInterrupt(), v23 >= 0) )
    {
      if ( (v17 & 0x1000) != 0 && !v13 )
        v17 |= 0x2000u;
      v24 = a7;
      if ( *(_QWORD *)(a7 + 24)
        && (v17 & 0x20400000) != 0x20000000
        && ((v17 & 0x20400000) != 0x20400000 || (*(_BYTE *)(a7 + 56) & 2) == 0) )
      {
        goto LABEL_70;
      }
      v25 = 0x10000LL;
      v26 = v17 & 0x20400000;
      if ( (v17 & 0x20400000) == 0x20000000 )
        v25 = 0x200000LL;
      v46 = (*(_DWORD *)(a7 + 56) & 0x1A) == 0;
      v27 = *(_DWORD *)(a7 + 56) & 0x1A;
      LODWORD(BugCheckParameter1) = v27;
      if ( v46 )
      {
        if ( (*(_BYTE *)(a7 + 56) & 4) != 0 )
          goto LABEL_70;
      }
      else
      {
        if ( ((v27 - 1) & v27) != 0 )
          goto LABEL_70;
        if ( (v27 & 2) != 0 )
        {
          v46 = v26 == 541065216;
        }
        else
        {
          if ( (v27 & 0x10) != 0 )
          {
            if ( (KeFeatureBits & 0x2000000000LL) == 0 )
            {
              v23 = -1073741637;
              goto LABEL_71;
            }
            v25 = 0x40000000LL;
          }
          v46 = v26 == 0x20000000;
        }
        if ( !v46 )
          goto LABEL_70;
      }
      if ( ((v17 & 0x2000) == 0 || v13) && (*(_QWORD *)a7 || *(_QWORD *)(a7 + 8) || *(_QWORD *)(a7 + 16)) )
        goto LABEL_70;
      if ( !v52 )
      {
        v28 = v48;
        goto LABEL_18;
      }
      v23 = MiValidateZeroBits(&v52);
      if ( v23 >= 0 )
      {
        v28 = v48;
        if ( (v17 & 0x2000) != 0 && !v13 )
          *(_QWORD *)(v24 + 8) = MiGetUserReservationHighestAddress(v48, v52);
        v26 = v17 & 0x20400000;
        v27 = BugCheckParameter1;
LABEL_18:
        if ( (v17 & 0x40000) != 0 )
        {
          *(_DWORD *)(v14 + 60) |= 0x8000000u;
        }
        else
        {
          if ( (v17 & 0x4000) == 0 )
            goto LABEL_20;
          if ( *(_QWORD *)v24 || *(_QWORD *)(v24 + 8) || *(_QWORD *)(v24 + 16) )
            goto LABEL_70;
          *(_DWORD *)(v14 + 60) |= 0x4000000u;
        }
        if ( (v17 & 0x4000) != 0 )
        {
          if ( v27 || v26 == 0x20000000 )
            goto LABEL_22;
          goto LABEL_21;
        }
LABEL_20:
        if ( (v17 & 0x2000) != 0 )
        {
          if ( (v17 & 0x40000000) == 0 )
            goto LABEL_22;
          if ( ((v26 - 0x20000000) & 0xFFBFFFFF) == 0 )
            goto LABEL_70;
        }
LABEL_21:
        v25 = 4096LL;
LABEL_22:
        v29 = *(_QWORD *)(v24 + 16);
        if ( v29 )
        {
          if ( v29 < v25 || ((v29 - 1) & v29) != 0 || v29 >= 0x7FFFFFFF0000LL || (v17 & 0x40000000) != 0 && v29 != 4096 )
            goto LABEL_70;
        }
        else
        {
          *(_QWORD *)(v24 + 16) = v25;
        }
        if ( !a4 || (v17 & 0x2000) != 0 && ((v26 - 0x20000000) & 0xFFBFFFFF) == 0 && ((v25 - 1) & a4) != 0 )
          goto LABEL_70;
        v30 = 0x7FFFFFFEFFFFLL;
        if ( v13 > 0x7FFFFFFEFFFFLL || 0x7FFFFFFF0000LL - v13 < a4 )
          goto LABEL_70;
        v31 = v13 + a4;
        if ( (v17 & 0x2000) != 0 )
        {
          if ( (v17 & 0x40000000) != 0 )
          {
            if ( (((unsigned __int16)v13 | (unsigned __int16)a4) & 0xFFF) != 0 )
              goto LABEL_70;
          }
          else if ( (v17 & 0x4000) != 0 )
          {
            if ( ((a4 | v13) & (v25 - 1)) != 0 )
              goto LABEL_70;
          }
          else
          {
            v13 &= -(__int64)v25;
            if ( ((v26 - 0x20000000) & 0xFFBFFFFF) != 0 )
              v31 = (v31 + 4095) & 0xFFFFFFFFFFFFF000uLL;
            else
              v31 = v13 + a4;
          }
        }
        else if ( v17 == 0x80000 || v17 == 0x1000000 )
        {
          v45 = ~(v25 - 1);
          v13 = v45 & (v25 + v13 - 1);
          v31 &= v45;
          if ( v13 >= v31 )
          {
            v23 = -1073741800;
            goto LABEL_71;
          }
        }
        else
        {
          v32 = ~(v25 - 1);
          v13 &= v32;
          v31 = v32 & (v25 + v31 - 1);
        }
        v33 = v50;
        v34 = v31 - v13;
        if ( v50 )
          *(_QWORD *)v24 = v13;
        else
          v13 = *(_QWORD *)v24;
        v35 = *(_QWORD *)(v24 + 16);
        v36 = v13;
        if ( ((v35 - 1) & v13) == 0 )
        {
          v37 = *(_QWORD *)(v24 + 8);
          if ( v37 )
          {
            if ( v37 <= 0x7FFFFFFEFFFFLL )
            {
              v36 = v13;
              if ( (((_WORD)v37 + 1) & 0xFFF) == 0 )
                goto LABEL_39;
            }
          }
          else
          {
            if ( (v17 & 0x2000) != 0 && !v33 && (v17 & 0x4000) == 0 )
            {
              if ( (unsigned __int64)(v28[144] - 1LL) < 0x7FFFFFFEFFFFLL )
                v30 = v28[144] - 1LL;
              v38 = BugCheckParameter1;
              v37 = v30;
              *(_QWORD *)(v24 + 8) = v30;
              if ( v38 && (v38 & 2) == 0 )
              {
                if ( (v38 & 8) != 0 )
                {
                  v47 = -2097152LL;
LABEL_124:
                  v37 = (v30 & v47) - 1;
                  *(_QWORD *)(v24 + 8) = v37;
                  goto LABEL_40;
                }
                if ( (v38 & 0x10) != 0 )
                {
                  v47 = -1073741824LL;
                  goto LABEL_124;
                }
              }
LABEL_40:
              if ( v36 < v37 && v37 - v36 + 1 >= v34 && (v17 & 0x7F) == 0 )
              {
                v39 = *(_DWORD *)(v24 + 32);
                if ( v39 <= (unsigned __int16)KeNumberNodes )
                {
                  v40 = *(_BYTE *)(v24 + 49);
                  if ( v40 != 1 || v38 || (v17 & 0x20400000) == 0x20000000 )
                  {
                    *(_BYTE *)(v14 + 56) = v40;
                    *(_BYTE *)(v14 + 104) = a8;
                    *(_DWORD *)(v14 + 60) |= a9;
                    *(_DWORD *)(v14 + 76) = a10;
                    *(_QWORD *)(v14 + 80) = a11;
                    *(_QWORD *)(v14 + 112) = *(_QWORD *)(v24 + 40);
                    v41 = *(_QWORD *)(v24 + 56);
                    *(_QWORD *)(v14 + 8) = v37;
                    v42 = a6;
                    *(_QWORD *)(v14 + 120) = v41;
                    v43 = a13;
                    *(_DWORD *)(v14 + 44) = v42;
                    *(_DWORD *)(v14 + 48) = v51;
                    *v43 = Object;
                    result = 0LL;
                    *(_QWORD *)v14 = v36;
                    *(_QWORD *)(v14 + 16) = v35;
                    *(_QWORD *)(v14 + 24) = v34;
                    *(_DWORD *)(v14 + 40) = v17 & 0xFFFBBFFF;
                    *(_DWORD *)(v14 + 52) = v39;
                    return result;
                  }
                }
              }
              goto LABEL_70;
            }
            if ( v13 + v34 >= v13 )
            {
              v37 = v13 + v34 - 1;
              *(_QWORD *)(v24 + 8) = v37;
              if ( v37 <= 0x7FFFFFFEFFFFLL )
              {
LABEL_39:
                v38 = BugCheckParameter1;
                goto LABEL_40;
              }
            }
          }
        }
LABEL_70:
        v23 = -1073741811;
      }
    }
  }
LABEL_71:
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  return (unsigned int)v23;
}
