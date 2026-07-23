/*
 * XREFs of KdpInitializeExtendedContext @ 0x140919A80
 * Callers:
 *     KdpGetContext @ 0x1409172E4 (KdpGetContext.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall KdpInitializeExtendedContext(_DWORD *a1, int a2)
{
  _DWORD *v2; // rdi
  __int64 result; // rax
  unsigned int v4; // ebx
  unsigned int v5; // ebx
  unsigned int v6; // ebx

  v2 = a1 + 308;
  a1[12] = a2;
  a1[311] = 1232;
  a1[309] = 1256;
  result = 1048640LL;
  a1[310] = -1232;
  a1[308] = -1232;
  if ( (a2 & 0x100040) == 0x100040 )
  {
    v4 = ((_DWORD)a1 + 1319) & 0xFFFFFFC0;
    memset((void *)(((unsigned __int64)a1 + 1319) & 0xFFFFFFFFFFFFFFC0uLL), 0, 0x40uLL);
    v5 = v4 - (_DWORD)v2;
    v2[4] = v5;
    v6 = v5 - *v2;
    result = (unsigned int)(MEMORY[0xFFFFF780000003E8] - 512);
    v2[5] = result;
    v2[1] = result + v6;
  }
  return result;
}
