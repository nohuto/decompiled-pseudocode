/*
 * XREFs of ?GetAllApplicationsByHostId@CImmersiveAppArray@@UEAAJ_KPEAPEAUIObjectArray@@@Z @ 0x180031360
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveAppArray::GetAllApplicationsByHostId(
        CImmersiveAppArray *this,
        __int64 a2,
        struct IObjectArray **a3)
{
  char v6; // r14
  int v7; // ebx
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  unsigned int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v14; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v15[3]; // [rsp+38h] [rbp-18h] BYREF
  _QWORD *v16; // [rsp+90h] [rbp+40h] BYREF
  int v17; // [rsp+98h] [rbp+48h] BYREF

  v15[1] = -2LL;
  *a3 = 0LL;
  v6 = 0;
  v15[0] = 0LL;
  v7 = -2147024882;
  v8 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  v16 = v8;
  if ( v8 )
  {
    *v8 = &CEnumerableObjectCollection::`vftable'{for `IObjectCollection'};
    v8[1] = &CEnumerableObjectCollection::`vftable'{for `IEnumObjects'};
    v8[2] = &CEnumerableObjectCollection::`vftable'{for `IEnumUnknown'};
    *((_DWORD *)v8 + 6) = 1;
    *((_DWORD *)v8 + 7) = 4;
    *((_DWORD *)v8 + 8) = 0;
    v8[5] = 0LL;
    v8[6] = 0LL;
    v8[7] = 0LL;
    v8[8] = 0LL;
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD *))*v9)(
           v9,
           &GUID_5632b1a4_e38a_400a_928a_d4cd63230295,
           v15);
    (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
  }
  if ( v7 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(char *, _QWORD **))(*((_QWORD *)this - 1) + 24LL))((char *)this - 8, &v16);
    v10 = 0;
    if ( v7 >= 0 )
    {
      do
      {
        if ( v10 >= (unsigned int)v16 )
          break;
        v14 = 0LL;
        if ( (*(int (__fastcall **)(char *, _QWORD, GUID *, __int64 *))(*((_QWORD *)this - 1) + 32LL))(
               (char *)this - 8,
               v10,
               &GUID_2faff0c1_f38f_43dc_b5f8_8d00829024a1,
               &v14) >= 0
          && (*(int (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v14 + 32LL))(v14, a2, &v17) >= 0
          && v17 )
        {
          v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v15[0] + 40LL))(v15[0], v14);
          v6 = 1;
        }
        v11 = v14;
        if ( v14 )
        {
          v14 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        }
        ++v10;
      }
      while ( v7 >= 0 );
      if ( v7 >= 0 )
      {
        if ( !v6 )
          v7 = -2147319765;
        if ( v7 >= 0 )
          v7 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, struct IObjectArray **))v15[0])(
                 v15[0],
                 &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
                 a3);
      }
    }
  }
  v12 = v15[0];
  if ( v15[0] )
  {
    v15[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return (unsigned int)v7;
}
