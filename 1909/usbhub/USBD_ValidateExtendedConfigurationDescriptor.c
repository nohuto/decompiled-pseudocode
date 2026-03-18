/*
 * XREFs of USBD_ValidateExtendedConfigurationDescriptor @ 0x1C0044848
 * Callers:
 *     UsbhGetMsOsExtendedConfigDesc @ 0x1C0045010 (UsbhGetMsOsExtendedConfigDesc.c)
 * Callees:
 *     memset @ 0x1C002CA00 (memset.c)
 */

__int64 __fastcall USBD_ValidateExtendedConfigurationDescriptor(
        unsigned int *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4)
{
  unsigned int v7; // ebx
  __int16 v8; // r15
  _BYTE *v9; // rsi
  unsigned __int16 v10; // ax
  _BYTE *PoolWithTag; // rax
  unsigned __int8 *v12; // rcx
  int v13; // r10d
  unsigned __int64 v14; // rdx
  int v15; // r11d
  unsigned __int8 v16; // al
  unsigned int v17; // r9d
  unsigned __int8 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned int v22; // r11d
  unsigned int v23; // ecx
  unsigned __int8 *v24; // r8
  unsigned __int8 *v25; // r10
  __int64 v26; // rbp
  __int64 v27; // rax
  _BYTE *v28; // rcx
  char v29; // r9
  unsigned int i; // edx
  unsigned __int8 v31; // al
  char v32; // r9
  _BYTE *v33; // rcx
  unsigned int j; // edx
  unsigned __int8 v35; // al

  v7 = 0;
  v8 = 0;
  v9 = 0LL;
  if ( a1 && a2 >= 0x10 )
  {
    if ( !a3 )
      return (unsigned int)-1073741811;
    v10 = *(_WORD *)(a3 + 2);
    if ( v10 < 9u || v10 > a4 )
      return (unsigned int)-1073741811;
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x100uLL, 0x42554855u);
    v9 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    memset(PoolWithTag, 0, 0x100uLL);
    v12 = (unsigned __int8 *)(a3 + 9);
    v13 = *(unsigned __int8 *)(a3 + 4);
    v14 = a3 + *(unsigned __int16 *)(a3 + 2);
    v15 = 0;
    while ( (unsigned __int64)v12 < v14 )
    {
      if ( (unsigned __int64)&v12[*v12] > v14 )
        goto LABEL_48;
      v16 = v12[1];
      if ( v16 == 11 )
      {
        v17 = 1;
        v9[v12[2]] = 1;
        v18 = v12[3];
        if ( v18 > 1u )
        {
          do
          {
            v19 = v17 + v12[2];
            if ( (unsigned int)v19 >= 0x100 )
              goto LABEL_48;
            v9[v19] = 2;
            ++v17;
            v18 = v12[3];
          }
          while ( v17 < v18 );
        }
        ++v15;
        v13 -= v18;
        v16 = v12[1];
      }
      if ( v16 == 4 )
      {
        v20 = v12[2];
        if ( !v9[v20] )
          v9[v20] = 1;
      }
      if ( !*v12 )
        break;
      v12 += *v12;
    }
    v21 = *a1;
    v22 = v13 + v15;
    if ( (unsigned int)(v21 - 16) <= 0x1800 && (unsigned int)v21 <= a2 && *((_WORD *)a1 + 3) == 4 )
    {
      v23 = *((unsigned __int8 *)a1 + 8);
      if ( v23 <= v22 && (unsigned int)v21 >= 24 * v23 + 16 )
      {
        v24 = (unsigned __int8 *)(a1 + 4);
        v25 = (unsigned __int8 *)a1 + v21;
        if ( a1 + 4 >= (unsigned int *)((char *)a1 + v21) )
        {
LABEL_47:
          if ( v8 == (unsigned __int8)v23 )
            goto LABEL_49;
        }
        else
        {
          v26 = 0x87FFFFFE03FFLL;
          while ( 1 )
          {
            v27 = *v24;
            if ( v9[v27] != 1 && v22 > 1 )
              break;
            v9[v27] = 3;
            v28 = v24 + 2;
            v29 = 0;
            for ( i = 0; i < 8; ++i )
            {
              if ( *v28 )
              {
                if ( v29 )
                  goto LABEL_48;
                v31 = *v28 - 48;
                if ( v31 > 0x2Fu || !_bittest64(&v26, v31) )
                  goto LABEL_48;
              }
              else
              {
                v29 = 1;
              }
              ++v28;
            }
            v32 = 0;
            v33 = v24 + 10;
            for ( j = 0; j < 8; ++j )
            {
              if ( *v33 )
              {
                if ( v32 )
                  goto LABEL_48;
                v35 = *v33 - 48;
                if ( v35 > 0x2Fu || !_bittest64(&v26, v35) )
                  goto LABEL_48;
              }
              else
              {
                v32 = 1;
              }
              ++v33;
            }
            v24 += 24;
            ++v8;
            if ( v24 >= v25 )
            {
              LOBYTE(v23) = *((_BYTE *)a1 + 8);
              goto LABEL_47;
            }
          }
        }
      }
    }
  }
LABEL_48:
  v7 = -1073741811;
LABEL_49:
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return v7;
}
