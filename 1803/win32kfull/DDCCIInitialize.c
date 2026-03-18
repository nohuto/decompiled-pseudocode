/*
 * XREFs of DDCCIInitialize @ 0x1C00F0264
 * Callers:
 *     DDCCIInitializeWrap @ 0x1C00F0250 (DDCCIInitializeWrap.c)
 * Callees:
 *     <none>
 */

__int64 DDCCIInitialize()
{
  unsigned int v0; // ebx
  CMutex *PoolWithTag; // rax
  CMutex *v2; // rdi
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  v4 = 0;
  PoolWithTag = (CMutex *)ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x63326947u);
  v2 = PoolWithTag;
  if ( PoolWithTag )
  {
    CMutex::CMutex(PoolWithTag, (int *)&v4);
    *((_QWORD *)v2 + 1) = 0LL;
    *((_QWORD *)v2 + 2) = 0LL;
    *((_DWORD *)v2 + 6) = -1071774324;
    CMutex::CMutex((CMutex *)((char *)v2 + 32), (int *)&v4);
  }
  else
  {
    v2 = 0LL;
  }
  qword_1C03270B8 = v2;
  if ( !v2 )
    return 3221225495LL;
  if ( (v4 & 0x80000000) != 0 )
    return v4;
  return v0;
}
