/*
 * XREFs of SmProcessListRequest @ 0x1408AC188
 * Callers:
 *     SmQueryStoreInformation @ 0x1406D0FDC (SmQueryStoreInformation.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     SmAlloc @ 0x1400E4BD4 (SmAlloc.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 *     SmProcessListRequestExtended @ 0x1408AC358 (SmProcessListRequestExtended.c)
 *     SmKmGetStoreList @ 0x1408ADEA4 (SmKmGetStoreList.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmProcessListRequest(__int64 a1, unsigned __int64 a2, unsigned int a3, unsigned int *a4, char a5)
{
  unsigned int v9; // esi
  struct _PRIVILEGE_SET *v10; // rax
  struct _PRIVILEGE_SET *v11; // rdi
  int StoreList; // ebx
  __int64 v13; // rcx

  v9 = 4228;
  v10 = (struct _PRIVILEGE_SET *)SmAlloc(0x1084uLL, 0x524C6D73u);
  v11 = v10;
  if ( v10 )
  {
    memset(v10, 0, 0x1084uLL);
    if ( a3 < 0x84 )
      goto LABEL_4;
    if ( a5 )
    {
      if ( (a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v13 = 0x7FFFFFFF0000LL;
      if ( a2 < 0x7FFFFFFF0000LL )
        v13 = a2;
      *(_BYTE *)v13 = *(_BYTE *)v13;
      *(_BYTE *)(v13 + 131) = *(_BYTE *)(v13 + 131);
    }
    *(_OWORD *)&v11->PrivilegeCount = *(_OWORD *)a2;
    *(_OWORD *)&v11->Privilege[0].Attributes = *(_OWORD *)(a2 + 16);
    *(_OWORD *)&v11[1].Privilege[0].Luid.HighPart = *(_OWORD *)(a2 + 32);
    *(_OWORD *)&v11[2].Privilege[0].Luid.LowPart = *(_OWORD *)(a2 + 48);
    *(_OWORD *)&v11[3].Control = *(_OWORD *)(a2 + 64);
    *(_OWORD *)&v11[4].PrivilegeCount = *(_OWORD *)(a2 + 80);
    *(_OWORD *)&v11[4].Privilege[0].Attributes = *(_OWORD *)(a2 + 96);
    *(_OWORD *)&v11[5].Privilege[0].Luid.HighPart = *(_OWORD *)(a2 + 112);
    v11[6].Privilege[0].Luid.LowPart = *(_DWORD *)(a2 + 128);
    if ( (v11->PrivilegeCount & 0x10000) != 0 )
    {
      if ( a5 )
        ProbeForWrite((volatile void *)a2, 0x1084uLL, 4u);
    }
    else
    {
      v9 = 132;
    }
    if ( a3 == v9 )
    {
      if ( (unsigned __int16)v11->PrivilegeCount == 2 && v11->PrivilegeCount < 0x20000 )
      {
        StoreList = SmKmGetStoreList(a1, v11);
        if ( StoreList >= 0 )
        {
          if ( (v11->PrivilegeCount & 0x10000) == 0
            || (StoreList = SmProcessListRequestExtended(a1, v11), StoreList >= 0) )
          {
            memmove((void *)a2, v11, v9);
            *a4 = v9;
          }
        }
      }
      else
      {
        StoreList = -1073741811;
      }
    }
    else
    {
LABEL_4:
      StoreList = -1073741306;
    }
  }
  else
  {
    StoreList = -1073740716;
  }
  if ( v11 )
    CmSiFreeMemory(v11);
  return (unsigned int)StoreList;
}
