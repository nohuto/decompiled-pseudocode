/*
 * XREFs of ?GetApplicationByWindowInternal@CApplicationManager@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x18003ADD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CApplicationManager::GetApplicationByWindowInternal(
        CApplicationManager *this,
        HWND a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 v9; // rbx
  int v10; // r14d
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // ebx
  __int64 (__fastcall ***v14)(_QWORD, GUID *, _QWORD); // rcx
  __int64 (__fastcall ***v15)(_QWORD, const struct _GUID *, void **); // rcx
  HWND v17; // [rsp+40h] [rbp-20h] BYREF
  __int64 v18; // [rsp+48h] [rbp-18h]
  char v19; // [rsp+50h] [rbp-10h]
  __int64 v20; // [rsp+A0h] [rbp+40h] BYREF
  HWND v21; // [rsp+A8h] [rbp+48h]
  __int64 (__fastcall ***v22)(_QWORD, const struct _GUID *, void **); // [rsp+B8h] [rbp+58h] BYREF

  v21 = a2;
  *a4 = 0LL;
  v22 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( *((_QWORD *)this + 50) )
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)(*((_QWORD *)this + 49) + 8 * v8);
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      v10 = -1;
      v20 = 0LL;
      if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v9)(
             v9,
             &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
             &v20) >= 0 )
      {
        v17 = v21;
        v18 = 0LL;
        v19 = 0;
        v10 = ((*(unsigned __int8 (__fastcall **)(__int64, HWND *, __int64))(*(_QWORD *)v20 + 296LL))(v20, &v17, 2LL) != 0)
            - 1;
        v11 = v18;
        if ( v18 )
        {
          v18 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        }
      }
      v12 = v20;
      if ( v20 )
      {
        v20 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      if ( !v10 )
        break;
      if ( (unsigned __int64)++v8 >= *((_QWORD *)this + 50) )
        goto LABEL_18;
    }
    v7 = v8;
    v13 = 0;
  }
  else
  {
LABEL_18:
    v13 = -2147319765;
  }
  if ( v13 >= 0 )
  {
    v14 = *(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD))(*((_QWORD *)this + 49) + 8 * v7);
    v13 = (**v14)(v14, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v22);
    if ( v13 >= 0 )
      v13 = (**v22)(v22, a3, a4);
  }
  v15 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, const struct _GUID *, void **)))(*v15)[2])(v15);
  }
  return (unsigned int)v13;
}
