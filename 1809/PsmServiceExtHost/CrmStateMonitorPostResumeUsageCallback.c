/*
 * XREFs of CrmStateMonitorPostResumeUsageCallback @ 0x18003ECB0
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorStateSet @ 0x180032410 (CrmStateMonitorStateSet.c)
 */

__int64 __fastcall CrmStateMonitorPostResumeUsageCallback(__int64 a1, int a2, int *a3)
{
  int v3; // ebp
  __int64 v4; // rax
  __int64 v6; // rdi
  int v7; // eax
  unsigned int v9; // ecx
  _DWORD *v10; // rax
  int v11; // [rsp+38h] [rbp+10h] BYREF

  v3 = *a3;
  v4 = 96LL;
  if ( a2 != 24 )
    v4 = 120LL;
  v6 = a1 - v4;
  RtlAcquireSRWLockExclusive(a1 - v4 + 8);
  *(_DWORD *)(v6 + 16) = GetCurrentThreadId();
  if ( a2 == 24 )
    *(_DWORD *)(v6 + 4LL * ((*(_DWORD *)(v6 + 168))++ & 3) + 152) = v3;
  else
    *(_DWORD *)(v6 + 4LL * ((*(_DWORD *)(v6 + 188))++ & 3) + 172) = v3;
  if ( *(_DWORD *)(v6 + 168) < 4u || *(_DWORD *)(v6 + 188) < 4u )
  {
    v7 = 0;
  }
  else
  {
    v9 = 0;
    v10 = (_DWORD *)(v6 + 172);
    do
    {
      if ( *(v10 - 5) > 0x1Eu || *v10 > 0x1Eu )
      {
        v11 = 0;
        goto LABEL_9;
      }
      ++v9;
      ++v10;
    }
    while ( v9 < 4 );
    v7 = 1;
  }
  v11 = v7;
  if ( v7 )
    CrmStateMonitorStateSet((void **)v6, &v11, 4uLL, 1);
LABEL_9:
  *(_DWORD *)(v6 + 16) = 0;
  return RtlReleaseSRWLockExclusive(v6 + 8);
}
