/*
 * XREFs of ?WindowOccludedChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@E@Z @ 0x1800256D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationViewManager::WindowOccludedChanged(RTL_SRWLOCK *this, HWND a2, unsigned __int8 a3)
{
  RTL_SRWLOCK *v6; // rdi
  __int64 v7; // r14
  __int64 v8; // rbx
  char v9; // si
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // [rsp+20h] [rbp-30h] BYREF
  __int64 v18; // [rsp+28h] [rbp-28h] BYREF
  _QWORD v19[4]; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  int v21; // [rsp+90h] [rbp+40h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+58h] BYREF

  v19[1] = -2LL;
  v6 = this + 58;
  v19[2] = this + 58;
  AcquireSRWLockShared(this + 58);
  v7 = 0LL;
  if ( !this[60].Ptr )
    goto LABEL_15;
  while ( 1 )
  {
    v8 = *((_QWORD *)this[59].Ptr + v7);
    v19[3] = v8;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    v21 = 0;
    v18 = 0LL;
    v22 = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v8)(v8, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, &v18) < 0 )
    {
      v13 = v22;
      if ( v22 )
      {
        v22 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v8)(
             v8,
             &GUID_3e46ed27_6707_4c99_aff4_ad6824b65aa2,
             &v22) >= 0 )
      {
        v17 = 0LL;
        v14 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 24LL))(v22, &v17);
        if ( v14 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x3D,
            (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\util.cpp",
            (const char *)(unsigned int)v14,
            v17);
        else
          (*(void (__fastcall **)(__int64, HWND, int *))(*(_QWORD *)v17 + 96LL))(v17, a2, &v21);
        v15 = v17;
        if ( v17 )
        {
          v17 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
LABEL_25:
      if ( !v21 )
        goto LABEL_8;
      goto LABEL_28;
    }
    if ( (*(int (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v18 + 24LL))(v18, v19) < 0 )
      goto LABEL_25;
    if ( a2 != (HWND)v19[0] )
    {
      v21 = 0;
LABEL_8:
      v9 = 0;
      goto LABEL_9;
    }
    v21 = 1;
LABEL_28:
    v9 = 1;
LABEL_9:
    v10 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    v11 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    if ( v9 )
      break;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    if ( (PVOID)++v7 >= this[60].Ptr )
      goto LABEL_15;
  }
  v16 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 456LL))(v8, a3);
  if ( v16 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x376,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v16,
      v17);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
LABEL_15:
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return 0LL;
}
