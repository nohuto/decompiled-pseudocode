/*
 * XREFs of ?GetPacketSizeConstraints@@YAJPEAUIPropertyStore@@PEAPEAUPacketSizeConstraints@@@Z @ 0x18010AE24
 * Callers:
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z @ 0x18004BBA8 (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z.c)
 *     ?TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18010D19C (-TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18004FD68 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x180060EF0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180060F58 (_Init_thread_header.c)
 *     memcpy_0 @ 0x1800688A3 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall GetPacketSizeConstraints(struct IPropertyStore *a1, LPVOID **a2)
{
  void *v4; // rdi
  char v5; // r14
  __int128 *v6; // rsi
  void *v7; // rcx
  int v8; // ebx
  __int64 v9; // rcx
  _DWORD *v10; // rbx
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  __int64 v15; // rax
  LPVOID *v16; // rbx
  void *v17; // rsi
  __int64 v18; // [rsp+38h] [rbp-59h] BYREF
  __int64 v19; // [rsp+40h] [rbp-51h] BYREF
  LPVOID ppv; // [rsp+48h] [rbp-49h] BYREF
  void *v21; // [rsp+50h] [rbp-41h] BYREF
  PROPVARIANT v22; // [rsp+58h] [rbp-39h] BYREF
  size_t Size; // [rsp+60h] [rbp-31h]
  void *Src; // [rsp+68h] [rbp-29h]
  PROPVARIANT pvar; // [rsp+70h] [rbp-21h] BYREF
  __int64 v26; // [rsp+78h] [rbp-19h]
  __int64 v27; // [rsp+80h] [rbp-11h]
  _DWORD *v28; // [rsp+88h] [rbp-9h]
  __int64 v29; // [rsp+90h] [rbp-1h]
  _DWORD v30[6]; // [rsp+98h] [rbp+7h] BYREF

  v29 = -2LL;
  v4 = 0LL;
  v28 = 0LL;
  v5 = 0;
  pvar = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v22 = 0LL;
  Size = 0LL;
  Src = 0LL;
  if ( dword_1801B4948 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1801B4948);
    if ( dword_1801B4948 == -1 )
    {
      xmmword_1801B47E0 = DEVPKEY_KsAudio_PacketSize_Constraints2;
      dword_1801B47F0 = 2;
      xmmword_1801B47F4 = DEVPKEY_KsAudio_PacketSize_Constraints;
      dword_1801B4804 = 2;
      Init_thread_footer(&dword_1801B4948);
    }
  }
  v6 = &xmmword_1801B47E0;
  while ( 1 )
  {
    v21 = 0LL;
    PropVariantClear(&pvar);
    PropVariantClear(&v22);
    v8 = ((__int64 (__fastcall *)(struct IPropertyStore *, __int128 *, PROPVARIANT *))a1->lpVtbl->GetValue)(
           a1,
           v6,
           &v22);
    if ( v8 < 0 )
      goto LABEL_36;
    if ( !(_WORD)v22 )
    {
      v30[0] = 590439624;
      v30[1] = 1283267372;
      v30[2] = 1907779772;
      v30[3] = 1730509416;
      v30[4] = 1;
      ppv = 0LL;
      v19 = 0LL;
      v18 = 0LL;
      v8 = CoCreateInstance(
             &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
             0LL,
             0x17u,
             &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
             &ppv);
      if ( v8 < 0 )
        goto LABEL_39;
      v8 = ((__int64 (__fastcall *)(struct IPropertyStore *, _DWORD *, PROPVARIANT *))a1->lpVtbl->GetValue)(
             a1,
             v30,
             &pvar);
      if ( v8 < 0 )
        goto LABEL_39;
      if ( (_WORD)pvar != 31 )
      {
        v8 = -2147023728;
LABEL_39:
        v9 = v18;
LABEL_30:
        if ( v9 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        if ( v19 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        if ( ppv )
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
LABEL_36:
        v13 = 0LL;
LABEL_37:
        CoTaskMemFree(v13);
        goto LABEL_38;
      }
      v8 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64 *))(*(_QWORD *)ppv + 40LL))(ppv, v26, &v19);
      if ( v8 < 0 )
        goto LABEL_39;
      v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v19 + 32LL))(v19, 0LL, &v18);
      if ( v8 < 0 )
        goto LABEL_39;
      v8 = (*(__int64 (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v18 + 40LL))(v18, v6, &v22);
      v9 = v18;
      if ( v8 < 0 )
        goto LABEL_30;
      if ( v18 )
        (*(void (**)(void))(*(_QWORD *)v18 + 16LL))();
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      v7 = ppv;
      if ( ppv )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
    }
    if ( (_WORD)v22 != 65 || (unsigned int)Size < 0x28 )
    {
      v11 = 0LL;
      goto LABEL_25;
    }
    v8 = CTCoAllocPolicy::Alloc(v7, 1, (unsigned int)Size, &v21);
    if ( v8 < 0 )
      goto LABEL_47;
    v10 = v21;
    memcpy_0(v21, Src, (unsigned int)Size);
    if ( (unsigned int)Size >= 24 * v10[3] + 16 )
      break;
    v11 = v10;
LABEL_25:
    CoTaskMemFree(v11);
    v6 = (__int128 *)((char *)v6 + 20);
    if ( v6 == (__int128 *)&____PchSym__00_KxulyqvxgPillgKxuzexlivUzfwrlxlivUhvieviUoryUzfwrlhvierxvfgroUlyquivUznwGEUhgwzucOlyq_AudioServiceUtil )
      goto LABEL_26;
  }
  if ( *((_DWORD *)v6 + 4) != 2 )
    goto LABEL_45;
  v15 = *(_QWORD *)v6 - DEVPKEY_KsAudio_PacketSize_Constraints2;
  if ( *(_QWORD *)v6 == (_QWORD)DEVPKEY_KsAudio_PacketSize_Constraints2 )
    v15 = *((_QWORD *)v6 + 1) - *((_QWORD *)&DEVPKEY_KsAudio_PacketSize_Constraints2 + 1);
  v5 = 1;
  if ( v15 )
LABEL_45:
    v5 = 0;
  CoTaskMemFree(0LL);
  v4 = v10;
  v28 = v10;
  CoTaskMemFree(0LL);
LABEL_26:
  if ( a2 && v4 )
  {
    v21 = 0LL;
    v8 = CTCoAllocPolicy::Alloc(v12, 1, 0x10uLL, &v21);
    if ( v8 < 0 )
    {
LABEL_47:
      v13 = v21;
      goto LABEL_37;
    }
    v16 = (LPVOID *)v21;
    *(_BYTE *)v21 = v5;
    v17 = v4;
    v4 = 0LL;
    CoTaskMemFree(v16[1]);
    v16[1] = v17;
    *a2 = v16;
    CoTaskMemFree(0LL);
  }
  v8 = 0;
LABEL_38:
  PropVariantClear(&pvar);
  PropVariantClear(&v22);
  CoTaskMemFree(v4);
  return (unsigned int)v8;
}
