/*
 * XREFs of ?GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPEAUtagINPUT_TRANSFORM@@D@Z @ 0x1C01F6654
 * Callers:
 *     GetMiPInputTransform @ 0x1C01E36B0 (GetMiPInputTransform.c)
 *     GetInputTransformList @ 0x1C01F6870 (GetInputTransformList.c)
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ??0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C01205FC (--0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?FindEntryByTime@@YAPEAUtagINPUTTRANSFORMENTRY@@PEAUtagINPUTTRANSFORMLIST@@PEAU1@_K@Z @ 0x1C01F6588 (-FindEntryByTime@@YAPEAUtagINPUTTRANSFORMENTRY@@PEAUtagINPUTTRANSFORMLIST@@PEAU1@_K@Z.c)
 */

__int64 __fastcall InputTransform::GetTransformList(
        InputTransform *this,
        struct tagWND *a2,
        __int64 a3,
        unsigned __int64 *a4,
        struct tagINPUT_TRANSFORM *a5)
{
  unsigned int v7; // r12d
  __int64 v8; // rsi
  struct tagINPUTTRANSFORMLIST **v10; // rdx
  __int64 i; // rdi
  struct tagINPUTTRANSFORMLIST **EntryByTime; // rax
  unsigned __int64 *v13; // rbx
  unsigned __int64 v14; // rbx
  _QWORD v15[11]; // [rsp+30h] [rbp-58h] BYREF

  v7 = (unsigned int)a2;
  v8 = *((_QWORD *)this + 34);
  v15[1] = v8;
  if ( !v8 )
    return 0LL;
  CAutoPushLockSh::CAutoPushLockSh((CAutoPushLockSh *)v15, (struct _EX_PUSH_LOCK *)v8);
  v10 = *(struct tagINPUTTRANSFORMLIST ***)(v8 + 8);
  if ( v10 == (struct tagINPUTTRANSFORMLIST **)(v8 + 8) )
  {
    ExReleasePushLockSharedEx(v15[0], 0LL);
    KeLeaveCriticalRegion();
    return 0LL;
  }
  for ( i = 0LL; (unsigned int)i < v7; i = (unsigned int)(i + 1) )
  {
    EntryByTime = FindEntryByTime((struct tagINPUTTRANSFORMLIST *)v8, v10, *(_QWORD *)(a3 + 8 * i));
    v10 = EntryByTime;
    v15[2] = EntryByTime;
    if ( (_BYTE)a5 == 1 )
    {
      v13 = &a4[8 * (unsigned __int64)(unsigned int)i];
      if ( (unsigned __int64)v13 >= MmUserProbeAddress )
        v13 = (unsigned __int64 *)MmUserProbeAddress;
      *(_OWORD *)v13 = *(_OWORD *)(EntryByTime + 3);
      *((_OWORD *)v13 + 1) = *(_OWORD *)(EntryByTime + 5);
      *((_OWORD *)v13 + 2) = *(_OWORD *)(EntryByTime + 7);
      *((_OWORD *)v13 + 3) = *(_OWORD *)(EntryByTime + 9);
    }
    else
    {
      v14 = (unsigned __int64)(unsigned int)i << 6;
      *(_OWORD *)((char *)a4 + v14) = *(_OWORD *)(EntryByTime + 3);
      *(_OWORD *)((char *)a4 + v14 + 16) = *(_OWORD *)(EntryByTime + 5);
      *(_OWORD *)((char *)a4 + v14 + 32) = *(_OWORD *)(EntryByTime + 7);
      *(_OWORD *)((char *)a4 + v14 + 48) = *(_OWORD *)(EntryByTime + 9);
    }
  }
  ExReleasePushLockSharedEx(v15[0], 0LL);
  KeLeaveCriticalRegion();
  return 1LL;
}
