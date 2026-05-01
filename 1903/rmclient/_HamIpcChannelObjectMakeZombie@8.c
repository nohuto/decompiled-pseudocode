/*
 * XREFs of _HamIpcChannelObjectMakeZombie@8 @ 0x10007E30
 * Callers:
 *     _HamCompleteExtendedExecution@12 @ 0x10007C90 (_HamCompleteExtendedExecution@12.c)
 *     _RmpClientReleaseResourceSet@16 @ 0x10011A05 (_RmpClientReleaseResourceSet@16.c)
 *     _RmpClientUnregisterActivityHostCallbacks@12 @ 0x10011B0D (_RmpClientUnregisterActivityHostCallbacks@12.c)
 * Callees:
 *     _RmpClientWnfDoWork@4 @ 0x10007EF8 (_RmpClientWnfDoWork@4.c)
 *     _HampIpcChannelObjectComparePayloadForTree@8 @ 0x1000AD60 (_HampIpcChannelObjectComparePayloadForTree@8.c)
 */

int __fastcall HamIpcChannelObjectMakeZombie(_DWORD *a1, int a2)
{
  unsigned int v4; // esi
  int v5; // ebx
  _DWORD *v6; // edi
  int v8; // eax
  unsigned int v9; // eax
  _DWORD *v10; // esi
  _DWORD *v11; // ecx
  _DWORD *v12; // [esp+Ch] [ebp-8h]

  RtlAcquireSRWLockExclusive(a1 + 1);
  a1[2] = GetCurrentThreadId();
  v4 = a1[4];
  v12 = a1 + 4;
  if ( (a1[5] & 1) != 0 && v4 )
    v4 ^= (unsigned int)(a1 + 4);
  v5 = a1[5] & 1;
  if ( !v4 )
  {
LABEL_5:
    v6 = a1;
    goto LABEL_6;
  }
  while ( 1 )
  {
    v8 = HampIpcChannelObjectComparePayloadForTree(a2, v4);
    if ( v8 < 0 )
    {
      v9 = *(_DWORD *)v4;
      if ( v5 && v9 )
        goto LABEL_17;
      goto LABEL_9;
    }
    if ( v8 <= 0 )
      break;
    v9 = *(_DWORD *)(v4 + 4);
    if ( v5 && v9 )
    {
LABEL_17:
      v4 ^= v9;
      goto LABEL_10;
    }
LABEL_9:
    v4 = v9;
LABEL_10:
    if ( !v4 )
      goto LABEL_5;
  }
  RtlRbRemoveNode(v12, v4);
  v6 = a1;
  v10 = (_DWORD *)(v4 + 12);
  v11 = (_DWORD *)a1[7];
  if ( (_DWORD *)*v11 != a1 + 6 )
    __fastfail(3u);
  *v10 = a1 + 6;
  v10[1] = v11;
  *v11 = v10;
  a1[7] = v10;
  RmpClientWnfDoWork(*a1);
LABEL_6:
  v6[2] = 0;
  return RtlReleaseSRWLockExclusive(v6 + 1);
}
