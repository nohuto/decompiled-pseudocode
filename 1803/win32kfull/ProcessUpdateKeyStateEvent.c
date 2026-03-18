/*
 * XREFs of ProcessUpdateKeyStateEvent @ 0x1C00C08AC
 * Callers:
 *     xxxProcessEventMessage @ 0x1C003C798 (xxxProcessEventMessage.c)
 *     PostUpdateKeyStateEvent @ 0x1C00C073C (PostUpdateKeyStateEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcessUpdateKeyStateEvent(__int64 a1, __int64 a2, _BYTE *a3)
{
  _BYTE *v5; // rbx
  int i; // r10d
  __int64 v7; // rbp
  unsigned __int8 v8; // si
  unsigned __int64 v9; // r8
  char v10; // cl
  int v11; // eax
  int v12; // eax
  char v13; // cl
  int v14; // r9d
  __int64 result; // rax

  v5 = a3;
  for ( i = 0; i < 32; ++i )
  {
    if ( *v5 )
    {
      v7 = 8LL;
      v8 = 8 * i;
      do
      {
        if ( ((unsigned __int8)(1 << (v8 & 7)) & a3[(unsigned __int64)v8 >> 3]) != 0 )
        {
          v9 = (unsigned __int64)v8 >> 2;
          v10 = 2 * (v8 & 3);
          v11 = *(unsigned __int8 *)(v9 + a1 + 228);
          if ( ((unsigned __int8)(1 << v10) & *(_BYTE *)(v9 + a2)) != 0 )
            v12 = v11 | (1 << v10);
          else
            v12 = v11 & ~(1 << v10);
          v13 = 2 * (v8 & 3) + 1;
          *(_BYTE *)(v9 + a1 + 228) = v12;
          if ( ((unsigned __int8)(1 << v13) & *(_BYTE *)(v9 + a2)) != 0 )
            v14 = (unsigned __int8)v12 | (1 << v13);
          else
            v14 = (unsigned __int8)v12 & ~(1 << v13);
          *(_BYTE *)(v9 + a1 + 228) = v14;
        }
        ++v8;
        --v7;
      }
      while ( v7 );
    }
    ++v5;
  }
  result = gpsi;
  ++*(_DWORD *)(gpsi + 6984LL);
  if ( a2 != *(_QWORD *)&gafAsyncKeyState[0] )
    return Win32FreePool(a2);
  return result;
}
