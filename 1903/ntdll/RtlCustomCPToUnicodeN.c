/*
 * XREFs of RtlCustomCPToUnicodeN @ 0x1800E35C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x18005F3A0 (RtlUTF8ToUnicodeN.c)
 */

__int64 __fastcall RtlCustomCPToUnicodeN(__int64 a1, _WORD *a2, unsigned int a3, char *a4, char *a5, unsigned int a6)
{
  unsigned int v6; // ebx
  _WORD *v8; // r10
  char *v10; // r8
  int v11; // eax
  unsigned int v13; // edx
  unsigned int v14; // r11d
  unsigned int v15; // ecx
  __int64 v16; // rdi
  char *v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // r14
  int v21; // esi
  char *v22; // rdi
  __int64 v23; // rcx
  unsigned __int16 v24; // ax
  char v25; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0;
  v8 = a2;
  if ( *(_WORD *)a1 == 0xFDE9 )
  {
    v10 = &v25;
    if ( a4 )
      v10 = a4;
    if ( a6 )
    {
      v11 = RtlUTF8ToUnicodeN(a2, a3, v10, a5, a6);
    }
    else
    {
      *(_DWORD *)v10 = 0;
      v11 = 0;
    }
    if ( v11 == -1073741789 )
      return (unsigned int)-2147483643;
    return v6;
  }
  else
  {
    v13 = a6;
    v14 = a3 >> 1;
    if ( *(_WORD *)(a1 + 12) )
    {
      v20 = *(_QWORD *)(a1 + 56);
      v21 = (int)v8;
      if ( v14 )
      {
        v22 = a5;
        while ( v13 )
        {
          v23 = (unsigned __int8)*v22;
          --v14;
          --v13;
          v24 = *(_WORD *)(v20 + 2 * v23);
          if ( v24 )
          {
            if ( !v13 )
            {
              *v8 = 0;
              LODWORD(v8) = (_DWORD)v8 + 2;
              break;
            }
            ++v22;
            --v13;
            *v8 = *(_WORD *)(v20 + 2 * (v24 + (unsigned __int64)(unsigned __int8)*v22));
          }
          else
          {
            *v8 = *(_WORD *)(*(_QWORD *)(a1 + 32) + 2 * v23);
          }
          ++v8;
          ++v22;
          if ( !v14 )
            break;
        }
      }
      if ( a4 )
        *(_DWORD *)a4 = (_DWORD)v8 - v21;
    }
    else
    {
      v15 = a6;
      if ( v14 < a6 )
        v15 = v14;
      if ( a4 )
        *(_DWORD *)a4 = 2 * v15;
      v16 = *(_QWORD *)(a1 + 32);
      if ( v15 )
      {
        v17 = a5;
        v18 = v15;
        do
        {
          v19 = (unsigned __int8)*v17++;
          *v8++ = *(_WORD *)(v16 + 2 * v19);
          --v18;
        }
        while ( v18 );
      }
    }
    return v14 < v13 ? 0x80000005 : 0;
  }
}
