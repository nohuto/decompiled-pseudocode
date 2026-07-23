/*
 * XREFs of RtlReserveChunkLZNT1 @ 0x14089B440
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     RtlDescribeChunkLZNT1 @ 0x14089B370 (RtlDescribeChunkLZNT1.c)
 */

__int64 __fastcall RtlReserveChunkLZNT1(__int16 **a1, unsigned __int64 a2, __int16 **a3, unsigned int a4)
{
  __int16 *v4; // r14
  __int16 *v6; // rsi
  __int64 v7; // rdi
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // edx
  __int16 *v13; // r8
  unsigned int v14; // edx
  __int16 *v16; // [rsp+20h] [rbp-38h] BYREF
  char v17[48]; // [rsp+28h] [rbp-30h] BYREF
  int v18; // [rsp+60h] [rbp+8h] BYREF

  v4 = *a1;
  v16 = v4;
  v6 = v4;
  v7 = a4;
  while ( 1 )
  {
    v10 = RtlDescribeChunkLZNT1(&v16, a2, (__int64)v17, &v18);
    v11 = v10;
    if ( v10 < 0 )
      break;
    if ( v6 == v4 )
      v6 = v16;
  }
  if ( v10 == -2147483622 )
  {
    v12 = (_DWORD)v16 - (_DWORD)v6;
    *a3 = v4;
    v13 = *a1;
    v14 = v12 + 2;
    v11 = -1073741789;
    if ( (unsigned __int64)*a1 <= a2 - v7 )
    {
      if ( (_DWORD)v7 == 4096 )
      {
        LODWORD(v7) = 4098;
        if ( (unsigned __int64)v13 + v14 + 4098 <= a2 )
        {
          memmove(v13 + 2049, v6, v14);
          **a1 = 0x3FFF;
          ++*a3;
LABEL_15:
          v11 = 0;
        }
      }
      else if ( (_DWORD)v7 )
      {
        if ( (unsigned __int64)v13 + v7 + v14 <= a2 )
        {
          memmove((char *)v13 + v7, v6, v14);
          goto LABEL_15;
        }
      }
      else
      {
        LODWORD(v7) = 6;
        if ( (unsigned __int64)v13 + v14 + 6 <= a2 )
        {
          memmove(v13 + 3, v6, v14);
          **a1 = -20477;
          (*a1)[1] = 2;
          (*a1)[2] = 4092;
          goto LABEL_15;
        }
      }
      *a1 = (__int16 *)((char *)*a1 + (unsigned int)v7);
    }
  }
  return v11;
}
