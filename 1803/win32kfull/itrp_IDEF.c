/*
 * XREFs of itrp_IDEF @ 0x1C02C8400
 * Callers:
 *     <none>
 * Callees:
 *     itrp_FindIDef @ 0x1C02C80CC (itrp_FindIDef.c)
 *     itrp_SkipPushData @ 0x1C02D0394 (itrp_SkipPushData.c)
 */

__int64 __fastcall itrp_IDEF(__int16 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  int *v4; // rcx
  int v5; // edi
  __int64 v6; // r8
  _BYTE *v7; // r9
  __int64 v8; // r10
  __int64 IDef; // r11
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  _BYTE *v14; // r9
  unsigned __int64 v15; // rax
  _BYTE *v16; // rax

  v1 = *(unsigned __int8 *)(qword_1C0327180 + 333);
  if ( (unsigned __int8)v1 < 2u )
  {
    v3 = *(_QWORD *)(qword_1C0327180 + 16 * v1 + 200);
    if ( (qword_1C0327180 ^ *(_QWORD *)qword_1C0327180 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327180 + 424)) != *(_QWORD *)(qword_1C0327180 + 432)
      || !((qword_1C0327168 - *(_QWORD *)qword_1C0327180) >> 2) )
    {
      dword_1C03271D0 = 4368;
      return qword_1C03271D8;
    }
    v4 = (int *)(qword_1C0327168 - 4);
    qword_1C0327168 = (__int64)v4;
    v5 = *v4;
    if ( (*v4 & 0xFFFFFF00) != 0 )
    {
      dword_1C03271D0 = 4375;
    }
    else
    {
      IDef = itrp_FindIDef(*v4);
      if ( !IDef )
      {
        v10 = *(int *)(v8 + 336);
        if ( (int)v10 >= *(unsigned __int16 *)(*(_QWORD *)(v8 + 344) + 22LL) )
        {
          dword_1C03271D0 = 4376;
          return qword_1C03271D8;
        }
        IDef = *(_QWORD *)(v8 + 168) + 8 * v10;
        *(_DWORD *)(v8 + 336) = v10 + 1;
      }
      *(_BYTE *)(IDef + 6) = v1;
      *(_BYTE *)(IDef + 7) = v5;
      *(_DWORD *)IDef = (_DWORD)v7 - v3;
      v11 = qword_1C03271E0;
      if ( (unsigned __int64)v7 >= qword_1C03271E0 )
      {
        v12 = qword_1C03271D8;
        v13 = (unsigned __int64)(v7 + 1);
        if ( (unsigned __int64)(v7 + 1) <= qword_1C03271D8 && v13 >= (unsigned __int64)v7 )
        {
          LOBYTE(v6) = 45;
          while ( *v7 != (_BYTE)v6 )
          {
            v14 = (_BYTE *)v13;
            if ( v13 >= v12 )
              goto LABEL_21;
            v15 = itrp_SkipPushData(v13, v11, v6);
            v11 = qword_1C03271E0;
            v7 = (_BYTE *)v15;
            if ( v15 >= qword_1C03271E0 )
            {
              v12 = qword_1C03271D8;
              v13 = v15 + 1;
              if ( v13 <= qword_1C03271D8 && v13 >= (unsigned __int64)v7 )
                continue;
            }
            goto LABEL_27;
          }
          v14 = v7 + 1;
LABEL_21:
          if ( v14 == (_BYTE *)v12 )
          {
            v16 = v14 - 1;
            if ( (unsigned __int64)(v14 - 1) < v11 || v14 < v16 )
            {
              dword_1C03271D0 = 4381;
              return v12;
            }
            if ( *v16 != (_BYTE)v6 )
              dword_1C03271D0 = 4356;
          }
          *(_WORD *)(IDef + 4) = (_WORD)v14 - a1 - 1;
          return (__int64)v14;
        }
      }
LABEL_27:
      dword_1C03271D0 = 4381;
    }
  }
  else
  {
    dword_1C03271D0 = 4361;
  }
  return qword_1C03271D8;
}
