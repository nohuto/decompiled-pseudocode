/*
 * XREFs of PspSelectNodeForProcess @ 0x1406BED88
 * Callers:
 *     PspAllocateProcess @ 0x14064CE78 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

__int64 PspSelectNodeForProcess()
{
  unsigned int v0; // r8d
  unsigned __int32 v1; // edx

  v0 = 0;
  v1 = _InterlockedIncrement(&PspProcessNodeAssignment) % (unsigned int)(unsigned __int16)KeNumberNodes;
  if ( !*(_QWORD *)(KeNodeBlock[(unsigned __int16)v1] + 136) )
  {
    do
    {
      ++v0;
      LOWORD(v1) = v1 + 1;
      if ( (unsigned __int16)v1 >= (unsigned __int16)KeNumberNodes )
        LOWORD(v1) = 0;
    }
    while ( !*(_QWORD *)(KeNodeBlock[(unsigned __int16)v1] + 136) );
    if ( v0 )
      _InterlockedExchangeAdd(&PspProcessNodeAssignment, v0);
  }
  return KeNodeBlock[(unsigned __int16)v1];
}
