/*
 * XREFs of ?clear_region@?$vector_facade@GV?$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801AE18C
 * Callers:
 *     ?ResetAccumulationBuffers@CDrawListEntryBuilder@@AEAAXXZ @ 0x1800377F4 (-ResetAccumulationBuffers@CDrawListEntryBuilder@@AEAAXXZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18006F024 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x180094470 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x1800997B0 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 * Callees:
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x180159B28 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 *     ??$move@V?$move_iterator@PEAG@std@@V?$checked_array_iterator@PEAG@stdext@@@std@@YA?AV?$checked_array_iterator@PEAG@stdext@@V?$move_iterator@PEAG@0@0V12@@Z @ 0x1801AD468 (--$move@V-$move_iterator@PEAG@std@@V-$checked_array_iterator@PEAG@stdext@@@std@@YA-AV-$checked_a.c)
 */

__int64 __fastcall detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,30,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r10
  __int64 v5; // r11
  __int64 v6; // r9
  const char *v7; // rcx
  unsigned __int64 v8; // r9
  bool v10; // sf
  __int64 result; // rax
  __int128 v12; // [rsp+20h] [rbp-40h] BYREF
  __int64 v13; // [rsp+30h] [rbp-30h]
  __int128 v14; // [rsp+40h] [rbp-20h] BYREF
  __int64 v15; // [rsp+50h] [rbp-10h]

  v3 = a1[1];
  v5 = *a1;
  v6 = v3 - *a1;
  v7 = (const char *)(a2 + a3);
  v8 = v6 >> 1;
  if ( a2 + a3 > v8 )
    std::_Xoverflow_error(v7);
  v13 = 0LL;
  *(_QWORD *)&v12 = v5;
  *((_QWORD *)&v12 + 1) = v8;
  if ( v7 != (const char *)v8 )
  {
    v10 = a2 < 0;
    if ( a2 )
    {
      if ( !v5 )
        goto LABEL_11;
      v10 = a2 < 0;
    }
    if ( v10 && a2 || a2 > 0 && v8 < a2 )
    {
LABEL_11:
      _o__invalid_parameter_noinfo_noreturn(v7, a2);
      __debugbreak();
    }
    v13 = a2;
    v15 = a2;
    v14 = v12;
    std::move<std::move_iterator<unsigned short *>,stdext::checked_array_iterator<unsigned short *>>(
      (__int64)&v12,
      (_WORD *)(v5 + 2LL * (_QWORD)v7),
      (_WORD *)(v5 + 2 * v8),
      (__int64 *)&v14);
    v3 = a1[1];
  }
  result = 2 * a3;
  a1[1] = v3 - 2 * a3;
  return result;
}
