/*
 * XREFs of ?HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180009550
 * Callers:
 *     ?HampExtendedExecutionCheckPolicy@@YAJPEAXPEAU_RM_PSM_HOST_INFO@@W4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180009350 (-HampExtendedExecutionCheckPolicy@@YAJPEAXPEAU_RM_PSM_HOST_INFO@@W4_HAM_EXTENDED_EXECUTION_REASO.c)
 * Callees:
 *     memset_0 @ 0x180049A1A (memset_0.c)
 */

void __fastcall HampActivityPropertiesInitialize(char *a1, char *a2, struct _HAM_ACTIVITY_PROPERTIES *a3)
{
  _WORD *v6; // rax
  __int64 v7; // r10
  signed __int64 v8; // rbx
  __int64 v9; // r9
  __int16 v10; // cx
  _WORD *v11; // rcx
  signed __int64 v12; // rdi
  __int16 v13; // ax

  memset_0(a3, 0, 0x188uLL);
  v6 = (_WORD *)((char *)a3 + 12);
  *(_DWORD *)a3 = 8256;
  v7 = 64LL;
  v8 = a1 - ((char *)a3 + 12);
  v9 = 64LL;
  while ( v9 != -2147483582 )
  {
    v10 = *(_WORD *)((char *)v6 + v8);
    if ( !v10 )
      break;
    *v6++ = v10;
    if ( !--v9 )
    {
      --v6;
      break;
    }
  }
  v11 = (_WORD *)((char *)a3 + 140);
  *v6 = 0;
  v12 = a2 - ((char *)a3 + 140);
  while ( v7 != -2147483582 )
  {
    v13 = *(_WORD *)((char *)v11 + v12);
    if ( !v13 )
      break;
    *v11++ = v13;
    if ( !--v7 )
    {
      --v11;
      break;
    }
  }
  *v11 = 0;
  *((_DWORD *)a3 + 67) = 5;
  *((_DWORD *)a3 + 69) = -1;
  memset_0((char *)a3 + 280, 0, 0x68uLL);
  memset_0((char *)a3 + 320, 0, 0x38uLL);
  *((_DWORD *)a3 + 92) = 1;
  *((_QWORD *)a3 + 44) = -1LL;
  *((_QWORD *)a3 + 43) = -1LL;
  *((_QWORD *)a3 + 42) = -1LL;
  *((_QWORD *)a3 + 41) = -1LL;
  *((_DWORD *)a3 + 92) |= 0x20u;
  *((_QWORD *)a3 + 40) |= 0x80uLL;
}
