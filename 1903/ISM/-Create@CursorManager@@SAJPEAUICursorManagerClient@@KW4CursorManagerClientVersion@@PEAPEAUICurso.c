/*
 * XREFs of ?Create@CursorManager@@SAJPEAUICursorManagerClient@@KW4CursorManagerClientVersion@@PEAPEAUICursorManager@@@Z @ 0x18010E3FC
 * Callers:
 *     ?Initialize@SystemCursorService@@QEAAJXZ @ 0x1800CD42C (-Initialize@SystemCursorService@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180014F60 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??0CursorManager@@IEAA@PEAUICursorManagerClient@@KW4CursorManagerClientVersion@@@Z @ 0x18010E1E0 (--0CursorManager@@IEAA@PEAUICursorManagerClient@@KW4CursorManagerClientVersion@@@Z.c)
 *     ?Initialize@CursorManager@@IEAAJXZ @ 0x18010E4E8 (-Initialize@CursorManager@@IEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CursorManager::Create(__int64 a1, int a2, __int64 a3, CursorManager **a4)
{
  CursorManager *v7; // rbx
  unsigned int v8; // edi
  __int64 v9; // rdx
  void *v10; // rax
  CursorManager *v11; // rax
  CursorManager *v12; // rsi
  int v13; // eax
  unsigned __int64 v14; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v7 = 0LL;
  if ( !a4 )
  {
    v8 = -2147024809;
    v9 = 116LL;
LABEL_10:
    v14 = v8;
    goto LABEL_11;
  }
  v10 = RefCountedObject::operator new(0x60uLL);
  if ( !v10 )
  {
    v7 = 0LL;
    goto LABEL_9;
  }
  v11 = (CursorManager *)CursorManager::CursorManager((__int64)v10, a1, a2);
  v12 = v11;
  v7 = v11;
  if ( !v11 )
  {
LABEL_9:
    v8 = -2147024882;
    v9 = 119LL;
    goto LABEL_10;
  }
  v13 = CursorManager::Initialize(v11);
  v8 = v13;
  if ( v13 >= 0 )
  {
    v7 = 0LL;
    *a4 = v12;
    v8 = 0;
    goto LABEL_12;
  }
  v14 = (unsigned int)v13;
  v9 = 121LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\manager\\cursormanager.cpp",
    (const char *)v14);
LABEL_12:
  if ( v7 )
    (*(void (__fastcall **)(CursorManager *))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
