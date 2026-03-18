/*
 * XREFs of ProcessUpdateKeyStateEvent @ 0x1C0138AA8
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00712F4 (xxxProcessEventMessage.c)
 *     PostUpdateKeyStateEvent @ 0x1C01388DC (PostUpdateKeyStateEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcessUpdateKeyStateEvent(__int64 a1, __int64 a2, _BYTE *a3)
{
  int v3; // r10d
  char v5; // bl
  _BYTE *v7; // rsi
  int v8; // r11d
  char v9; // bl
  unsigned __int64 v10; // r9
  char v11; // r15
  unsigned __int64 v12; // r9
  int v13; // r8d
  char v14; // cl
  int v15; // r8d
  char v16; // cl
  int v17; // r8d
  __int64 result; // rax

  v3 = 0;
  v5 = 0;
  v7 = a3;
  do
  {
    if ( *v7 )
    {
      v8 = 0;
      v9 = 8 * v5;
      do
      {
        v10 = (unsigned __int8)(v8 + v9);
        if ( ((unsigned __int8)(1 << ((v8 + v9) & 7)) & a3[v10 >> 3]) != 0 )
        {
          v11 = v10 & 3;
          v12 = v10 >> 2;
          v13 = *(unsigned __int8 *)(v12 + a1 + 236);
          v14 = 2 * v11;
          if ( ((unsigned __int8)(1 << (2 * v11)) & *(_BYTE *)(v12 + a2)) != 0 )
            v15 = v13 | (1 << v14);
          else
            v15 = v13 & ~(1 << v14);
          v16 = 2 * v11 + 1;
          *(_BYTE *)(v12 + a1 + 236) = v15;
          if ( ((unsigned __int8)(1 << v16) & *(_BYTE *)(v12 + a2)) != 0 )
            v17 = (unsigned __int8)v15 | (1 << v16);
          else
            v17 = (unsigned __int8)v15 & ~(1 << v16);
          *(_BYTE *)(v12 + a1 + 236) = v17;
        }
        ++v8;
      }
      while ( v8 < 8 );
    }
    ++v3;
    ++v7;
    v5 = v3;
  }
  while ( v3 < 32 );
  result = gpsi;
  ++*(_DWORD *)(gpsi + 6984LL);
  if ( a2 != *(_QWORD *)&gafAsyncKeyState[0] )
    return Win32FreePool(a2);
  return result;
}
