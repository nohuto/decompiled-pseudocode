/*
 * XREFs of MarkThreadsObjects @ 0x1C00280E0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0033038 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026900 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C002EBC4 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     HMChangeOwnerThreadWorker @ 0x1C008AC60 (HMChangeOwnerThreadWorker.c)
 */

__int64 __fastcall MarkThreadsObjects(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  struct _HANDLEENTRY *v5; // rbx
  _QWORD *v6; // rdi
  struct _HANDLEENTRY *v7; // rsi
  unsigned __int8 v8; // dl
  struct tagTHREADINFO *v9; // rdx
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  GetDomainLockRef(20LL, a2, a3);
  result = CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(v10);
  v5 = qword_1C0213758;
  v6 = gpKernelHandleTable;
  v7 = (struct _HANDLEENTRY *)((char *)qword_1C0213758 + 32 * (unsigned int)giheLast);
  if ( qword_1C0213758 <= v7 )
  {
    do
    {
      v8 = *((_BYTE *)v5 + 24);
      if ( v8 )
      {
        result = v8;
        if ( (*((_BYTE *)&unk_1C01D2E9C + 24 * v8) & 2) == 0 && v6[1] == a1 )
        {
          if ( v8 == 23 )
            v9 = (struct tagTHREADINFO *)gptiModerncoreTimerThread;
          else
            v9 = gptiRit;
          result = HMChangeOwnerThreadWorker(*v6, v9);
        }
      }
      v5 = (struct _HANDLEENTRY *)((char *)v5 + 32);
      v6 += 3;
    }
    while ( v5 <= v7 );
  }
  return result;
}
