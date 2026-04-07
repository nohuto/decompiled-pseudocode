/*
 * XREFs of ?RenderRecursive@UdwmTopVisual@@UEAAJXZ @ 0x180033C10
 * Callers:
 *     <none>
 * Callees:
 *     ??$?4VUdwmTopVisual@@@?$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVUdwmTopVisual@@@Z @ 0x18004DEC4 (--$-4VUdwmTopVisual@@@-$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVUdwmTopVisual@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ComPtr@VCVisual@@@WRL@Microsoft@@QEAA@XZ @ 0x180086E78 (--1-$ComPtr@VCVisual@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall UdwmTopVisual::RenderRecursive(UdwmTopVisual *this)
{
  int v1; // eax
  int v3; // eax
  unsigned int v4; // edi
  int v6; // edi
  int v7; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v1 = *((_DWORD *)this + 20);
  if ( (v1 & 0xFFFFFFFE) != 0 )
  {
    v3 = (*(__int64 (__fastcall **)(UdwmTopVisual *))(*(_QWORD *)this + 48LL))(this);
    v4 = v3;
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBD,
        (unsigned int)"windows\\dwm\\udwm\\udwmdcompvisual.cpp",
        (const char *)(unsigned int)v3,
        v8);
      return v4;
    }
    v1 = *((_DWORD *)this + 20);
  }
  v11 = 0LL;
  v10 = 0LL;
  if ( (v1 & 1) == 0 )
    goto LABEL_10;
  if ( !*((_QWORD *)this + 30) )
  {
LABEL_9:
    v1 &= ~1u;
    *((_DWORD *)this + 20) = v1;
LABEL_10:
    if ( (v1 & 0xFFFFFFFE) != 0
      && (v7 = (*(__int64 (__fastcall **)(UdwmTopVisual *))(*(_QWORD *)this + 56LL))(this), v6 = v7, v7 < 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD9,
        (unsigned int)"windows\\dwm\\udwm\\udwmdcompvisual.cpp",
        (const char *)(unsigned int)v7,
        v8);
    }
    else
    {
      v6 = 0;
    }
    goto LABEL_14;
  }
  Microsoft::WRL::ComPtr<CVisual>::operator=<UdwmTopVisual>(&v11, this);
  Microsoft::WRL::ComPtr<CVisual>::operator=<UdwmTopVisual>(&v10, *((_QWORD *)this + 30));
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 30) + 64LL))(*((_QWORD *)this + 30));
  if ( v6 >= 0 )
  {
    v1 = *((_DWORD *)this + 20);
    goto LABEL_9;
  }
LABEL_14:
  Microsoft::WRL::ComPtr<CVisual>::~ComPtr<CVisual>(&v10);
  Microsoft::WRL::ComPtr<CVisual>::~ComPtr<CVisual>(&v11);
  return (unsigned int)v6;
}
