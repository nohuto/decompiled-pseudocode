/*
 * XREFs of ?AttachDevice@RIMDeviceCollection@@AEAAJKPEAX0KPEAPEAVRIMDevice@@@Z @ 0x18005EA38
 * Callers:
 *     ?OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKKGG0@Z @ 0x18005E010 (-OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKKGG0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RIMDeviceCollection::AttachDevice(
        RIMDeviceCollection *this,
        __int64 a2,
        void *a3,
        void *a4,
        unsigned int a5,
        struct RIMDevice **a6)
{
  unsigned int v9; // eax
  __int64 v10; // rdx
  unsigned int v11; // esi
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  unsigned int v16; // r8d
  __int64 *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  struct RIMDevice *v20; // r8
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct RIMDevice *v23; // [rsp+60h] [rbp+8h] BYREF

  v9 = (*(__int64 (__fastcall **)(RIMDeviceCollection *))(*(_QWORD *)this + 104LL))(this);
  v10 = *(_QWORD *)this;
  v11 = v9;
  a6 = 0LL;
  v23 = 0LL;
  v12 = (*(__int64 (__fastcall **)(RIMDeviceCollection *, void *, void *, _QWORD, unsigned int, struct RIMDevice ***))(v10 + 88))(
          this,
          a3,
          a4,
          a5,
          v9,
          &a6);
  if ( v12 < 0 )
  {
    v13 = 1036LL;
    goto LABEL_34;
  }
  if ( *((_DWORD *)this + 668) >= 0x100u )
  {
    v12 = -2147024882;
    v14 = 967LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)(unsigned int)v12);
LABEL_21:
    v13 = 1038LL;
    goto LABEL_34;
  }
  v15 = (_QWORD *)((char *)this + 624);
  v16 = 0;
  v17 = (__int64 *)((char *)this + 624);
  while ( 1 )
  {
    v18 = *v17;
    if ( *v17 )
    {
      if ( *(struct RIMDevice **)(v18 + 16) == a6[2] || !*(_DWORD *)(v18 + 40) )
        break;
    }
    ++v16;
    ++v17;
    if ( v16 >= 0x100 )
    {
      v12 = -2147023728;
      goto LABEL_12;
    }
  }
  v12 = 0;
LABEL_12:
  if ( v12 != -2147023728 )
  {
    v12 = -2147024883;
    v14 = 975LL;
    goto LABEL_5;
  }
  v19 = 0LL;
  while ( *v15 )
  {
    v19 = (unsigned int)(v19 + 1);
    ++v15;
    if ( (unsigned int)v19 >= 0x100 )
      goto LABEL_20;
  }
  *((_QWORD *)this + v19 + 78) = a6;
  ++*((_DWORD *)this + 668);
  v12 = 0;
LABEL_20:
  if ( v12 < 0 )
    goto LABEL_21;
  v12 = (*(__int64 (__fastcall **)(RIMDeviceCollection *, _QWORD, struct RIMDevice **))(*(_QWORD *)this + 64LL))(
          this,
          v11,
          &v23);
  if ( v12 >= 0 )
  {
    v20 = v23;
    if ( v23 && *((_DWORD *)v23 + 1) )
    {
      *(_DWORD *)v23 = v11;
      RIMGetSourceProcessId(a3, a4, (char *)v20 + 12);
      if ( *(_DWORD *)v23 == *((_DWORD *)a6 + 10) && *((_DWORD *)v23 + 1) )
      {
        a6[4] = v23;
        if ( (*((_DWORD *)v23 + 1) & 0xFFFFFEFF) == 0 )
          return 0LL;
        v12 = (*(__int64 (__fastcall **)(_QWORD, struct RIMDevice *, _QWORD))(**((_QWORD **)this + 2) + 40LL))(
                *((_QWORD *)this + 2),
                v23,
                *((_QWORD *)this + 3));
        if ( v12 >= 0 )
          return 0LL;
        v13 = 1081LL;
      }
      else
      {
        v12 = -2147024809;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2E,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevice.cpp",
          (const char *)0x80070057LL);
        v13 = 1060LL;
      }
    }
    else
    {
      v12 = -2147418113;
      v13 = 1055LL;
    }
  }
  else
  {
    v13 = 1045LL;
  }
LABEL_34:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
    (const char *)(unsigned int)v12);
  return (unsigned int)v12;
}
