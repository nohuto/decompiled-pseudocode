/*
 * XREFs of ?GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPEAUtagINPUT_TRANSFORM@@D@Z @ 0x1C01F63A8
 * Callers:
 *     GetMiPInputTransform @ 0x1C01E3530 (GetMiPInputTransform.c)
 *     GetInputTransformList @ 0x1C01F65C0 (GetInputTransformList.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ??0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00FAE6C (--0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?FindEntryByTime@@YAPEAUtagINPUTTRANSFORMENTRY@@PEAUtagINPUTTRANSFORMLIST@@PEAU1@_K@Z @ 0x1C01F62DC (-FindEntryByTime@@YAPEAUtagINPUTTRANSFORMENTRY@@PEAUtagINPUTTRANSFORMLIST@@PEAU1@_K@Z.c)
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
  __int64 v10; // r8
  __int64 v11; // r9
  struct tagINPUTTRANSFORMLIST **v12; // rdx
  __int64 i; // rdi
  struct tagINPUTTRANSFORMLIST **EntryByTime; // rax
  unsigned __int64 *v15; // rbx
  unsigned __int64 v16; // rbx
  _QWORD v17[11]; // [rsp+30h] [rbp-58h] BYREF

  v7 = (unsigned int)a2;
  v8 = *((_QWORD *)this + 34);
  v17[1] = v8;
  if ( !v8 )
    return 0LL;
  CAutoPushLockSh::CAutoPushLockSh((CAutoPushLockSh *)v17, (struct _EX_PUSH_LOCK *)v8);
  v12 = *(struct tagINPUTTRANSFORMLIST ***)(v8 + 8);
  if ( v12 == (struct tagINPUTTRANSFORMLIST **)(v8 + 8) )
  {
    ExReleasePushLockSharedEx(v17[0], 0LL, v10, v11);
    KeLeaveCriticalRegion();
    return 0LL;
  }
  for ( i = 0LL; (unsigned int)i < v7; i = (unsigned int)(i + 1) )
  {
    EntryByTime = FindEntryByTime((struct tagINPUTTRANSFORMLIST *)v8, v12, *(_QWORD *)(a3 + 8 * i));
    v12 = EntryByTime;
    v17[2] = EntryByTime;
    if ( (_BYTE)a5 == 1 )
    {
      v15 = &a4[8 * (unsigned __int64)(unsigned int)i];
      if ( (unsigned __int64)v15 >= MmUserProbeAddress )
        v15 = (unsigned __int64 *)MmUserProbeAddress;
      *(_OWORD *)v15 = *(_OWORD *)(EntryByTime + 3);
      *((_OWORD *)v15 + 1) = *(_OWORD *)(EntryByTime + 5);
      *((_OWORD *)v15 + 2) = *(_OWORD *)(EntryByTime + 7);
      *((_OWORD *)v15 + 3) = *(_OWORD *)(EntryByTime + 9);
    }
    else
    {
      v16 = (unsigned __int64)(unsigned int)i << 6;
      *(_OWORD *)((char *)a4 + v16) = *(_OWORD *)(EntryByTime + 3);
      *(_OWORD *)((char *)a4 + v16 + 16) = *(_OWORD *)(EntryByTime + 5);
      *(_OWORD *)((char *)a4 + v16 + 32) = *(_OWORD *)(EntryByTime + 7);
      *(_OWORD *)((char *)a4 + v16 + 48) = *(_OWORD *)(EntryByTime + 9);
    }
  }
  ExReleasePushLockSharedEx(v17[0], 0LL, v10, v11);
  KeLeaveCriticalRegion();
  return 1LL;
}
