/*
 * XREFs of PopPlInitComponents @ 0x1408B935C
 * Callers:
 *     PopPlInitDevice @ 0x1408B9488 (PopPlInitDevice.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PopPlInitComponent @ 0x1408B9280 (PopPlInitComponent.c)
 */

__int64 __fastcall PopPlInitComponents(
        __int64 a1,
        __int128 *a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 *a6,
        _QWORD *a7)
{
  _QWORD *PoolWithTag; // rsi
  unsigned __int64 v8; // rdi
  __int128 *v11; // r15
  int inited; // ebx
  unsigned __int64 v14; // rbp
  unsigned __int64 i; // rbp
  char *v17; // [rsp+70h] [rbp+18h] BYREF

  PoolWithTag = 0LL;
  v8 = 0LL;
  v11 = a2;
  if ( a3 )
  {
    if ( (unsigned __int64)a2 + 24 * a3 <= a5 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * a3, 0x6C506F50u);
      if ( PoolWithTag )
      {
        inited = 0;
        v14 = 0LL;
        if ( a3 )
        {
          while ( 1 )
          {
            inited = PopPlInitComponent(a1, v11, a4, a5, &v17);
            if ( inited < 0 )
              break;
            ++v14;
            PoolWithTag[v8] = v17;
            v11 = (__int128 *)((char *)v11 + 24);
            ++v8;
            if ( v14 >= a3 )
              goto LABEL_14;
          }
          for ( i = 0LL; i < v8; ++i )
            ExFreePoolWithTag((PVOID)PoolWithTag[i], 0x6C506F50u);
          ExFreePoolWithTag(PoolWithTag, 0x6C506F50u);
          PoolWithTag = 0LL;
          v8 = 0LL;
        }
      }
      else
      {
        inited = -1073741670;
      }
    }
    else
    {
      inited = -1073741306;
    }
  }
  else
  {
    inited = 0;
  }
LABEL_14:
  *a7 = PoolWithTag;
  *a6 = v8;
  return (unsigned int)inited;
}
