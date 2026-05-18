/*
 * XREFs of sub_18011567C @ 0x18011567C
 * Callers:
 *     sub_1801166C4 @ 0x1801166C4 (sub_1801166C4.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_180116258 @ 0x180116258 (sub_180116258.c)
 *     sub_1801165C0 @ 0x1801165C0 (sub_1801165C0.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18011567C(int a1, unsigned int a2, __int64 a3, int a4, int a5, _QWORD *a6, __int64 a7)
{
  int v9; // r11d
  _QWORD *v10; // r10
  int v11; // eax
  __int64 result; // rax
  __int64 v13; // rbx
  unsigned int v14; // esi
  unsigned int v15; // r15d
  unsigned int v16; // r14d
  unsigned int v17; // edi
  char v18; // al
  int v19; // [rsp+30h] [rbp-B8h]
  unsigned int v20; // [rsp+34h] [rbp-B4h]
  _QWORD v22[5]; // [rsp+58h] [rbp-90h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+80h] [rbp-68h] BYREF

  v9 = a1;
  v10 = a6;
  v11 = 3;
  if ( a5 == 1 )
    v11 = 1;
  v19 = v11;
  result = 0LL;
  if ( a5 == 1 )
    result = 2LL;
  v13 = 0LL;
  v14 = 0;
  v20 = a4 - result;
  if ( a4 != (_DWORD)result )
  {
    do
    {
      v15 = *(unsigned __int16 *)(a3 + 2 * v13);
      if ( v15 >= a2
        || (v16 = *(unsigned __int16 *)(a3 + 2LL * (unsigned int)(v13 + 1)), v16 >= a2)
        || (v17 = *(unsigned __int16 *)(a3 + 2LL * (unsigned int)(v13 + 2)), v17 >= a2) )
      {
        sub_18000E498(v22);
        sub_180116258(pExceptionObject, v22);
        throw (Spectre::Framework::GeometryProcessingException *)pExceptionObject;
      }
      if ( *v10 && v14 == 100 * (v14 / 0x64) )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v10 + 40LL))(*v10);
        v9 = a1;
      }
      v18 = a5 == 1 && (v13 & 1) != 0;
      result = sub_1801165C0(v9, v15, v16, v17, v18, a7);
      v13 = (unsigned int)(v19 + v13);
      ++v14;
      v10 = a6;
      v9 = a1;
    }
    while ( (unsigned int)v13 < v20 );
  }
  return result;
}
