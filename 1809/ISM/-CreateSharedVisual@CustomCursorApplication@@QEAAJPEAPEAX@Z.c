/*
 * XREFs of ?CreateSharedVisual@CustomCursorApplication@@QEAAJPEAPEAX@Z @ 0x1800973E8
 * Callers:
 *     ?AttachApplication@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@PEAVBamoCustomCursorControllerClientProxy@@@Z @ 0x180091F40 (-AttachApplication@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@PEAVBamoCust.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18005DD00 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CustomCursorApplication::CreateSharedVisual(CustomCursorApplication *this, void **a2)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  unsigned __int128 v6; // kr00_16
  signed __int32 v7; // eax
  unsigned __int64 v8; // r15
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r12
  HANDLE v14; // rdi
  DWORD LastError; // ebx
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rbx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdi
  HANDLE *v24; // rsi
  HANDLE v25; // r12
  HANDLE v26; // r14
  DWORD v27; // edi
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rbx
  _QWORD v34[3]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int128 v35; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+40h]
  HANDLE hObject; // [rsp+A0h] [rbp+48h] BYREF
  __int64 v38; // [rsp+A8h] [rbp+50h] BYREF
  __int64 v39; // [rsp+B0h] [rbp+58h] BYREF
  __int64 v40; // [rsp+B8h] [rbp+60h] BYREF

  v34[1] = -2LL;
  *a2 = (void *)-1LL;
  if ( *((_QWORD *)this + 12) )
  {
    v4 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x236,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice.cpp",
      (const char *)0x8000FFFFLL);
    return v4;
  }
  v35 = 0LL;
  v5 = *((_QWORD *)this + 1);
  if ( v5 )
  {
    while ( 1 )
    {
      v7 = *(_DWORD *)(v5 + 8);
      if ( !v7 )
        break;
      if ( v7 == _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 8), v7 + 1, v7) )
      {
        *(_QWORD *)&v35 = *(_QWORD *)this;
        v8 = *((_QWORD *)this + 1);
        *((_QWORD *)&v35 + 1) = v8;
        v6 = __PAIR128__(v8, v35);
        goto LABEL_5;
      }
    }
  }
  v6 = v35;
LABEL_5:
  if ( (_QWORD)v6 )
  {
    v39 = 0LL;
    v9 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v6 + 144))(
           *(_QWORD *)(v6 + 144),
           &GUID_4ba72ec1_8968_4103_9111_0d70575add0f,
           &v39);
    v4 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x23D,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorservice.cpp",
        (const char *)(unsigned int)v9);
LABEL_50:
      v31 = v39;
      if ( v39 )
      {
        v39 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
      }
      goto LABEL_52;
    }
    v38 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v39 + 96LL))(v39, &v38);
    v4 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x241,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorservice.cpp",
        (const char *)(unsigned int)v10);
LABEL_48:
      v30 = v38;
      if ( v38 )
      {
        v38 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
      }
      goto LABEL_50;
    }
    v34[0] = 0LL;
    hObject = 0LL;
    v11 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v38)(
            v38,
            &GUID_bcb4ad45_7609_4550_934f_16002a68fded,
            v34);
    v4 = v11;
    if ( v11 < 0 )
    {
      v12 = 582LL;
LABEL_21:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorservice.cpp",
        (const char *)(unsigned int)v11);
LABEL_44:
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      v29 = v34[0];
      if ( v34[0] )
      {
        v34[0] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
      }
      goto LABEL_48;
    }
    v13 = v39;
    v14 = hObject;
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    {
      LastError = GetLastError();
      CloseHandle(v14);
      SetLastError(LastError);
    }
    hObject = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, HANDLE *))(*(_QWORD *)v13 + 168LL))(v13, v34[0], &hObject);
    v4 = v11;
    if ( v11 < 0 )
    {
      v12 = 585LL;
      goto LABEL_21;
    }
    v16 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 11) + 32LL) + 16LL);
    v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
    v18 = NtDCompositionDuplicateHandleToProcess(hObject, *(unsigned int *)(v17 + 32), a2);
    if ( v18 < 0 )
    {
      v4 = wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0x250,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\li"
                      "b\\systemcursorservice.cpp",
             (const char *)(unsigned int)v18);
      goto LABEL_44;
    }
    v19 = *(_QWORD *)(v6 + 152);
    v34[2] = v19;
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
    v40 = 0LL;
    v20 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19 + 48LL))(v19, &v40);
    v4 = v20;
    if ( v20 >= 0 )
    {
      v20 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v40 + 72LL))(v40, v38);
      v4 = v20;
      if ( v20 >= 0 )
      {
        v22 = *((_QWORD *)this + 12);
        v23 = v38;
        if ( v22 != v38 )
        {
          if ( v38 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 8LL))(v38);
            v22 = *((_QWORD *)this + 12);
          }
          *((_QWORD *)this + 12) = v23;
          if ( v22 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
        }
        v24 = (HANDLE *)((char *)this + 104);
        if ( v24 != &hObject )
        {
          v25 = hObject;
          v26 = *v24;
          if ( (char *)*v24 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          {
            v27 = GetLastError();
            CloseHandle(v26);
            SetLastError(v27);
          }
          *v24 = v25;
          hObject = 0LL;
        }
        v4 = 0;
        goto LABEL_41;
      }
      v21 = 597LL;
    }
    else
    {
      v21 = 596LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice.cpp",
      (const char *)(unsigned int)v20);
LABEL_41:
    v28 = v40;
    if ( v40 )
    {
      v40 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    goto LABEL_44;
  }
  v4 = -2147418113;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x239,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\system"
             "cursorservice.cpp",
    (const char *)0x8000FFFFLL);
LABEL_52:
  if ( *((_QWORD *)&v6 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v6 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v32 = *((_QWORD *)&v35 + 1);
      (***((void (__fastcall ****)(_QWORD))&v35 + 1))(*((_QWORD *)&v35 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v32 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v35 + 1) + 8LL))(*((_QWORD *)&v35 + 1));
    }
  }
  return v4;
}
