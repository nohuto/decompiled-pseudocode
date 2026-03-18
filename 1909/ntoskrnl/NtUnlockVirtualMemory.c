/*
 * XREFs of NtUnlockVirtualMemory @ 0x1400A40B0
 * Callers:
 *     <none>
 * Callees:
 *     KeStackAttachProcess @ 0x140013D00 (KeStackAttachProcess.c)
 *     MiUnlockVa @ 0x14001F824 (MiUnlockVa.c)
 *     MiWorkingSetIsContended @ 0x140023440 (MiWorkingSetIsContended.c)
 *     MiFreeWsleList @ 0x140025040 (MiFreeWsleList.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     KeUnstackDetachProcess @ 0x1400437D0 (KeUnstackDetachProcess.c)
 *     MiLockLowestValidPageTable @ 0x14004AE30 (MiLockLowestValidPageTable.c)
 *     MiInsertTbFlushEntry @ 0x140058D70 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     MiLocateAddress @ 0x140073F60 (MiLocateAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiRotatedToFrameBuffer @ 0x1400C02A0 (MiRotatedToFrameBuffer.c)
 *     MiVadPagesTradable @ 0x1400C20F4 (MiVadPagesTradable.c)
 *     MiGetWsleContents @ 0x1400CAFE0 (MiGetWsleContents.c)
 *     MiPageTableLockIsContended @ 0x1400CB088 (MiPageTableLockIsContended.c)
 *     MiDemoteCombinedPte @ 0x1401417B0 (MiDemoteCombinedPte.c)
 *     MiUnlockPageTable @ 0x14019D818 (MiUnlockPageTable.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiShouldYieldProcessor @ 0x1402C4884 (MiShouldYieldProcessor.c)
 *     MiUnlockVadRange @ 0x140688300 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x140688410 (MiLockVadRange.c)
 *     MiLockUnlockCommon @ 0x1406C55D0 (MiLockUnlockCommon.c)
 */

NTSTATUS __stdcall NtUnlockVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T NumberOfBytesToUnlock,
        ULONG MapType)
{
  NTSTATUS result; // eax
  NTSTATUS v6; // r14d
  unsigned __int64 v7; // r13
  int v8; // ebx
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rdi
  PVOID v11; // r15
  _QWORD *v12; // rsi
  __int64 v13; // rax
  unsigned __int64 v14; // r15
  __int64 v15; // r11
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // rsi
  __int64 v18; // r14
  __int64 v19; // rsi
  unsigned __int64 v20; // r13
  PVOID v21; // rdi
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r14
  __int64 v25; // r9
  unsigned __int64 valid; // rax
  unsigned __int64 Address; // rsi
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // r14
  unsigned __int64 k; // r15
  PVOID v31; // rdi
  __int64 v32; // rax
  unsigned __int64 v33; // rcx
  _QWORD **v34; // rax
  _QWORD *i; // rcx
  unsigned __int64 v36; // rcx
  _QWORD **v37; // rax
  _QWORD *j; // rcx
  unsigned __int8 v39; // [rsp+40h] [rbp-198h]
  char *v40; // [rsp+48h] [rbp-190h]
  NTSTATUS v41; // [rsp+50h] [rbp-188h]
  char v42; // [rsp+54h] [rbp-184h]
  _QWORD *v43; // [rsp+58h] [rbp-180h]
  unsigned __int64 v44; // [rsp+60h] [rbp-178h]
  PVOID Object; // [rsp+68h] [rbp-170h] BYREF
  __int64 v46; // [rsp+70h] [rbp-168h] BYREF
  __int64 v47; // [rsp+78h] [rbp-160h] BYREF
  __int64 v48; // [rsp+80h] [rbp-158h] BYREF
  __int64 v49; // [rsp+88h] [rbp-150h]
  PSIZE_T v50; // [rsp+90h] [rbp-148h]
  PVOID *v51; // [rsp+98h] [rbp-140h]
  int v52; // [rsp+A0h] [rbp-138h] BYREF
  __int16 v53; // [rsp+A4h] [rbp-134h]
  __int16 v54; // [rsp+A6h] [rbp-132h]
  __int64 v55; // [rsp+A8h] [rbp-130h]
  __int64 v56; // [rsp+B0h] [rbp-128h]
  __int64 v57; // [rsp+B8h] [rbp-120h]
  _BYTE v58[152]; // [rsp+C0h] [rbp-118h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+160h] [rbp-78h] BYREF

  v50 = NumberOfBytesToUnlock;
  v51 = BaseAddress;
  memset(&ApcState, 0, sizeof(ApcState));
  v54 = 0;
  memset(v58, 0, sizeof(v58));
  result = MiLockUnlockCommon((ULONG_PTR)ProcessHandle, (__int64)&v47, (__int64)&v46, (__int64)&Object);
  v6 = result;
  v41 = result;
  if ( result < 0 )
    return result;
  v7 = 0LL;
  v8 = 0;
  v42 = 0;
  v9 = (v47 + v46 - 1) & 0xFFFFFFFFFFFFF000uLL;
  v46 = v47 & 0xFFFFFFFFFFFFF000uLL;
  v10 = v47 & 0xFFFFFFFFFFFFF000uLL;
  v11 = Object;
  if ( ProcessHandle != (HANDLE)-1LL )
  {
    KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
    v8 = 2;
    v42 = 2;
  }
  v55 = 20LL;
  v52 = 1;
  v53 = 4;
  v56 = 0LL;
  v57 = 0LL;
  v12 = 0LL;
  v43 = 0LL;
  v13 = MiLockVadRange(v11, v10, v9, 0LL);
  v49 = v13;
  if ( !v13 )
    goto LABEL_22;
  v14 = 0LL;
  v44 = 0LL;
  v40 = (char *)Object + 1280;
  v39 = MiLockWorkingSetShared((__int64)Object + 1280);
  if ( v10 > v9 )
    goto LABEL_16;
  v15 = 0x7FFFFFFFF8LL;
  v16 = 0xFFFFF68000000000uLL;
  do
  {
    if ( (((unsigned __int8)(v10 >> 12) + 1) & 0xF) == 0 )
    {
      if ( !MiWorkingSetIsContended((__int64)v40) )
      {
        if ( (!v14 || !(unsigned int)MiPageTableLockIsContended(v25, v14)) && !(unsigned int)MiShouldYieldProcessor() )
        {
LABEL_36:
          v15 = 0x7FFFFFFFF8LL;
          v16 = 0xFFFFF68000000000uLL;
          goto LABEL_8;
        }
        v25 = (__int64)v40;
      }
      if ( HIDWORD(v55) )
        MiFreeWsleList(v25, (__int64)&v52, 0);
      if ( v14 )
      {
        MiUnlockPageTable(v40, v14);
        v14 = 0LL;
        v44 = 0LL;
      }
      MiUnlockWorkingSetShared(v40, v39);
      MiLockWorkingSetShared((__int64)v40);
      goto LABEL_36;
    }
LABEL_8:
    if ( v10 <= v7 && v12 )
      goto LABEL_10;
    if ( v12 )
    {
      v33 = (unsigned __int64)v12;
      v34 = (_QWORD **)v12[1];
      if ( v34 )
      {
        Address = v12[1];
        v43 = v34;
        for ( i = *v34; i; i = (_QWORD *)*i )
        {
          Address = (unsigned __int64)i;
          v43 = i;
        }
      }
      else
      {
        Address = v12[2] & 0xFFFFFFFFFFFFFFFCuLL;
        v43 = (_QWORD *)Address;
        if ( Address )
        {
          do
          {
            if ( *(_QWORD *)Address == v33 )
              break;
            v33 = Address;
            Address = *(_QWORD *)(Address + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          }
          while ( Address );
          v43 = (_QWORD *)Address;
        }
      }
    }
    else
    {
      Address = MiLocateAddress(v10);
      v43 = (_QWORD *)Address;
    }
    v8 &= ~4u;
    v42 = v8;
    if ( (*(_DWORD *)(Address + 48) & 0x70) == 0x40 )
    {
      v8 |= 4u;
      v42 = v8;
      goto LABEL_44;
    }
    if ( !(unsigned int)MiVadPagesTradable(Address) )
      break;
LABEL_44:
    v7 = (*(unsigned int *)(Address + 28) | ((unsigned __int64)*(unsigned __int8 *)(Address + 33) << 32)) << 12;
LABEL_10:
    v17 = v16 + (v15 & (v10 >> 9));
    v18 = ((v10 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    if ( v14 != v18 )
    {
      if ( v14 )
      {
        if ( HIDWORD(v55) )
          MiFreeWsleList((__int64)v40, (__int64)&v52, 0);
        MiUnlockPageTable(v40, v14);
      }
      valid = MiLockLowestValidPageTable((__int64)v40, v17, (unsigned __int64 *)&v48);
      v44 = valid;
      if ( valid != v18 )
      {
        MiUnlockPageTable(v40, valid);
        v14 = 0LL;
        v44 = 0LL;
        v16 = 0xFFFFF68000000000uLL;
        v10 = ((v18 << 25) + 0x10000000) >> 16 << 25 >> 16;
        v41 = -1073741782;
        goto LABEL_14;
      }
    }
    v48 = MI_READ_PTE_LOCK_FREE(v17);
    if ( (v48 & 1) != 0 )
    {
      v22 = MI_READ_PTE_LOCK_FREE(&v48);
      v23 = 6 * ((v22 >> 12) & 0xFFFFFFFFFLL);
      v24 = *(_QWORD *)(48 * ((v22 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 8);
      if ( (v8 & 4) != 0 && (unsigned int)MiRotatedToFrameBuffer(v17) == 1 )
        goto LABEL_13;
      if ( v24 >= 0 )
        MiDemoteCombinedPte(v40, v17, v24 | 0x8000000000000000uLL);
      if ( (MiGetWsleContents(v23, v10) & 0xF) == 8 )
        goto LABEL_13;
      MiInsertTbFlushEntry((__int64)&v52, v10, 1LL, 0);
      if ( HIDWORD(v55) == (_DWORD)v55 )
        MiFreeWsleList((__int64)v40, (__int64)&v52, 0);
    }
    v41 = -1073741782;
LABEL_13:
    v16 = 0xFFFFF68000000000uLL;
    v14 = v44;
    v10 += 4096LL;
LABEL_14:
    v12 = v43;
    v15 = 0x7FFFFFFFF8LL;
  }
  while ( v10 <= v9 );
  v6 = v41;
LABEL_16:
  v19 = (__int64)v40;
  if ( HIDWORD(v55) )
    MiFreeWsleList((__int64)v40, (__int64)&v52, 0);
  if ( v14 )
  {
    MiUnlockPageTable(v40, v14);
    v20 = 0LL;
  }
  else
  {
    v20 = v44;
  }
  if ( v6 == -1073741782 )
  {
    MiUnlockWorkingSetShared(v40, v39);
    v13 = v49;
LABEL_22:
    v21 = Object;
    MiUnlockVadRange(Object, v47, v13, 0LL);
    if ( (v8 & 2) != 0 )
      KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObjectWithTag(v21, 0x6D566D4Du);
    return -1073741782;
  }
  v28 = v46;
  v29 = 0LL;
  k = 0LL;
  if ( v46 > v9 )
    goto LABEL_53;
  while ( 2 )
  {
    if ( v28 <= v29 && k )
    {
LABEL_48:
      if ( v20 == ((v28 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
      {
        v19 = (__int64)v40;
      }
      else
      {
        if ( v20 )
          MiUnlockPageTable(v40, v20);
        v19 = (__int64)v40;
        v20 = MiLockLowestValidPageTable(
                (__int64)v40,
                ((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                (unsigned __int64 *)&v48);
      }
      MiUnlockVa(v19, v28);
      v28 += 4096LL;
      if ( (v28 & 0xF000) == 0
        && (MiWorkingSetIsContended(v19)
         || (unsigned int)MiPageTableLockIsContended(v19, v20)
         || (unsigned int)MiShouldYieldProcessor()) )
      {
        MiUnlockPageTable(v19, v20);
        v20 = 0LL;
        MiUnlockWorkingSetShared(v19, v39);
        MiLockWorkingSetShared(v19);
      }
      if ( v28 > v9 )
        goto LABEL_52;
      continue;
    }
    break;
  }
  if ( k )
  {
    v36 = k;
    v37 = *(_QWORD ***)(k + 8);
    if ( v37 )
    {
      k = *(_QWORD *)(k + 8);
      for ( j = *v37; j; j = (_QWORD *)*j )
        k = (unsigned __int64)j;
    }
    else
    {
      for ( k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL; k; k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL )
      {
        if ( *(_QWORD *)k == v36 )
          break;
        v36 = k;
      }
    }
  }
  else
  {
    k = MiLocateAddress(v28);
  }
  if ( (unsigned int)MiVadPagesTradable(k) )
  {
    v29 = (*(unsigned int *)(k + 28) | ((unsigned __int64)*(unsigned __int8 *)(k + 33) << 32)) << 12;
    goto LABEL_48;
  }
LABEL_52:
  LOBYTE(v8) = v42;
LABEL_53:
  if ( v20 )
    MiUnlockPageTable(v19, v20);
  MiUnlockWorkingSetShared(v19, v39);
  v31 = Object;
  MiUnlockVadRange(Object, v47, v49, 0LL);
  if ( (v8 & 2) != 0 )
    KeUnstackDetachProcess(&ApcState);
  ObfDereferenceObjectWithTag(v31, 0x6D566D4Du);
  v32 = v46;
  *v50 = v9 - v46 + 4096;
  *v51 = (PVOID)v32;
  return 0;
}
