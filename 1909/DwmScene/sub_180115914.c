/*
 * XREFs of sub_180115914 @ 0x180115914
 * Callers:
 *     sub_1801167D4 @ 0x1801167D4 (sub_1801167D4.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_180116368 @ 0x180116368 (sub_180116368.c)
 *     sub_1801166D0 @ 0x1801166D0 (sub_1801166D0.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180115914(int a1, unsigned int a2, __int64 a3, int a4, int a5, _QWORD *a6, __int64 a7)
{
  int v9; // r10d
  _QWORD *v10; // r8
  __int64 v11; // r11
  int v12; // eax
  __int64 result; // rax
  __int64 v14; // rbx
  unsigned int v15; // esi
  unsigned int v16; // r12d
  unsigned int v17; // ebp
  unsigned int v18; // r14d
  char v19; // al
  int v20; // [rsp+30h] [rbp-B8h]
  unsigned int v21; // [rsp+34h] [rbp-B4h]
  _QWORD v23[5]; // [rsp+58h] [rbp-90h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+80h] [rbp-68h] BYREF

  v9 = a1;
  v10 = a6;
  v11 = a7;
  v12 = 3;
  if ( a5 == 1 )
    v12 = 1;
  v20 = v12;
  result = 0LL;
  if ( a5 == 1 )
    result = 2LL;
  v14 = 0LL;
  v15 = 0;
  v21 = a4 - result;
  if ( a4 != (_DWORD)result )
  {
    do
    {
      v16 = *(_DWORD *)(a3 + 4 * v14);
      v17 = *(_DWORD *)(a3 + 4LL * (unsigned int)(v14 + 1));
      v18 = *(_DWORD *)(a3 + 4LL * (unsigned int)(v14 + 2));
      if ( v16 >= a2 || v17 >= a2 || v18 >= a2 )
      {
        sub_18000E4E8(v23);
        sub_180116368(pExceptionObject, v23);
        throw (Spectre::Framework::GeometryProcessingException *)pExceptionObject;
      }
      if ( *v10 && v15 == 100 * (v15 / 0x64) )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v10 + 40LL))(*v10);
        v9 = a1;
        v11 = a7;
      }
      v19 = a5 == 1 && (v14 & 1) != 0;
      result = sub_1801166D0(v9, v16, v17, v18, v19, v11);
      v14 = (unsigned int)(v20 + v14);
      ++v15;
      v10 = a6;
      v9 = a1;
      v11 = a7;
    }
    while ( (unsigned int)v14 < v21 );
  }
  return result;
}
