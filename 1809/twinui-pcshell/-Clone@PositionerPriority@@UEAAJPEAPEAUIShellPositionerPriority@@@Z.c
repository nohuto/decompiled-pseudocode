/*
 * XREFs of ?Clone@PositionerPriority@@UEAAJPEAPEAUIShellPositionerPriority@@@Z @ 0x180030E90
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize@VPositionerPriority@@V1@AEAW4_TABLETMODESTATE@@@Details@WRL@Microsoft@@YAJPEAPEAVPositionerPriority@@AEAW4_TABLETMODESTATE@@@Z @ 0x180030D0C (--$MakeAndInitialize@VPositionerPriority@@V1@AEAW4_TABLETMODESTATE@@@Details@WRL@Microsoft@@YAJP.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PositionerPriority::Clone(RTL_SRWLOCK *this, struct IShellPositionerPriority **a2)
{
  RTL_SRWLOCK *v4; // rdi
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  __int64 (__fastcall ***v8)(_QWORD, GUID *, _QWORD *); // rcx
  unsigned __int64 i; // rbx
  struct IShellPositionerPriority *v10; // rcx
  int v12; // [rsp+20h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  BOOL v14; // [rsp+60h] [rbp+30h] BYREF
  struct IShellPositionerPriority *v15; // [rsp+68h] [rbp+38h] BYREF
  __int64 (__fastcall ***v16)(_QWORD, GUID *, struct IShellPositionerPriority **); // [rsp+70h] [rbp+40h] BYREF
  RTL_SRWLOCK *v17; // [rsp+78h] [rbp+48h]

  v12 = -2;
  *a2 = 0LL;
  v4 = this + 3;
  AcquireSRWLockShared(this + 3);
  v17 = v4;
  v14 = LOBYTE(this[4].Ptr) == 0;
  v15 = 0LL;
  v16 = 0LL;
  v5 = Microsoft::WRL::Details::MakeAndInitialize<PositionerPriority,PositionerPriority,enum _TABLETMODESTATE &>(
         &v16,
         &v14);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEC,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\positionerpriority.cpp",
      (const char *)(unsigned int)v5,
      -2);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  }
  else
  {
    v7 = (**v16)(v16, &GUID_9579607f_b1e9_4350_b203_d2784a62a5cb, &v15);
    v6 = v7;
    if ( v7 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xED,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\positionerpriority.cpp",
        (const char *)(unsigned int)v7,
        -2);
    v8 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))v16;
    if ( v16 )
    {
      v16 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v8)[2])(v8);
    }
  }
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAA,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\positionerpriority.cpp",
      (const char *)(unsigned int)v6,
      v12);
    v10 = v15;
  }
  else
  {
    for ( i = 0LL; i < 8; ++i )
    {
      if ( *((_BYTE *)&this[4].Ptr + i)
        && !(*(unsigned int (__fastcall **)(struct IShellPositionerPriority *, _QWORD))(*(_QWORD *)v15 + 32LL))(
              v15,
              (unsigned int)i) )
      {
        (*(void (__fastcall **)(struct IShellPositionerPriority *, _QWORD))(*(_QWORD *)v15 + 40LL))(
          v15,
          (unsigned int)i);
      }
    }
    v10 = v15;
    if ( v15 )
    {
      (*(void (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v15 + 8LL))(v15);
      v10 = v15;
    }
    *a2 = v10;
    v6 = 0;
  }
  if ( v10 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return (unsigned int)v6;
}
