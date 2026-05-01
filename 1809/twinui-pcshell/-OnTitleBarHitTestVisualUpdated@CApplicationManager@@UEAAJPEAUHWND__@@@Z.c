/*
 * XREFs of ?OnTitleBarHitTestVisualUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z @ 0x180059750
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CApplicationManager::OnTitleBarHitTestVisualUpdated(CApplicationManager *this, HWND a2)
{
  int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rbx
  int v9; // r14d
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v18; // rdx
  _QWORD v19[5]; // [rsp+20h] [rbp-40h] BYREF
  HWND v20; // [rsp+48h] [rbp-18h] BYREF
  __int64 v21; // [rsp+50h] [rbp-10h]
  char v22; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  __int64 v24; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v25; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v26; // [rsp+B8h] [rbp+58h] BYREF

  v19[1] = -2LL;
  v4 = -2147467261;
  v19[0] = 0LL;
  if ( *((_QWORD *)this + 33) )
  {
    v24 = 0LL;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v5 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    v24 = 0LL;
    v19[2] = 0LL;
    v6 = 0LL;
    v7 = 0LL;
    if ( *((_QWORD *)this + 37) )
    {
      v19[3] = 0LL;
      while ( 1 )
      {
        v8 = *(_QWORD *)(*((_QWORD *)this + 36) + 8 * v7);
        v19[4] = v8;
        if ( v8 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
        v9 = -1;
        v25 = 0LL;
        if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v8)(
               v8,
               &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
               &v25) >= 0 )
        {
          v20 = a2;
          v21 = 0LL;
          v22 = 0;
          v9 = ((*(unsigned __int8 (__fastcall **)(__int64, HWND *, _QWORD))(*(_QWORD *)v25 + 296LL))(v25, &v20, 0LL) != 0)
             - 1;
          v10 = v21;
          if ( v21 )
          {
            v21 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
          }
        }
        v11 = v25;
        if ( v25 )
        {
          v25 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        if ( !v9 )
          break;
        if ( (unsigned __int64)++v7 >= *((_QWORD *)this + 37) )
          goto LABEL_30;
      }
      v6 = v7;
      v4 = 0;
    }
    else
    {
LABEL_30:
      v4 = -2147319765;
    }
    if ( v4 >= 0 )
    {
      v12 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 36) + 8 * v6);
      v4 = (**v12)(v12, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v24);
      if ( v4 >= 0 )
        v4 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v24 + 496LL))(v24, v19);
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v13 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    if ( v4 >= 0 )
    {
      v26 = 0LL;
      v14 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v19[0] + 144LL))(v19[0], &v26);
      v4 = v14;
      if ( v14 < 0 )
      {
        v18 = 8253LL;
      }
      else
      {
        v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 96LL))(v26);
        v4 = v14;
        if ( v14 >= 0 )
        {
          v4 = 0;
          goto LABEL_24;
        }
        v18 = 8254LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v14);
LABEL_24:
      v15 = v26;
      if ( v26 )
      {
        v26 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
    }
  }
  v16 = v19[0];
  if ( v19[0] )
  {
    v19[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return (unsigned int)v4;
}
