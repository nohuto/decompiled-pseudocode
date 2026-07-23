/*
 * XREFs of MiFinishCreateSection @ 0x1405DF0B0
 * Callers:
 *     MiCreateSection @ 0x1405DEAC0 (MiCreateSection.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     RtlAvlInsertNodeEx @ 0x140064B30 (RtlAvlInsertNodeEx.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     ObCreateObjectEx @ 0x1405E15E0 (ObCreateObjectEx.c)
 *     MiFindEmptyAddressRangeDownTree @ 0x14069A030 (MiFindEmptyAddressRangeDownTree.c)
 *     ObCheckActiveHandles @ 0x1406C5688 (ObCheckActiveHandles.c)
 *     MiDereferencePerSessionProtos @ 0x1406CA250 (MiDereferencePerSessionProtos.c)
 *     MiCreatePerSessionProtos @ 0x1406CA368 (MiCreatePerSessionProtos.c)
 *     MiDereferenceFailedControlArea @ 0x1406D15C4 (MiDereferenceFailedControlArea.c)
 */

__int64 __fastcall MiFinishCreateSection(int *a1)
{
  __int64 v1; // rsi
  unsigned int v3; // edx
  int v4; // ecx
  bool v5; // zf
  int v6; // r8d
  _QWORD *v7; // rdx
  char v8; // r14
  int v9; // r9d
  int v10; // ebp
  _QWORD *v11; // rdi
  int v12; // eax
  int v13; // ecx
  __int64 v15; // rax
  int v16; // r8d
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  int PerSessionProtos; // edi
  unsigned __int64 v21; // rsi
  struct _KTHREAD *CurrentThread; // r14
  int EmptyAddressRangeDownTree; // r15d
  bool v24; // r8
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // r9
  unsigned __int64 v28; // rax
  _QWORD *Object; // [rsp+80h] [rbp+8h]
  unsigned __int64 v30; // [rsp+88h] [rbp+10h] BYREF

  v1 = *((_QWORD *)a1 + 8);
  *((_QWORD *)a1 + 15) = v1;
  v3 = *(_DWORD *)(v1 + 56) & 0xFFF7FFFF;
  v4 = a1[35] & 0x7FFFFFFF;
  a1[34] = v3;
  v5 = (a1[4] & 0x1000000) == 0;
  a1[35] = v4;
  if ( !v5 )
  {
    v16 = *a1;
    v17 = v3;
    if ( (*a1 & 0x400) == 0 )
    {
      v17 = v3 | 0x80000;
      a1[34] = v3 | 0x80000;
    }
    v3 = v17;
    if ( *((_BYTE *)a1 + 24) <= 1u && (v16 & 0x20000) == 0 )
      a1[35] = v4 | 0x80000000;
  }
  v6 = *(_DWORD *)(v1 + 56);
  if ( (v6 & 0x4000000) != 0 )
  {
    PerSessionProtos = MiCreatePerSessionProtos(v1, (unsigned int)a1[42]);
    if ( PerSessionProtos < 0 )
    {
      ObfDereferenceObject(*((PVOID *)a1 + 7));
      MiDereferenceFailedControlArea(a1);
      return (unsigned int)PerSessionProtos;
    }
    a1[35] ^= (a1[35] ^ (a1[42] << 12)) & 0x7FFFF000;
  }
  else if ( !*((_QWORD *)a1 + 6) && (a1[7] & 0x44) != 0 && (v6 & 0x20) == 0 )
  {
    if ( *(_QWORD *)(v1 + 64) )
    {
      a1[34] = v3 | 0x8000000;
      _InterlockedIncrement((volatile signed __int32 *)(v1 + 92));
      if ( !(unsigned __int8)ObCheckActiveHandles(*((_QWORD *)a1 + 7)) )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v1 + 92));
        ObfDereferenceObject(*((PVOID *)a1 + 7));
        MiDereferenceFailedControlArea(a1);
        return 3221225508LL;
      }
    }
  }
  v7 = (_QWORD *)*((_QWORD *)a1 + 7);
  v8 = 0;
  if ( v7 )
  {
    if ( (*(_DWORD *)(v7[1] + 52LL) & 0x10) != 0 )
      v8 = 1;
    else
      ObfDereferenceObject(v7);
  }
  v9 = 128;
  if ( (*(_DWORD *)(v1 + 56) & 0x20) != 0 || !*(_QWORD *)(v1 + 64) )
  {
    v15 = v1 + 128;
    do
    {
      v15 = *(_QWORD *)(v15 + 16);
      v9 += 56;
    }
    while ( v15 );
  }
  v10 = ObCreateObjectEx(
          *((unsigned __int8 *)a1 + 72),
          (_DWORD)MmSectionObjectType,
          *((_QWORD *)a1 + 1),
          *((unsigned __int8 *)a1 + 72));
  if ( v10 < 0 )
  {
    if ( (a1[34] & 0x8000000) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v1 + 92));
    }
    else if ( (*(_DWORD *)(v1 + 56) & 0x4000000) != 0 )
    {
      MiDereferencePerSessionProtos(v1);
    }
    if ( v8 == 1 )
      ObfDereferenceObject(*((PVOID *)a1 + 7));
    MiDereferenceFailedControlArea(a1);
    return (unsigned int)v10;
  }
  v11 = Object;
  *(_OWORD *)Object = *((_OWORD *)a1 + 5);
  *((_OWORD *)Object + 1) = *((_OWORD *)a1 + 6);
  *((_OWORD *)Object + 2) = *((_OWORD *)a1 + 7);
  *((_OWORD *)Object + 3) = *((_OWORD *)a1 + 8);
  Object[3] = 0LL;
  if ( v8 == 1 )
  {
    v18 = *((_QWORD *)a1 + 7);
    Object[5] = v18;
    if ( (*(_DWORD *)(v1 + 56) & 0x20) != 0 )
      v19 = v18 | 1;
    else
      v19 = v18 | 2;
    Object[5] = v19;
  }
  if ( (*a1 & 1) != 0 )
    goto LABEL_16;
  *((_DWORD *)Object + 14) |= 0x10000u;
  v12 = a1[4];
  v13 = *((_DWORD *)Object + 14);
  if ( (v12 & 0x400000) != 0 )
  {
    v13 |= 0x4000u;
    *((_DWORD *)Object + 14) = v13;
    v12 = a1[4];
  }
  if ( (v12 & 0x200000) == 0 )
    goto LABEL_16;
  *((_DWORD *)Object + 14) = v13 | 0x40;
  v21 = Object[6];
  if ( v21 > qword_140439CA8 )
  {
    ObfDereferenceObject(Object);
    return 3221225495LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140439C90, 0LL);
  EmptyAddressRangeDownTree = MiFindEmptyAddressRangeDownTree(
                                (unsigned int)&qword_140439C88,
                                v21,
                                0x10000,
                                0,
                                0x10000LL,
                                qword_140439CA8,
                                (__int64)&v30);
  if ( EmptyAddressRangeDownTree < 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140439C90, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140439C90);
    KeAbPostRelease((ULONG_PTR)&qword_140439C90);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    ObfDereferenceObject(Object);
    return (unsigned int)EmptyAddressRangeDownTree;
  }
  v24 = 0;
  v25 = v30 >> 12;
  Object[3] = v30 >> 12;
  Object[4] = ((v21 + 4095) >> 12) + v25 - 1;
  v26 = qword_140439C88;
  v27 = Object[3];
  if ( !qword_140439C88 )
    goto LABEL_55;
  while ( v27 <= (*(unsigned int *)(v26 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v26 + 33) << 32))
       && v27 < (*(unsigned int *)(v26 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v26 + 32) << 32)) )
  {
    v28 = *(_QWORD *)v26;
    if ( !*(_QWORD *)v26 )
    {
      v24 = 0;
      goto LABEL_55;
    }
LABEL_60:
    v26 = v28;
  }
  v28 = *(_QWORD *)(v26 + 8);
  if ( v28 )
    goto LABEL_60;
  v24 = 1;
LABEL_55:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140439C88, v26, v24, Object);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140439C90, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140439C90);
  KeAbPostRelease((ULONG_PTR)&qword_140439C90);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  v11 = Object;
LABEL_16:
  *((_QWORD *)a1 + 18) = v11;
  return (unsigned int)v10;
}
