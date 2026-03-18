/*
 * XREFs of CmGetVisibleSubkeyCount @ 0x140638AA8
 * Callers:
 *     CmDeleteKey @ 0x14063846C (CmDeleteKey.c)
 *     CmpQueryKeyDataFromNode @ 0x140651FC0 (CmpQueryKeyDataFromNode.c)
 *     CmpQueryKeyDataFromCache @ 0x140656CB0 (CmpQueryKeyDataFromCache.c)
 * Callees:
 *     CmEqualTrans @ 0x140631BF4 (CmEqualTrans.c)
 *     CmListGetNextElement @ 0x140633584 (CmListGetNextElement.c)
 */

__int64 __fastcall CmGetVisibleSubkeyCount(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  _QWORD **v6; // rbp
  char *NextElement; // rax
  char *v8; // rdi
  int v9; // eax
  _QWORD *v10; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_DWORD *)(a2 + 20) + *(_DWORD *)(a2 + 24);
  v10 = 0LL;
  if ( a1 && a3 )
  {
    v6 = (_QWORD **)(a1 + 208);
    while ( 1 )
    {
      NextElement = CmListGetNextElement(v6, &v10, 32);
      v8 = NextElement;
      if ( !NextElement )
        break;
      if ( CmEqualTrans(*((_QWORD *)NextElement + 7), a3) )
      {
        v9 = *((_DWORD *)v8 + 17);
        if ( v9 == 1 )
        {
          ++v4;
        }
        else if ( v9 == 3 )
        {
          --v4;
        }
      }
    }
  }
  return v4;
}
