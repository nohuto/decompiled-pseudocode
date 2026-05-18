/*
 * XREFs of sub_18011598C @ 0x18011598C
 * Callers:
 *     sub_180116BE8 @ 0x180116BE8 (sub_180116BE8.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_180116258 @ 0x180116258 (sub_180116258.c)
 *     sub_180117B2C @ 0x180117B2C (sub_180117B2C.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18011598C(
        int a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6,
        _QWORD *a7,
        __int64 a8,
        __int64 a9)
{
  int v11; // r11d
  _QWORD *v12; // r10
  int v13; // eax
  __int64 result; // rax
  __int64 v15; // rbx
  unsigned int v16; // esi
  unsigned int v17; // r15d
  unsigned int v18; // r14d
  unsigned int v19; // edi
  char v20; // al
  int v21; // [rsp+40h] [rbp-C8h]
  unsigned int v22; // [rsp+44h] [rbp-C4h]
  _QWORD v24[5]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+A0h] [rbp-68h] BYREF

  v11 = a1;
  v12 = a7;
  v13 = 3;
  if ( a6 == 1 )
    v13 = 1;
  v21 = v13;
  result = 0LL;
  if ( a6 == 1 )
    result = 2LL;
  v15 = 0LL;
  v16 = 0;
  v22 = a4 - result;
  if ( a4 != (_DWORD)result )
  {
    do
    {
      v17 = *(unsigned __int16 *)(a3 + 2 * v15);
      if ( v17 >= a2
        || (v18 = *(unsigned __int16 *)(a3 + 2LL * (unsigned int)(v15 + 1)), v18 >= a2)
        || (v19 = *(unsigned __int16 *)(a3 + 2LL * (unsigned int)(v15 + 2)), v19 >= a2) )
      {
        sub_18000E498(v24);
        sub_180116258(pExceptionObject, v24);
        throw (Spectre::Framework::GeometryProcessingException *)pExceptionObject;
      }
      if ( *v12 && v16 == 100 * (v16 / 0x64) )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v12 + 40LL))(*v12);
        v11 = a1;
      }
      v20 = a6 == 1 && (v15 & 1) != 0;
      result = sub_180117B2C(v11, a5, v17, v18, v19, v20, a8, a9);
      v15 = (unsigned int)(v21 + v15);
      ++v16;
      v12 = a7;
      v11 = a1;
    }
    while ( (unsigned int)v15 < v22 );
  }
  return result;
}
