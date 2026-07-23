/*
 * XREFs of MiFindEmptyAddressRangeDown @ 0x140699F10
 * Callers:
 *     MiSelectUserAddress @ 0x1405F3360 (MiSelectUserAddress.c)
 * Callees:
 *     MiFindEmptyAddressRangeDownTree @ 0x14069A030 (MiFindEmptyAddressRangeDownTree.c)
 */

__int64 __fastcall MiFindEmptyAddressRangeDown(
        __int64 a1,
        unsigned __int64 a2,
        int a3,
        int a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        char a7,
        __int64 a8)
{
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rbx
  __int64 v13; // r14
  _KPROCESS *Process; // rdx
  int v15; // eax
  unsigned int v16; // r12d
  int EmptyAddressRangeDownTree; // eax
  int v18; // ecx
  unsigned __int64 v20; // rax
  int v21; // [rsp+80h] [rbp+18h]
  int v22; // [rsp+98h] [rbp+30h]

  v21 = a3;
  if ( a6 - a5 + 1 >= a2 )
  {
    v11 = a6 + 1;
    v12 = *(_QWORD *)(a1 + 40);
    v13 = a6 + 1;
    Process = KeGetCurrentThread()->ApcState.Process;
    v22 = (int)Process;
    if ( a6 + 1 > *(_QWORD *)(a1 + 32) )
      v13 = *(_QWORD *)(a1 + 32);
    v15 = *(_DWORD *)(a1 + 48);
    v16 = (unsigned __int8)v15;
    if ( !(_BYTE)v15 )
      v16 = 1;
    if ( v12 < a5 )
      v12 = a5;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v12 >= a6 || a6 - v12 + 1 < a2 )
        {
          v18 = -1073741801;
        }
        else
        {
          EmptyAddressRangeDownTree = MiFindEmptyAddressRangeDownTree((int)Process + 1576, a2, a3, a4, v12, v13, a8);
          a3 = v21;
          v18 = EmptyAddressRangeDownTree;
          LODWORD(Process) = v22;
        }
        if ( v18 >= 0 )
          return (unsigned int)v18;
        if ( v13 != v11 )
          break;
        if ( (a7 & 2) == 0 )
        {
          v20 = 0x10000LL;
          goto LABEL_21;
        }
LABEL_20:
        v20 = (unsigned __int64)v16 << 16;
LABEL_21:
        if ( v20 < a5 )
          v20 = a5;
        if ( v20 >= v12 )
          return (unsigned int)v18;
        v12 = v20;
      }
      if ( (a7 & 2) != 0 )
        goto LABEL_20;
      v13 = a6 + 1;
    }
  }
  return 3221225495LL;
}
