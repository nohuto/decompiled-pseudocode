/*
 * XREFs of AuthzBasepGetInternalSecurityAttributeValueCopyoutBufferSize @ 0x140014348
 * Callers:
 *     AuthzBasepGetInternalSecurityAttributesCopyoutBufferSize @ 0x1405C0720 (AuthzBasepGetInternalSecurityAttributesCopyoutBufferSize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AuthzBasepGetInternalSecurityAttributeValueCopyoutBufferSize(__int64 a1, unsigned int *a2)
{
  unsigned int v4; // r8d
  unsigned __int64 v5; // rax
  int v6; // edx
  unsigned int v7; // r9d
  signed int v8; // ecx
  unsigned int v9; // edx
  int v10; // eax
  unsigned __int16 v11; // ax
  __int64 *v13; // rbx
  __int64 *i; // r10
  unsigned int v15; // ecx
  unsigned int v16; // edx
  unsigned int v17; // r8d
  int v18; // eax
  __int64 *v19; // rbx
  __int64 *k; // r10
  unsigned int v21; // ecx
  unsigned int v22; // edx
  unsigned int v23; // r8d
  int v24; // eax
  __int64 *v25; // rbx
  __int64 *j; // r10
  unsigned int v27; // ecx
  unsigned int v28; // edx
  unsigned int v29; // r8d
  int v30; // eax

  v4 = (*a2 + 7) & 0xFFFFFFF8;
  if ( v4 < *a2 )
    return (unsigned int)-1073741675;
  v5 = (unsigned __int64)*(unsigned int *)(a1 + 60) << 6;
  v6 = -1;
  v7 = v4;
  if ( v5 <= 0xFFFFFFFF )
    v6 = *(_DWORD *)(a1 + 60) << 6;
  v8 = v5 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v5 <= 0xFFFFFFFF )
  {
    v9 = v4 + v6;
    v10 = -1;
    if ( v9 >= v4 )
      v10 = v9;
    v8 = v9 < v4 ? 0xC0000095 : 0;
    v7 = v10;
    if ( v9 >= v4 )
    {
      v11 = *(_WORD *)(a1 + 48);
      if ( !v11 )
      {
LABEL_20:
        v8 = -1073741811;
        goto LABEL_10;
      }
      if ( v11 <= 2u )
        goto LABEL_10;
      switch ( v11 )
      {
        case 3u:
          v13 = (__int64 *)(a1 + 72);
          for ( i = *(__int64 **)(a1 + 72); i != v13; i = (__int64 *)*i )
          {
            v15 = v7;
            v16 = v7 + *((unsigned __int16 *)i + 20);
            v17 = v7;
            v18 = -1;
            if ( v16 >= v7 )
              v18 = v7 + *((unsigned __int16 *)i + 20);
            v7 = v18;
            v8 = v16 < v15 ? 0xC0000095 : 0;
            if ( v16 < v17 )
              break;
          }
          goto LABEL_10;
        case 4u:
          v25 = (__int64 *)(a1 + 72);
          for ( j = *(__int64 **)(a1 + 72); j != v25; j = (__int64 *)*j )
          {
            v27 = v7;
            v28 = v7 + *((unsigned __int16 *)j + 24);
            v29 = v7;
            v30 = -1;
            if ( v28 >= v7 )
              v30 = v7 + *((unsigned __int16 *)j + 24);
            v7 = v30;
            v8 = v28 < v27 ? 0xC0000095 : 0;
            if ( v28 < v29 )
              break;
          }
          goto LABEL_10;
        case 5u:
LABEL_26:
          v19 = (__int64 *)(a1 + 72);
          for ( k = *(__int64 **)(a1 + 72); k != v19; k = (__int64 *)*k )
          {
            v21 = v7;
            v22 = v7 + *((_DWORD *)k + 12);
            v23 = v7;
            v24 = -1;
            if ( v22 >= v7 )
              v24 = v7 + *((_DWORD *)k + 12);
            v7 = v24;
            v8 = v22 < v21 ? 0xC0000095 : 0;
            if ( v22 < v23 )
              break;
          }
          goto LABEL_10;
      }
      if ( v11 != 6 )
      {
        if ( v11 == 16 )
          goto LABEL_26;
        goto LABEL_20;
      }
    }
  }
LABEL_10:
  if ( v8 >= 0 )
    *a2 = v7;
  return (unsigned int)v8;
}
