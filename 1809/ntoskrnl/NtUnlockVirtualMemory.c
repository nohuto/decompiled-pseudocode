/*
 * XREFs of NtUnlockVirtualMemory @ 0x1400B3CD0
 * Callers:
 *     <none>
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     MiDemoteCombinedPte @ 0x14006C1F0 (MiDemoteCombinedPte.c)
 *     MiLockLowestValidPageTable @ 0x14006C590 (MiLockLowestValidPageTable.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiLocateAddress @ 0x140087850 (MiLocateAddress.c)
 *     MiRotatedToFrameBuffer @ 0x140094724 (MiRotatedToFrameBuffer.c)
 *     MiPageTableLockIsContended @ 0x140096344 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x1400991E0 (MiWorkingSetIsContended.c)
 *     MiFreeWsleList @ 0x1400B29F0 (MiFreeWsleList.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     KeShouldYieldProcessor @ 0x1400F9D60 (KeShouldYieldProcessor.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiUnlockVa @ 0x14015E1A0 (MiUnlockVa.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     MiUnlockVadRange @ 0x140605A50 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x140605B60 (MiLockVadRange.c)
 *     MiLockUnlockCommon @ 0x1406A375C (MiLockUnlockCommon.c)
 */

NTSTATUS __stdcall NtUnlockVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T NumberOfBytesToUnlock,
        ULONG MapType)
{
  NTSTATUS result; // eax
  unsigned __int64 Address; // r15
  unsigned __int64 v7; // r13
  int v8; // ebx
  __int64 v9; // r14
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rdi
  bool v12; // zf
  PVOID v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r9
  unsigned __int64 v16; // r11
  unsigned __int64 v17; // rsi
  __int64 v18; // r14
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r10
  BOOL v22; // eax
  __int64 v23; // r14
  unsigned __int64 v24; // rcx
  __int64 v25; // r9
  unsigned __int64 valid; // rax
  int v27; // ecx
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // r12
  unsigned __int64 k; // r13
  unsigned __int64 v31; // r15
  unsigned __int64 v32; // rsi
  __int64 v33; // r15
  void *v34; // rax
  unsigned __int64 v35; // rcx
  _QWORD **v36; // rax
  _QWORD *i; // rcx
  unsigned __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  unsigned __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdx
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  unsigned __int64 v46; // r8
  unsigned __int64 v47; // rcx
  _QWORD **v48; // rax
  _QWORD *j; // rcx
  unsigned __int8 v50; // [rsp+40h] [rbp-1B8h]
  unsigned __int64 v51; // [rsp+48h] [rbp-1B0h]
  __int64 v52; // [rsp+50h] [rbp-1A8h]
  NTSTATUS v53; // [rsp+58h] [rbp-1A0h]
  char v54; // [rsp+5Ch] [rbp-19Ch]
  _QWORD *v55; // [rsp+60h] [rbp-198h]
  PVOID Object; // [rsp+68h] [rbp-190h] BYREF
  __int64 v57; // [rsp+70h] [rbp-188h] BYREF
  unsigned __int64 v58; // [rsp+78h] [rbp-180h] BYREF
  unsigned __int64 v59; // [rsp+80h] [rbp-178h]
  __int64 v60; // [rsp+88h] [rbp-170h]
  unsigned __int64 v61; // [rsp+90h] [rbp-168h]
  __int64 v62; // [rsp+98h] [rbp-160h] BYREF
  unsigned __int64 v63; // [rsp+A0h] [rbp-158h] BYREF
  PSIZE_T v64; // [rsp+A8h] [rbp-150h]
  PVOID *v65; // [rsp+B0h] [rbp-148h]
  int v66; // [rsp+C0h] [rbp-138h] BYREF
  __int16 v67; // [rsp+C4h] [rbp-134h]
  __int64 v68; // [rsp+C8h] [rbp-130h]
  __int64 v69; // [rsp+D0h] [rbp-128h]
  __int64 v70; // [rsp+D8h] [rbp-120h]
  _BYTE v71[48]; // [rsp+180h] [rbp-78h] BYREF

  v64 = NumberOfBytesToUnlock;
  v65 = BaseAddress;
  result = MiLockUnlockCommon((ULONG_PTR)ProcessHandle, (__int64)&v57, (__int64)&v62, (__int64)&Object);
  v53 = result;
  if ( result < 0 )
    return result;
  Address = 0LL;
  v7 = 0LL;
  v8 = 0;
  v54 = 0;
  v9 = v57;
  v10 = (v57 + v62 - 1) & 0xFFFFFFFFFFFFF000uLL;
  v59 = v10;
  v61 = v57 & 0xFFFFFFFFFFFFF000uLL;
  v11 = v57 & 0xFFFFFFFFFFFFF000uLL;
  v12 = (char *)ProcessHandle + 1 == 0LL;
  v13 = Object;
  if ( !v12 )
  {
    KiStackAttachProcess((_KPROCESS *)Object, 0LL, (__int64)v71);
    v8 = 2;
    v54 = 2;
  }
  v68 = 20LL;
  v66 = 1;
  v67 = 4;
  v69 = 0LL;
  v70 = 0LL;
  v55 = 0LL;
  v14 = MiLockVadRange(v13, v11, v10, 0LL);
  v60 = v14;
  if ( !v14 )
    goto LABEL_23;
  v51 = 0LL;
  v52 = (__int64)v13 + 1280;
  v50 = MiLockWorkingSetShared((__int64)v13 + 1280);
  if ( v11 <= v10 )
  {
    v16 = 0xFFFFF68000000000uLL;
    while ( (((unsigned __int8)(v11 >> 12) + 1) & 0xF) != 0 )
    {
LABEL_8:
      if ( v11 > v7 || !Address )
      {
        if ( Address )
        {
          v35 = Address;
          v36 = *(_QWORD ***)(Address + 8);
          if ( v36 )
          {
            Address = *(_QWORD *)(Address + 8);
            v55 = v36;
            for ( i = *v36; i; i = (_QWORD *)*i )
            {
              Address = (unsigned __int64)i;
              v55 = i;
            }
          }
          else
          {
            Address = *(_QWORD *)(Address + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            v55 = (_QWORD *)Address;
            if ( Address )
            {
              do
              {
                if ( *(_QWORD *)Address == v35 )
                  break;
                v35 = Address;
                Address = *(_QWORD *)(Address + 16) & 0xFFFFFFFFFFFFFFFCuLL;
              }
              while ( Address );
              v55 = (_QWORD *)Address;
            }
          }
        }
        else
        {
          Address = MiLocateAddress(v11);
          v55 = (_QWORD *)Address;
        }
        v8 &= ~4u;
        v54 = v8;
        v27 = *(_DWORD *)(Address + 48) & 7;
        if ( v27 == 6 )
        {
          v8 |= 4u;
          v54 = v8;
        }
        else if ( ((1 << v27) & 0x15) == 0 )
        {
          v13 = Object;
          v9 = v57;
          v21 = v51;
          goto LABEL_17;
        }
        v7 = (*(unsigned int *)(Address + 28) | ((unsigned __int64)*(unsigned __int8 *)(Address + 33) << 32)) << 12;
      }
      v17 = v16 + ((v11 >> 9) & 0x7FFFFFFFF8LL);
      v18 = ((v11 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      v19 = v51;
      if ( v51 == v18 )
        goto LABEL_11;
      if ( v51 )
      {
        if ( HIDWORD(v68) )
        {
          MiFreeWsleList(v52, (__int64)&v66, 0);
          v19 = v51;
        }
        MiUnlockPageTableInternal(v52, v19);
      }
      valid = MiLockLowestValidPageTable(v52, v17, &v63, v15);
      v51 = valid;
      if ( valid == v18 )
      {
LABEL_11:
        v20 = *(_QWORD *)v17;
        if ( v17 >= 0xFFFFF6FB7DBED000uLL
          && v17 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v20 & 1) != 0
          && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
        {
          v38 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v38 )
          {
            v39 = *(_QWORD *)(v38 + 8 * ((v17 >> 3) & 0x1FF));
            v40 = v20 | 0x20;
            if ( (v39 & 0x20) == 0 )
              v40 = *(_QWORD *)v17;
            v20 = v40;
            if ( (v39 & 0x42) != 0 )
              v20 = v40 | 0x42;
          }
        }
        v58 = v20;
        if ( (v20 & 1) != 0 )
        {
          v22 = (unsigned __int64)&v58 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)&v58 <= 0xFFFFF6FB7DBED7F8uLL;
          if ( v22
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
          {
            v41 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
            if ( v41 )
            {
              v42 = *(_QWORD *)(v41 + 8 * (((unsigned __int64)&v58 >> 3) & 0x1FF));
              v43 = v20 | 0x20;
              if ( (v42 & 0x20) == 0 )
                v43 = v20;
              v20 = v43;
              if ( (v42 & 0x42) != 0 )
                v20 = v43 | 0x42;
            }
          }
          v23 = *(_QWORD *)(48 * ((v20 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 8);
          if ( (v8 & 4) == 0 || !MiRotatedToFrameBuffer(v17) )
          {
            if ( v23 >= 0 )
              MiDemoteCombinedPte(v52, v17, v23 | 0x8000000000000000uLL);
            v24 = *(_QWORD *)v17;
            if ( v17 >= 0xFFFFF6FB7DBED000uLL
              && v17 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0xC00000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v24 & 1) != 0
              && ((v24 & 0x20) == 0 || (v24 & 0x42) == 0) )
            {
              v44 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
              if ( v44 )
              {
                v45 = *(_QWORD *)(v44 + 8 * ((v17 >> 3) & 0x1FF));
                HIBYTE(v46) = HIBYTE(*(_QWORD *)v17);
                if ( (v45 & 0x20) == 0 )
                  v46 = *(_QWORD *)v17;
                HIBYTE(v24) = HIBYTE(v46);
                if ( (v45 & 0x42) != 0 )
                  HIBYTE(v24) = HIBYTE(v46);
              }
            }
            if ( (HIBYTE(v24) & 0xF) != 8 )
            {
              MiInsertTbFlushEntry((__int64)&v66, v11, 1LL, 0);
              if ( HIDWORD(v68) == (_DWORD)v68 )
                MiFreeWsleList(v52, (__int64)&v66, 0);
              v53 = -1073741782;
            }
          }
          Address = (unsigned __int64)v55;
        }
        else
        {
          v53 = -1073741782;
        }
        v16 = 0xFFFFF68000000000uLL;
        v21 = v51;
        v11 += 4096LL;
      }
      else
      {
        MiUnlockPageTableInternal(v52, valid);
        v21 = 0LL;
        v51 = 0LL;
        v16 = 0xFFFFF68000000000uLL;
        v11 = ((v18 << 25) + 0x10000000) >> 16 << 25 >> 16;
        v53 = -1073741782;
      }
      if ( v11 > v10 )
      {
        v13 = Object;
        v9 = v57;
        goto LABEL_17;
      }
    }
    if ( !MiWorkingSetIsContended(v52) )
    {
      if ( (!v51 || !(unsigned int)MiPageTableLockIsContended(v25, v51)) && !KeShouldYieldProcessor() )
      {
LABEL_44:
        v16 = 0xFFFFF68000000000uLL;
        goto LABEL_8;
      }
      v25 = v52;
    }
    if ( HIDWORD(v68) )
      MiFreeWsleList(v25, (__int64)&v66, 0);
    if ( v51 )
    {
      MiUnlockPageTableInternal(v52, v51);
      v51 = 0LL;
    }
    MiUnlockWorkingSetShared(v52, v50);
    MiLockWorkingSetShared(v52);
    goto LABEL_44;
  }
  v21 = 0LL;
LABEL_17:
  if ( HIDWORD(v68) )
  {
    MiFreeWsleList(v52, (__int64)&v66, 0);
    v21 = v51;
  }
  if ( v21 )
  {
    MiUnlockPageTableInternal(v52, v21);
    v21 = 0LL;
    v51 = 0LL;
  }
  if ( v53 == -1073741782 )
  {
    MiUnlockWorkingSetShared(v52, v50);
    v14 = v60;
LABEL_23:
    MiUnlockVadRange(v13, v9, v14, 0LL);
    if ( (v8 & 2) != 0 )
      KiUnstackDetachProcess((__int64)v71, 0LL);
    ObfDereferenceObjectWithTag(v13, 0x6D566D4Du);
    return -1073741782;
  }
  v28 = v61;
  v29 = 0LL;
  k = 0LL;
  v31 = v59;
  if ( v61 > v59 )
    goto LABEL_65;
  while ( v28 <= v29 && k )
  {
LABEL_60:
    if ( v21 == ((v28 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
    {
      v32 = v51;
      v33 = v52;
    }
    else
    {
      if ( v21 )
        MiUnlockPageTableInternal(v52, v21);
      v33 = v52;
      v32 = MiLockLowestValidPageTable(v52, ((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, &v63, v15);
      v51 = v32;
    }
    MiUnlockVa(v33, v28);
    v28 += 4096LL;
    if ( (v28 & 0xF000) == 0
      && (MiWorkingSetIsContended(v33) || (unsigned int)MiPageTableLockIsContended(v33, v32) || KeShouldYieldProcessor()) )
    {
      MiUnlockPageTableInternal(v33, v32);
      v51 = 0LL;
      MiUnlockWorkingSetShared(v33, v50);
      MiLockWorkingSetShared(v33);
    }
    v31 = v59;
    if ( v28 > v59 )
      goto LABEL_64;
    v21 = v51;
  }
  if ( k )
  {
    v47 = k;
    v48 = *(_QWORD ***)(k + 8);
    if ( v48 )
    {
      k = *(_QWORD *)(k + 8);
      for ( j = *v48; j; j = (_QWORD *)*j )
        k = (unsigned __int64)j;
    }
    else
    {
      for ( k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL; k; k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL )
      {
        if ( *(_QWORD *)k == v47 )
          break;
        v47 = k;
      }
    }
  }
  else
  {
    k = MiLocateAddress(v28);
  }
  if ( ((1 << (*(_BYTE *)(k + 48) & 7)) & 0x15) != 0 )
  {
    v29 = (*(unsigned int *)(k + 28) | ((unsigned __int64)*(unsigned __int8 *)(k + 33) << 32)) << 12;
    goto LABEL_60;
  }
LABEL_64:
  LOBYTE(v8) = v54;
  v13 = Object;
  v9 = v57;
LABEL_65:
  if ( v51 )
    MiUnlockPageTableInternal(v52, v51);
  MiUnlockWorkingSetShared(v52, v50);
  MiUnlockVadRange(v13, v9, v60, 0LL);
  if ( (v8 & 2) != 0 )
    KiUnstackDetachProcess((__int64)v71, 0LL);
  ObfDereferenceObjectWithTag(v13, 0x6D566D4Du);
  v34 = (void *)v61;
  *v64 = v31 - v61 + 4096;
  *v65 = v34;
  return 0;
}
