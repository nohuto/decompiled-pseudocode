/*
 * XREFs of ?OnColorChanged@CPrimitiveColor@@AEAAXXZ @ 0x1801EE0B0
 * Callers:
 *     ?ProcessSetValue@CPrimitiveColor@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVECOLOR_SETVALUE@@@Z @ 0x1801EE148 (-ProcessSetValue@CPrimitiveColor@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVECOLOR_SETVALUE.c)
 *     ?SetProperty@CPrimitiveColor@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801EE210 (-SetProperty@CPrimitiveColor@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180057EDC (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CPrimitiveColor::OnColorChanged(CPrimitiveColor *this)
{
  __int64 i; // rbp
  __int64 v3; // rcx
  __int64 v4; // rdi
  CD2DContext *v5; // rbx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 22); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 8) + 8 * i);
    v4 = *(_QWORD *)(v3 + 104);
    v5 = *(CD2DContext **)(*(_QWORD *)(v3 + 24) + 24LL);
    CD2DContext::EnsureBeginDraw(v5);
    (*(void (__fastcall **)(_QWORD *, __int64, char *))(**((_QWORD **)v5 + 30) + 48LL))(
      *((_QWORD **)v5 + 30),
      v4,
      (char *)this + 112);
  }
  (*(void (__fastcall **)(char *, _QWORD, _QWORD))(*((_QWORD *)this + 1) + 64LL))((char *)this + 8, 0LL, 0LL);
}
