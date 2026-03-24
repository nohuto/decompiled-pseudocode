/*
 * XREFs of PopPepUpdateConstraints @ 0x1401721B4
 * Callers:
 *     PopPluginDevicePower @ 0x1400FF334 (PopPluginDevicePower.c)
 *     PopPepDeviceDState @ 0x140171F84 (PopPepDeviceDState.c)
 *     PopPepDeviceWaitWake @ 0x1402DCC84 (PopPepDeviceWaitWake.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x1400B8AA0 (KeResetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC4E0 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x1400C2B00 (KeSetEvent.c)
 *     PopPepCancelActivityRange @ 0x1400FF4B8 (PopPepCancelActivityRange.c)
 *     PopPepCountReadyActivities @ 0x1400FF704 (PopPepCountReadyActivities.c)
 *     PopPepReleaseActivityLink @ 0x1400FF74C (PopPepReleaseActivityLink.c)
 *     PopPepRequestWork @ 0x1400FF7C4 (PopPepRequestWork.c)
 *     PopPepPromoteActivities @ 0x1400FF954 (PopPepPromoteActivities.c)
 *     PopPepUpdateIdleState @ 0x1400FFF64 (PopPepUpdateIdleState.c)
 */

int __fastcall PopPepUpdateConstraints(__int64 a1, int a2, char a3)
{
  __int64 v4; // r12
  KIRQL v6; // al
  unsigned __int8 v7; // r13
  unsigned int v8; // esi
  __int64 v9; // rdi
  unsigned int ready; // eax
  int result; // eax
  unsigned int j; // edi
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int i; // [rsp+70h] [rbp+18h]

  v4 = a2;
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64));
  *(_BYTE *)(a1 + 125) = 1;
  v7 = v6;
  v8 = 0;
  for ( i = PopPepCountReadyActivities((unsigned int *)a1, 0LL, 3); v8 < *(_DWORD *)(a1 + 180); ++v8 )
  {
    v9 = 200LL * v8 + a1 + 184;
    if ( (*(_BYTE *)(v9 + 16) & 1) != 0 )
    {
      if ( a3 )
      {
        *(_DWORD *)(v9 + 4 * v4 + 152) = *(_DWORD *)(v9 + 188) - 1;
      }
      else
      {
        PopPepCancelActivityRange(v9 + 56, 1, 1, 1, (volatile signed __int32 *)(v9 + 104));
        *(_DWORD *)(v9 + 4 * v4 + 152) = 0;
        KeResetEvent((PRKEVENT)(v9 + 32));
      }
      PopPepUpdateIdleState(a1, v9, a3);
      v14 = *(_QWORD *)(v9 + 64);
      if ( !a3 )
      {
        if ( *(_DWORD *)v14 )
          *(_BYTE *)(v14 + 16) = 1;
        else
          KeSetEvent((PRKEVENT)(v9 + 32), 0, 0);
      }
    }
  }
  PopPepPromoteActivities(a1, 0LL, 3);
  ready = PopPepCountReadyActivities((unsigned int *)a1, 0LL, 3);
  PopPepRequestWork(i, ready);
  result = PopPepReleaseActivityLink(a1, 0LL, 1, v7);
  if ( !a3 )
  {
    for ( j = 0; j < *(_DWORD *)(a1 + 180); ++j )
    {
      result = j;
      v13 = a1 + 200LL * j;
      if ( (*(_BYTE *)(v13 + 200) & 1) != 0 )
        result = KeWaitForSingleObject((PVOID)(v13 + 216), Executive, 0, 0, 0LL);
    }
  }
  return result;
}
