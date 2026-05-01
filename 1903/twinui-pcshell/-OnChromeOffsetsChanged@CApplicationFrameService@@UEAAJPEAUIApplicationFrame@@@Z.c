/*
 * XREFs of ?OnChromeOffsetsChanged@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@@Z @ 0x180027340
 * Callers:
 *     ?SynchronizeFrameInformation@CApplicationFrameService@@UEAAJPEAUIApplicationFrameProxy@@@Z @ 0x180013540 (-SynchronizeFrameInformation@CApplicationFrameService@@UEAAJPEAUIApplicationFrameProxy@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationFrameService::OnChromeOffsetsChanged(
        CApplicationFrameService *this,
        struct IApplicationFrame *a2)
{
  __int64 v4; // r11
  __int64 v5; // rax
  int v6; // r10d
  unsigned __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // r8
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  unsigned __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  signed __int64 v15; // rax
  signed __int32 v16; // edx
  signed __int64 v17; // rtt
  __int64 v19; // r9
  __int64 v20; // r8
  int v21; // r10d
  signed __int64 v22; // rax
  signed __int64 v23; // rtt
  __int64 v24; // [rsp+30h] [rbp-48h]
  __int64 v25; // [rsp+38h] [rbp-40h] BYREF
  int v26; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v27[2]; // [rsp+48h] [rbp-30h] BYREF
  __int128 v28; // [rsp+58h] [rbp-20h] BYREF

  v27[1] = -2LL;
  if ( (*(int (__fastcall **)(struct IApplicationFrame *, __int128 *))(*(_QWORD *)a2 + 120LL))(a2, &v28) >= 0
    && (*(int (__fastcall **)(struct IApplicationFrame *, int *))(*(_QWORD *)a2 + 128LL))(a2, &v26) >= 0
    && (*(int (__fastcall **)(struct IApplicationFrame *, _QWORD *))(*(_QWORD *)a2 + 24LL))(a2, v27) >= 0 )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v4 = v27[0];
    v5 = 0LL;
    v24 = 0LL;
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
            v11 = v10;
            v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 72), v10 + 1, v10);
            if ( v11 == v10 )
              goto LABEL_11;
          }
          _InterlockedIncrement((volatile signed __int32 *)(2 * v10 + 16));
        }
LABEL_11:
        v5 = *(_QWORD *)v8;
        v24 = *(_QWORD *)v8;
      }
      else
      {
        v6 = -2147023728;
      }
      ++v7;
    }
    while ( v6 < 0 );
    v12 = 0LL;
    if ( v6 < 0 )
    {
      while ( v12 < *((_QWORD *)this + 8) )
      {
        v19 = *((_QWORD *)this + 7) + 8 * v12;
        v20 = *(_QWORD *)v19;
        if ( *(_QWORD *)(*(_QWORD *)v19 + 88LL) == v4 )
        {
          v21 = 0;
          if ( v20 )
          {
            v22 = *(_QWORD *)(v20 + 72);
            while ( v22 >= 0 )
            {
              v23 = v22;
              v22 = _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 72), v22 + 1, v22);
              if ( v23 == v22 )
                goto LABEL_36;
            }
            _InterlockedIncrement((volatile signed __int32 *)(2 * v22 + 16));
          }
LABEL_36:
          v5 = *(_QWORD *)v19;
          v24 = *(_QWORD *)v19;
        }
        else
        {
          v21 = -2147023728;
        }
        ++v12;
        if ( v21 >= 0 )
          goto LABEL_14;
      }
    }
    else
    {
LABEL_14:
      v25 = 0LL;
      if ( v5 )
        v13 = v5 + 8;
      else
        v13 = 0LL;
      if ( (*(int (__fastcall **)(_QWORD, __int64, GUID *, __int64 *))(**((_QWORD **)this + 15) + 48LL))(
             *((_QWORD *)this + 15),
             v13,
             &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
             &v25) >= 0 )
      {
        *(_OWORD *)(v24 + 96) = v28;
        *(_DWORD *)(v24 + 112) = v26;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 488LL))(v25);
      }
      v14 = v25;
      if ( v25 )
      {
        v25 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( v24 )
    {
      v15 = *(_QWORD *)(v24 + 72);
      while ( v15 >= 0 )
      {
        v16 = v15 - 1;
        v17 = v15;
        v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v24 + 72), v15 - 1, v15);
        if ( v17 == v15 )
          goto LABEL_24;
      }
      v16 = _InterlockedDecrement((volatile signed __int32 *)(2 * v15 + 16));
LABEL_24:
      if ( !v16 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 48LL))(v24, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
  }
  return 0LL;
}
