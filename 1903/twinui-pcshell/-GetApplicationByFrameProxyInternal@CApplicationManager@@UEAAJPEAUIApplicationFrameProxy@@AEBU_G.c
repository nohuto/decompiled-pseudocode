/*
 * XREFs of ?GetApplicationByFrameProxyInternal@CApplicationManager@@UEAAJPEAUIApplicationFrameProxy@@AEBU_GUID@@PEAPEAX@Z @ 0x180022AB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CApplicationManager::GetApplicationByFrameProxyInternal(
        CApplicationManager *this,
        struct IApplicationFrameProxy *a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 (__fastcall ***v8)(_QWORD, const struct _GUID *, void **); // rcx
  __int64 v9; // r15
  __int64 v10; // rbp
  __int64 v11; // rbx
  int v12; // edi
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // ebx
  __int64 (__fastcall ***v16)(_QWORD, GUID *, _QWORD); // rcx
  __int64 (__fastcall ***v17)(_QWORD, const struct _GUID *, void **); // rcx
  __int64 (__fastcall ***v19)(_QWORD, const struct _GUID *, void **); // [rsp+90h] [rbp+8h] BYREF
  __int64 v20; // [rsp+98h] [rbp+10h] BYREF
  __int64 v21; // [rsp+A8h] [rbp+20h] BYREF

  *a4 = 0LL;
  v8 = 0LL;
  v19 = 0LL;
  if ( a2 )
  {
    (*(void (__fastcall **)(struct IApplicationFrameProxy *))(*(_QWORD *)a2 + 8LL))(a2);
    v8 = v19;
  }
  if ( v8 )
  {
    v19 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, const struct _GUID *, void **)))(*v8)[2])(v8);
  }
  v19 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( *((_QWORD *)this + 50) )
  {
    while ( 1 )
    {
      v11 = *(_QWORD *)(*((_QWORD *)this + 49) + 8 * v10);
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      v12 = -1;
      v21 = 0LL;
      if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v11)(
             v11,
             &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
             &v21) >= 0 )
      {
        v20 = 0LL;
        if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 496LL))(v21, &v20) >= 0 )
          v12 = ((*(unsigned __int8 (__fastcall **)(__int64, struct IApplicationFrameProxy *))(*(_QWORD *)v20 + 232LL))(
                   v20,
                   a2) != 0)
              - 1;
        v13 = v20;
        if ( v20 )
        {
          v20 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
      v14 = v21;
      if ( v21 )
      {
        v21 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      if ( !v12 )
        break;
      if ( (unsigned __int64)++v10 >= *((_QWORD *)this + 50) )
        goto LABEL_27;
    }
    v9 = v10;
    v15 = 0;
  }
  else
  {
LABEL_27:
    v15 = -2147319765;
  }
  if ( v15 >= 0 )
  {
    v16 = *(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD))(*((_QWORD *)this + 49) + 8 * v9);
    v15 = (**v16)(v16, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v19);
  }
  if ( a2 )
    (*(void (__fastcall **)(struct IApplicationFrameProxy *))(*(_QWORD *)a2 + 16LL))(a2);
  if ( v15 >= 0 )
    v15 = (**v19)(v19, a3, a4);
  v17 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, const struct _GUID *, void **)))(*v17)[2])(v17);
  }
  return (unsigned int)v15;
}
