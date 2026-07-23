/*
 * XREFs of MmStoreRegister @ 0x140773968
 * Callers:
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x1400D7BA8 (-SmFirstTimeInit@@YAJKK@Z.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     RtlClearAllBits @ 0x14008D950 (RtlClearAllBits.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x140610D90 (ObCloseHandle.c)
 *     PsCreateSystemThreadEx @ 0x1406725D0 (PsCreateSystemThreadEx.c)
 *     MiInsertPageFileInList @ 0x14077459C (MiInsertPageFileInList.c)
 *     MiCreatePagefile @ 0x1407747B8 (MiCreatePagefile.c)
 *     MmStoreCheckPagefiles @ 0x140774C1C (MmStoreCheckPagefiles.c)
 *     MiDeletePagefile @ 0x14088C600 (MiDeletePagefile.c)
 */

__int64 __fastcall MmStoreRegister(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char *PoolWithTag; // rax
  __int64 v7; // rdi
  int SystemThread; // ebx
  _RTL_BITMAP *v9; // rax
  _RTL_BITMAP *v10; // rsi
  unsigned __int64 v11; // rdx
  __int64 *v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // r9
  __int64 Pagefile; // rax
  HANDLE v19; // r14
  _WORD *v20; // rbp
  int v21; // eax
  HANDLE Handle; // [rsp+50h] [rbp-38h] BYREF
  PVOID Object; // [rsp+58h] [rbp-30h] BYREF

  dword_14046863C = 1;
  if ( !(unsigned int)MmStoreCheckPagefiles() )
    return 3221225799LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x70546D4Du);
  v7 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *(_QWORD *)PoolWithTag = &MiSystemPartition;
  KeInitializeEvent((PRKEVENT)(PoolWithTag + 8), NotificationEvent, 0);
  *(_DWORD *)(v7 + 32) = 0;
  SystemThread = PsCreateSystemThreadEx(
                   (__int64)&Handle,
                   0x1FFFFF,
                   0LL,
                   0LL,
                   0LL,
                   (__int64)MiStoreEvictThread,
                   v7,
                   0LL,
                   0LL);
  if ( SystemThread < 0 )
  {
    ExFreePoolWithTag((PVOID)v7, 0);
  }
  else
  {
    v9 = (_RTL_BITMAP *)ExAllocatePoolWithTag(
                          NonPagedPoolNx,
                          8 * (((unsigned int)dword_14057119C >> 6) + ((dword_14057119C & 0x3F) != 0) + 2),
                          0x20206D4Du);
    v10 = v9;
    if ( v9 )
    {
      v9->SizeOfBitMap = dword_14057119C;
      v9->Buffer = &v9[1].SizeOfBitMap;
      RtlClearAllBits(v9);
      v11 = 0LL;
      if ( Count )
      {
        v12 = (__int64 *)&unk_14046A0A0;
        v13 = Count;
        do
        {
          v14 = *v12;
          v15 = v11;
          ++v12;
          v11 = *(_QWORD *)(v14 + 8);
          if ( v15 >= v11 )
            v11 = v15;
          --v13;
        }
        while ( v13 );
      }
      v16 = qword_14046A090 + v11;
      v17 = 0xFFFFFFFLL;
      if ( v16 <= 0xFFFFFFF )
        v17 = v16;
      Pagefile = MiCreatePagefile((unsigned int)&MiSystemPartition, 0, 0, v17, v17, 0LL, 0, 0);
      v19 = Handle;
      v20 = (_WORD *)Pagefile;
      if ( Pagefile )
      {
        SystemThread = MiInsertPageFileInList(Pagefile);
        if ( SystemThread < 0 )
        {
          *(_DWORD *)(v7 + 32) = 1;
        }
        else
        {
          qword_1404686A8 = (__int64)v10;
          dword_14046863C = 254;
          v21 = v20[102] & 0xF;
          qword_1404686B0 = a3;
          dword_140468634 = v21;
          ObReferenceObjectByHandle(v19, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
          v10 = 0LL;
          v20 = 0LL;
          qword_140468658 = (__int64)Object;
          dword_1404686B8 = a4;
          SystemThread = 0;
          dword_140468638 = 1;
        }
      }
      else
      {
        *(_DWORD *)(v7 + 32) = 1;
        SystemThread = -1073741670;
      }
      if ( v10 )
        ExFreePoolWithTag(v10, 0);
      if ( v20 )
        MiDeletePagefile(v20);
    }
    else
    {
      v19 = Handle;
      SystemThread = -1073741670;
      *(_DWORD *)(v7 + 32) = 1;
    }
    KeSetEvent((PRKEVENT)(v7 + 8), 0, 0);
    ObCloseHandle(v19, 0);
  }
  return (unsigned int)SystemThread;
}
