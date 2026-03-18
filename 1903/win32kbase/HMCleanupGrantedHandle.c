/*
 * XREFs of HMCleanupGrantedHandle @ 0x1C01057C8
 * Callers:
 *     HMFreeObject @ 0x1C00283C0 (HMFreeObject.c)
 *     HMRemoveHandleForObjectWorker @ 0x1C006F964 (HMRemoveHandleForObjectWorker.c)
 * Callees:
 *     ??0?$CLockDomainExclusive@VDLT_JOB@@@@QEAA@XZ @ 0x1C007A864 (--0-$CLockDomainExclusive@VDLT_JOB@@@@QEAA@XZ.c)
 *     memmove @ 0x1C00C1540 (memmove.c)
 */

__int64 __fastcall HMCleanupGrantedHandle(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 i; // rbx
  unsigned int v6; // ecx
  __int64 v7; // rdx
  _QWORD *v8; // r9
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  result = CLockDomainExclusive<DLT_JOB>::CLockDomainExclusive<DLT_JOB>((__int64)v9, a2, a3);
  for ( i = gpJobsList; i; i = *(_QWORD *)i )
  {
    v6 = *(_DWORD *)(i + 48);
    v7 = 0LL;
    if ( v6 )
    {
      while ( 1 )
      {
        v8 = (_QWORD *)(*(_QWORD *)(i + 56) + 8 * v7);
        if ( *v8 == a1 )
          break;
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= v6 )
          goto LABEL_7;
      }
      result = (__int64)memmove(v8, v8 + 1, 8LL * (v6 - (unsigned int)v7 - 1));
      --*(_DWORD *)(i + 48);
    }
LABEL_7:
    ;
  }
  return result;
}
