/*
 * XREFs of ?SendCustomCursorAnimationCreatedCallback@SystemCursorController@@QEAAJI_K00@Z @ 0x180092D34
 * Callers:
 *     ?CreateCustomCursorShapeAnimation@SystemCursorService@@QEAAJIK_K@Z @ 0x180095F4C (-CreateCustomCursorShapeAnimation@SystemCursorService@@QEAAJIK_K@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??A?$map@IV?$shared_ptr@VCustomCursorApplication@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@2@@std@@QEAAAEAV?$shared_ptr@VCustomCursorApplication@@@1@AEBI@Z @ 0x180092EF4 (--A-$map@IV-$shared_ptr@VCustomCursorApplication@@@std@@U-$less@I@2@V-$allocator@U-$pair@$$CBIV-.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SystemCursorController::SendCustomCursorAnimationCreatedCallback(
        SystemCursorController *this,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  int v5; // r11d
  __int64 *v7; // rax
  __int64 *v9; // r10
  __int64 *v10; // rcx
  __int64 v11; // rax
  int v12; // ebx
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = (_DWORD)this + 80;
  v7 = (__int64 *)*((_QWORD *)this + 10);
  v9 = v7;
  v10 = (__int64 *)v7[1];
  while ( !*((_BYTE *)v10 + 25) )
  {
    if ( *((_DWORD *)v10 + 8) >= a2 )
    {
      v9 = v10;
      v10 = (__int64 *)*v10;
    }
    else
    {
      v10 = (__int64 *)v10[2];
    }
  }
  if ( v9 == v7 || a2 < *((_DWORD *)v9 + 8) )
    v9 = v7;
  if ( v9 == v7 )
  {
    v12 = -2147024809;
    v13 = 396LL;
  }
  else
  {
    v11 = std::map<unsigned int,std::shared_ptr<CustomCursorApplication>>::operator[](v5);
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v11 + 88LL)
                                                                                             + 8LL)
                                                                                 + 40LL))(
            *(_QWORD *)(*(_QWORD *)v11 + 88LL) + 8LL,
            a3,
            a4,
            a5);
    if ( v12 >= 0 )
      return 0LL;
    v13 = 392LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\system"
             "cursorcontroller.cpp",
    (const char *)(unsigned int)v12);
  return (unsigned int)v12;
}
