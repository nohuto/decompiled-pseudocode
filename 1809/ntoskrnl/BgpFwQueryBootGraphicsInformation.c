/*
 * XREFs of BgpFwQueryBootGraphicsInformation @ 0x14016F3C0
 * Callers:
 *     BgQueryBootGraphicsInformation @ 0x14016EEA8 (BgQueryBootGraphicsInformation.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14016EDEC (BgpFwFreeMemory.c)
 *     BgpFwReleaseLock @ 0x14016F308 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14016F358 (BgpFwAcquireLock.c)
 *     BgpFwAllocateMemory @ 0x14016F5D8 (BgpFwAllocateMemory.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BgpFwQueryBootGraphicsInformation(int a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  int v5; // eax
  int v7; // ecx
  PVOID v8; // r14
  size_t v9; // rbp
  void *Memory; // rax
  unsigned int v11; // eax
  unsigned int v12; // r15d
  _DWORD *PoolWithTag; // rax
  _DWORD *v14; // r12

  v2 = 0;
  v3 = 0LL;
  if ( a1 )
  {
    if ( a1 == 2 )
    {
      *(_DWORD *)a2 = 8;
      *(_DWORD *)a2 = Size + 8;
    }
    else if ( a1 == 3 )
    {
      *(_OWORD *)a2 = xmmword_140406BB0;
      *(_OWORD *)(a2 + 16) = xmmword_140406BC0;
      *(_OWORD *)(a2 + 32) = xmmword_140406BD0;
      *(_OWORD *)(a2 + 48) = xmmword_140406BE0;
      *(_OWORD *)(a2 + 64) = xmmword_140406BF0;
      *(_OWORD *)(a2 + 80) = xmmword_140406C00;
      *(_OWORD *)(a2 + 96) = xmmword_140406C10;
      *(_OWORD *)(a2 + 112) = xmmword_140406C20;
    }
    else if ( qword_140406B18 || qword_140406B20 )
    {
      v8 = qword_140406B20;
      v9 = (unsigned int)Size;
      if ( !qword_140406B20 )
      {
        Memory = (void *)BgpFwAllocateMemory((unsigned int)Size);
        v3 = (__int64)Memory;
        if ( !Memory )
          return (unsigned int)-1073741801;
        v8 = Memory;
        memmove(Memory, qword_140406B18, v9);
      }
      v11 = v9 + 8;
      v12 = -1;
      if ( (int)v9 + 8 >= (unsigned int)v9 )
        v12 = v9 + 8;
      v2 = v11 < (unsigned int)v9 ? 0xC0000095 : 0;
      if ( v11 >= (unsigned int)v9 )
      {
        BgpFwReleaseLock();
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v12, 0x4B494742u);
        v14 = PoolWithTag;
        if ( PoolWithTag )
        {
          *PoolWithTag = ((unsigned int)dword_140406AD0 >> 23) & 1;
          PoolWithTag[1] = 8;
          memmove(PoolWithTag + 2, v8, v9);
          BgpFwAcquireLock();
          *(_QWORD *)a2 = v14;
        }
        else
        {
          BgpFwAcquireLock();
          v2 = -1073741801;
        }
      }
      if ( v3 )
        BgpFwFreeMemory(v3);
    }
    else
    {
      *(_QWORD *)a2 = 0LL;
    }
  }
  else
  {
    *(_OWORD *)a2 = xmmword_140406AB0;
    *(_OWORD *)(a2 + 16) = xmmword_140406AC0;
    *(_DWORD *)(a2 + 20) = 0;
    v5 = *(_DWORD *)(a2 + 20);
    if ( (dword_140406AD0 & 2) != 0 )
      v5 = 1;
    *(_DWORD *)(a2 + 20) = v5;
    if ( ((BYTE2(BgInternal) - 1) & 0xFD) == 0 )
    {
      v7 = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(a2 + 8) = *(_DWORD *)(a2 + 12);
      *(_DWORD *)(a2 + 12) = v7;
    }
    *(_DWORD *)(a2 + 28) = BYTE2(BgInternal);
  }
  return v2;
}
