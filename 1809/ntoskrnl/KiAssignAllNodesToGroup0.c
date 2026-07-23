/*
 * XREFs of KiAssignAllNodesToGroup0 @ 0x1409B785C
 * Callers:
 *     KiPerformGroupConfiguration @ 0x1409B75EC (KiPerformGroupConfiguration.c)
 * Callees:
 *     <none>
 */

__int64 KiAssignAllNodesToGroup0()
{
  char v0; // dl
  __int64 v1; // r8
  __int64 *v2; // rcx
  __int64 result; // rax

  v0 = KeNumberNodes;
  KiMaximumGroups = 1;
  if ( KeNumberNodes )
  {
    v1 = (unsigned __int16)KeNumberNodes;
    v2 = KeNodeBlock;
    do
    {
      result = *v2++;
      *(_BYTE *)(result + 173) |= 2u;
      *(_WORD *)(result + 144) = 0;
      *(_DWORD *)(result + 128) = (1 << v0) - 1;
      --v1;
    }
    while ( v1 );
  }
  return result;
}
