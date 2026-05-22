/*
 * XREFs of ?BindDevicesOfTypeToMonitor@DWMInputRouter@@UEAAJI_K@Z @ 0x18008AFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@UDeviceDisplayMapping@DWMInputRouter@@@?$vector@UDeviceDisplayMapping@DWMInputRouter@@V?$allocator@UDeviceDisplayMapping@DWMInputRouter@@@std@@@std@@QEAAPEAUDeviceDisplayMapping@DWMInputRouter@@QEAU23@$$QEAU23@@Z @ 0x18008D2DC (--$_Emplace_reallocate@UDeviceDisplayMapping@DWMInputRouter@@@-$vector@UDeviceDisplayMapping@DWM.c)
 *     ?Create@DWMInputDisplay@@SAJPEAUHMONITOR__@@PEAPEAUIInputDisplay@@@Z @ 0x18008EC0C (-Create@DWMInputDisplay@@SAJPEAUHMONITOR__@@PEAPEAUIInputDisplay@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMInputRouter::BindDevicesOfTypeToMonitor(DWMInputRouter *this, int a2, struct IInputDisplay *a3)
{
  struct IInputDisplay *v3; // r12
  int v4; // r14d
  int *v6; // rdi
  char *v7; // r15
  int *i; // rbx
  int v9; // ebp
  __int64 v10; // rsi
  int *v11; // r14
  char *v12; // rsi
  int v13; // r15d
  int v14; // r12d
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rcx
  int *v18; // rbp
  struct IInputDisplay **v19; // rsi
  struct IInputDisplay *v20; // rax
  __int64 v21; // rcx
  __int64 *v22; // rsi
  __int64 *v23; // rdi
  __int64 v24; // rcx
  int v25; // eax
  struct IInputDisplay *v26; // rbx
  struct IInputDisplay *v27; // rdi
  _DWORD *v28; // rdx
  struct IInputDisplay **v29; // rdx
  int v31; // [rsp+28h] [rbp-50h] BYREF
  struct IInputDisplay *v32; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  char v34; // [rsp+80h] [rbp+8h] BYREF
  int v35; // [rsp+88h] [rbp+10h]
  struct IInputDisplay *v36; // [rsp+90h] [rbp+18h] BYREF

  v36 = a3;
  v35 = a2;
  v3 = a3;
  v4 = a2;
  v6 = (int *)*((_QWORD *)this + 24);
  v7 = (char *)this + 184;
  for ( i = (int *)*((_QWORD *)this + 23); i != v6; i += 4 )
  {
    v9 = *i;
    v10 = *((_QWORD *)i + 1);
    if ( v10 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 8LL))(*((_QWORD *)i + 1));
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    if ( v9 == v4 )
      break;
  }
  if ( i != v6 )
  {
    v11 = i + 4;
    if ( i + 4 != v6 )
    {
      v12 = (char *)(i + 6);
      v13 = v35;
      do
      {
        v14 = *v11;
        v15 = *(_QWORD *)v12;
        if ( *(_QWORD *)v12 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v15 + 8LL))(*(_QWORD *)v12);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        }
        if ( v14 != v13 )
        {
          *i = *v11;
          if ( &v34 == v12 )
          {
            v16 = 0LL;
          }
          else
          {
            v16 = *(_QWORD *)v12;
            *(_QWORD *)v12 = 0LL;
          }
          v17 = *((_QWORD *)i + 1);
          *((_QWORD *)i + 1) = v16;
          if ( v17 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
          i += 4;
        }
        v11 += 4;
        v12 += 16;
      }
      while ( v11 != v6 );
      v7 = (char *)this + 184;
      v3 = v36;
    }
    v4 = v35;
    if ( i != v6 )
    {
      v18 = (int *)*((_QWORD *)this + 24);
      if ( v6 != v18 )
      {
        v19 = (struct IInputDisplay **)(v6 + 2);
        do
        {
          *i = *v6;
          v20 = 0LL;
          if ( &v36 != v19 )
          {
            v20 = *v19;
            *v19 = 0LL;
          }
          v21 = *((_QWORD *)i + 1);
          *((_QWORD *)i + 1) = v20;
          if ( v21 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
          i += 4;
          v6 += 4;
          v19 += 2;
        }
        while ( v6 != v18 );
      }
      v22 = (__int64 *)*((_QWORD *)this + 24);
      if ( i != (int *)v22 )
      {
        v23 = (__int64 *)(i + 2);
        do
        {
          v24 = *v23;
          if ( *v23 )
          {
            *v23 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
          }
          v23 += 2;
        }
        while ( v23 - 1 != v22 );
      }
      *((_QWORD *)this + 24) = i;
    }
  }
  v36 = 0LL;
  v25 = DWMInputDisplay::Create((HMONITOR)v3, &v36);
  if ( v25 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x5F8,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v25);
    JUMPOUT(0x18008B274LL);
  }
  v31 = v4;
  v26 = v36;
  v27 = v36;
  v32 = v36;
  if ( v36 )
    (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)v36 + 8LL))(v36);
  v28 = (_DWORD *)*((_QWORD *)v7 + 1);
  if ( *((_DWORD **)v7 + 2) == v28 )
  {
    std::vector<DWMInputRouter::DeviceDisplayMapping>::_Emplace_reallocate<DWMInputRouter::DeviceDisplayMapping>(
      v7,
      v28,
      &v31);
    v27 = v32;
  }
  else
  {
    *v28 = v4;
    v29 = (struct IInputDisplay **)(v28 + 2);
    *v29 = 0LL;
    if ( v29 != &v32 )
    {
      *v29 = v26;
      v27 = 0LL;
    }
    *((_QWORD *)v7 + 1) += 16LL;
  }
  if ( v27 )
    (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)v27 + 16LL))(v27);
  if ( v26 )
    (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)v26 + 16LL))(v26);
  return 0LL;
}
