/*
 * XREFs of PopExtendConnectionState @ 0x140762F2C
 * Callers:
 *     PopSetSessionUserStatus @ 0x1406DDC58 (PopSetSessionUserStatus.c)
 *     PopInitializeAdpm @ 0x1409DED80 (PopInitializeAdpm.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

PVOID __fastcall PopExtendConnectionState(unsigned int a1)
{
  unsigned int v1; // ebx
  PVOID result; // rax
  void *v3; // rdi
  PVOID v4; // rsi

  if ( PopMaximumConnectionSessions )
  {
    if ( 2 * PopMaximumConnectionSessions <= a1 )
      v1 = (a1 + 8) >> 3;
    else
      v1 = (unsigned int)PopMaximumConnectionSessions >> 2;
  }
  else
  {
    v1 = 8;
  }
  result = ExAllocatePoolWithTag(PagedPool, v1, 0x73655350u);
  v3 = result;
  if ( result )
  {
    memset(result, 0, v1);
    v4 = PopConnectionState;
    if ( PopConnectionState )
    {
      memmove(v3, PopConnectionState, (unsigned __int64)(unsigned int)PopMaximumConnectionSessions >> 3);
      ExFreePoolWithTag(v4, 0x73655350u);
    }
    PopConnectionState = v3;
    result = (PVOID)(8 * v1);
    PopMaximumConnectionSessions = 8 * v1;
    PopConnectionBitmap.SizeOfBitMap = 8 * v1;
    PopConnectionBitmap.Buffer = (unsigned int *)v3;
  }
  else
  {
    PopMaximumConnectionSessions = 0;
  }
  return result;
}
