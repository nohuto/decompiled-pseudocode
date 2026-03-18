/*
 * XREFs of VerifierEngAllocMem @ 0x1C0297FA0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0168440 (memset.c)
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C0297EAC (-VerifierRandomFailure@@YAHK@Z.c)
 */

__int64 __fastcall VerifierEngAllocMem(char a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // ebx
  __int64 v6; // r14
  unsigned int v7; // ebx
  unsigned int v8; // ebp
  void *v9; // rax
  __int64 v10; // rbx
  __int64 *v11; // rax

  v4 = a2;
  v6 = a2;
  if ( (unsigned int)VerifierRandomFailure() || !v4 )
    return 0LL;
  if ( (gvs & 8) != 0 )
  {
    if ( v4 > 0xFFFFFFDF )
      return 0LL;
    v4 += 32;
  }
  if ( v4 > 0xFFFFFFDF )
    return 0LL;
  v7 = v4 + 32;
  if ( v7 >= 0x2710000 )
    return 0LL;
  v8 = v7;
  v9 = (void *)Win32AllocPoolWithPriority((a1 & 2) != 0 ? 512 : 33, v7, a3, 40LL);
  v10 = (__int64)v9;
  if ( v9 )
  {
    if ( (a1 & 1) != 0 )
      memset(v9, 0, v8);
    MultiUserGreTrackAddEngResource(v10, 2LL);
    v10 += 32LL;
    if ( (gvs & 8) != 0 )
    {
      *(_QWORD *)(v10 + 16) = v6;
      *(_DWORD *)(v10 + 24) = a3;
      GreAcquireSemaphore(qword_1C0320460);
      v11 = (__int64 *)qword_1C0320470;
      if ( *(_UNKNOWN **)qword_1C0320470 != &unk_1C0320468 )
        __fastfail(3u);
      *(_QWORD *)v10 = &unk_1C0320468;
      *(_QWORD *)(v10 + 8) = v11;
      *v11 = v10;
      qword_1C0320470 = v10;
      EtwTraceGreLockReleaseSemaphore(L"gvs.hsemPoolTracker", qword_1C0320460);
      GreReleaseSemaphoreInternal(qword_1C0320460);
      v10 += 32LL;
    }
  }
  return v10;
}
