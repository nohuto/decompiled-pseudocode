/*
 * XREFs of PopFxPepPerfInfoQuery @ 0x14086B2CC
 * Callers:
 *     PopFxRegisterComponentPerfStates @ 0x14086B4E4 (PopFxRegisterComponentPerfStates.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     PopFxBugCheck @ 0x1402D76B0 (PopFxBugCheck.c)
 *     PopPluginQueryComponentPerfCapabilities @ 0x1402DA8B8 (PopPluginQueryComponentPerfCapabilities.c)
 *     PopPluginQueryComponentPerfSet @ 0x1402DA904 (PopPluginQueryComponentPerfSet.c)
 *     PopPluginQueryComponentPerfSetName @ 0x1402DA9AC (PopPluginQueryComponentPerfSetName.c)
 *     PopPluginQueryComponentPerfStates @ 0x1402DAA28 (PopPluginQueryComponentPerfStates.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     PopFxPepPerfInfoFree @ 0x14086B250 (PopFxPepPerfInfoFree.c)
 */

__int64 __fastcall PopFxPepPerfInfoQuery(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, _QWORD *a3)
{
  ULONG_PTR v3; // r12
  int v4; // edi
  _QWORD *v5; // rsi
  unsigned int v7; // r13d
  SIZE_T v8; // rbx
  _QWORD *PoolWithTag; // rax
  unsigned int v10; // ebp
  __int64 v11; // r15
  unsigned int v12; // eax
  SIZE_T v13; // rax
  unsigned __int64 v14; // kr00_8
  PVOID v15; // rax
  unsigned __int16 v16; // cx
  PVOID v17; // rax
  unsigned int v20; // [rsp+98h] [rbp+20h] BYREF

  v3 = (unsigned int)BugCheckParameter4;
  v4 = 0;
  v5 = 0LL;
  if ( !PopPluginQueryComponentPerfCapabilities(BugCheckParameter3, BugCheckParameter4, &v20) )
  {
    v4 = -1073741822;
    goto LABEL_22;
  }
  v7 = v20;
  v8 = (int)(48 * v20 + 8);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v8, 0x4D584650u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_4:
    v4 = -1073741670;
    goto LABEL_22;
  }
  memset(PoolWithTag, 0, v8);
  *(_DWORD *)v5 = v7;
  v10 = 0;
  if ( !v7 )
    goto LABEL_23;
  while ( 1 )
  {
    v11 = 6LL * v10;
    PopPluginQueryComponentPerfSet(
      BugCheckParameter3,
      v3,
      v10,
      &v5[v11 + 4],
      (_DWORD *)&v5[v11 + 4] + 1,
      &v5[v11 + 5],
      &v5[v11 + 5],
      &v5[v11 + 6]);
    if ( !HIDWORD(v5[v11 + 4]) )
    {
      v12 = v5[v11 + 5];
      if ( !v12 )
        PopFxBugCheck(0x61AuLL, *(_QWORD *)(BugCheckParameter3 + 64), BugCheckParameter3, v3);
      v14 = v12;
      v13 = 16LL * v12;
      if ( is_mul_ok(v14, 0x10uLL) )
      {
        v4 = 0;
      }
      else
      {
        v13 = -1LL;
        v4 = -1073741675;
      }
      v15 = ExAllocatePoolWithTag(PagedPool, v13, 0x4D584650u);
      v5[v11 + 6] = v15;
      if ( !v15 )
        goto LABEL_4;
      PopPluginQueryComponentPerfStates(BugCheckParameter3, v3, v10, (__int64)v15);
    }
    PopPluginQueryComponentPerfSetName(BugCheckParameter3, v3, v10, (unsigned __int16 *)&v5[v11 + 1] + 1, 0LL);
    v16 = WORD1(v5[v11 + 1]);
    if ( v16 )
      break;
    LOWORD(v5[v11 + 1]) = 0;
    v5[v11 + 2] = 0LL;
LABEL_17:
    if ( ++v10 >= v7 )
      goto LABEL_21;
  }
  LOWORD(v5[v11 + 1]) = v16 - 2;
  v17 = ExAllocatePoolWithTag(PagedPool, v16, 0x4D584650u);
  v5[v11 + 2] = v17;
  if ( v17 )
  {
    PopPluginQueryComponentPerfSetName(BugCheckParameter3, v3, v10, (unsigned __int16 *)&v5[v11 + 1] + 1, (__int64)v17);
    goto LABEL_17;
  }
  v4 = -1073741670;
LABEL_21:
  if ( v4 >= 0 )
  {
LABEL_23:
    *a3 = v5;
    return (unsigned int)v4;
  }
LABEL_22:
  PopFxPepPerfInfoFree(v5);
  return (unsigned int)v4;
}
