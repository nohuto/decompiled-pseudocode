/*
 * XREFs of MiFindFreePageFileSpaceForward @ 0x1402B7FCC
 * Callers:
 *     MiFindFreePageFileSpace @ 0x14012420C (MiFindFreePageFileSpace.c)
 * Callees:
 *     RtlFindNextClearRunUlong @ 0x140120C38 (RtlFindNextClearRunUlong.c)
 */

__int64 __fastcall MiFindFreePageFileSpaceForward(__int64 a1, unsigned int *a2, __int64 a3, char a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // r12d
  unsigned int v7; // edi
  unsigned int v9; // esi
  unsigned int NextClearRunUlong; // eax
  unsigned int v11; // r10d
  int v12; // r14d
  unsigned int v13; // edx
  unsigned int v14; // eax
  __int64 result; // rax
  unsigned int v16; // [rsp+30h] [rbp-58h] BYREF
  __int64 v17; // [rsp+38h] [rbp-50h]
  unsigned int v18; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v19; // [rsp+48h] [rbp-40h]
  unsigned int v20; // [rsp+90h] [rbp+8h]
  int v22; // [rsp+A8h] [rbp+20h] BYREF

  v4 = 0;
  v5 = *a2;
  v16 = *(_DWORD *)a1;
  v7 = a3;
  v9 = 0;
  v17 = *(_QWORD *)(*(_QWORD *)(a1 + 112) + 32LL);
  while ( 1 )
  {
    NextClearRunUlong = RtlFindNextClearRunUlong(&v16, v5, a3, 0xFFFFFFFF, &v22);
    a3 = NextClearRunUlong;
    if ( !NextClearRunUlong )
      break;
    v5 = v22 + NextClearRunUlong;
    if ( NextClearRunUlong >= v4 && (NextClearRunUlong >= v7 || a4 >= 0) )
    {
      v11 = v22 & 0x1F;
      v12 = v22 - v11;
      v13 = v7;
      v19 = *(_QWORD *)(*(_QWORD *)(a1 + 112) + 16LL) + 4 * ((unsigned __int64)(v22 - v11) >> 5);
      if ( v7 <= 0x20 )
        v13 = 32;
      v20 = v13;
      v18 = v11 + NextClearRunUlong;
      while ( 1 )
      {
        v14 = RtlFindNextClearRunUlong(&v18, v11, a3, v13, &v22);
        if ( !v14 )
          break;
        v13 = v20;
        v11 = v22 + v14;
        if ( v14 > v4 )
        {
          v9 = v12 + v22;
          v4 = v14;
          if ( v14 > v7 )
            v4 = v7;
          if ( v4 == v7 )
            goto LABEL_16;
        }
      }
      if ( v4 == v7 )
        break;
    }
  }
LABEL_16:
  if ( a4 < 0 && v4 < v7 )
  {
    v4 = 0;
    v9 = 0;
  }
  result = v4;
  *a2 = v9;
  return result;
}
