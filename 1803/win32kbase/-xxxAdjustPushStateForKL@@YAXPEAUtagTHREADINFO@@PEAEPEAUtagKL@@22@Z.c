/*
 * XREFs of ?xxxAdjustPushStateForKL@@YAXPEAUtagTHREADINFO@@PEAEPEAUtagKL@@22@Z @ 0x1C0129B00
 * Callers:
 *     ?xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z @ 0x1C012A2D4 (-xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z.c)
 * Callees:
 *     ?xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z @ 0x1C0129924 (-xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z.c)
 */

void __fastcall xxxAdjustPushStateForKL(
        struct tagTHREADINFO *a1,
        unsigned __int8 *a2,
        struct tagKL *a3,
        struct tagKL *a4,
        struct tagKL *a5)
{
  __int64 v5; // rax
  unsigned __int8 *v9; // rbx
  unsigned __int8 i; // r9
  unsigned __int8 v11; // r10
  unsigned __int8 v12; // r11

  v5 = *((_QWORD *)a3 + 6);
  if ( v5 )
  {
    if ( *((_QWORD *)a4 + 6) )
    {
      v9 = ***(unsigned __int8 ****)(v5 + 32);
      for ( i = *v9; *v9; i = *v9 )
      {
        v11 = 0;
        v12 = 0;
        if ( ((unsigned __int8)(1 << (i & 7)) & a2[(unsigned __int64)i >> 3]) == 0 )
        {
          switch ( i )
          {
            case 0x10u:
              v11 = -96;
              v12 = -95;
              break;
            case 0x11u:
              v11 = -94;
              v12 = -93;
              break;
            case 0x12u:
              v11 = -92;
              v12 = -91;
              break;
          }
          xxxAdjustPushState(a1, v11, v12, a4, a5);
          a2[(unsigned __int64)*v9 >> 3] |= 1 << (*v9 & 7);
        }
        v9 += 2;
      }
    }
  }
}
