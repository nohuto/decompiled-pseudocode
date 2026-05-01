/*
 * XREFs of ?OnChromeOffsetsChanged@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@@Z @ 0x18003D490
 * Callers:
 *     ?SynchronizeFrameInformation@CApplicationFrameService@@UEAAJPEAUIApplicationFrameProxy@@@Z @ 0x1800478F0 (-SynchronizeFrameInformation@CApplicationFrameService@@UEAAJPEAUIApplicationFrameProxy@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180088C30 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1800E6514 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationFrameService::OnChromeOffsetsChanged(
        CApplicationFrameService *this,
        struct IApplicationFrame *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rbx
  int v6; // ebp
  unsigned __int64 v7; // r10
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r11
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  unsigned __int64 v13; // r10
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r11
  signed __int64 v17; // rax
  signed __int64 v18; // rtt
  __int64 v19; // rdx
  __int64 v20; // rcx
  volatile int *v21; // rdx
  signed __int64 v22; // rax
  unsigned int v23; // ecx
  signed __int64 v24; // rtt
  __int64 v26; // [rsp+30h] [rbp-68h] BYREF
  int v27; // [rsp+38h] [rbp-60h] BYREF
  __int64 v28; // [rsp+40h] [rbp-58h]
  _QWORD v29[2]; // [rsp+48h] [rbp-50h] BYREF
  __int128 v30; // [rsp+58h] [rbp-40h] BYREF

  v29[1] = -2LL;
  if ( (*(int (__fastcall **)(struct IApplicationFrame *, __int128 *))(*(_QWORD *)a2 + 120LL))(a2, &v30) >= 0
    && (*(int (__fastcall **)(struct IApplicationFrame *, int *))(*(_QWORD *)a2 + 128LL))(a2, &v27) >= 0
    && (*(int (__fastcall **)(struct IApplicationFrame *, _QWORD *))(*(_QWORD *)a2 + 24LL))(a2, v29) >= 0 )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v4 = v29[0];
    v5 = 0LL;
    v28 = 0LL;
    v6 = -2147023728;
    v7 = 0LL;
    do
    {
      if ( v7 >= *((_QWORD *)this + 12) )
        break;
      v8 = *((_QWORD *)this + 11) + 8 * v7;
      v9 = *(_QWORD *)v8;
      v10 = *(_QWORD *)(*(_QWORD *)v8 + 88LL);
      v6 = 0;
      if ( v10 == v4 )
      {
        if ( v9 )
        {
          v11 = *(_QWORD *)(v9 + 72);
          while ( v11 >= 0 )
          {
            if ( (_DWORD)v11 != 0x7FFFFFFF )
            {
              v12 = v11;
              v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 72), v11 + 1, v11);
              if ( v12 != v11 )
                continue;
            }
            goto LABEL_15;
          }
          Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v11 + 16));
        }
LABEL_15:
        v5 = *(_QWORD *)v8;
        v28 = *(_QWORD *)v8;
      }
      else
      {
        v6 = -2147023728;
      }
      ++v7;
    }
    while ( v10 != v4 );
    v13 = 0LL;
    if ( v6 >= 0 )
      goto LABEL_31;
    do
    {
      if ( v13 >= *((_QWORD *)this + 8) )
        break;
      v14 = *((_QWORD *)this + 7) + 8 * v13;
      v15 = *(_QWORD *)v14;
      v16 = *(_QWORD *)(*(_QWORD *)v14 + 88LL);
      v6 = 0;
      if ( v16 == v4 )
      {
        if ( v15 )
        {
          v17 = *(_QWORD *)(v15 + 72);
          while ( v17 >= 0 )
          {
            if ( (_DWORD)v17 != 0x7FFFFFFF )
            {
              v18 = v17;
              v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 72), v17 + 1, v17);
              if ( v18 != v17 )
                continue;
            }
            goto LABEL_28;
          }
          Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v17 + 16));
        }
LABEL_28:
        v5 = *(_QWORD *)v14;
        v28 = *(_QWORD *)v14;
      }
      else
      {
        v6 = -2147023728;
      }
      ++v13;
    }
    while ( v16 != v4 );
    if ( v6 >= 0 )
    {
LABEL_31:
      v26 = 0LL;
      v19 = v5 + 8;
      if ( !v5 )
        v19 = 0LL;
      if ( (*(int (__fastcall **)(_QWORD, __int64, GUID *, __int64 *))(**((_QWORD **)this + 15) + 48LL))(
             *((_QWORD *)this + 15),
             v19,
             &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
             &v26) >= 0 )
      {
        *(_OWORD *)(v5 + 96) = v30;
        *(_DWORD *)(v5 + 112) = v27;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 488LL))(v26);
      }
      v20 = v26;
      if ( v26 )
      {
        v26 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( v5 )
    {
      v22 = *(_QWORD *)(v5 + 72);
      while ( v22 >= 0 )
      {
        if ( (_DWORD)v22 == 0x7FFFFFFF )
          return 0LL;
        v23 = v22 - 1;
        v24 = v22;
        v22 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 72), v22 - 1, v22);
        if ( v24 == v22 )
          goto LABEL_44;
      }
      v23 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(2 * v22 + 16), v21);
LABEL_44:
      if ( !v23 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v28 + 48LL))(v28, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
  }
  return 0LL;
}
