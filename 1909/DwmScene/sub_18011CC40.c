/*
 * XREFs of sub_18011CC40 @ 0x18011CC40
 * Callers:
 *     <none>
 * Callees:
 *     sub_18011CF00 @ 0x18011CF00 (sub_18011CF00.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18011CC40(void *a1, void **a2, void **a3)
{
  void *v3; // rbx
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 result; // rax
  void *v7; // rbx
  _QWORD v8[2]; // [rsp+20h] [rbp-28h] BYREF
  void **v9; // [rsp+30h] [rbp-18h]
  __int64 v10; // [rsp+38h] [rbp-10h]

  v10 = -2LL;
  v9 = a2;
  v3 = a2[1];
  try
  {
    v4 = operator new(0x18uLL);
    v8[0] = v4;
    v5 = 0LL;
    if ( v4 )
    {
      *v4 = 0LL;
      v4[1] = 0LL;
      v4[2] = 0LL;
      v5 = sub_18011CF00(v4, *(_QWORD *)(*(_QWORD *)v3 + 8LL), *(unsigned int *)(*(_QWORD *)v3 + 16LL));
    }
    **(_QWORD **)v3 = v5;
    result = 1LL;
  }
  catch ( ... )
  {
    v7 = *v9;
    v8[0] = 0LL;
    v8[1] = 0LL;
    __ExceptionPtrCreate(v8);
    __ExceptionPtrCurrentException(v8);
    __ExceptionPtrAssign(v7, v8);
    __ExceptionPtrDestroy(v8);
    return 0LL;
  }
  return result;
}
