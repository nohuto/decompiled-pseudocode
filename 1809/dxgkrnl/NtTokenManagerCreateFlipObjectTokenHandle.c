/*
 * XREFs of NtTokenManagerCreateFlipObjectTokenHandle @ 0x1C0052DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Create@DxgkCompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4DxgkCompositionObjectType@@KP6AJPEAV1@PEAXPEAPEAVIDxgkCompositionObject@@@Z3PEAPEAX@Z @ 0x1C0016364 (-Create@DxgkCompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4DxgkCompositionObjectType@@KP6AJP.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ??1FlipManagerTokenInitInfo@@QEAA@XZ @ 0x1C0052A84 (--1FlipManagerTokenInitInfo@@QEAA@XZ.c)
 *     ?FlipManagerCreateProducerTokenOperation@@YAJPEAX_N1_KIPEAUFlipPropertyItem@@PEAUFlipManagerTokenInitInfo@@@Z @ 0x1C0059234 (-FlipManagerCreateProducerTokenOperation@@YAJPEAX_N1_KIPEAUFlipPropertyItem@@PEAUFlipManagerToke.c)
 */

__int64 __fastcall NtTokenManagerCreateFlipObjectTokenHandle(
        void *a1,
        unsigned __int64 *a2,
        int a3,
        int a4,
        unsigned int a5,
        struct FlipPropertyItem *a6,
        HANDLE *a7,
        _QWORD *a8)
{
  unsigned __int64 v11; // r15
  ULONG64 v12; // rcx
  int v13; // edi
  struct DXGGLOBAL *Global; // rax
  int ProducerTokenOperation; // eax
  __int64 v16; // r9
  struct DXGGLOBAL *v17; // rax
  __int64 v19; // [rsp+50h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-90h] BYREF
  unsigned __int64 v21; // [rsp+60h] [rbp-88h]
  __int128 v22; // [rsp+68h] [rbp-80h] BYREF
  char v23; // [rsp+78h] [rbp-70h]
  __int64 v24; // [rsp+80h] [rbp-68h]
  __int64 v25; // [rsp+88h] [rbp-60h]
  int v26; // [rsp+90h] [rbp-58h] BYREF
  __int64 v27; // [rsp+98h] [rbp-50h]
  __int64 v28; // [rsp+A0h] [rbp-48h]
  int v29; // [rsp+A8h] [rbp-40h]
  __int64 v30; // [rsp+B0h] [rbp-38h]
  __int64 v31; // [rsp+B8h] [rbp-30h]

  Handle = 0LL;
  v19 = 0LL;
  v22 = 0LL;
  v23 = 0;
  v24 = 0LL;
  v25 = 0LL;
  v11 = 0LL;
  v21 = 0LL;
  KeEnterCriticalRegion();
  if ( a7 )
  {
    if ( a2 )
    {
      v12 = (ULONG64)(a2 + 1);
      if ( a2 + 1 < a2 || v12 > MmUserProbeAddress )
        a2 = (unsigned __int64 *)MmUserProbeAddress;
      v11 = *a2;
      v21 = *a2;
    }
    Global = DXGGLOBAL::GetGlobal(v12);
    v13 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*((_QWORD *)Global + 2541) + 152LL))(0x80000000LL, &v19);
    if ( v13 >= 0 )
    {
      ProducerTokenOperation = FlipManagerCreateProducerTokenOperation(
                                 a1,
                                 a3 != 0,
                                 a4 != 0,
                                 v11,
                                 a5,
                                 a6,
                                 (struct FlipManagerTokenInitInfo *)&v22);
      v13 = ProducerTokenOperation;
      if ( ProducerTokenOperation >= 0 )
      {
        if ( v25 )
        {
          if ( !v23 )
            ProducerTokenOperation = -1073741811;
          v13 = ProducerTokenOperation;
        }
        if ( v13 >= 0 )
        {
          v26 = 48;
          v27 = 0LL;
          v29 = 0;
          v28 = 0LL;
          v30 = v19;
          v31 = 0LL;
          v13 = DxgkCompositionObject::Create(
                  0LL,
                  (__int64)&v26,
                  3u,
                  v16,
                  5,
                  152,
                  (__int64 (__fastcall *)(PVOID, __int64, char *))FlipManagerTokenObject::ObjectInit,
                  (__int64)&v22,
                  &Handle);
          if ( v13 >= 0 )
          {
            if ( a8 )
            {
              if ( a8 + 1 < a8 || (unsigned __int64)(a8 + 1) > MmUserProbeAddress )
                *(_BYTE *)MmUserProbeAddress = 0;
              *a8 = v24;
            }
            v12 = (ULONG64)(a7 + 1);
            if ( a7 + 1 < a7 || v12 > MmUserProbeAddress )
            {
              v12 = MmUserProbeAddress;
              *(_BYTE *)MmUserProbeAddress = 0;
            }
            *a7 = Handle;
            Handle = 0LL;
          }
        }
      }
    }
  }
  else
  {
    v13 = -1073741811;
  }
  if ( v19 )
  {
    v17 = DXGGLOBAL::GetGlobal(v12);
    (*(void (__fastcall **)(__int64))(*((_QWORD *)v17 + 2541) + 272LL))(v19);
  }
  if ( Handle )
    NtClose(Handle);
  KeLeaveCriticalRegion();
  FlipManagerTokenInitInfo::~FlipManagerTokenInitInfo((FlipManagerTokenInitInfo *)&v22);
  return (unsigned int)v13;
}
