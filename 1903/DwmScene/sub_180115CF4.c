/*
 * XREFs of sub_180115CF4 @ 0x180115CF4
 * Callers:
 *     sub_18011735C @ 0x18011735C (sub_18011735C.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_180116258 @ 0x180116258 (sub_180116258.c)
 *     sub_1801165C0 @ 0x1801165C0 (sub_1801165C0.c)
 *     sub_180117B2C @ 0x180117B2C (sub_180117B2C.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180115CF4(
        int a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6,
        _QWORD *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  int v12; // r11d
  _QWORD *v13; // r10
  int v14; // eax
  char v15; // bl
  __int64 result; // rax
  __int64 v17; // rdi
  unsigned int v18; // r15d
  unsigned int v19; // r12d
  unsigned int v20; // ebp
  unsigned int v21; // esi
  int v22; // [rsp+40h] [rbp-D8h]
  unsigned int v23; // [rsp+44h] [rbp-D4h]
  _QWORD v25[4]; // [rsp+80h] [rbp-98h] BYREF
  _BYTE pExceptionObject[120]; // [rsp+A0h] [rbp-78h] BYREF

  v12 = a1;
  v13 = a7;
  v14 = 3;
  v15 = 1;
  if ( a6 == 1 )
    v14 = 1;
  v22 = v14;
  result = 0LL;
  if ( a6 == 1 )
    result = 2LL;
  v17 = 0LL;
  v18 = 0;
  v23 = a4 - result;
  if ( a4 != (_DWORD)result )
  {
    do
    {
      v19 = *(unsigned __int16 *)(a3 + 2 * v17);
      if ( v19 >= a2
        || (v20 = *(unsigned __int16 *)(a3 + 2LL * (unsigned int)(v17 + 1)), v20 >= a2)
        || (v21 = *(unsigned __int16 *)(a3 + 2LL * (unsigned int)(v17 + 2)), v21 >= a2) )
      {
        sub_18000E498(v25);
        sub_180116258(pExceptionObject, v25);
        throw (Spectre::Framework::GeometryProcessingException *)pExceptionObject;
      }
      if ( *v13 && v18 == 100 * (v18 / 0x64) )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v13 + 40LL))(*v13);
        v12 = a1;
      }
      if ( a6 != 1 || (v17 & 1) == 0 )
        v15 = 0;
      sub_180117B2C(v12, a5, v19, v20, v21, v15, a9, a10);
      result = sub_1801165C0(a1, v19, v20, v21, v15, a8);
      v17 = (unsigned int)(v22 + v17);
      v15 = 1;
      ++v18;
      v13 = a7;
      v12 = a1;
    }
    while ( (unsigned int)v17 < v23 );
  }
  return result;
}
