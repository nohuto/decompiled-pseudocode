/*
 * XREFs of PerfDiagpRestartCKCL @ 0x140742CA0
 * Callers:
 *     PerfDiagpProxyWorker @ 0x140743CB0 (PerfDiagpProxyWorker.c)
 * Callees:
 *     RtlStringCbCatW @ 0x140007428 (RtlStringCbCatW.c)
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     EtwStartAutoLogger @ 0x140743058 (EtwStartAutoLogger.c)
 *     PerfDiagpIsTracingAllowed @ 0x140743E40 (PerfDiagpIsTracingAllowed.c)
 */

__int64 __fastcall PerfDiagpRestartCKCL(NTSTRSAFE_PCWSTR pszSrc)
{
  __int64 v2; // rax
  SIZE_T v4; // rbp
  wchar_t *PoolWithTag; // rax
  wchar_t *v6; // rdi
  unsigned int v7; // esi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r8
  char *v10; // r9
  wchar_t v11; // cx
  unsigned int started; // ebx
  LARGE_INTEGER Interval; // [rsp+38h] [rbp+10h] BYREF

  v2 = -1LL;
  while ( pszSrc[++v2] != 0 )
    ;
  v4 = (unsigned int)(2 * v2 + 104);
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v4, 0x64465250u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  v7 = 0;
  v8 = (unsigned __int64)(unsigned int)v4 >> 1;
  if ( v8 )
  {
    v9 = 2147483646 - v8;
    v10 = (char *)((char *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\" - (char *)PoolWithTag);
    while ( v9 + v8 )
    {
      v11 = *(wchar_t *)((char *)PoolWithTag + (_QWORD)v10);
      if ( !v11 )
        break;
      *PoolWithTag++ = v11;
      if ( !--v8 )
      {
        --PoolWithTag;
        break;
      }
    }
    *PoolWithTag = 0;
  }
  RtlStringCbCatW(v6, v4, pszSrc);
  while ( 1 )
  {
    Interval.QuadPart = -500000LL * ++v7;
    KeDelayExecutionThread(0, 0, &Interval);
    if ( !(unsigned int)PerfDiagpIsTracingAllowed() )
      break;
    wcscpy(&xmmword_14040B80C, L"Circular Kernel Context Logger");
    started = EtwStartAutoLogger(&xmmword_14040B80C, v6);
    if ( started != -1073741771 || v7 >= 0x14 )
      goto LABEL_14;
  }
  started = -1073741823;
LABEL_14:
  ExFreePoolWithTag(v6, 0);
  return started;
}
