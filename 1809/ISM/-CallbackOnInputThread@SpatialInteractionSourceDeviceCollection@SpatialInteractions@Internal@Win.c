/*
 * XREFs of ?CallbackOnInputThread@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800B3AA0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$function@$$A6AXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x18002A610 (--4-$function@$$A6AXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::CallbackOnInputThread(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this,
        struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *a2)
{
  RTL_SRWLOCK *v3; // rdi
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rcx
  _BYTE *v11; // rdx
  _BYTE *v12; // rdx
  struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *v14; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v15[56]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE *v16; // [rsp+68h] [rbp-30h]

  v3 = (RTL_SRWLOCK *)((char *)this + 664);
  while ( 1 )
  {
    v16 = 0LL;
    AcquireSRWLockExclusive(v3);
    if ( !*((_QWORD *)this + 82) )
      break;
    v5 = (__int64 *)*((_QWORD *)this + 78);
    if ( v5 )
      v6 = *v5;
    else
      v6 = 0LL;
    std::function<void (_MIT_KEYBOARD_INPUT_MESSAGE const *)>::operator=(
      (__int64)v15,
      *(_QWORD *)(*(_QWORD *)(v6 + 8) + 8 * (*((_QWORD *)this + 81) & (*(_QWORD *)(v6 + 16) - 1LL))));
    v8 = *(_QWORD *)(*((_QWORD *)this + 79) + 8 * (*((_QWORD *)this + 81) & (*((_QWORD *)this + 80) - 1LL)));
    v9 = *(_QWORD *)(v8 + 56);
    if ( v9 )
    {
      LOBYTE(v7) = v9 != v8;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 32LL))(v9, v7);
      *(_QWORD *)(v8 + 56) = 0LL;
    }
    if ( (*((_QWORD *)this + 82))-- == 1LL )
      *((_QWORD *)this + 81) = 0LL;
    else
      ++*((_QWORD *)this + 81);
    if ( v3 )
      ReleaseSRWLockExclusive(v3);
    if ( v16 )
    {
      v14 = a2;
      (*(void (__fastcall **)(_BYTE *, struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks **))(*(_QWORD *)v16 + 16LL))(
        v16,
        &v14);
      if ( v16 )
      {
        v11 = v15;
        LOBYTE(v11) = v16 != v15;
        (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v16 + 32LL))(v16, v11);
      }
    }
  }
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  if ( v16 )
  {
    v12 = v15;
    LOBYTE(v12) = v16 != v15;
    (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v16 + 32LL))(v16, v12);
  }
  return 0LL;
}
