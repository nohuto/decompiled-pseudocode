/*
 * XREFs of MiImageRvaRawEnumNext @ 0x14068E360
 * Callers:
 *     RtlpCompressRvaList @ 0x1405F3F20 (RtlpCompressRvaList.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MiImageRvaRawEnumNext(_DWORD *a1, _DWORD *a2)
{
  unsigned int v4; // eax
  int v5; // r14d
  _DWORD *v6; // r15
  unsigned int *v7; // rbx
  unsigned int v8; // ebp
  unsigned int v9; // edi
  unsigned int i; // ecx
  __int64 (__fastcall *v11)(_DWORD *, unsigned int *, unsigned int *); // rax
  unsigned int v12; // ecx
  int v13; // r9d
  __int64 v14; // rax
  unsigned int v15; // ecx
  _DWORD *v16; // r8
  __int64 result; // rax

  if ( !a1[66] )
    return 0LL;
  v4 = a1[35];
  v5 = 0;
  v6 = a1 + 36;
  v7 = a1 + 36;
  v8 = 0;
  v9 = 0;
  for ( i = v4; v9 < v4; i = v4 )
  {
    v11 = (__int64 (__fastcall *)(_DWORD *, unsigned int *, unsigned int *))*((_QWORD *)v7 + 2);
    if ( v11 )
    {
      v12 = *v7;
      if ( *v7 == a1[66] )
      {
        v12 = v11(a1, v7 + 6, v7 + 1);
        *v7 = v12;
      }
      if ( v12 )
      {
        if ( v8 )
        {
          if ( v8 >= v12 )
            v8 = v12;
        }
        else
        {
          v8 = v12;
        }
      }
    }
    v4 = a1[35];
    ++v9;
    v7 += 10;
  }
  if ( a2 && v8 )
  {
    v13 = 0;
    if ( v4 )
    {
      v14 = i;
      do
      {
        if ( *v6 == v8 )
          v13 |= v6[1];
        v6 += 10;
        --v14;
      }
      while ( v14 );
      v4 = i;
    }
    v15 = 0;
    if ( v4 )
    {
      v16 = a1 + 32;
      do
      {
        if ( (v13 & *v16) != 0 )
          v5 |= 1 << v15;
        ++v15;
        ++v16;
      }
      while ( v15 < a1[35] );
    }
    *a2 = v5;
  }
  result = v8;
  a1[66] = v8;
  return result;
}
