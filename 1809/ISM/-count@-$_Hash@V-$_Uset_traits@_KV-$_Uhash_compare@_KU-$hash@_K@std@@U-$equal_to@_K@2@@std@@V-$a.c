/*
 * XREFs of ?count@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEBA_KAEB_K@Z @ 0x180097B78
 * Callers:
 *     ?CreateCustomCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K@Z @ 0x180092500 (-CreateCustomCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStu.c)
 *     ?DestroyCustomCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K@Z @ 0x1800929B0 (-DestroyCustomCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerSt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::count(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v2; // r10
  unsigned __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rbx
  _QWORD *v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // r8
  _QWORD *v12; // rdi
  _QWORD *i; // rax
  _QWORD *v14; // rcx
  __int64 v15; // r11
  _QWORD *v16; // r8
  _QWORD *v17; // rcx
  _QWORD *v18; // rdx

  v2 = 0LL;
  v4 = 0LL;
  v5 = 0xCBF29CE484222325uLL;
  do
  {
    v6 = *((unsigned __int8 *)a2 + v4++);
    v5 = 0x100000001B3LL * (v6 ^ v5);
  }
  while ( v4 < 8 );
  v7 = a1[3];
  v8 = (_QWORD *)a1[1];
  v9 = v5 & a1[6];
  v10 = 2 * (v5 & a1[6]);
  v11 = 2 * v9;
  v12 = *(_QWORD **)(v7 + 16 * v9);
  for ( i = *(_QWORD **)(v7 + 8 * v10); ; i = (_QWORD *)*i )
  {
    if ( v12 == v8 )
      v14 = v8;
    else
      v14 = **(_QWORD ***)(v7 + 8 * v11 + 8);
    if ( i == v14 )
      goto LABEL_18;
    v15 = *a2;
    if ( i[2] == *a2 )
      break;
  }
  v16 = i;
  v17 = i;
  while ( 1 )
  {
    v18 = v12 == v8 ? v8 : **(_QWORD ***)(v7 + 8 * v10 + 8);
    if ( i == v18 || v15 != i[2] )
      break;
    i = (_QWORD *)*i;
  }
  if ( v16 == i )
  {
LABEL_18:
    v17 = v8;
    i = v8;
  }
  while ( v17 != i )
  {
    v17 = (_QWORD *)*v17;
    ++v2;
  }
  return v2;
}
