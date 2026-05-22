/*
 * XREFs of ??$_Move_unchecked1@PEAVEdge@@PEAV1@@std@@YAPEAVEdge@@PEAV1@00U_General_ptr_iterator_tag@0@@Z @ 0x1801012BC
 * Callers:
 *     ?erase@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VEdge@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VEdge@@@std@@@std@@@2@@Z @ 0x1801027C4 (-erase@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@QEAA-AV-$_Vector_iterator@V-$_Vector_val@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800672AC (-InternalRelease@-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800888E8 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

__int64 __fastcall std::_Move_unchecked1<Edge *,Edge *>(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 != a2 )
  {
    v5 = a1 + 40;
    do
    {
      *(_QWORD *)a3 = *(_QWORD *)(v5 - 40);
      std::wstring::operator=((_OWORD *)(a3 + 8), v5 - 32);
      v6 = 0LL;
      if ( &v10 != (__int64 *)v5 )
      {
        v6 = *(_QWORD *)v5;
        *(_QWORD *)v5 = 0LL;
      }
      v7 = *(_QWORD *)(a3 + 40);
      *(_QWORD *)(a3 + 40) = v6;
      v10 = v7;
      Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::InternalRelease(&v10);
      *(_DWORD *)(a3 + 48) = *(_DWORD *)(v5 + 8);
      *(_OWORD *)(a3 + 52) = *(_OWORD *)(v5 + 12);
      *(_OWORD *)(a3 + 68) = *(_OWORD *)(v5 + 28);
      *(_QWORD *)(a3 + 84) = *(_QWORD *)(v5 + 44);
      *(_DWORD *)(a3 + 92) = *(_DWORD *)(v5 + 52);
      v8 = *(_DWORD *)(v5 + 56);
      v5 += 104LL;
      *(_DWORD *)(a3 + 96) = v8;
      a3 += 104LL;
    }
    while ( v5 - 40 != a2 );
  }
  return a3;
}
