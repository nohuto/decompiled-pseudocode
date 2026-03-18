/*
 * XREFs of BgpFwQueryBootGraphicsInformation @ 0x1401791B8
 * Callers:
 *     BgQueryBootGraphicsInformation @ 0x140178C58 (BgQueryBootGraphicsInformation.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140178B9C (BgpFwFreeMemory.c)
 *     BgpFwReleaseLock @ 0x140178CE0 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140179150 (BgpFwAcquireLock.c)
 *     BgpFwAllocateMemory @ 0x1401793D0 (BgpFwAllocateMemory.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
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
  _DWORD *PoolWithTag; // rax
  _DWORD *v12; // r12

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
      *(_OWORD *)a2 = xmmword_14042C0F0;
      *(_OWORD *)(a2 + 16) = xmmword_14042C100;
      *(_OWORD *)(a2 + 32) = xmmword_14042C110;
      *(_OWORD *)(a2 + 48) = xmmword_14042C120;
      *(_OWORD *)(a2 + 64) = xmmword_14042C130;
      *(_OWORD *)(a2 + 80) = xmmword_14042C140;
      *(_OWORD *)(a2 + 96) = xmmword_14042C150;
      *(_OWORD *)(a2 + 112) = xmmword_14042C160;
    }
    else if ( qword_14042C058 || qword_14042C060 )
    {
      v8 = qword_14042C060;
      v9 = (unsigned int)Size;
      if ( !qword_14042C060 )
      {
        Memory = (void *)BgpFwAllocateMemory((unsigned int)Size);
        v3 = (__int64)Memory;
        if ( !Memory )
          return (unsigned int)-1073741801;
        v8 = Memory;
        memmove(Memory, qword_14042C058, v9);
      }
      if ( (int)v9 + 8 < (unsigned int)v9 )
      {
        v2 = -1073741675;
      }
      else
      {
        BgpFwReleaseLock();
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(v9 + 8), 0x4B494742u);
        v12 = PoolWithTag;
        if ( PoolWithTag )
        {
          *PoolWithTag = ((unsigned int)dword_14042C010 >> 23) & 1;
          PoolWithTag[1] = 8;
          memmove(PoolWithTag + 2, v8, v9);
          BgpFwAcquireLock();
          *(_QWORD *)a2 = v12;
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
    *(_OWORD *)a2 = xmmword_14042BFF0;
    *(_OWORD *)(a2 + 16) = xmmword_14042C000;
    *(_DWORD *)(a2 + 20) = 0;
    v5 = *(_DWORD *)(a2 + 20);
    if ( (dword_14042C010 & 2) != 0 )
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
