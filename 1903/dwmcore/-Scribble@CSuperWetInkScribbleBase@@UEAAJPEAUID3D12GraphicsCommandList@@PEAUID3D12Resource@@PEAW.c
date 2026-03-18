/*
 * XREFs of ?Scribble@CSuperWetInkScribbleBase@@UEAAJPEAUID3D12GraphicsCommandList@@PEAUID3D12Resource@@PEAW4D3D12_RESOURCE_STATES@@PEAUComputeScribbleLatencyData@@PEAUtagRECT@@@Z @ 0x1801BD000
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015645C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0qqqxx @ 0x1801BD134 (McTemplateU0qqqxx.c)
 */

__int64 __fastcall CSuperWetInkScribbleBase::Scribble(
        CSuperWetInkScribbleBase *this,
        struct ID3D12GraphicsCommandList *a2,
        struct ID3D12Resource *a3,
        enum D3D12_RESOURCE_STATES *a4,
        struct ComputeScribbleLatencyData *a5,
        struct tagRECT *a6)
{
  int v10; // edi
  __int64 v11; // rdx
  int v13; // edx
  int v14; // ecx
  int v15; // [rsp+40h] [rbp-78h] BYREF
  int v16; // [rsp+44h] [rbp-74h]
  int v17; // [rsp+48h] [rbp-70h]
  __int64 v18; // [rsp+50h] [rbp-68h]
  __int64 v19; // [rsp+58h] [rbp-60h]
  _BYTE v20[16]; // [rsp+60h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v10 = (*(__int64 (__fastcall **)(CSuperWetInkScribbleBase *))(*(_QWORD *)this + 64LL))(this);
  if ( v10 < 0 )
  {
    v11 = 25LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\superwetinkscribble.cpp",
      (const char *)(unsigned int)v10);
    return (unsigned int)v10;
  }
  *a6 = *(struct tagRECT *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(
                             *((_QWORD *)this + 2),
                             v20);
  v10 = (*(__int64 (__fastcall **)(_QWORD, struct ID3D12GraphicsCommandList *, struct ID3D12Resource *, enum D3D12_RESOURCE_STATES *, int *))(**((_QWORD **)this + 2) + 48LL))(
          *((_QWORD *)this + 2),
          a2,
          a3,
          a4,
          &v15);
  if ( v10 < 0 )
  {
    v11 = 30LL;
    goto LABEL_3;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0qqqxx(v14, v13, v17, v15, v16, v18, v19);
  *(_DWORD *)a5 = v15;
  *((_DWORD *)a5 + 1) = v16;
  *((_QWORD *)a5 + 1) = v18;
  return 0LL;
}
