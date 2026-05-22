/*
 * XREFs of ?erase@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VEdge@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VEdge@@@std@@@std@@@2@@Z @ 0x1800CBF98
 * Callers:
 *     ?OnDisconnected@EdgyControllerClientProxy@@MEAAJXZ @ 0x1800276D0 (-OnDisconnected@EdgyControllerClientProxy@@MEAAJXZ.c)
 *     ?Remove@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1800CB260 (-Remove@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800278A4 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800CC184 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::vector<Edge>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 *v3; // rsi
  __int64 *v4; // r14
  __int64 *v8; // rdi
  __int64 v9; // rcx
  __int64 *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  _QWORD *result; // rax
  char v14; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(__int64 **)(a1 + 8);
  v4 = (__int64 *)(a3 + 104);
  if ( (__int64 *)(a3 + 104) != v3 )
  {
    v8 = (__int64 *)(a3 + 40);
    do
    {
      *(v8 - 5) = *v4;
      std::wstring::operator=(v8 - 4, v8 + 9);
      v9 = 0LL;
      v10 = v8 + 13;
      if ( &v14 != (char *)(v8 + 13) )
      {
        v9 = *v10;
        *v10 = 0LL;
      }
      v11 = *v8;
      *v8 = v9;
      if ( v11 )
        (**(void (__fastcall ***)(__int64))(v11 + 16))(v11 + 16);
      v4 += 13;
      *((_DWORD *)v8 + 2) = *((_DWORD *)v8 + 28);
      *(_OWORD *)((char *)v8 + 12) = *(_OWORD *)((char *)v8 + 116);
      *(_OWORD *)((char *)v8 + 28) = *(_OWORD *)((char *)v8 + 132);
      *(__int64 *)((char *)v8 + 44) = *(__int64 *)((char *)v8 + 148);
      *((_DWORD *)v8 + 13) = *((_DWORD *)v8 + 39);
      *((_DWORD *)v8 + 14) = *((_DWORD *)v8 + 40);
      v8 += 13;
    }
    while ( v4 != v3 );
    v3 = *(__int64 **)(a1 + 8);
  }
  v12 = *(v3 - 8);
  if ( v12 )
  {
    *(v3 - 8) = 0LL;
    (**(void (__fastcall ***)(__int64))(v12 + 16))(v12 + 16);
  }
  std::wstring::~wstring((__int64)(v3 - 12));
  *(_QWORD *)(a1 + 8) -= 104LL;
  result = a2;
  *a2 = a3;
  return result;
}
