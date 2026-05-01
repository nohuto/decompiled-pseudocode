/*
 * XREFs of ?HampActivityPropertiesInitializeByClass@@YGXPBGW4_HAM_ACTIVITY_CLASS@@PAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x10006820
 * Callers:
 *     _HamPopulateActivityPropertiesByClass@12 @ 0x100067D0 (_HamPopulateActivityPropertiesByClass@12.c)
 * Callees:
 *     ?HampActivityPropertiesRemoveCommit@@YGXPAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x10006A00 (-HampActivityPropertiesRemoveCommit@@YGXPAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     _memset @ 0x1000D154 (_memset.c)
 */

void __fastcall HampActivityPropertiesInitializeByClass(int a1, int a2, unsigned int *a3)
{
  wchar_t *v3; // edi
  _WORD *v5; // ecx
  int v6; // edx
  int v7; // esi
  __int16 v8; // ax
  int v9; // edx
  _WORD *v10; // eax
  int v11; // edi
  __int16 v12; // cx
  unsigned int v13; // eax
  unsigned int v14; // eax
  struct _HAM_ACTIVITY_PROPERTIES *v15; // [esp+0h] [ebp-10h]

  v3 = off_10001A1C[a2];
  memset(a3 + 1, 0, 0x184u);
  v5 = a3 + 3;
  *a3 = 8397888;
  v6 = 64;
  v7 = a1 - (_DWORD)(a3 + 3);
  while ( v6 != -2147483582 )
  {
    v8 = *(_WORD *)((char *)v5 + v7);
    if ( !v8 )
      break;
    *v5++ = v8;
    if ( !--v6 )
    {
      --v5;
      break;
    }
  }
  v9 = 64;
  *v5 = 0;
  v10 = a3 + 35;
  v11 = (char *)v3 - (char *)(a3 + 35);
  while ( v9 != -2147483582 )
  {
    v12 = *(_WORD *)((char *)v10 + v11);
    if ( !v12 )
      break;
    *v10++ = v12;
    if ( !--v9 )
    {
      --v10;
      break;
    }
  }
  *v10 = 0;
  a3[67] = 5;
  a3[69] = -1;
  memset(a3 + 70, 0, 0x68u);
  memset(a3 + 80, 0, 0x38u);
  a3[92] = 1;
  a3[88] = -1;
  a3[89] = -1;
  a3[86] = -1;
  a3[87] = -1;
  a3[84] = -1;
  a3[85] = -1;
  a3[82] = -1;
  a3[83] = -1;
  v13 = a3[81];
  a3[92] |= 0x20u;
  a3[80] |= 0x80u;
  a3[81] = v13;
  if ( a2 )
  {
    switch ( a2 )
    {
      case 1:
      case 3:
        a3[69] = 0;
        a3[1] |= 4u;
        a3[2] |= 8u;
        a3[1] |= 1u;
        a3[2] |= 1u;
        a3[1] |= 8u;
        a3[2] |= 0x10u;
        break;
      case 2:
        a3[1] |= 1u;
        a3[2] |= 1u;
        a3[1] |= 8u;
        a3[2] |= 0x10u;
        a3[67] = 3;
        a3[68] = 300;
        break;
      case 4:
        a3[69] = 0;
        HampActivityPropertiesRemoveCommit(v15);
        break;
      case 5:
        a3[69] = 0;
        HampActivityPropertiesRemoveCommit(v15);
        *a3 &= ~0x400u;
        break;
      case 6:
        a3[69] = 0;
        HampActivityPropertiesRemoveCommit(v15);
        v14 = *a3 & 0xFFFFEBFF | 0x1000;
        goto LABEL_13;
      default:
        return;
    }
  }
  else
  {
    a3[69] = 0;
    v14 = *a3 & 0xFE7FBE7F | 0x1804100;
LABEL_13:
    *a3 = v14;
  }
}
