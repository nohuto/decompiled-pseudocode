/*
 * XREFs of AuthzBasepGetSecurityAttributeValueCopyoutBufferSize @ 0x1400A6904
 * Callers:
 *     AuthzBasepGetSecurityAttributesCopyoutBufferSize @ 0x1400A6BF0 (AuthzBasepGetSecurityAttributesCopyoutBufferSize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AuthzBasepGetSecurityAttributeValueCopyoutBufferSize(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int16 v2; // r9
  unsigned int v3; // r8d
  unsigned __int64 v4; // rax
  unsigned __int64 v7; // r9
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v11; // r9
  __int64 v12; // rax
  __int64 ***v13; // r10
  __int64 **v14; // rdx
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // r9
  __int64 v17; // rax
  __int64 ***v18; // r10
  __int64 **v19; // rdx
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // r9
  __int64 v22; // rax
  __int64 ***v23; // r10
  __int64 **v24; // rdx
  unsigned __int64 v25; // r9

  v2 = *(_WORD *)(a1 + 48);
  v3 = 0;
  v4 = *a2;
  if ( !v2 )
    return (unsigned int)-1073741811;
  if ( v2 > 2u )
  {
    switch ( v2 )
    {
      case 3u:
        v11 = (v4 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v11 >= v4 )
        {
          v12 = 16LL * *(unsigned int *)(a1 + 60);
          if ( is_mul_ok(0x10uLL, *(unsigned int *)(a1 + 60)) )
          {
            v9 = v12 + v11;
            if ( v12 + v11 >= v11 )
            {
              v13 = (__int64 ***)(a1 + 72);
              v14 = *v13;
              while ( v14 != (__int64 **)v13 )
              {
                v15 = v9 + *((unsigned __int16 *)v14 + 20);
                if ( v15 < v9 )
                  return (unsigned int)-1073741675;
                v14 = (__int64 **)*v14;
                v9 = v15;
              }
              goto LABEL_6;
            }
          }
        }
        return (unsigned int)-1073741675;
      case 4u:
        v21 = (v4 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v21 >= v4 )
        {
          v22 = 24LL * *(unsigned int *)(a1 + 60);
          if ( is_mul_ok(0x18uLL, *(unsigned int *)(a1 + 60)) )
          {
            v9 = v22 + v21;
            if ( v22 + v21 >= v21 )
            {
              v23 = (__int64 ***)(a1 + 72);
              v24 = *v23;
              while ( v24 != (__int64 **)v23 )
              {
                v25 = v9 + *((unsigned __int16 *)v24 + 24);
                if ( v25 < v9 )
                  return (unsigned int)-1073741675;
                v24 = (__int64 **)*v24;
                v9 = v25;
              }
              goto LABEL_6;
            }
          }
        }
        return (unsigned int)-1073741675;
      case 5u:
        goto LABEL_21;
      case 6u:
        goto LABEL_3;
      case 0x10u:
LABEL_21:
        v16 = (v4 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v16 >= v4 )
        {
          v17 = 16LL * *(unsigned int *)(a1 + 60);
          if ( is_mul_ok(0x10uLL, *(unsigned int *)(a1 + 60)) )
          {
            v9 = v17 + v16;
            if ( v17 + v16 >= v16 )
            {
              v18 = (__int64 ***)(a1 + 72);
              v19 = *v18;
              while ( v19 != (__int64 **)v18 )
              {
                v20 = v9 + *((unsigned int *)v19 + 12);
                if ( v20 < v9 )
                  return (unsigned int)-1073741675;
                v19 = (__int64 **)*v19;
                v9 = v20;
              }
              goto LABEL_6;
            }
          }
        }
        return (unsigned int)-1073741675;
    }
    return (unsigned int)-1073741811;
  }
LABEL_3:
  v7 = (v4 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( v7 < v4 )
    return (unsigned int)-1073741675;
  v8 = 8LL * *(unsigned int *)(a1 + 60);
  if ( !is_mul_ok(8uLL, *(unsigned int *)(a1 + 60)) )
    return (unsigned int)-1073741675;
  v9 = v8 + v7;
  if ( v8 + v7 < v7 )
    return (unsigned int)-1073741675;
LABEL_6:
  *a2 = v9;
  return v3;
}
