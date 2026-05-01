/*
 * XREFs of CrmStateMonitorPostResumeUsageCallback @ 0x18003F800
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorStateSet @ 0x1800040C8 (CrmStateMonitorStateSet.c)
 */

__int64 __fastcall CrmStateMonitorPostResumeUsageCallback(__int64 a1, int a2, int *a3)
{
  int v3; // ebp
  __int64 v4; // rax
  __int64 v6; // rdi
  unsigned int v7; // ecx
  _DWORD *v8; // rax
  int v10; // eax
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
    v10 = 0;
  }
  else
  {
    v7 = 0;
    v8 = (_DWORD *)(v6 + 172);
    do
    {
      if ( *(v8 - 5) > 0x1Eu || *v8 > 0x1Eu )
      {
        v11 = 0;
        goto LABEL_10;
      }
      ++v7;
      ++v8;
    }
    while ( v7 < 4 );
    v10 = 1;
  }
  v11 = v10;
  if ( v10 )
    CrmStateMonitorStateSet((void **)v6, &v11, 4uLL, 1);
LABEL_10:
  *(_DWORD *)(v6 + 16) = 0;
  return RtlReleaseSRWLockExclusive(v6 + 8);
}
