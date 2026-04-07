/*
 * XREFs of ?RenderRecursive@UdwmTopVisual@@UEAAJXZ @ 0x1800336B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180077E80 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall UdwmTopVisual::RenderRecursive(UdwmTopVisual *this)
{
  int v1; // edi
  int v2; // eax
  __int64 v4; // rbx
  int v5; // edi
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // [rsp+20h] [rbp-18h]
  int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  UdwmTopVisual *v14; // [rsp+48h] [rbp+10h]
  void (__fastcall ***v15)(_QWORD, __int64); // [rsp+50h] [rbp+18h]

  v2 = *((_DWORD *)this + 20);
  if ( (v2 & 0xFFFFFFFE) != 0 )
  {
    v8 = (*(__int64 (__fastcall **)(UdwmTopVisual *))(*(_QWORD *)this + 48LL))(this);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBE,
        (unsigned int)"windows\\dwm\\udwm\\udwmdcompvisual.cpp",
        (const char *)(unsigned int)v8,
        v11);
      return v9;
    }
    v2 = *((_DWORD *)this + 20);
  }
  v4 = 0LL;
  v12 = v1;
  v14 = 0LL;
  v15 = 0LL;
  if ( (v2 & 1) != 0 )
  {
    if ( *((_QWORD *)this + 30) )
    {
      _InterlockedIncrement((volatile signed __int32 *)this + 2);
      v4 = *((_QWORD *)this + 30);
      v14 = this;
      v7 = v4;
      if ( v4 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
        v7 = *((_QWORD *)this + 30);
      }
      v15 = (void (__fastcall ***)(_QWORD, __int64))v4;
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 64LL))(v7);
      if ( v5 < 0 )
        goto LABEL_5;
      v2 = *((_DWORD *)this + 20);
    }
    v2 &= ~1u;
    *((_DWORD *)this + 20) = v2;
  }
  if ( (v2 & 0xFFFFFFFE) != 0
    && (v10 = (*(__int64 (__fastcall **)(UdwmTopVisual *))(*(_QWORD *)this + 56LL))(this), v5 = v10, v10 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDA,
      (unsigned int)"windows\\dwm\\udwm\\udwmdcompvisual.cpp",
      (const char *)(unsigned int)v10,
      v12);
  }
  else
  {
    v5 = 0;
  }
LABEL_5:
  if ( v4 && _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 8), 0xFFFFFFFF) == 1 )
    (**v15)(v15, 1LL);
  if ( v14 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v14 + 2, 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(UdwmTopVisual *, __int64))v14)(v14, 1LL);
  }
  return (unsigned int)v5;
}
