/*
 * XREFs of ?CreateCustomCursorSharedTarget@SystemCursor@@QEAAJPEAUIContainerVisual@Composition@UI@Windows@@PEAPEAX@Z @ 0x180096868
 * Callers:
 *     ?CreateCursorForDevice@SystemCursorService@@QEAAJ_K@Z @ 0x1800956F4 (-CreateCursorForDevice@SystemCursorService@@QEAAJ_K@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall SystemCursor::CreateCustomCursorSharedTarget(
        SystemCursor *this,
        struct Windows::UI::Composition::IContainerVisual *a2,
        void **a3)
{
  void **v3; // r13
  __int64 v6; // r9
  unsigned __int128 v7; // kr00_16
  __int64 v8; // rbx
  int v9; // eax
  unsigned int v10; // edi
  signed __int32 v11; // eax
  unsigned __int64 v12; // r15
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  int v16; // eax
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  void **v22; // r12
  void *v23; // r13
  DWORD LastError; // edi
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rbx
  HANDLE hObject; // [rsp+20h] [rbp-50h] BYREF
  __int64 v34; // [rsp+28h] [rbp-48h] BYREF
  __int64 v35; // [rsp+30h] [rbp-40h] BYREF
  HANDLE v36; // [rsp+38h] [rbp-38h]
  __int64 v37; // [rsp+40h] [rbp-30h]
  __int64 v38; // [rsp+48h] [rbp-28h]
  struct Windows::UI::Composition::IContainerVisual *v39; // [rsp+50h] [rbp-20h]
  unsigned __int128 v40; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  __int64 v42; // [rsp+B0h] [rbp+40h] BYREF
  void **v43; // [rsp+C0h] [rbp+50h]
  __int64 v44; // [rsp+C8h] [rbp+58h] BYREF

  v43 = a3;
  v37 = -2LL;
  v3 = a3;
  *a3 = (void *)-1LL;
  v40 = 0LL;
  v6 = *((_QWORD *)this + 1);
  if ( v6 )
  {
    while ( 1 )
    {
      v11 = *(_DWORD *)(v6 + 8);
      if ( !v11 )
        break;
      if ( v11 == _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v11 + 1, v11) )
      {
        *(_QWORD *)&v40 = *(_QWORD *)this;
        v12 = *((_QWORD *)this + 1);
        *((_QWORD *)&v40 + 1) = v12;
        v7 = __PAIR128__(v12, v40);
        goto LABEL_3;
      }
    }
  }
  v7 = v40;
LABEL_3:
  if ( !(_QWORD)v7 )
    goto LABEL_56;
  v8 = *(_QWORD *)(v7 + 144);
  v38 = v8;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  v44 = 0LL;
  v9 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v8)(
         v8,
         &GUID_4ba72ec1_8968_4103_9111_0d70575add0f,
         &v44);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v42 = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v44 + 88LL))(v44, &v42);
    v10 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x174,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorservice.cpp",
        (const char *)(unsigned int)v13);
LABEL_31:
      v20 = v42;
      if ( v42 )
      {
        v42 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      goto LABEL_33;
    }
    v39 = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct Windows::UI::Composition::IContainerVisual *))(*(_QWORD *)a2 + 8LL))(a2);
    v35 = 0LL;
    v14 = (**(__int64 (__fastcall ***)(struct Windows::UI::Composition::IContainerVisual *, GUID *, __int64 *))a2)(
            a2,
            &GUID_117e202d_a859_4c89_873b_c2aa566788e3,
            &v35);
    v10 = v14;
    if ( v14 < 0 )
    {
      v15 = 377LL;
LABEL_20:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorservice.cpp",
        (const char *)(unsigned int)v14);
LABEL_28:
      v19 = v35;
      if ( v35 )
      {
        v35 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      }
      (*(void (__fastcall **)(struct Windows::UI::Composition::IContainerVisual *))(*(_QWORD *)a2 + 16LL))(a2);
      goto LABEL_31;
    }
    v14 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v42 + 32LL))(v42, v35);
    v10 = v14;
    if ( v14 < 0 )
    {
      v15 = 379LL;
      goto LABEL_20;
    }
    v34 = 0LL;
    v16 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v42)(
            v42,
            &GUID_bcb4ad45_7609_4550_934f_16002a68fded,
            &v34);
    v10 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x181,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorservice.cpp",
        (const char *)(unsigned int)v16);
LABEL_26:
      v18 = v34;
      if ( v34 )
      {
        v34 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      goto LABEL_28;
    }
    hObject = 0LL;
    v17 = (*(__int64 (__fastcall **)(__int64, __int64, HANDLE *))(*(_QWORD *)v44 + 168LL))(v44, v34, &hObject);
    v10 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x186,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorservice.cpp",
        (const char *)(unsigned int)v17);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      goto LABEL_26;
    }
    v22 = (void **)((char *)this + 72);
    if ( (HANDLE *)((char *)this + 72) != &hObject )
    {
      v36 = hObject;
      v23 = *v22;
      if ( (char *)*v22 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      {
        LastError = GetLastError();
        CloseHandle(v23);
        SetLastError(LastError);
      }
      *v22 = v36;
      hObject = 0LL;
      v3 = v43;
    }
    v25 = *((_QWORD *)this + 8);
    v26 = v42;
    if ( v25 != v42 )
    {
      if ( v42 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 8LL))(v42);
        v25 = *((_QWORD *)this + 8);
      }
      *((_QWORD *)this + 8) = v26;
      if ( v25 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
    *v3 = *v22;
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    v27 = v34;
    if ( v34 )
    {
      v34 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    }
    v28 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    }
    (*(void (__fastcall **)(struct Windows::UI::Composition::IContainerVisual *))(*(_QWORD *)a2 + 16LL))(a2);
    v29 = v42;
    if ( v42 )
    {
      v42 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    }
    v30 = v44;
    if ( v44 )
    {
      v44 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
LABEL_56:
    v10 = 0;
    goto LABEL_57;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x170,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\system"
             "cursorservice.cpp",
    (const char *)(unsigned int)v9);
LABEL_33:
  v21 = v44;
  if ( v44 )
  {
    v44 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
LABEL_57:
  if ( *((_QWORD *)&v7 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v7 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v31 = *((_QWORD *)&v40 + 1);
      (***((void (__fastcall ****)(_QWORD))&v40 + 1))(*((_QWORD *)&v40 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v31 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v40 + 1) + 8LL))(*((_QWORD *)&v40 + 1));
    }
  }
  return v10;
}
