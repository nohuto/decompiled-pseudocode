/*
 * XREFs of ?OnChromeOffsetsChanged@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@@Z @ 0x180033220
 * Callers:
 *     ?SynchronizeFrameInformation@CApplicationFrameService@@UEAAJPEAUIApplicationFrameProxy@@@Z @ 0x180048300 (-SynchronizeFrameInformation@CApplicationFrameService@@UEAAJPEAUIApplicationFrameProxy@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18008E7A0 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x180127714 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationFrameService::OnChromeOffsetsChanged(
        CApplicationFrameService *this,
        struct IApplicationFrame *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  int v6; // r11d
  unsigned __int64 v7; // r10
  __int64 v8; // rbx
  __int64 v9; // rdx
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  unsigned __int64 v12; // r10
  __int64 v13; // rbx
  __int64 v14; // rdx
  int v15; // r11d
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  __int64 v18; // rdx
  __int64 v19; // rcx
  volatile int *v20; // rdx
  __int64 v21; // r10
  signed __int64 v22; // rax
  unsigned int v23; // ecx
  signed __int64 v24; // rtt
  __int64 v26; // [rsp+30h] [rbp-48h]
  __int64 v27; // [rsp+38h] [rbp-40h] BYREF
  int v28; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v29[2]; // [rsp+48h] [rbp-30h] BYREF
  __int128 v30; // [rsp+58h] [rbp-20h] BYREF

  v29[1] = -2LL;
  if ( (*(int (__fastcall **)(struct IApplicationFrame *, __int128 *))(*(_QWORD *)a2 + 120LL))(a2, &v30) >= 0
    && (*(int (__fastcall **)(struct IApplicationFrame *, int *))(*(_QWORD *)a2 + 128LL))(a2, &v28) >= 0
    && (*(int (__fastcall **)(struct IApplicationFrame *, _QWORD *))(*(_QWORD *)a2 + 24LL))(a2, v29) >= 0 )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v4 = v29[0];
    v5 = 0LL;
    v26 = 0LL;
    v6 = -2147023728;
    v7 = 0LL;
    do
    {
      if ( v7 >= *((_QWORD *)this + 12) )
        break;
      v8 = *((_QWORD *)this + 11) + 8 * v7;
      v9 = *(_QWORD *)v8;
      if ( *(_QWORD *)(*(_QWORD *)v8 + 88LL) == v4 )
      {
        v6 = 0;
        if ( v9 )
        {
          v10 = *(_QWORD *)(v9 + 72);
          while ( v10 >= 0 )
          {
            if ( (_DWORD)v10 != 0x7FFFFFFF )
            {
              v11 = v10;
              v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 72), v10 + 1, v10);
              if ( v11 != v10 )
                continue;
            }
            goto LABEL_14;
          }
          Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v10 + 16));
        }
LABEL_14:
        v5 = *(_QWORD *)v8;
        v26 = *(_QWORD *)v8;
      }
      else
      {
        v6 = -2147023728;
      }
      ++v7;
    }
    while ( v6 < 0 );
    v12 = 0LL;
    if ( v6 >= 0 )
    {
LABEL_32:
      v27 = 0LL;
      if ( v5 )
        v18 = v5 + 8;
      else
        v18 = 0LL;
      if ( (*(int (__fastcall **)(_QWORD, __int64, GUID *, __int64 *))(**((_QWORD **)this + 15) + 48LL))(
             *((_QWORD *)this + 15),
             v18,
             &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
             &v27) >= 0 )
      {
        *(_OWORD *)(v26 + 96) = v30;
        *(_DWORD *)(v26 + 112) = v28;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 488LL))(v27);
      }
      v19 = v27;
      if ( v27 )
      {
        v27 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      }
    }
    else
    {
      while ( v12 < *((_QWORD *)this + 8) )
      {
        v13 = *((_QWORD *)this + 7) + 8 * v12;
        v14 = *(_QWORD *)v13;
        if ( *(_QWORD *)(*(_QWORD *)v13 + 88LL) == v4 )
        {
          v15 = 0;
          if ( v14 )
          {
            v16 = *(_QWORD *)(v14 + 72);
            while ( v16 >= 0 )
            {
              if ( (_DWORD)v16 != 0x7FFFFFFF )
              {
                v17 = v16;
                v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 72), v16 + 1, v16);
                if ( v17 != v16 )
                  continue;
              }
              goto LABEL_27;
            }
            Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v16 + 16));
          }
LABEL_27:
          v5 = *(_QWORD *)v13;
          v26 = *(_QWORD *)v13;
        }
        else
        {
          v15 = -2147023728;
        }
        ++v12;
        if ( v15 >= 0 )
          goto LABEL_32;
      }
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v21 = v26;
    if ( v26 )
    {
      v22 = *(_QWORD *)(v26 + 72);
      while ( v22 >= 0 )
      {
        if ( (_DWORD)v22 == 0x7FFFFFFF )
          return 0LL;
        v23 = v22 - 1;
        v24 = v22;
        v22 = _InterlockedCompareExchange64((volatile signed __int64 *)(v26 + 72), v22 - 1, v22);
        if ( v24 == v22 )
          goto LABEL_46;
      }
      v23 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(2 * v22 + 16), v20);
LABEL_46:
      if ( !v23 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 48LL))(v21, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
  }
  return 0LL;
}
